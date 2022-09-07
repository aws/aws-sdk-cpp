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

#include <aws/wellarchitected/WellArchitectedClient.h>
#include <aws/wellarchitected/WellArchitectedEndpoint.h>
#include <aws/wellarchitected/WellArchitectedErrorMarshaller.h>
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

static const char* SERVICE_NAME = "wellarchitected";
static const char* ALLOCATION_TAG = "WellArchitectedClient";

WellArchitectedClient::WellArchitectedClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WellArchitectedClient::~WellArchitectedClient()
{
}

void WellArchitectedClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WellArchitected");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WellArchitectedEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WellArchitectedClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AssociateLensesOutcome WellArchitectedClient::AssociateLenses(const AssociateLensesRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateLenses", "Required field: WorkloadId, is not set");
    return AssociateLensesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/associateLenses");
  return AssociateLensesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

AssociateLensesOutcomeCallable WellArchitectedClient::AssociateLensesCallable(const AssociateLensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateLensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateLenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientAssociateLensesAsyncHelper(WellArchitectedClient const * const clientThis, const AssociateLensesRequest& request, const AssociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateLenses(request), context);
}

void WellArchitectedClient::AssociateLensesAsync(const AssociateLensesRequest& request, const AssociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientAssociateLensesAsyncHelper( this, request, handler, context ); } );
}

CreateLensShareOutcome WellArchitectedClient::CreateLensShare(const CreateLensShareRequest& request) const
{
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLensShare", "Required field: LensAlias, is not set");
    return CreateLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/shares");
  return CreateLensShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLensShareOutcomeCallable WellArchitectedClient::CreateLensShareCallable(const CreateLensShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLensShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLensShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientCreateLensShareAsyncHelper(WellArchitectedClient const * const clientThis, const CreateLensShareRequest& request, const CreateLensShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLensShare(request), context);
}

void WellArchitectedClient::CreateLensShareAsync(const CreateLensShareRequest& request, const CreateLensShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientCreateLensShareAsyncHelper( this, request, handler, context ); } );
}

CreateLensVersionOutcome WellArchitectedClient::CreateLensVersion(const CreateLensVersionRequest& request) const
{
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLensVersion", "Required field: LensAlias, is not set");
    return CreateLensVersionOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/versions");
  return CreateLensVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLensVersionOutcomeCallable WellArchitectedClient::CreateLensVersionCallable(const CreateLensVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLensVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLensVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientCreateLensVersionAsyncHelper(WellArchitectedClient const * const clientThis, const CreateLensVersionRequest& request, const CreateLensVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLensVersion(request), context);
}

void WellArchitectedClient::CreateLensVersionAsync(const CreateLensVersionRequest& request, const CreateLensVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientCreateLensVersionAsyncHelper( this, request, handler, context ); } );
}

CreateMilestoneOutcome WellArchitectedClient::CreateMilestone(const CreateMilestoneRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMilestone", "Required field: WorkloadId, is not set");
    return CreateMilestoneOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/milestones");
  return CreateMilestoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMilestoneOutcomeCallable WellArchitectedClient::CreateMilestoneCallable(const CreateMilestoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMilestoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMilestone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientCreateMilestoneAsyncHelper(WellArchitectedClient const * const clientThis, const CreateMilestoneRequest& request, const CreateMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMilestone(request), context);
}

void WellArchitectedClient::CreateMilestoneAsync(const CreateMilestoneRequest& request, const CreateMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientCreateMilestoneAsyncHelper( this, request, handler, context ); } );
}

CreateWorkloadOutcome WellArchitectedClient::CreateWorkload(const CreateWorkloadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads");
  return CreateWorkloadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkloadOutcomeCallable WellArchitectedClient::CreateWorkloadCallable(const CreateWorkloadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkloadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientCreateWorkloadAsyncHelper(WellArchitectedClient const * const clientThis, const CreateWorkloadRequest& request, const CreateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkload(request), context);
}

void WellArchitectedClient::CreateWorkloadAsync(const CreateWorkloadRequest& request, const CreateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientCreateWorkloadAsyncHelper( this, request, handler, context ); } );
}

