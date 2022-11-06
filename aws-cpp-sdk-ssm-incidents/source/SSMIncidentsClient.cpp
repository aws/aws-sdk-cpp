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

#include <aws/ssm-incidents/SSMIncidentsClient.h>
#include <aws/ssm-incidents/SSMIncidentsErrorMarshaller.h>
#include <aws/ssm-incidents/SSMIncidentsEndpointProvider.h>
#include <aws/ssm-incidents/model/CreateReplicationSetRequest.h>
#include <aws/ssm-incidents/model/CreateResponsePlanRequest.h>
#include <aws/ssm-incidents/model/CreateTimelineEventRequest.h>
#include <aws/ssm-incidents/model/DeleteIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/DeleteReplicationSetRequest.h>
#include <aws/ssm-incidents/model/DeleteResourcePolicyRequest.h>
#include <aws/ssm-incidents/model/DeleteResponsePlanRequest.h>
#include <aws/ssm-incidents/model/DeleteTimelineEventRequest.h>
#include <aws/ssm-incidents/model/GetIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/GetReplicationSetRequest.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesRequest.h>
#include <aws/ssm-incidents/model/GetResponsePlanRequest.h>
#include <aws/ssm-incidents/model/GetTimelineEventRequest.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsRequest.h>
#include <aws/ssm-incidents/model/ListRelatedItemsRequest.h>
#include <aws/ssm-incidents/model/ListReplicationSetsRequest.h>
#include <aws/ssm-incidents/model/ListResponsePlansRequest.h>
#include <aws/ssm-incidents/model/ListTagsForResourceRequest.h>
#include <aws/ssm-incidents/model/ListTimelineEventsRequest.h>
#include <aws/ssm-incidents/model/PutResourcePolicyRequest.h>
#include <aws/ssm-incidents/model/StartIncidentRequest.h>
#include <aws/ssm-incidents/model/TagResourceRequest.h>
#include <aws/ssm-incidents/model/UntagResourceRequest.h>
#include <aws/ssm-incidents/model/UpdateDeletionProtectionRequest.h>
#include <aws/ssm-incidents/model/UpdateIncidentRecordRequest.h>
#include <aws/ssm-incidents/model/UpdateRelatedItemsRequest.h>
#include <aws/ssm-incidents/model/UpdateReplicationSetRequest.h>
#include <aws/ssm-incidents/model/UpdateResponsePlanRequest.h>
#include <aws/ssm-incidents/model/UpdateTimelineEventRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSMIncidents;
using namespace Aws::SSMIncidents::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SSMIncidentsClient::SERVICE_NAME = "ssm-incidents";
const char* SSMIncidentsClient::ALLOCATION_TAG = "SSMIncidentsClient";

SSMIncidentsClient::SSMIncidentsClient(const SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration,
                                       std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const AWSCredentials& credentials,
                                       std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider,
                                       const SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider,
                                       const SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SSMIncidentsClient::SSMIncidentsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SSMIncidentsClient::~SSMIncidentsClient()
{
}

std::shared_ptr<SSMIncidentsEndpointProviderBase>& SSMIncidentsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SSMIncidentsClient::init(const SSMIncidents::SSMIncidentsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SSM Incidents");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SSMIncidentsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateReplicationSetOutcome SSMIncidentsClient::CreateReplicationSet(const CreateReplicationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createReplicationSet");
  return CreateReplicationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationSetOutcomeCallable SSMIncidentsClient::CreateReplicationSetCallable(const CreateReplicationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::CreateReplicationSetAsync(const CreateReplicationSetRequest& request, const CreateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationSet(request), context);
    } );
}

CreateResponsePlanOutcome SSMIncidentsClient::CreateResponsePlan(const CreateResponsePlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResponsePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResponsePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createResponsePlan");
  return CreateResponsePlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResponsePlanOutcomeCallable SSMIncidentsClient::CreateResponsePlanCallable(const CreateResponsePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResponsePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResponsePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::CreateResponsePlanAsync(const CreateResponsePlanRequest& request, const CreateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResponsePlan(request), context);
    } );
}

