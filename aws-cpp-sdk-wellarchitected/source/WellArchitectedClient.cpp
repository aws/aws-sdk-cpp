/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/wellarchitected/WellArchitectedClient.h>
#include <aws/wellarchitected/WellArchitectedErrorMarshaller.h>
#include <aws/wellarchitected/WellArchitectedEndpointProvider.h>
#include <aws/wellarchitected/model/AssociateLensesRequest.h>
#include <aws/wellarchitected/model/CreateLensShareRequest.h>
#include <aws/wellarchitected/model/CreateLensVersionRequest.h>
#include <aws/wellarchitected/model/CreateMilestoneRequest.h>
#include <aws/wellarchitected/model/CreateWorkloadRequest.h>
#include <aws/wellarchitected/model/CreateWorkloadShareRequest.h>
#include <aws/wellarchitected/model/DeleteLensRequest.h>
#include <aws/wellarchitected/model/DeleteLensShareRequest.h>
#include <aws/wellarchitected/model/DeleteWorkloadRequest.h>
#include <aws/wellarchitected/model/DeleteWorkloadShareRequest.h>
#include <aws/wellarchitected/model/DisassociateLensesRequest.h>
#include <aws/wellarchitected/model/ExportLensRequest.h>
#include <aws/wellarchitected/model/GetAnswerRequest.h>
#include <aws/wellarchitected/model/GetLensRequest.h>
#include <aws/wellarchitected/model/GetLensReviewRequest.h>
#include <aws/wellarchitected/model/GetLensReviewReportRequest.h>
#include <aws/wellarchitected/model/GetLensVersionDifferenceRequest.h>
#include <aws/wellarchitected/model/GetMilestoneRequest.h>
#include <aws/wellarchitected/model/GetWorkloadRequest.h>
#include <aws/wellarchitected/model/ImportLensRequest.h>
#include <aws/wellarchitected/model/ListAnswersRequest.h>
#include <aws/wellarchitected/model/ListCheckDetailsRequest.h>
#include <aws/wellarchitected/model/ListCheckSummariesRequest.h>
#include <aws/wellarchitected/model/ListLensReviewImprovementsRequest.h>
#include <aws/wellarchitected/model/ListLensReviewsRequest.h>
#include <aws/wellarchitected/model/ListLensSharesRequest.h>
#include <aws/wellarchitected/model/ListLensesRequest.h>
#include <aws/wellarchitected/model/ListMilestonesRequest.h>
#include <aws/wellarchitected/model/ListNotificationsRequest.h>
#include <aws/wellarchitected/model/ListShareInvitationsRequest.h>
#include <aws/wellarchitected/model/ListTagsForResourceRequest.h>
#include <aws/wellarchitected/model/ListWorkloadSharesRequest.h>
#include <aws/wellarchitected/model/ListWorkloadsRequest.h>
#include <aws/wellarchitected/model/TagResourceRequest.h>
#include <aws/wellarchitected/model/UntagResourceRequest.h>
#include <aws/wellarchitected/model/UpdateAnswerRequest.h>
#include <aws/wellarchitected/model/UpdateGlobalSettingsRequest.h>
#include <aws/wellarchitected/model/UpdateLensReviewRequest.h>
#include <aws/wellarchitected/model/UpdateShareInvitationRequest.h>
#include <aws/wellarchitected/model/UpdateWorkloadRequest.h>
#include <aws/wellarchitected/model/UpdateWorkloadShareRequest.h>
#include <aws/wellarchitected/model/UpgradeLensReviewRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WellArchitected;
using namespace Aws::WellArchitected::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* WellArchitectedClient::SERVICE_NAME = "wellarchitected";
const char* WellArchitectedClient::ALLOCATION_TAG = "WellArchitectedClient";