CreateWorkloadShareOutcome WellArchitectedClient::CreateWorkloadShare(const CreateWorkloadShareRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWorkloadShare", "Required field: WorkloadId, is not set");
    return CreateWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/shares");
  return CreateWorkloadShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkloadShareOutcomeCallable WellArchitectedClient::CreateWorkloadShareCallable(const CreateWorkloadShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkloadShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkloadShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientCreateWorkloadShareAsyncHelper(WellArchitectedClient const * const clientThis, const CreateWorkloadShareRequest& request, const CreateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkloadShare(request), context);
}

void WellArchitectedClient::CreateWorkloadShareAsync(const CreateWorkloadShareRequest& request, const CreateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientCreateWorkloadShareAsyncHelper( this, request, handler, context ); } );
}

DeleteLensOutcome WellArchitectedClient::DeleteLens(const DeleteLensRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses/");
  uri.AddPathSegment(request.GetLensAlias());
  return DeleteLensOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLensOutcomeCallable WellArchitectedClient::DeleteLensCallable(const DeleteLensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientDeleteLensAsyncHelper(WellArchitectedClient const * const clientThis, const DeleteLensRequest& request, const DeleteLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLens(request), context);
}

void WellArchitectedClient::DeleteLensAsync(const DeleteLensRequest& request, const DeleteLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientDeleteLensAsyncHelper( this, request, handler, context ); } );
}

DeleteLensShareOutcome WellArchitectedClient::DeleteLensShare(const DeleteLensShareRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/shares/");
  uri.AddPathSegment(request.GetShareId());
  return DeleteLensShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLensShareOutcomeCallable WellArchitectedClient::DeleteLensShareCallable(const DeleteLensShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLensShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLensShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientDeleteLensShareAsyncHelper(WellArchitectedClient const * const clientThis, const DeleteLensShareRequest& request, const DeleteLensShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLensShare(request), context);
}

void WellArchitectedClient::DeleteLensShareAsync(const DeleteLensShareRequest& request, const DeleteLensShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientDeleteLensShareAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkloadOutcome WellArchitectedClient::DeleteWorkload(const DeleteWorkloadRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  return DeleteWorkloadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkloadOutcomeCallable WellArchitectedClient::DeleteWorkloadCallable(const DeleteWorkloadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkloadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientDeleteWorkloadAsyncHelper(WellArchitectedClient const * const clientThis, const DeleteWorkloadRequest& request, const DeleteWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkload(request), context);
}

void WellArchitectedClient::DeleteWorkloadAsync(const DeleteWorkloadRequest& request, const DeleteWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientDeleteWorkloadAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkloadShareOutcome WellArchitectedClient::DeleteWorkloadShare(const DeleteWorkloadShareRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/shares/");
  uri.AddPathSegment(request.GetShareId());
  return DeleteWorkloadShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkloadShareOutcomeCallable WellArchitectedClient::DeleteWorkloadShareCallable(const DeleteWorkloadShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkloadShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkloadShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientDeleteWorkloadShareAsyncHelper(WellArchitectedClient const * const clientThis, const DeleteWorkloadShareRequest& request, const DeleteWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkloadShare(request), context);
}

void WellArchitectedClient::DeleteWorkloadShareAsync(const DeleteWorkloadShareRequest& request, const DeleteWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientDeleteWorkloadShareAsyncHelper( this, request, handler, context ); } );
}

DisassociateLensesOutcome WellArchitectedClient::DisassociateLenses(const DisassociateLensesRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateLenses", "Required field: WorkloadId, is not set");
    return DisassociateLensesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/disassociateLenses");
  return DisassociateLensesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

DisassociateLensesOutcomeCallable WellArchitectedClient::DisassociateLensesCallable(const DisassociateLensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateLensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateLenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientDisassociateLensesAsyncHelper(WellArchitectedClient const * const clientThis, const DisassociateLensesRequest& request, const DisassociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateLenses(request), context);
}

void WellArchitectedClient::DisassociateLensesAsync(const DisassociateLensesRequest& request, const DisassociateLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientDisassociateLensesAsyncHelper( this, request, handler, context ); } );
}

ExportLensOutcome WellArchitectedClient::ExportLens(const ExportLensRequest& request) const
{
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportLens", "Required field: LensAlias, is not set");
    return ExportLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/export");
  return ExportLensOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportLensOutcomeCallable WellArchitectedClient::ExportLensCallable(const ExportLensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportLensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportLens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientExportLensAsyncHelper(WellArchitectedClient const * const clientThis, const ExportLensRequest& request, const ExportLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExportLens(request), context);
}

void WellArchitectedClient::ExportLensAsync(const ExportLensRequest& request, const ExportLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientExportLensAsyncHelper( this, request, handler, context ); } );
}

GetAnswerOutcome WellArchitectedClient::GetAnswer(const GetAnswerRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/answers/");
  uri.AddPathSegment(request.GetQuestionId());
  return GetAnswerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAnswerOutcomeCallable WellArchitectedClient::GetAnswerCallable(const GetAnswerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnswerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnswer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientGetAnswerAsyncHelper(WellArchitectedClient const * const clientThis, const GetAnswerRequest& request, const GetAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAnswer(request), context);
}

void WellArchitectedClient::GetAnswerAsync(const GetAnswerRequest& request, const GetAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientGetAnswerAsyncHelper( this, request, handler, context ); } );
}

