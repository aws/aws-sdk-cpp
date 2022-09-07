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

#include <aws/ssm-incidents/SSMIncidentsClient.h>
#include <aws/ssm-incidents/SSMIncidentsEndpoint.h>
#include <aws/ssm-incidents/SSMIncidentsErrorMarshaller.h>
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

static const char* SERVICE_NAME = "ssm-incidents";
static const char* ALLOCATION_TAG = "SSMIncidentsClient";

SSMIncidentsClient::SSMIncidentsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMIncidentsClient::SSMIncidentsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSMIncidentsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSMIncidentsClient::~SSMIncidentsClient()
{
}

void SSMIncidentsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SSM Incidents");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SSMIncidentsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SSMIncidentsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateReplicationSetOutcome SSMIncidentsClient::CreateReplicationSet(const CreateReplicationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/createReplicationSet");
  return CreateReplicationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationSetOutcomeCallable SSMIncidentsClient::CreateReplicationSetCallable(const CreateReplicationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientCreateReplicationSetAsyncHelper(SSMIncidentsClient const * const clientThis, const CreateReplicationSetRequest& request, const CreateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateReplicationSet(request), context);
}

void SSMIncidentsClient::CreateReplicationSetAsync(const CreateReplicationSetRequest& request, const CreateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientCreateReplicationSetAsyncHelper( this, request, handler, context ); } );
}

CreateResponsePlanOutcome SSMIncidentsClient::CreateResponsePlan(const CreateResponsePlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/createResponsePlan");
  return CreateResponsePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResponsePlanOutcomeCallable SSMIncidentsClient::CreateResponsePlanCallable(const CreateResponsePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResponsePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResponsePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientCreateResponsePlanAsyncHelper(SSMIncidentsClient const * const clientThis, const CreateResponsePlanRequest& request, const CreateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateResponsePlan(request), context);
}

void SSMIncidentsClient::CreateResponsePlanAsync(const CreateResponsePlanRequest& request, const CreateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientCreateResponsePlanAsyncHelper( this, request, handler, context ); } );
}

CreateTimelineEventOutcome SSMIncidentsClient::CreateTimelineEvent(const CreateTimelineEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/createTimelineEvent");
  return CreateTimelineEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTimelineEventOutcomeCallable SSMIncidentsClient::CreateTimelineEventCallable(const CreateTimelineEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTimelineEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTimelineEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientCreateTimelineEventAsyncHelper(SSMIncidentsClient const * const clientThis, const CreateTimelineEventRequest& request, const CreateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTimelineEvent(request), context);
}

void SSMIncidentsClient::CreateTimelineEventAsync(const CreateTimelineEventRequest& request, const CreateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientCreateTimelineEventAsyncHelper( this, request, handler, context ); } );
}

DeleteIncidentRecordOutcome SSMIncidentsClient::DeleteIncidentRecord(const DeleteIncidentRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteIncidentRecord");
  return DeleteIncidentRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIncidentRecordOutcomeCallable SSMIncidentsClient::DeleteIncidentRecordCallable(const DeleteIncidentRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIncidentRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIncidentRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientDeleteIncidentRecordAsyncHelper(SSMIncidentsClient const * const clientThis, const DeleteIncidentRecordRequest& request, const DeleteIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIncidentRecord(request), context);
}

void SSMIncidentsClient::DeleteIncidentRecordAsync(const DeleteIncidentRecordRequest& request, const DeleteIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientDeleteIncidentRecordAsyncHelper( this, request, handler, context ); } );
}

