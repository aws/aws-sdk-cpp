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

#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClient.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrorMarshaller.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointProvider.h>
#include <aws/route53-recovery-readiness/model/CreateCellRequest.h>
#include <aws/route53-recovery-readiness/model/CreateCrossAccountAuthorizationRequest.h>
#include <aws/route53-recovery-readiness/model/CreateReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/CreateRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/CreateResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteCellRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteCrossAccountAuthorizationRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/GetArchitectureRecommendationsRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusRequest.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/ListCellsRequest.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsRequest.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksRequest.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsRequest.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsRequest.h>
#include <aws/route53-recovery-readiness/model/ListRulesRequest.h>
#include <aws/route53-recovery-readiness/model/ListTagsForResourcesRequest.h>
#include <aws/route53-recovery-readiness/model/TagResourceRequest.h>
#include <aws/route53-recovery-readiness/model/UntagResourceRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateCellRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateResourceSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53RecoveryReadiness;
using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* Route53RecoveryReadinessClient::SERVICE_NAME = "route53-recovery-readiness";
const char* Route53RecoveryReadinessClient::ALLOCATION_TAG = "Route53RecoveryReadinessClient";

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration,
                                                               std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const AWSCredentials& credentials,
                                                               std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider,
                                                               const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider,
                                                               const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
Route53RecoveryReadinessClient::~Route53RecoveryReadinessClient()
{
}

std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase>& Route53RecoveryReadinessClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Route53RecoveryReadinessClient::init(const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Route53 Recovery Readiness");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void Route53RecoveryReadinessClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateCellOutcome Route53RecoveryReadinessClient::CreateCell(const CreateCellRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells");
  return CreateCellOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCellOutcomeCallable Route53RecoveryReadinessClient::CreateCellCallable(const CreateCellRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCellOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCell(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::CreateCellAsync(const CreateCellRequest& request, const CreateCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCell(request), context);
    } );
}

CreateCrossAccountAuthorizationOutcome Route53RecoveryReadinessClient::CreateCrossAccountAuthorization(const CreateCrossAccountAuthorizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCrossAccountAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCrossAccountAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations");
  return CreateCrossAccountAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCrossAccountAuthorizationOutcomeCallable Route53RecoveryReadinessClient::CreateCrossAccountAuthorizationCallable(const CreateCrossAccountAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCrossAccountAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCrossAccountAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::CreateCrossAccountAuthorizationAsync(const CreateCrossAccountAuthorizationRequest& request, const CreateCrossAccountAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCrossAccountAuthorization(request), context);
    } );
}

CreateReadinessCheckOutcome Route53RecoveryReadinessClient::CreateReadinessCheck(const CreateReadinessCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks");
  return CreateReadinessCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReadinessCheckOutcomeCallable Route53RecoveryReadinessClient::CreateReadinessCheckCallable(const CreateReadinessCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReadinessCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReadinessCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::CreateReadinessCheckAsync(const CreateReadinessCheckRequest& request, const CreateReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReadinessCheck(request), context);
    } );
}

CreateRecoveryGroupOutcome Route53RecoveryReadinessClient::CreateRecoveryGroup(const CreateRecoveryGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups");
  return CreateRecoveryGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecoveryGroupOutcomeCallable Route53RecoveryReadinessClient::CreateRecoveryGroupCallable(const CreateRecoveryGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecoveryGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecoveryGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::CreateRecoveryGroupAsync(const CreateRecoveryGroupRequest& request, const CreateRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRecoveryGroup(request), context);
    } );
}

CreateResourceSetOutcome Route53RecoveryReadinessClient::CreateResourceSet(const CreateResourceSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets");
  return CreateResourceSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceSetOutcomeCallable Route53RecoveryReadinessClient::CreateResourceSetCallable(const CreateResourceSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourceSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::CreateResourceSetAsync(const CreateResourceSetRequest& request, const CreateResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResourceSet(request), context);
    } );
}

DeleteCellOutcome Route53RecoveryReadinessClient::DeleteCell(const DeleteCellRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CellNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCell", "Required field: CellName, is not set");
    return DeleteCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  return DeleteCellOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCellOutcomeCallable Route53RecoveryReadinessClient::DeleteCellCallable(const DeleteCellRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCellOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCell(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::DeleteCellAsync(const DeleteCellRequest& request, const DeleteCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCell(request), context);
    } );
}