GetLensOutcome WellArchitectedClient::GetLens(const GetLensRequest& request) const
{
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLens", "Required field: LensAlias, is not set");
    return GetLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses/");
  uri.AddPathSegment(request.GetLensAlias());
  return GetLensOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLensOutcomeCallable WellArchitectedClient::GetLensCallable(const GetLensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientGetLensAsyncHelper(WellArchitectedClient const * const clientThis, const GetLensRequest& request, const GetLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLens(request), context);
}

void WellArchitectedClient::GetLensAsync(const GetLensRequest& request, const GetLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientGetLensAsyncHelper( this, request, handler, context ); } );
}

GetLensReviewOutcome WellArchitectedClient::GetLensReview(const GetLensReviewRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews/");
  uri.AddPathSegment(request.GetLensAlias());
  return GetLensReviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLensReviewOutcomeCallable WellArchitectedClient::GetLensReviewCallable(const GetLensReviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLensReviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLensReview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientGetLensReviewAsyncHelper(WellArchitectedClient const * const clientThis, const GetLensReviewRequest& request, const GetLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLensReview(request), context);
}

void WellArchitectedClient::GetLensReviewAsync(const GetLensReviewRequest& request, const GetLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientGetLensReviewAsyncHelper( this, request, handler, context ); } );
}

GetLensReviewReportOutcome WellArchitectedClient::GetLensReviewReport(const GetLensReviewReportRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/report");
  return GetLensReviewReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLensReviewReportOutcomeCallable WellArchitectedClient::GetLensReviewReportCallable(const GetLensReviewReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLensReviewReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLensReviewReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientGetLensReviewReportAsyncHelper(WellArchitectedClient const * const clientThis, const GetLensReviewReportRequest& request, const GetLensReviewReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLensReviewReport(request), context);
}

void WellArchitectedClient::GetLensReviewReportAsync(const GetLensReviewReportRequest& request, const GetLensReviewReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientGetLensReviewReportAsyncHelper( this, request, handler, context ); } );
}

GetLensVersionDifferenceOutcome WellArchitectedClient::GetLensVersionDifference(const GetLensVersionDifferenceRequest& request) const
{
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLensVersionDifference", "Required field: LensAlias, is not set");
    return GetLensVersionDifferenceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/versionDifference");
  return GetLensVersionDifferenceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLensVersionDifferenceOutcomeCallable WellArchitectedClient::GetLensVersionDifferenceCallable(const GetLensVersionDifferenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLensVersionDifferenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLensVersionDifference(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientGetLensVersionDifferenceAsyncHelper(WellArchitectedClient const * const clientThis, const GetLensVersionDifferenceRequest& request, const GetLensVersionDifferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLensVersionDifference(request), context);
}

void WellArchitectedClient::GetLensVersionDifferenceAsync(const GetLensVersionDifferenceRequest& request, const GetLensVersionDifferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientGetLensVersionDifferenceAsyncHelper( this, request, handler, context ); } );
}

GetMilestoneOutcome WellArchitectedClient::GetMilestone(const GetMilestoneRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/milestones/");
  uri.AddPathSegment(request.GetMilestoneNumber());
  return GetMilestoneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMilestoneOutcomeCallable WellArchitectedClient::GetMilestoneCallable(const GetMilestoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMilestoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMilestone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientGetMilestoneAsyncHelper(WellArchitectedClient const * const clientThis, const GetMilestoneRequest& request, const GetMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMilestone(request), context);
}

void WellArchitectedClient::GetMilestoneAsync(const GetMilestoneRequest& request, const GetMilestoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientGetMilestoneAsyncHelper( this, request, handler, context ); } );
}