CreateTimelineEventOutcome SSMIncidentsClient::CreateTimelineEvent(const CreateTimelineEventRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTimelineEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTimelineEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createTimelineEvent");
  return CreateTimelineEventOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTimelineEventOutcomeCallable SSMIncidentsClient::CreateTimelineEventCallable(const CreateTimelineEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTimelineEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTimelineEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::CreateTimelineEventAsync(const CreateTimelineEventRequest& request, const CreateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTimelineEvent(request), context);
    } );
}

DeleteIncidentRecordOutcome SSMIncidentsClient::DeleteIncidentRecord(const DeleteIncidentRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIncidentRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIncidentRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteIncidentRecord");
  return DeleteIncidentRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIncidentRecordOutcomeCallable SSMIncidentsClient::DeleteIncidentRecordCallable(const DeleteIncidentRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIncidentRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIncidentRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::DeleteIncidentRecordAsync(const DeleteIncidentRecordRequest& request, const DeleteIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIncidentRecord(request), context);
    } );
}

DeleteReplicationSetOutcome SSMIncidentsClient::DeleteReplicationSet(const DeleteReplicationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReplicationSet", "Required field: Arn, is not set");
    return DeleteReplicationSetOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteReplicationSet");
  return DeleteReplicationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationSetOutcomeCallable SSMIncidentsClient::DeleteReplicationSetCallable(const DeleteReplicationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::DeleteReplicationSetAsync(const DeleteReplicationSetRequest& request, const DeleteReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationSet(request), context);
    } );
}

DeleteResourcePolicyOutcome SSMIncidentsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteResourcePolicy");
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable SSMIncidentsClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DeleteResponsePlanOutcome SSMIncidentsClient::DeleteResponsePlan(const DeleteResponsePlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResponsePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResponsePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteResponsePlan");
  return DeleteResponsePlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResponsePlanOutcomeCallable SSMIncidentsClient::DeleteResponsePlanCallable(const DeleteResponsePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResponsePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResponsePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::DeleteResponsePlanAsync(const DeleteResponsePlanRequest& request, const DeleteResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResponsePlan(request), context);
    } );
}

DeleteTimelineEventOutcome SSMIncidentsClient::DeleteTimelineEvent(const DeleteTimelineEventRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTimelineEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTimelineEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteTimelineEvent");
  return DeleteTimelineEventOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTimelineEventOutcomeCallable SSMIncidentsClient::DeleteTimelineEventCallable(const DeleteTimelineEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTimelineEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTimelineEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::DeleteTimelineEventAsync(const DeleteTimelineEventRequest& request, const DeleteTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTimelineEvent(request), context);
    } );
}

GetIncidentRecordOutcome SSMIncidentsClient::GetIncidentRecord(const GetIncidentRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIncidentRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIncidentRecord", "Required field: Arn, is not set");
    return GetIncidentRecordOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIncidentRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getIncidentRecord");
  return GetIncidentRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIncidentRecordOutcomeCallable SSMIncidentsClient::GetIncidentRecordCallable(const GetIncidentRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIncidentRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIncidentRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::GetIncidentRecordAsync(const GetIncidentRecordRequest& request, const GetIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIncidentRecord(request), context);
    } );
}

GetReplicationSetOutcome SSMIncidentsClient::GetReplicationSet(const GetReplicationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReplicationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReplicationSet", "Required field: Arn, is not set");
    return GetReplicationSetOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReplicationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getReplicationSet");
  return GetReplicationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReplicationSetOutcomeCallable SSMIncidentsClient::GetReplicationSetCallable(const GetReplicationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::GetReplicationSetAsync(const GetReplicationSetRequest& request, const GetReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReplicationSet(request), context);
    } );
}