WellArchitectedClient::WellArchitectedClient(const WellArchitected::WellArchitectedClientConfiguration& clientConfiguration,
                                             std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const AWSCredentials& credentials,
                                             std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider,
                                             const WellArchitected::WellArchitectedClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider,
                                             const WellArchitected::WellArchitectedClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  WellArchitectedClient::WellArchitectedClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
WellArchitectedClient::~WellArchitectedClient()
{
}

std::shared_ptr<WellArchitectedEndpointProviderBase>& WellArchitectedClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WellArchitectedClient::init(const WellArchitected::WellArchitectedClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WellArchitected");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void WellArchitectedClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateLensesOutcome WellArchitectedClient::AssociateLenses(const AssociateLensesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateLenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLenses", "Required field: WorkloadId, is not set");
    return AssociateLensesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateLenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associateLenses");
  return AssociateLensesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

AssociateLensesOutcomeCallable WellArchitectedClient::AssociateLensesCallable(const AssociateLensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateLensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateLenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::AssociateLensesAsync(const AssociateLensesRequest& request, const AssociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateLenses(request), context);
    } );
}

CreateLensShareOutcome WellArchitectedClient::CreateLensShare(const CreateLensShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLensShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLensShare", "Required field: LensAlias, is not set");
    return CreateLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLensShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  return CreateLensShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLensShareOutcomeCallable WellArchitectedClient::CreateLensShareCallable(const CreateLensShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLensShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLensShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::CreateLensShareAsync(const CreateLensShareRequest& request, const CreateLensShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLensShare(request), context);
    } );
}

CreateLensVersionOutcome WellArchitectedClient::CreateLensVersion(const CreateLensVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLensVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLensVersion", "Required field: LensAlias, is not set");
    return CreateLensVersionOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLensVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return CreateLensVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLensVersionOutcomeCallable WellArchitectedClient::CreateLensVersionCallable(const CreateLensVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLensVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLensVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::CreateLensVersionAsync(const CreateLensVersionRequest& request, const CreateLensVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLensVersion(request), context);
    } );
}

CreateMilestoneOutcome WellArchitectedClient::CreateMilestone(const CreateMilestoneRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMilestone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMilestone", "Required field: WorkloadId, is not set");
    return CreateMilestoneOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMilestone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/milestones");
  return CreateMilestoneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMilestoneOutcomeCallable WellArchitectedClient::CreateMilestoneCallable(const CreateMilestoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMilestoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMilestone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::CreateMilestoneAsync(const CreateMilestoneRequest& request, const CreateMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMilestone(request), context);
    } );
}

CreateWorkloadOutcome WellArchitectedClient::CreateWorkload(const CreateWorkloadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads");
  return CreateWorkloadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkloadOutcomeCallable WellArchitectedClient::CreateWorkloadCallable(const CreateWorkloadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkloadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::CreateWorkloadAsync(const CreateWorkloadRequest& request, const CreateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkload(request), context);
    } );
}

CreateWorkloadShareOutcome WellArchitectedClient::CreateWorkloadShare(const CreateWorkloadShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkloadShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWorkloadShare", "Required field: WorkloadId, is not set");
    return CreateWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkloadShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  return CreateWorkloadShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkloadShareOutcomeCallable WellArchitectedClient::CreateWorkloadShareCallable(const CreateWorkloadShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkloadShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkloadShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::CreateWorkloadShareAsync(const CreateWorkloadShareRequest& request, const CreateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkloadShare(request), context);
    } );
}

DeleteLensOutcome WellArchitectedClient::DeleteLens(const DeleteLensRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLens", "Required field: LensAlias, is not set");
    return DeleteLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLens", "Required field: ClientRequestToken, is not set");
    return DeleteLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }
  if (!request.LensStatusHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLens", "Required field: LensStatus, is not set");
    return DeleteLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensStatus]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  return DeleteLensOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLensOutcomeCallable WellArchitectedClient::DeleteLensCallable(const DeleteLensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::DeleteLensAsync(const DeleteLensRequest& request, const DeleteLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLens(request), context);
    } );
}

DeleteLensShareOutcome WellArchitectedClient::DeleteLensShare(const DeleteLensShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLensShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ShareIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLensShare", "Required field: ShareId, is not set");
    return DeleteLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLensShare", "Required field: LensAlias, is not set");
    return DeleteLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLensShare", "Required field: ClientRequestToken, is not set");
    return DeleteLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLensShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shares/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  return DeleteLensShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLensShareOutcomeCallable WellArchitectedClient::DeleteLensShareCallable(const DeleteLensShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLensShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLensShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::DeleteLensShareAsync(const DeleteLensShareRequest& request, const DeleteLensShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLensShare(request), context);
    } );
}