GetWorkloadOutcome WellArchitectedClient::GetWorkload(const GetWorkloadRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkload", "Required field: WorkloadId, is not set");
    return GetWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  return GetWorkloadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkloadOutcomeCallable WellArchitectedClient::GetWorkloadCallable(const GetWorkloadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkloadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientGetWorkloadAsyncHelper(WellArchitectedClient const * const clientThis, const GetWorkloadRequest& request, const GetWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkload(request), context);
}

void WellArchitectedClient::GetWorkloadAsync(const GetWorkloadRequest& request, const GetWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientGetWorkloadAsyncHelper( this, request, handler, context ); } );
}

ImportLensOutcome WellArchitectedClient::ImportLens(const ImportLensRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/importLens");
  return ImportLensOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportLensOutcomeCallable WellArchitectedClient::ImportLensCallable(const ImportLensRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportLensOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportLens(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientImportLensAsyncHelper(WellArchitectedClient const * const clientThis, const ImportLensRequest& request, const ImportLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportLens(request), context);
}

void WellArchitectedClient::ImportLensAsync(const ImportLensRequest& request, const ImportLensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientImportLensAsyncHelper( this, request, handler, context ); } );
}

ListAnswersOutcome WellArchitectedClient::ListAnswers(const ListAnswersRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/answers");
  return ListAnswersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAnswersOutcomeCallable WellArchitectedClient::ListAnswersCallable(const ListAnswersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnswersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnswers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListAnswersAsyncHelper(WellArchitectedClient const * const clientThis, const ListAnswersRequest& request, const ListAnswersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAnswers(request), context);
}

void WellArchitectedClient::ListAnswersAsync(const ListAnswersRequest& request, const ListAnswersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListAnswersAsyncHelper( this, request, handler, context ); } );
}

ListLensReviewImprovementsOutcome WellArchitectedClient::ListLensReviewImprovements(const ListLensReviewImprovementsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/improvements");
  return ListLensReviewImprovementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLensReviewImprovementsOutcomeCallable WellArchitectedClient::ListLensReviewImprovementsCallable(const ListLensReviewImprovementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLensReviewImprovementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLensReviewImprovements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListLensReviewImprovementsAsyncHelper(WellArchitectedClient const * const clientThis, const ListLensReviewImprovementsRequest& request, const ListLensReviewImprovementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLensReviewImprovements(request), context);
}

void WellArchitectedClient::ListLensReviewImprovementsAsync(const ListLensReviewImprovementsRequest& request, const ListLensReviewImprovementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListLensReviewImprovementsAsyncHelper( this, request, handler, context ); } );
}

ListLensReviewsOutcome WellArchitectedClient::ListLensReviews(const ListLensReviewsRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLensReviews", "Required field: WorkloadId, is not set");
    return ListLensReviewsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews");
  return ListLensReviewsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLensReviewsOutcomeCallable WellArchitectedClient::ListLensReviewsCallable(const ListLensReviewsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLensReviewsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLensReviews(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListLensReviewsAsyncHelper(WellArchitectedClient const * const clientThis, const ListLensReviewsRequest& request, const ListLensReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLensReviews(request), context);
}

void WellArchitectedClient::ListLensReviewsAsync(const ListLensReviewsRequest& request, const ListLensReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListLensReviewsAsyncHelper( this, request, handler, context ); } );
}

ListLensSharesOutcome WellArchitectedClient::ListLensShares(const ListLensSharesRequest& request) const
{
  if (!request.LensAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLensShares", "Required field: LensAlias, is not set");
    return ListLensSharesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/shares");
  return ListLensSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLensSharesOutcomeCallable WellArchitectedClient::ListLensSharesCallable(const ListLensSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLensSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLensShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListLensSharesAsyncHelper(WellArchitectedClient const * const clientThis, const ListLensSharesRequest& request, const ListLensSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLensShares(request), context);
}

void WellArchitectedClient::ListLensSharesAsync(const ListLensSharesRequest& request, const ListLensSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListLensSharesAsyncHelper( this, request, handler, context ); } );
}

ListLensesOutcome WellArchitectedClient::ListLenses(const ListLensesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/lenses");
  return ListLensesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLensesOutcomeCallable WellArchitectedClient::ListLensesCallable(const ListLensesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLensesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLenses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListLensesAsyncHelper(WellArchitectedClient const * const clientThis, const ListLensesRequest& request, const ListLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLenses(request), context);
}

void WellArchitectedClient::ListLensesAsync(const ListLensesRequest& request, const ListLensesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListLensesAsyncHelper( this, request, handler, context ); } );
}