GetResourcePoliciesOutcome SSMIncidentsClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePolicies", "Required field: ResourceArn, is not set");
    return GetResourcePoliciesOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getResourcePolicies");
  return GetResourcePoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePoliciesOutcomeCallable SSMIncidentsClient::GetResourcePoliciesCallable(const GetResourcePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::GetResourcePoliciesAsync(const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourcePolicies(request), context);
    } );
}

GetResponsePlanOutcome SSMIncidentsClient::GetResponsePlan(const GetResponsePlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResponsePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResponsePlan", "Required field: Arn, is not set");
    return GetResponsePlanOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResponsePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getResponsePlan");
  return GetResponsePlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResponsePlanOutcomeCallable SSMIncidentsClient::GetResponsePlanCallable(const GetResponsePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResponsePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResponsePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::GetResponsePlanAsync(const GetResponsePlanRequest& request, const GetResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResponsePlan(request), context);
    } );
}

GetTimelineEventOutcome SSMIncidentsClient::GetTimelineEvent(const GetTimelineEventRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTimelineEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EventIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTimelineEvent", "Required field: EventId, is not set");
    return GetTimelineEventOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventId]", false));
  }
  if (!request.IncidentRecordArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTimelineEvent", "Required field: IncidentRecordArn, is not set");
    return GetTimelineEventOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IncidentRecordArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTimelineEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getTimelineEvent");
  return GetTimelineEventOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTimelineEventOutcomeCallable SSMIncidentsClient::GetTimelineEventCallable(const GetTimelineEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTimelineEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTimelineEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::GetTimelineEventAsync(const GetTimelineEventRequest& request, const GetTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTimelineEvent(request), context);
    } );
}

ListIncidentRecordsOutcome SSMIncidentsClient::ListIncidentRecords(const ListIncidentRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIncidentRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIncidentRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listIncidentRecords");
  return ListIncidentRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIncidentRecordsOutcomeCallable SSMIncidentsClient::ListIncidentRecordsCallable(const ListIncidentRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIncidentRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIncidentRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::ListIncidentRecordsAsync(const ListIncidentRecordsRequest& request, const ListIncidentRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIncidentRecords(request), context);
    } );
}

ListRelatedItemsOutcome SSMIncidentsClient::ListRelatedItems(const ListRelatedItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRelatedItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRelatedItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listRelatedItems");
  return ListRelatedItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRelatedItemsOutcomeCallable SSMIncidentsClient::ListRelatedItemsCallable(const ListRelatedItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRelatedItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRelatedItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::ListRelatedItemsAsync(const ListRelatedItemsRequest& request, const ListRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRelatedItems(request), context);
    } );
}

ListReplicationSetsOutcome SSMIncidentsClient::ListReplicationSets(const ListReplicationSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReplicationSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReplicationSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listReplicationSets");
  return ListReplicationSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReplicationSetsOutcomeCallable SSMIncidentsClient::ListReplicationSetsCallable(const ListReplicationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReplicationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReplicationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::ListReplicationSetsAsync(const ListReplicationSetsRequest& request, const ListReplicationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListReplicationSets(request), context);
    } );
}

ListResponsePlansOutcome SSMIncidentsClient::ListResponsePlans(const ListResponsePlansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResponsePlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResponsePlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listResponsePlans");
  return ListResponsePlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResponsePlansOutcomeCallable SSMIncidentsClient::ListResponsePlansCallable(const ListResponsePlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResponsePlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResponsePlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::ListResponsePlansAsync(const ListResponsePlansRequest& request, const ListResponsePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResponsePlans(request), context);
    } );
}

ListTagsForResourceOutcome SSMIncidentsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SSMIncidentsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTimelineEventsOutcome SSMIncidentsClient::ListTimelineEvents(const ListTimelineEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTimelineEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTimelineEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listTimelineEvents");
  return ListTimelineEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTimelineEventsOutcomeCallable SSMIncidentsClient::ListTimelineEventsCallable(const ListTimelineEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTimelineEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTimelineEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::ListTimelineEventsAsync(const ListTimelineEventsRequest& request, const ListTimelineEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTimelineEvents(request), context);
    } );
}