DeleteWorkloadOutcome WellArchitectedClient::DeleteWorkload(const DeleteWorkloadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkload", "Required field: WorkloadId, is not set");
    return DeleteWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkload", "Required field: ClientRequestToken, is not set");
    return DeleteWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  return DeleteWorkloadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkloadOutcomeCallable WellArchitectedClient::DeleteWorkloadCallable(const DeleteWorkloadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkloadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::DeleteWorkloadAsync(const DeleteWorkloadRequest& request, const DeleteWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkload(request), context);
    } );
}

DeleteWorkloadShareOutcome WellArchitectedClient::DeleteWorkloadShare(const DeleteWorkloadShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkloadShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ShareIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkloadShare", "Required field: ShareId, is not set");
    return DeleteWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkloadShare", "Required field: WorkloadId, is not set");
    return DeleteWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkloadShare", "Required field: ClientRequestToken, is not set");
    return DeleteWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkloadShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shares/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  return DeleteWorkloadShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkloadShareOutcomeCallable WellArchitectedClient::DeleteWorkloadShareCallable(const DeleteWorkloadShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkloadShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkloadShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::DeleteWorkloadShareAsync(const DeleteWorkloadShareRequest& request, const DeleteWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkloadShare(request), context);
    } );
}

DisassociateLensesOutcome WellArchitectedClient::DisassociateLenses(const DisassociateLensesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateLenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLenses", "Required field: WorkloadId, is not set");
    return DisassociateLensesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateLenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociateLenses");
  return DisassociateLensesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

DisassociateLensesOutcomeCallable WellArchitectedClient::DisassociateLensesCallable(const DisassociateLensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateLensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateLenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::DisassociateLensesAsync(const DisassociateLensesRequest& request, const DisassociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateLenses(request), context);
    } );
}

ExportLensOutcome WellArchitectedClient::ExportLens(const ExportLensRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportLens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportLens", "Required field: LensAlias, is not set");
    return ExportLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportLens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/export");
  return ExportLensOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportLensOutcomeCallable WellArchitectedClient::ExportLensCallable(const ExportLensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportLensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportLens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ExportLensAsync(const ExportLensRequest& request, const ExportLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportLens(request), context);
    } );
}

GetAnswerOutcome WellArchitectedClient::GetAnswer(const GetAnswerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAnswer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnswer", "Required field: WorkloadId, is not set");
    return GetAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnswer", "Required field: LensAlias, is not set");
    return GetAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  if (!request.QuestionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnswer", "Required field: QuestionId, is not set");
    return GetAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuestionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAnswer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/answers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuestionId());
  return GetAnswerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAnswerOutcomeCallable WellArchitectedClient::GetAnswerCallable(const GetAnswerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnswerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnswer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::GetAnswerAsync(const GetAnswerRequest& request, const GetAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAnswer(request), context);
    } );
}

GetLensOutcome WellArchitectedClient::GetLens(const GetLensRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLens", "Required field: LensAlias, is not set");
    return GetLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  return GetLensOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLensOutcomeCallable WellArchitectedClient::GetLensCallable(const GetLensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::GetLensAsync(const GetLensRequest& request, const GetLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLens(request), context);
    } );
}

GetLensReviewOutcome WellArchitectedClient::GetLensReview(const GetLensReviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLensReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLensReview", "Required field: WorkloadId, is not set");
    return GetLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLensReview", "Required field: LensAlias, is not set");
    return GetLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLensReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  return GetLensReviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLensReviewOutcomeCallable WellArchitectedClient::GetLensReviewCallable(const GetLensReviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLensReviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLensReview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::GetLensReviewAsync(const GetLensReviewRequest& request, const GetLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLensReview(request), context);
    } );
}

GetLensReviewReportOutcome WellArchitectedClient::GetLensReviewReport(const GetLensReviewReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLensReviewReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLensReviewReport", "Required field: WorkloadId, is not set");
    return GetLensReviewReportOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLensReviewReport", "Required field: LensAlias, is not set");
    return GetLensReviewReportOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLensReviewReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/report");
  return GetLensReviewReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLensReviewReportOutcomeCallable WellArchitectedClient::GetLensReviewReportCallable(const GetLensReviewReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLensReviewReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLensReviewReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::GetLensReviewReportAsync(const GetLensReviewReportRequest& request, const GetLensReviewReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLensReviewReport(request), context);
    } );
}