DeleteCrossAccountAuthorizationOutcome Route53RecoveryReadinessClient::DeleteCrossAccountAuthorization(const DeleteCrossAccountAuthorizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCrossAccountAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrossAccountAuthorizationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCrossAccountAuthorization", "Required field: CrossAccountAuthorization, is not set");
    return DeleteCrossAccountAuthorizationOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossAccountAuthorization]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCrossAccountAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossAccountAuthorization());
  return DeleteCrossAccountAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCrossAccountAuthorizationOutcomeCallable Route53RecoveryReadinessClient::DeleteCrossAccountAuthorizationCallable(const DeleteCrossAccountAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCrossAccountAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCrossAccountAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::DeleteCrossAccountAuthorizationAsync(const DeleteCrossAccountAuthorizationRequest& request, const DeleteCrossAccountAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCrossAccountAuthorization(request), context);
    } );
}

DeleteReadinessCheckOutcome Route53RecoveryReadinessClient::DeleteReadinessCheck(const DeleteReadinessCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return DeleteReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  return DeleteReadinessCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteReadinessCheckOutcomeCallable Route53RecoveryReadinessClient::DeleteReadinessCheckCallable(const DeleteReadinessCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReadinessCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReadinessCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::DeleteReadinessCheckAsync(const DeleteReadinessCheckRequest& request, const DeleteReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReadinessCheck(request), context);
    } );
}

DeleteRecoveryGroupOutcome Route53RecoveryReadinessClient::DeleteRecoveryGroup(const DeleteRecoveryGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return DeleteRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  return DeleteRecoveryGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecoveryGroupOutcomeCallable Route53RecoveryReadinessClient::DeleteRecoveryGroupCallable(const DeleteRecoveryGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecoveryGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecoveryGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::DeleteRecoveryGroupAsync(const DeleteRecoveryGroupRequest& request, const DeleteRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRecoveryGroup(request), context);
    } );
}

DeleteResourceSetOutcome Route53RecoveryReadinessClient::DeleteResourceSet(const DeleteResourceSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourceSet", "Required field: ResourceSetName, is not set");
    return DeleteResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  return DeleteResourceSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceSetOutcomeCallable Route53RecoveryReadinessClient::DeleteResourceSetCallable(const DeleteResourceSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::DeleteResourceSetAsync(const DeleteResourceSetRequest& request, const DeleteResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourceSet(request), context);
    } );
}

GetArchitectureRecommendationsOutcome Route53RecoveryReadinessClient::GetArchitectureRecommendations(const GetArchitectureRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetArchitectureRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetArchitectureRecommendations", "Required field: RecoveryGroupName, is not set");
    return GetArchitectureRecommendationsOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetArchitectureRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/architectureRecommendations");
  return GetArchitectureRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetArchitectureRecommendationsOutcomeCallable Route53RecoveryReadinessClient::GetArchitectureRecommendationsCallable(const GetArchitectureRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetArchitectureRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetArchitectureRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetArchitectureRecommendationsAsync(const GetArchitectureRecommendationsRequest& request, const GetArchitectureRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetArchitectureRecommendations(request), context);
    } );
}

GetCellOutcome Route53RecoveryReadinessClient::GetCell(const GetCellRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CellNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCell", "Required field: CellName, is not set");
    return GetCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  return GetCellOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCellOutcomeCallable Route53RecoveryReadinessClient::GetCellCallable(const GetCellRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCellOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCell(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetCellAsync(const GetCellRequest& request, const GetCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCell(request), context);
    } );
}

GetCellReadinessSummaryOutcome Route53RecoveryReadinessClient::GetCellReadinessSummary(const GetCellReadinessSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCellReadinessSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CellNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCellReadinessSummary", "Required field: CellName, is not set");
    return GetCellReadinessSummaryOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCellReadinessSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cellreadiness/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  return GetCellReadinessSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCellReadinessSummaryOutcomeCallable Route53RecoveryReadinessClient::GetCellReadinessSummaryCallable(const GetCellReadinessSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCellReadinessSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCellReadinessSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetCellReadinessSummaryAsync(const GetCellReadinessSummaryRequest& request, const GetCellReadinessSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCellReadinessSummary(request), context);
    } );
}