PutResourcePolicyOutcome SSMIncidentsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/putResourcePolicy");
  return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable SSMIncidentsClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

StartIncidentOutcome SSMIncidentsClient::StartIncident(const StartIncidentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartIncident, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartIncident, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/startIncident");
  return StartIncidentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartIncidentOutcomeCallable SSMIncidentsClient::StartIncidentCallable(const StartIncidentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartIncidentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartIncident(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::StartIncidentAsync(const StartIncidentRequest& request, const StartIncidentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartIncident(request), context);
    } );
}

TagResourceOutcome SSMIncidentsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SSMIncidentsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome SSMIncidentsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SSMIncidentsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDeletionProtectionOutcome SSMIncidentsClient::UpdateDeletionProtection(const UpdateDeletionProtectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeletionProtection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeletionProtection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateDeletionProtection");
  return UpdateDeletionProtectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeletionProtectionOutcomeCallable SSMIncidentsClient::UpdateDeletionProtectionCallable(const UpdateDeletionProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeletionProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeletionProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::UpdateDeletionProtectionAsync(const UpdateDeletionProtectionRequest& request, const UpdateDeletionProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDeletionProtection(request), context);
    } );
}

UpdateIncidentRecordOutcome SSMIncidentsClient::UpdateIncidentRecord(const UpdateIncidentRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIncidentRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIncidentRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateIncidentRecord");
  return UpdateIncidentRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIncidentRecordOutcomeCallable SSMIncidentsClient::UpdateIncidentRecordCallable(const UpdateIncidentRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIncidentRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIncidentRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::UpdateIncidentRecordAsync(const UpdateIncidentRecordRequest& request, const UpdateIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIncidentRecord(request), context);
    } );
}

UpdateRelatedItemsOutcome SSMIncidentsClient::UpdateRelatedItems(const UpdateRelatedItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRelatedItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRelatedItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateRelatedItems");
  return UpdateRelatedItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRelatedItemsOutcomeCallable SSMIncidentsClient::UpdateRelatedItemsCallable(const UpdateRelatedItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRelatedItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRelatedItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::UpdateRelatedItemsAsync(const UpdateRelatedItemsRequest& request, const UpdateRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRelatedItems(request), context);
    } );
}

UpdateReplicationSetOutcome SSMIncidentsClient::UpdateReplicationSet(const UpdateReplicationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReplicationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReplicationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateReplicationSet");
  return UpdateReplicationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationSetOutcomeCallable SSMIncidentsClient::UpdateReplicationSetCallable(const UpdateReplicationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::UpdateReplicationSetAsync(const UpdateReplicationSetRequest& request, const UpdateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReplicationSet(request), context);
    } );
}

UpdateResponsePlanOutcome SSMIncidentsClient::UpdateResponsePlan(const UpdateResponsePlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResponsePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResponsePlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateResponsePlan");
  return UpdateResponsePlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResponsePlanOutcomeCallable SSMIncidentsClient::UpdateResponsePlanCallable(const UpdateResponsePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResponsePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResponsePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::UpdateResponsePlanAsync(const UpdateResponsePlanRequest& request, const UpdateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResponsePlan(request), context);
    } );
}

UpdateTimelineEventOutcome SSMIncidentsClient::UpdateTimelineEvent(const UpdateTimelineEventRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTimelineEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTimelineEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateTimelineEvent");
  return UpdateTimelineEventOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTimelineEventOutcomeCallable SSMIncidentsClient::UpdateTimelineEventCallable(const UpdateTimelineEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTimelineEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTimelineEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClient::UpdateTimelineEventAsync(const UpdateTimelineEventRequest& request, const UpdateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTimelineEvent(request), context);
    } );
}