DeleteReplicationSetOutcome SSMIncidentsClient::DeleteReplicationSet(const DeleteReplicationSetRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReplicationSet", "Required field: Arn, is not set");
    return DeleteReplicationSetOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteReplicationSet");
  return DeleteReplicationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationSetOutcomeCallable SSMIncidentsClient::DeleteReplicationSetCallable(const DeleteReplicationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientDeleteReplicationSetAsyncHelper(SSMIncidentsClient const * const clientThis, const DeleteReplicationSetRequest& request, const DeleteReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteReplicationSet(request), context);
}

void SSMIncidentsClient::DeleteReplicationSetAsync(const DeleteReplicationSetRequest& request, const DeleteReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientDeleteReplicationSetAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcePolicyOutcome SSMIncidentsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteResourcePolicy");
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable SSMIncidentsClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientDeleteResourcePolicyAsyncHelper(SSMIncidentsClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void SSMIncidentsClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteResponsePlanOutcome SSMIncidentsClient::DeleteResponsePlan(const DeleteResponsePlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteResponsePlan");
  return DeleteResponsePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResponsePlanOutcomeCallable SSMIncidentsClient::DeleteResponsePlanCallable(const DeleteResponsePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResponsePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResponsePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientDeleteResponsePlanAsyncHelper(SSMIncidentsClient const * const clientThis, const DeleteResponsePlanRequest& request, const DeleteResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResponsePlan(request), context);
}

void SSMIncidentsClient::DeleteResponsePlanAsync(const DeleteResponsePlanRequest& request, const DeleteResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientDeleteResponsePlanAsyncHelper( this, request, handler, context ); } );
}

DeleteTimelineEventOutcome SSMIncidentsClient::DeleteTimelineEvent(const DeleteTimelineEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteTimelineEvent");
  return DeleteTimelineEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTimelineEventOutcomeCallable SSMIncidentsClient::DeleteTimelineEventCallable(const DeleteTimelineEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTimelineEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTimelineEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientDeleteTimelineEventAsyncHelper(SSMIncidentsClient const * const clientThis, const DeleteTimelineEventRequest& request, const DeleteTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTimelineEvent(request), context);
}

void SSMIncidentsClient::DeleteTimelineEventAsync(const DeleteTimelineEventRequest& request, const DeleteTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientDeleteTimelineEventAsyncHelper( this, request, handler, context ); } );
}

GetIncidentRecordOutcome SSMIncidentsClient::GetIncidentRecord(const GetIncidentRecordRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIncidentRecord", "Required field: Arn, is not set");
    return GetIncidentRecordOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getIncidentRecord");
  return GetIncidentRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIncidentRecordOutcomeCallable SSMIncidentsClient::GetIncidentRecordCallable(const GetIncidentRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIncidentRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIncidentRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientGetIncidentRecordAsyncHelper(SSMIncidentsClient const * const clientThis, const GetIncidentRecordRequest& request, const GetIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIncidentRecord(request), context);
}

void SSMIncidentsClient::GetIncidentRecordAsync(const GetIncidentRecordRequest& request, const GetIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientGetIncidentRecordAsyncHelper( this, request, handler, context ); } );
}

GetReplicationSetOutcome SSMIncidentsClient::GetReplicationSet(const GetReplicationSetRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReplicationSet", "Required field: Arn, is not set");
    return GetReplicationSetOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getReplicationSet");
  return GetReplicationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReplicationSetOutcomeCallable SSMIncidentsClient::GetReplicationSetCallable(const GetReplicationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientGetReplicationSetAsyncHelper(SSMIncidentsClient const * const clientThis, const GetReplicationSetRequest& request, const GetReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetReplicationSet(request), context);
}

void SSMIncidentsClient::GetReplicationSetAsync(const GetReplicationSetRequest& request, const GetReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientGetReplicationSetAsyncHelper( this, request, handler, context ); } );
}

GetResourcePoliciesOutcome SSMIncidentsClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePolicies", "Required field: ResourceArn, is not set");
    return GetResourcePoliciesOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getResourcePolicies");
  return GetResourcePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePoliciesOutcomeCallable SSMIncidentsClient::GetResourcePoliciesCallable(const GetResourcePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientGetResourcePoliciesAsyncHelper(SSMIncidentsClient const * const clientThis, const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourcePolicies(request), context);
}

void SSMIncidentsClient::GetResourcePoliciesAsync(const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientGetResourcePoliciesAsyncHelper( this, request, handler, context ); } );
}

GetResponsePlanOutcome SSMIncidentsClient::GetResponsePlan(const GetResponsePlanRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResponsePlan", "Required field: Arn, is not set");
    return GetResponsePlanOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getResponsePlan");
  return GetResponsePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResponsePlanOutcomeCallable SSMIncidentsClient::GetResponsePlanCallable(const GetResponsePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResponsePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResponsePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientGetResponsePlanAsyncHelper(SSMIncidentsClient const * const clientThis, const GetResponsePlanRequest& request, const GetResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResponsePlan(request), context);
}

void SSMIncidentsClient::GetResponsePlanAsync(const GetResponsePlanRequest& request, const GetResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientGetResponsePlanAsyncHelper( this, request, handler, context ); } );
}

GetTimelineEventOutcome SSMIncidentsClient::GetTimelineEvent(const GetTimelineEventRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getTimelineEvent");
  return GetTimelineEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTimelineEventOutcomeCallable SSMIncidentsClient::GetTimelineEventCallable(const GetTimelineEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTimelineEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTimelineEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientGetTimelineEventAsyncHelper(SSMIncidentsClient const * const clientThis, const GetTimelineEventRequest& request, const GetTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTimelineEvent(request), context);
}

void SSMIncidentsClient::GetTimelineEventAsync(const GetTimelineEventRequest& request, const GetTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientGetTimelineEventAsyncHelper( this, request, handler, context ); } );
}