GetReadinessCheckOutcome Route53RecoveryReadinessClient::GetReadinessCheck(const GetReadinessCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  return GetReadinessCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReadinessCheckOutcomeCallable Route53RecoveryReadinessClient::GetReadinessCheckCallable(const GetReadinessCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReadinessCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReadinessCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetReadinessCheckAsync(const GetReadinessCheckRequest& request, const GetReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReadinessCheck(request), context);
    } );
}

GetReadinessCheckResourceStatusOutcome Route53RecoveryReadinessClient::GetReadinessCheckResourceStatus(const GetReadinessCheckResourceStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReadinessCheckResourceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckResourceStatus", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckResourceStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckResourceStatus", "Required field: ResourceIdentifier, is not set");
    return GetReadinessCheckResourceStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReadinessCheckResourceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetReadinessCheckResourceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReadinessCheckResourceStatusOutcomeCallable Route53RecoveryReadinessClient::GetReadinessCheckResourceStatusCallable(const GetReadinessCheckResourceStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReadinessCheckResourceStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReadinessCheckResourceStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetReadinessCheckResourceStatusAsync(const GetReadinessCheckResourceStatusRequest& request, const GetReadinessCheckResourceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReadinessCheckResourceStatus(request), context);
    } );
}

GetReadinessCheckStatusOutcome Route53RecoveryReadinessClient::GetReadinessCheckStatus(const GetReadinessCheckStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReadinessCheckStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckStatus", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReadinessCheckStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetReadinessCheckStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReadinessCheckStatusOutcomeCallable Route53RecoveryReadinessClient::GetReadinessCheckStatusCallable(const GetReadinessCheckStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReadinessCheckStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReadinessCheckStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetReadinessCheckStatusAsync(const GetReadinessCheckStatusRequest& request, const GetReadinessCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReadinessCheckStatus(request), context);
    } );
}

GetRecoveryGroupOutcome Route53RecoveryReadinessClient::GetRecoveryGroup(const GetRecoveryGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return GetRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  return GetRecoveryGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecoveryGroupOutcomeCallable Route53RecoveryReadinessClient::GetRecoveryGroupCallable(const GetRecoveryGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecoveryGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecoveryGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetRecoveryGroupAsync(const GetRecoveryGroupRequest& request, const GetRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecoveryGroup(request), context);
    } );
}

GetRecoveryGroupReadinessSummaryOutcome Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummary(const GetRecoveryGroupReadinessSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecoveryGroupReadinessSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecoveryGroupReadinessSummary", "Required field: RecoveryGroupName, is not set");
    return GetRecoveryGroupReadinessSummaryOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecoveryGroupReadinessSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroupreadiness/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  return GetRecoveryGroupReadinessSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecoveryGroupReadinessSummaryOutcomeCallable Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummaryCallable(const GetRecoveryGroupReadinessSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecoveryGroupReadinessSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecoveryGroupReadinessSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummaryAsync(const GetRecoveryGroupReadinessSummaryRequest& request, const GetRecoveryGroupReadinessSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecoveryGroupReadinessSummary(request), context);
    } );
}

GetResourceSetOutcome Route53RecoveryReadinessClient::GetResourceSet(const GetResourceSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceSet", "Required field: ResourceSetName, is not set");
    return GetResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  return GetResourceSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceSetOutcomeCallable Route53RecoveryReadinessClient::GetResourceSetCallable(const GetResourceSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::GetResourceSetAsync(const GetResourceSetRequest& request, const GetResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceSet(request), context);
    } );
}

ListCellsOutcome Route53RecoveryReadinessClient::ListCells(const ListCellsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCells, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCells, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells");
  return ListCellsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCellsOutcomeCallable Route53RecoveryReadinessClient::ListCellsCallable(const ListCellsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCellsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCells(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::ListCellsAsync(const ListCellsRequest& request, const ListCellsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCells(request), context);
    } );
}

ListCrossAccountAuthorizationsOutcome Route53RecoveryReadinessClient::ListCrossAccountAuthorizations(const ListCrossAccountAuthorizationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCrossAccountAuthorizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCrossAccountAuthorizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations");
  return ListCrossAccountAuthorizationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCrossAccountAuthorizationsOutcomeCallable Route53RecoveryReadinessClient::ListCrossAccountAuthorizationsCallable(const ListCrossAccountAuthorizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCrossAccountAuthorizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCrossAccountAuthorizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::ListCrossAccountAuthorizationsAsync(const ListCrossAccountAuthorizationsRequest& request, const ListCrossAccountAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCrossAccountAuthorizations(request), context);
    } );
}