GetLensVersionDifferenceOutcome WellArchitectedClient::GetLensVersionDifference(const GetLensVersionDifferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLensVersionDifference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLensVersionDifference", "Required field: LensAlias, is not set");
    return GetLensVersionDifferenceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLensVersionDifference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versionDifference");
  return GetLensVersionDifferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLensVersionDifferenceOutcomeCallable WellArchitectedClient::GetLensVersionDifferenceCallable(const GetLensVersionDifferenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLensVersionDifferenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLensVersionDifference(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::GetLensVersionDifferenceAsync(const GetLensVersionDifferenceRequest& request, const GetLensVersionDifferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLensVersionDifference(request), context);
    } );
}

GetMilestoneOutcome WellArchitectedClient::GetMilestone(const GetMilestoneRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMilestone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMilestone", "Required field: WorkloadId, is not set");
    return GetMilestoneOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.MilestoneNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMilestone", "Required field: MilestoneNumber, is not set");
    return GetMilestoneOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MilestoneNumber]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMilestone, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/milestones/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMilestoneNumber());
  return GetMilestoneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMilestoneOutcomeCallable WellArchitectedClient::GetMilestoneCallable(const GetMilestoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMilestoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMilestone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::GetMilestoneAsync(const GetMilestoneRequest& request, const GetMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMilestone(request), context);
    } );
}

GetWorkloadOutcome WellArchitectedClient::GetWorkload(const GetWorkloadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkload", "Required field: WorkloadId, is not set");
    return GetWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  return GetWorkloadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkloadOutcomeCallable WellArchitectedClient::GetWorkloadCallable(const GetWorkloadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkloadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::GetWorkloadAsync(const GetWorkloadRequest& request, const GetWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkload(request), context);
    } );
}

ImportLensOutcome WellArchitectedClient::ImportLens(const ImportLensRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportLens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportLens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/importLens");
  return ImportLensOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportLensOutcomeCallable WellArchitectedClient::ImportLensCallable(const ImportLensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportLensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportLens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ImportLensAsync(const ImportLensRequest& request, const ImportLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportLens(request), context);
    } );
}

ListAnswersOutcome WellArchitectedClient::ListAnswers(const ListAnswersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnswers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnswers", "Required field: WorkloadId, is not set");
    return ListAnswersOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnswers", "Required field: LensAlias, is not set");
    return ListAnswersOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnswers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/answers");
  return ListAnswersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAnswersOutcomeCallable WellArchitectedClient::ListAnswersCallable(const ListAnswersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnswersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnswers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListAnswersAsync(const ListAnswersRequest& request, const ListAnswersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAnswers(request), context);
    } );
}

ListCheckDetailsOutcome WellArchitectedClient::ListCheckDetails(const ListCheckDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCheckDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCheckDetails", "Required field: WorkloadId, is not set");
    return ListCheckDetailsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCheckDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/checks");
  return ListCheckDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCheckDetailsOutcomeCallable WellArchitectedClient::ListCheckDetailsCallable(const ListCheckDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCheckDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCheckDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListCheckDetailsAsync(const ListCheckDetailsRequest& request, const ListCheckDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCheckDetails(request), context);
    } );
}

ListCheckSummariesOutcome WellArchitectedClient::ListCheckSummaries(const ListCheckSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCheckSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCheckSummaries", "Required field: WorkloadId, is not set");
    return ListCheckSummariesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCheckSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/checkSummaries");
  return ListCheckSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCheckSummariesOutcomeCallable WellArchitectedClient::ListCheckSummariesCallable(const ListCheckSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCheckSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCheckSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListCheckSummariesAsync(const ListCheckSummariesRequest& request, const ListCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCheckSummaries(request), context);
    } );
}