ListIncidentRecordsOutcome SSMIncidentsClient::ListIncidentRecords(const ListIncidentRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listIncidentRecords");
  return ListIncidentRecordsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIncidentRecordsOutcomeCallable SSMIncidentsClient::ListIncidentRecordsCallable(const ListIncidentRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIncidentRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIncidentRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientListIncidentRecordsAsyncHelper(SSMIncidentsClient const * const clientThis, const ListIncidentRecordsRequest& request, const ListIncidentRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIncidentRecords(request), context);
}

void SSMIncidentsClient::ListIncidentRecordsAsync(const ListIncidentRecordsRequest& request, const ListIncidentRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientListIncidentRecordsAsyncHelper( this, request, handler, context ); } );
}

ListRelatedItemsOutcome SSMIncidentsClient::ListRelatedItems(const ListRelatedItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listRelatedItems");
  return ListRelatedItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRelatedItemsOutcomeCallable SSMIncidentsClient::ListRelatedItemsCallable(const ListRelatedItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRelatedItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRelatedItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientListRelatedItemsAsyncHelper(SSMIncidentsClient const * const clientThis, const ListRelatedItemsRequest& request, const ListRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRelatedItems(request), context);
}

void SSMIncidentsClient::ListRelatedItemsAsync(const ListRelatedItemsRequest& request, const ListRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientListRelatedItemsAsyncHelper( this, request, handler, context ); } );
}

ListReplicationSetsOutcome SSMIncidentsClient::ListReplicationSets(const ListReplicationSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listReplicationSets");
  return ListReplicationSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReplicationSetsOutcomeCallable SSMIncidentsClient::ListReplicationSetsCallable(const ListReplicationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReplicationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReplicationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientListReplicationSetsAsyncHelper(SSMIncidentsClient const * const clientThis, const ListReplicationSetsRequest& request, const ListReplicationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReplicationSets(request), context);
}

void SSMIncidentsClient::ListReplicationSetsAsync(const ListReplicationSetsRequest& request, const ListReplicationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientListReplicationSetsAsyncHelper( this, request, handler, context ); } );
}