ListReadinessChecksOutcome Route53RecoveryReadinessClient::ListReadinessChecks(const ListReadinessChecksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReadinessChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReadinessChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks");
  return ListReadinessChecksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReadinessChecksOutcomeCallable Route53RecoveryReadinessClient::ListReadinessChecksCallable(const ListReadinessChecksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReadinessChecksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReadinessChecks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::ListReadinessChecksAsync(const ListReadinessChecksRequest& request, const ListReadinessChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReadinessChecks(request), context);
    } );
}

ListRecoveryGroupsOutcome Route53RecoveryReadinessClient::ListRecoveryGroups(const ListRecoveryGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecoveryGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecoveryGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups");
  return ListRecoveryGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecoveryGroupsOutcomeCallable Route53RecoveryReadinessClient::ListRecoveryGroupsCallable(const ListRecoveryGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecoveryGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecoveryGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::ListRecoveryGroupsAsync(const ListRecoveryGroupsRequest& request, const ListRecoveryGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecoveryGroups(request), context);
    } );
}

ListResourceSetsOutcome Route53RecoveryReadinessClient::ListResourceSets(const ListResourceSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets");
  return ListResourceSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResourceSetsOutcomeCallable Route53RecoveryReadinessClient::ListResourceSetsCallable(const ListResourceSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::ListResourceSetsAsync(const ListResourceSetsRequest& request, const ListResourceSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourceSets(request), context);
    } );
}

ListRulesOutcome Route53RecoveryReadinessClient::ListRules(const ListRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  return ListRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcomeCallable Route53RecoveryReadinessClient::ListRulesCallable(const ListRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRules(request), context);
    } );
}

ListTagsForResourcesOutcome Route53RecoveryReadinessClient::ListTagsForResources(const ListTagsForResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResources", "Required field: ResourceArn, is not set");
    return ListTagsForResourcesOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourcesOutcomeCallable Route53RecoveryReadinessClient::ListTagsForResourcesCallable(const ListTagsForResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::ListTagsForResourcesAsync(const ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResources(request), context);
    } );
}

TagResourceOutcome Route53RecoveryReadinessClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable Route53RecoveryReadinessClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome Route53RecoveryReadinessClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable Route53RecoveryReadinessClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateCellOutcome Route53RecoveryReadinessClient::UpdateCell(const UpdateCellRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CellNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCell", "Required field: CellName, is not set");
    return UpdateCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  return UpdateCellOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCellOutcomeCallable Route53RecoveryReadinessClient::UpdateCellCallable(const UpdateCellRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCellOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCell(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::UpdateCellAsync(const UpdateCellRequest& request, const UpdateCellResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCell(request), context);
    } );
}

UpdateReadinessCheckOutcome Route53RecoveryReadinessClient::UpdateReadinessCheck(const UpdateReadinessCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return UpdateReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  return UpdateReadinessCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateReadinessCheckOutcomeCallable Route53RecoveryReadinessClient::UpdateReadinessCheckCallable(const UpdateReadinessCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReadinessCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReadinessCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::UpdateReadinessCheckAsync(const UpdateReadinessCheckRequest& request, const UpdateReadinessCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReadinessCheck(request), context);
    } );
}

UpdateRecoveryGroupOutcome Route53RecoveryReadinessClient::UpdateRecoveryGroup(const UpdateRecoveryGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return UpdateRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  return UpdateRecoveryGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecoveryGroupOutcomeCallable Route53RecoveryReadinessClient::UpdateRecoveryGroupCallable(const UpdateRecoveryGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecoveryGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecoveryGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::UpdateRecoveryGroupAsync(const UpdateRecoveryGroupRequest& request, const UpdateRecoveryGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRecoveryGroup(request), context);
    } );
}

UpdateResourceSetOutcome Route53RecoveryReadinessClient::UpdateResourceSet(const UpdateResourceSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourceSet", "Required field: ResourceSetName, is not set");
    return UpdateResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  return UpdateResourceSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceSetOutcomeCallable Route53RecoveryReadinessClient::UpdateResourceSetCallable(const UpdateResourceSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryReadinessClient::UpdateResourceSetAsync(const UpdateResourceSetRequest& request, const UpdateResourceSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResourceSet(request), context);
    } );
}