ListLensReviewImprovementsOutcome WellArchitectedClient::ListLensReviewImprovements(const ListLensReviewImprovementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLensReviewImprovements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLensReviewImprovements", "Required field: WorkloadId, is not set");
    return ListLensReviewImprovementsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLensReviewImprovements", "Required field: LensAlias, is not set");
    return ListLensReviewImprovementsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLensReviewImprovements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/improvements");
  return ListLensReviewImprovementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLensReviewImprovementsOutcomeCallable WellArchitectedClient::ListLensReviewImprovementsCallable(const ListLensReviewImprovementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLensReviewImprovementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLensReviewImprovements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListLensReviewImprovementsAsync(const ListLensReviewImprovementsRequest& request, const ListLensReviewImprovementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLensReviewImprovements(request), context);
    } );
}

ListLensReviewsOutcome WellArchitectedClient::ListLensReviews(const ListLensReviewsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLensReviews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLensReviews", "Required field: WorkloadId, is not set");
    return ListLensReviewsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLensReviews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews");
  return ListLensReviewsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLensReviewsOutcomeCallable WellArchitectedClient::ListLensReviewsCallable(const ListLensReviewsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLensReviewsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLensReviews(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListLensReviewsAsync(const ListLensReviewsRequest& request, const ListLensReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLensReviews(request), context);
    } );
}

ListLensSharesOutcome WellArchitectedClient::ListLensShares(const ListLensSharesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLensShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLensShares", "Required field: LensAlias, is not set");
    return ListLensSharesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLensShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  return ListLensSharesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLensSharesOutcomeCallable WellArchitectedClient::ListLensSharesCallable(const ListLensSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLensSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLensShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListLensSharesAsync(const ListLensSharesRequest& request, const ListLensSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLensShares(request), context);
    } );
}

ListLensesOutcome WellArchitectedClient::ListLenses(const ListLensesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLenses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lenses");
  return ListLensesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLensesOutcomeCallable WellArchitectedClient::ListLensesCallable(const ListLensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListLensesAsync(const ListLensesRequest& request, const ListLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLenses(request), context);
    } );
}

ListMilestonesOutcome WellArchitectedClient::ListMilestones(const ListMilestonesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMilestones, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMilestones", "Required field: WorkloadId, is not set");
    return ListMilestonesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMilestones, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/milestonesSummaries");
  return ListMilestonesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMilestonesOutcomeCallable WellArchitectedClient::ListMilestonesCallable(const ListMilestonesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMilestonesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMilestones(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListMilestonesAsync(const ListMilestonesRequest& request, const ListMilestonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMilestones(request), context);
    } );
}

ListNotificationsOutcome WellArchitectedClient::ListNotifications(const ListNotificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notifications");
  return ListNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotificationsOutcomeCallable WellArchitectedClient::ListNotificationsCallable(const ListNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListNotificationsAsync(const ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNotifications(request), context);
    } );
}

ListShareInvitationsOutcome WellArchitectedClient::ListShareInvitations(const ListShareInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListShareInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListShareInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shareInvitations");
  return ListShareInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListShareInvitationsOutcomeCallable WellArchitectedClient::ListShareInvitationsCallable(const ListShareInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListShareInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListShareInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListShareInvitationsAsync(const ListShareInvitationsRequest& request, const ListShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListShareInvitations(request), context);
    } );
}

ListTagsForResourceOutcome WellArchitectedClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: WorkloadArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WellArchitectedClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListWorkloadSharesOutcome WellArchitectedClient::ListWorkloadShares(const ListWorkloadSharesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkloadShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkloadShares", "Required field: WorkloadId, is not set");
    return ListWorkloadSharesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkloadShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  return ListWorkloadSharesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkloadSharesOutcomeCallable WellArchitectedClient::ListWorkloadSharesCallable(const ListWorkloadSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkloadSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkloadShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListWorkloadSharesAsync(const ListWorkloadSharesRequest& request, const ListWorkloadSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkloadShares(request), context);
    } );
}

ListWorkloadsOutcome WellArchitectedClient::ListWorkloads(const ListWorkloadsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkloads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkloads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloadsSummaries");
  return ListWorkloadsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkloadsOutcomeCallable WellArchitectedClient::ListWorkloadsCallable(const ListWorkloadsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkloadsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkloads(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::ListWorkloadsAsync(const ListWorkloadsRequest& request, const ListWorkloadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkloads(request), context);
    } );
}