ListResponsePlansOutcome SSMIncidentsClient::ListResponsePlans(const ListResponsePlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listResponsePlans");
  return ListResponsePlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResponsePlansOutcomeCallable SSMIncidentsClient::ListResponsePlansCallable(const ListResponsePlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResponsePlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResponsePlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientListResponsePlansAsyncHelper(SSMIncidentsClient const * const clientThis, const ListResponsePlansRequest& request, const ListResponsePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResponsePlans(request), context);
}

void SSMIncidentsClient::ListResponsePlansAsync(const ListResponsePlansRequest& request, const ListResponsePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientListResponsePlansAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome SSMIncidentsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SSMIncidentsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientListTagsForResourceAsyncHelper(SSMIncidentsClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SSMIncidentsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTimelineEventsOutcome SSMIncidentsClient::ListTimelineEvents(const ListTimelineEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listTimelineEvents");
  return ListTimelineEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTimelineEventsOutcomeCallable SSMIncidentsClient::ListTimelineEventsCallable(const ListTimelineEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTimelineEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTimelineEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientListTimelineEventsAsyncHelper(SSMIncidentsClient const * const clientThis, const ListTimelineEventsRequest& request, const ListTimelineEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTimelineEvents(request), context);
}

void SSMIncidentsClient::ListTimelineEventsAsync(const ListTimelineEventsRequest& request, const ListTimelineEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientListTimelineEventsAsyncHelper( this, request, handler, context ); } );
}

PutResourcePolicyOutcome SSMIncidentsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/putResourcePolicy");
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable SSMIncidentsClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientPutResourcePolicyAsyncHelper(SSMIncidentsClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void SSMIncidentsClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

StartIncidentOutcome SSMIncidentsClient::StartIncident(const StartIncidentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/startIncident");
  return StartIncidentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartIncidentOutcomeCallable SSMIncidentsClient::StartIncidentCallable(const StartIncidentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartIncidentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartIncident(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientStartIncidentAsyncHelper(SSMIncidentsClient const * const clientThis, const StartIncidentRequest& request, const StartIncidentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartIncident(request), context);
}

void SSMIncidentsClient::StartIncidentAsync(const StartIncidentRequest& request, const StartIncidentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientStartIncidentAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome SSMIncidentsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SSMIncidentsErrors>(SSMIncidentsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SSMIncidentsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientTagResourceAsyncHelper(SSMIncidentsClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SSMIncidentsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome SSMIncidentsClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SSMIncidentsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientUntagResourceAsyncHelper(SSMIncidentsClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SSMIncidentsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDeletionProtectionOutcome SSMIncidentsClient::UpdateDeletionProtection(const UpdateDeletionProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateDeletionProtection");
  return UpdateDeletionProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeletionProtectionOutcomeCallable SSMIncidentsClient::UpdateDeletionProtectionCallable(const UpdateDeletionProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeletionProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeletionProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientUpdateDeletionProtectionAsyncHelper(SSMIncidentsClient const * const clientThis, const UpdateDeletionProtectionRequest& request, const UpdateDeletionProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDeletionProtection(request), context);
}

void SSMIncidentsClient::UpdateDeletionProtectionAsync(const UpdateDeletionProtectionRequest& request, const UpdateDeletionProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientUpdateDeletionProtectionAsyncHelper( this, request, handler, context ); } );
}

UpdateIncidentRecordOutcome SSMIncidentsClient::UpdateIncidentRecord(const UpdateIncidentRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateIncidentRecord");
  return UpdateIncidentRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIncidentRecordOutcomeCallable SSMIncidentsClient::UpdateIncidentRecordCallable(const UpdateIncidentRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIncidentRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIncidentRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientUpdateIncidentRecordAsyncHelper(SSMIncidentsClient const * const clientThis, const UpdateIncidentRecordRequest& request, const UpdateIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIncidentRecord(request), context);
}

void SSMIncidentsClient::UpdateIncidentRecordAsync(const UpdateIncidentRecordRequest& request, const UpdateIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientUpdateIncidentRecordAsyncHelper( this, request, handler, context ); } );
}

UpdateRelatedItemsOutcome SSMIncidentsClient::UpdateRelatedItems(const UpdateRelatedItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateRelatedItems");
  return UpdateRelatedItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRelatedItemsOutcomeCallable SSMIncidentsClient::UpdateRelatedItemsCallable(const UpdateRelatedItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRelatedItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRelatedItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientUpdateRelatedItemsAsyncHelper(SSMIncidentsClient const * const clientThis, const UpdateRelatedItemsRequest& request, const UpdateRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRelatedItems(request), context);
}

void SSMIncidentsClient::UpdateRelatedItemsAsync(const UpdateRelatedItemsRequest& request, const UpdateRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientUpdateRelatedItemsAsyncHelper( this, request, handler, context ); } );
}

UpdateReplicationSetOutcome SSMIncidentsClient::UpdateReplicationSet(const UpdateReplicationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateReplicationSet");
  return UpdateReplicationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationSetOutcomeCallable SSMIncidentsClient::UpdateReplicationSetCallable(const UpdateReplicationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientUpdateReplicationSetAsyncHelper(SSMIncidentsClient const * const clientThis, const UpdateReplicationSetRequest& request, const UpdateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateReplicationSet(request), context);
}

void SSMIncidentsClient::UpdateReplicationSetAsync(const UpdateReplicationSetRequest& request, const UpdateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientUpdateReplicationSetAsyncHelper( this, request, handler, context ); } );
}

UpdateResponsePlanOutcome SSMIncidentsClient::UpdateResponsePlan(const UpdateResponsePlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateResponsePlan");
  return UpdateResponsePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResponsePlanOutcomeCallable SSMIncidentsClient::UpdateResponsePlanCallable(const UpdateResponsePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResponsePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResponsePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientUpdateResponsePlanAsyncHelper(SSMIncidentsClient const * const clientThis, const UpdateResponsePlanRequest& request, const UpdateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateResponsePlan(request), context);
}

void SSMIncidentsClient::UpdateResponsePlanAsync(const UpdateResponsePlanRequest& request, const UpdateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientUpdateResponsePlanAsyncHelper( this, request, handler, context ); } );
}

UpdateTimelineEventOutcome SSMIncidentsClient::UpdateTimelineEvent(const UpdateTimelineEventRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateTimelineEvent");
  return UpdateTimelineEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTimelineEventOutcomeCallable SSMIncidentsClient::UpdateTimelineEventCallable(const UpdateTimelineEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTimelineEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTimelineEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSMIncidentsClientUpdateTimelineEventAsyncHelper(SSMIncidentsClient const * const clientThis, const UpdateTimelineEventRequest& request, const UpdateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTimelineEvent(request), context);
}

void SSMIncidentsClient::UpdateTimelineEventAsync(const UpdateTimelineEventRequest& request, const UpdateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SSMIncidentsClientUpdateTimelineEventAsyncHelper( this, request, handler, context ); } );
}