ListMilestonesOutcome WellArchitectedClient::ListMilestones(const ListMilestonesRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMilestones", "Required field: WorkloadId, is not set");
    return ListMilestonesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/milestonesSummaries");
  return ListMilestonesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMilestonesOutcomeCallable WellArchitectedClient::ListMilestonesCallable(const ListMilestonesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMilestonesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMilestones(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListMilestonesAsyncHelper(WellArchitectedClient const * const clientThis, const ListMilestonesRequest& request, const ListMilestonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMilestones(request), context);
}

void WellArchitectedClient::ListMilestonesAsync(const ListMilestonesRequest& request, const ListMilestonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListMilestonesAsyncHelper( this, request, handler, context ); } );
}

ListNotificationsOutcome WellArchitectedClient::ListNotifications(const ListNotificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/notifications");
  return ListNotificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotificationsOutcomeCallable WellArchitectedClient::ListNotificationsCallable(const ListNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListNotificationsAsyncHelper(WellArchitectedClient const * const clientThis, const ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNotifications(request), context);
}

void WellArchitectedClient::ListNotificationsAsync(const ListNotificationsRequest& request, const ListNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListNotificationsAsyncHelper( this, request, handler, context ); } );
}

ListShareInvitationsOutcome WellArchitectedClient::ListShareInvitations(const ListShareInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/shareInvitations");
  return ListShareInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListShareInvitationsOutcomeCallable WellArchitectedClient::ListShareInvitationsCallable(const ListShareInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListShareInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListShareInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListShareInvitationsAsyncHelper(WellArchitectedClient const * const clientThis, const ListShareInvitationsRequest& request, const ListShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListShareInvitations(request), context);
}

void WellArchitectedClient::ListShareInvitationsAsync(const ListShareInvitationsRequest& request, const ListShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListShareInvitationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome WellArchitectedClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.WorkloadArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: WorkloadArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetWorkloadArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WellArchitectedClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListTagsForResourceAsyncHelper(WellArchitectedClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void WellArchitectedClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWorkloadSharesOutcome WellArchitectedClient::ListWorkloadShares(const ListWorkloadSharesRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkloadShares", "Required field: WorkloadId, is not set");
    return ListWorkloadSharesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/shares");
  return ListWorkloadSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkloadSharesOutcomeCallable WellArchitectedClient::ListWorkloadSharesCallable(const ListWorkloadSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkloadSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkloadShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListWorkloadSharesAsyncHelper(WellArchitectedClient const * const clientThis, const ListWorkloadSharesRequest& request, const ListWorkloadSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkloadShares(request), context);
}

void WellArchitectedClient::ListWorkloadSharesAsync(const ListWorkloadSharesRequest& request, const ListWorkloadSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListWorkloadSharesAsyncHelper( this, request, handler, context ); } );
}

ListWorkloadsOutcome WellArchitectedClient::ListWorkloads(const ListWorkloadsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloadsSummaries");
  return ListWorkloadsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkloadsOutcomeCallable WellArchitectedClient::ListWorkloadsCallable(const ListWorkloadsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkloadsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkloads(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientListWorkloadsAsyncHelper(WellArchitectedClient const * const clientThis, const ListWorkloadsRequest& request, const ListWorkloadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkloads(request), context);
}

void WellArchitectedClient::ListWorkloadsAsync(const ListWorkloadsRequest& request, const ListWorkloadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientListWorkloadsAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome WellArchitectedClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.WorkloadArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: WorkloadArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetWorkloadArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WellArchitectedClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientTagResourceAsyncHelper(WellArchitectedClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void WellArchitectedClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome WellArchitectedClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetWorkloadArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WellArchitectedClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientUntagResourceAsyncHelper(WellArchitectedClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void WellArchitectedClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAnswerOutcome WellArchitectedClient::UpdateAnswer(const UpdateAnswerRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/answers/");
  uri.AddPathSegment(request.GetQuestionId());
  return UpdateAnswerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnswerOutcomeCallable WellArchitectedClient::UpdateAnswerCallable(const UpdateAnswerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnswerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnswer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientUpdateAnswerAsyncHelper(WellArchitectedClient const * const clientThis, const UpdateAnswerRequest& request, const UpdateAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAnswer(request), context);
}

void WellArchitectedClient::UpdateAnswerAsync(const UpdateAnswerRequest& request, const UpdateAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientUpdateAnswerAsyncHelper( this, request, handler, context ); } );
}

UpdateGlobalSettingsOutcome WellArchitectedClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-settings");
  return UpdateGlobalSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalSettingsOutcomeCallable WellArchitectedClient::UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientUpdateGlobalSettingsAsyncHelper(WellArchitectedClient const * const clientThis, const UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGlobalSettings(request), context);
}

void WellArchitectedClient::UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientUpdateGlobalSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateLensReviewOutcome WellArchitectedClient::UpdateLensReview(const UpdateLensReviewRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews/");
  uri.AddPathSegment(request.GetLensAlias());
  return UpdateLensReviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLensReviewOutcomeCallable WellArchitectedClient::UpdateLensReviewCallable(const UpdateLensReviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLensReviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLensReview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientUpdateLensReviewAsyncHelper(WellArchitectedClient const * const clientThis, const UpdateLensReviewRequest& request, const UpdateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLensReview(request), context);
}

void WellArchitectedClient::UpdateLensReviewAsync(const UpdateLensReviewRequest& request, const UpdateLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientUpdateLensReviewAsyncHelper( this, request, handler, context ); } );
}

UpdateShareInvitationOutcome WellArchitectedClient::UpdateShareInvitation(const UpdateShareInvitationRequest& request) const
{
  if (!request.ShareInvitationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateShareInvitation", "Required field: ShareInvitationId, is not set");
    return UpdateShareInvitationOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareInvitationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/shareInvitations/");
  uri.AddPathSegment(request.GetShareInvitationId());
  return UpdateShareInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateShareInvitationOutcomeCallable WellArchitectedClient::UpdateShareInvitationCallable(const UpdateShareInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateShareInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateShareInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientUpdateShareInvitationAsyncHelper(WellArchitectedClient const * const clientThis, const UpdateShareInvitationRequest& request, const UpdateShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateShareInvitation(request), context);
}

void WellArchitectedClient::UpdateShareInvitationAsync(const UpdateShareInvitationRequest& request, const UpdateShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientUpdateShareInvitationAsyncHelper( this, request, handler, context ); } );
}

UpdateWorkloadOutcome WellArchitectedClient::UpdateWorkload(const UpdateWorkloadRequest& request) const
{
  if (!request.WorkloadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkload", "Required field: WorkloadId, is not set");
    return UpdateWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  return UpdateWorkloadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkloadOutcomeCallable WellArchitectedClient::UpdateWorkloadCallable(const UpdateWorkloadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkloadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientUpdateWorkloadAsyncHelper(WellArchitectedClient const * const clientThis, const UpdateWorkloadRequest& request, const UpdateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkload(request), context);
}

void WellArchitectedClient::UpdateWorkloadAsync(const UpdateWorkloadRequest& request, const UpdateWorkloadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientUpdateWorkloadAsyncHelper( this, request, handler, context ); } );
}

UpdateWorkloadShareOutcome WellArchitectedClient::UpdateWorkloadShare(const UpdateWorkloadShareRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/shares/");
  uri.AddPathSegment(request.GetShareId());
  return UpdateWorkloadShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkloadShareOutcomeCallable WellArchitectedClient::UpdateWorkloadShareCallable(const UpdateWorkloadShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkloadShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkloadShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientUpdateWorkloadShareAsyncHelper(WellArchitectedClient const * const clientThis, const UpdateWorkloadShareRequest& request, const UpdateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkloadShare(request), context);
}

void WellArchitectedClient::UpdateWorkloadShareAsync(const UpdateWorkloadShareRequest& request, const UpdateWorkloadShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientUpdateWorkloadShareAsyncHelper( this, request, handler, context ); } );
}

UpgradeLensReviewOutcome WellArchitectedClient::UpgradeLensReview(const UpgradeLensReviewRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workloads/");
  uri.AddPathSegment(request.GetWorkloadId());
  uri.AddPathSegments("/lensReviews/");
  uri.AddPathSegment(request.GetLensAlias());
  uri.AddPathSegments("/upgrade");
  return UpgradeLensReviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpgradeLensReviewOutcomeCallable WellArchitectedClient::UpgradeLensReviewCallable(const UpgradeLensReviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpgradeLensReviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpgradeLensReview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WellArchitectedClientUpgradeLensReviewAsyncHelper(WellArchitectedClient const * const clientThis, const UpgradeLensReviewRequest& request, const UpgradeLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpgradeLensReview(request), context);
}

void WellArchitectedClient::UpgradeLensReviewAsync(const UpgradeLensReviewRequest& request, const UpgradeLensReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WellArchitectedClientUpgradeLensReviewAsyncHelper( this, request, handler, context ); } );
}