TagResourceOutcome WellArchitectedClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: WorkloadArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WellArchitectedClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome WellArchitectedClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: WorkloadArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WellArchitectedClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAnswerOutcome WellArchitectedClient::UpdateAnswer(const UpdateAnswerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnswer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnswer", "Required field: WorkloadId, is not set");
    return UpdateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnswer", "Required field: LensAlias, is not set");
    return UpdateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  if (!request.QuestionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnswer", "Required field: QuestionId, is not set");
    return UpdateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuestionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnswer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/answers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuestionId());
  return UpdateAnswerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnswerOutcomeCallable WellArchitectedClient::UpdateAnswerCallable(const UpdateAnswerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnswerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnswer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::UpdateAnswerAsync(const UpdateAnswerRequest& request, const UpdateAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAnswer(request), context);
    } );
}

UpdateGlobalSettingsOutcome WellArchitectedClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  return UpdateGlobalSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalSettingsOutcomeCallable WellArchitectedClient::UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGlobalSettings(request), context);
    } );
}

UpdateLensReviewOutcome WellArchitectedClient::UpdateLensReview(const UpdateLensReviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLensReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLensReview", "Required field: WorkloadId, is not set");
    return UpdateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLensReview", "Required field: LensAlias, is not set");
    return UpdateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLensReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  return UpdateLensReviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLensReviewOutcomeCallable WellArchitectedClient::UpdateLensReviewCallable(const UpdateLensReviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLensReviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLensReview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::UpdateLensReviewAsync(const UpdateLensReviewRequest& request, const UpdateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLensReview(request), context);
    } );
}

UpdateShareInvitationOutcome WellArchitectedClient::UpdateShareInvitation(const UpdateShareInvitationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateShareInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ShareInvitationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateShareInvitation", "Required field: ShareInvitationId, is not set");
    return UpdateShareInvitationOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareInvitationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateShareInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shareInvitations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareInvitationId());
  return UpdateShareInvitationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateShareInvitationOutcomeCallable WellArchitectedClient::UpdateShareInvitationCallable(const UpdateShareInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateShareInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateShareInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::UpdateShareInvitationAsync(const UpdateShareInvitationRequest& request, const UpdateShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateShareInvitation(request), context);
    } );
}

UpdateWorkloadOutcome WellArchitectedClient::UpdateWorkload(const UpdateWorkloadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkload", "Required field: WorkloadId, is not set");
    return UpdateWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  return UpdateWorkloadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkloadOutcomeCallable WellArchitectedClient::UpdateWorkloadCallable(const UpdateWorkloadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkloadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::UpdateWorkloadAsync(const UpdateWorkloadRequest& request, const UpdateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkload(request), context);
    } );
}

UpdateWorkloadShareOutcome WellArchitectedClient::UpdateWorkloadShare(const UpdateWorkloadShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkloadShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ShareIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkloadShare", "Required field: ShareId, is not set");
    return UpdateWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkloadShare", "Required field: WorkloadId, is not set");
    return UpdateWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkloadShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/shares/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  return UpdateWorkloadShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkloadShareOutcomeCallable WellArchitectedClient::UpdateWorkloadShareCallable(const UpdateWorkloadShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkloadShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkloadShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::UpdateWorkloadShareAsync(const UpdateWorkloadShareRequest& request, const UpdateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkloadShare(request), context);
    } );
}

UpgradeLensReviewOutcome WellArchitectedClient::UpgradeLensReview(const UpgradeLensReviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpgradeLensReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpgradeLensReview", "Required field: WorkloadId, is not set");
    return UpgradeLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpgradeLensReview", "Required field: LensAlias, is not set");
    return UpgradeLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpgradeLensReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  endpointResolutionOutcome.GetResult().AddPathSegments("/upgrade");
  return UpgradeLensReviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpgradeLensReviewOutcomeCallable WellArchitectedClient::UpgradeLensReviewCallable(const UpgradeLensReviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpgradeLensReviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpgradeLensReview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClient::UpgradeLensReviewAsync(const UpgradeLensReviewRequest& request, const UpgradeLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpgradeLensReview(request), context);
    } );
}

