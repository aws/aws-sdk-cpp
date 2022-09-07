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

#include <aws/xray/XRayClient.h>
#include <aws/xray/XRayEndpoint.h>
#include <aws/xray/XRayErrorMarshaller.h>
#include <aws/xray/model/BatchGetTracesRequest.h>
#include <aws/xray/model/CreateGroupRequest.h>
#include <aws/xray/model/CreateSamplingRuleRequest.h>
#include <aws/xray/model/DeleteGroupRequest.h>
#include <aws/xray/model/DeleteSamplingRuleRequest.h>
#include <aws/xray/model/GetEncryptionConfigRequest.h>
#include <aws/xray/model/GetGroupRequest.h>
#include <aws/xray/model/GetGroupsRequest.h>
#include <aws/xray/model/GetInsightRequest.h>
#include <aws/xray/model/GetInsightEventsRequest.h>
#include <aws/xray/model/GetInsightImpactGraphRequest.h>
#include <aws/xray/model/GetInsightSummariesRequest.h>
#include <aws/xray/model/GetSamplingRulesRequest.h>
#include <aws/xray/model/GetSamplingStatisticSummariesRequest.h>
#include <aws/xray/model/GetSamplingTargetsRequest.h>
#include <aws/xray/model/GetServiceGraphRequest.h>
#include <aws/xray/model/GetTimeSeriesServiceStatisticsRequest.h>
#include <aws/xray/model/GetTraceGraphRequest.h>
#include <aws/xray/model/GetTraceSummariesRequest.h>
#include <aws/xray/model/ListTagsForResourceRequest.h>
#include <aws/xray/model/PutEncryptionConfigRequest.h>
#include <aws/xray/model/PutTelemetryRecordsRequest.h>
#include <aws/xray/model/PutTraceSegmentsRequest.h>
#include <aws/xray/model/TagResourceRequest.h>
#include <aws/xray/model/UntagResourceRequest.h>
#include <aws/xray/model/UpdateGroupRequest.h>
#include <aws/xray/model/UpdateSamplingRuleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::XRay;
using namespace Aws::XRay::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "xray";
static const char* ALLOCATION_TAG = "XRayClient";

XRayClient::XRayClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::XRayClient(const AWSCredentials& credentials,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::XRayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::~XRayClient()
{
}

void XRayClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("XRay");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + XRayEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void XRayClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchGetTracesOutcome XRayClient::BatchGetTraces(const BatchGetTracesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/Traces");
  return BatchGetTracesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetTracesOutcomeCallable XRayClient::BatchGetTracesCallable(const BatchGetTracesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetTracesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetTraces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientBatchGetTracesAsyncHelper(XRayClient const * const clientThis, const BatchGetTracesRequest& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetTraces(request), context);
}

void XRayClient::BatchGetTracesAsync(const BatchGetTracesRequest& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientBatchGetTracesAsyncHelper( this, request, handler, context ); } );
}

CreateGroupOutcome XRayClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateGroup");
  return CreateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable XRayClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientCreateGroupAsyncHelper(XRayClient const * const clientThis, const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroup(request), context);
}

void XRayClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientCreateGroupAsyncHelper( this, request, handler, context ); } );
}

CreateSamplingRuleOutcome XRayClient::CreateSamplingRule(const CreateSamplingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/CreateSamplingRule");
  return CreateSamplingRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSamplingRuleOutcomeCallable XRayClient::CreateSamplingRuleCallable(const CreateSamplingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSamplingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSamplingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientCreateSamplingRuleAsyncHelper(XRayClient const * const clientThis, const CreateSamplingRuleRequest& request, const CreateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSamplingRule(request), context);
}

void XRayClient::CreateSamplingRuleAsync(const CreateSamplingRuleRequest& request, const CreateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientCreateSamplingRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupOutcome XRayClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteGroup");
  return DeleteGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable XRayClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientDeleteGroupAsyncHelper(XRayClient const * const clientThis, const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroup(request), context);
}

void XRayClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientDeleteGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteSamplingRuleOutcome XRayClient::DeleteSamplingRule(const DeleteSamplingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/DeleteSamplingRule");
  return DeleteSamplingRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSamplingRuleOutcomeCallable XRayClient::DeleteSamplingRuleCallable(const DeleteSamplingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSamplingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSamplingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientDeleteSamplingRuleAsyncHelper(XRayClient const * const clientThis, const DeleteSamplingRuleRequest& request, const DeleteSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSamplingRule(request), context);
}

void XRayClient::DeleteSamplingRuleAsync(const DeleteSamplingRuleRequest& request, const DeleteSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientDeleteSamplingRuleAsyncHelper( this, request, handler, context ); } );
}

GetEncryptionConfigOutcome XRayClient::GetEncryptionConfig(const GetEncryptionConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/EncryptionConfig");
  return GetEncryptionConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEncryptionConfigOutcomeCallable XRayClient::GetEncryptionConfigCallable(const GetEncryptionConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEncryptionConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEncryptionConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetEncryptionConfigAsyncHelper(XRayClient const * const clientThis, const GetEncryptionConfigRequest& request, const GetEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEncryptionConfig(request), context);
}

void XRayClient::GetEncryptionConfigAsync(const GetEncryptionConfigRequest& request, const GetEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetEncryptionConfigAsyncHelper( this, request, handler, context ); } );
}

GetGroupOutcome XRayClient::GetGroup(const GetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetGroup");
  return GetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupOutcomeCallable XRayClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetGroupAsyncHelper(XRayClient const * const clientThis, const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroup(request), context);
}

void XRayClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetGroupAsyncHelper( this, request, handler, context ); } );
}

GetGroupsOutcome XRayClient::GetGroups(const GetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/Groups");
  return GetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupsOutcomeCallable XRayClient::GetGroupsCallable(const GetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetGroupsAsyncHelper(XRayClient const * const clientThis, const GetGroupsRequest& request, const GetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroups(request), context);
}

void XRayClient::GetGroupsAsync(const GetGroupsRequest& request, const GetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetGroupsAsyncHelper( this, request, handler, context ); } );
}

GetInsightOutcome XRayClient::GetInsight(const GetInsightRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/Insight");
  return GetInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightOutcomeCallable XRayClient::GetInsightCallable(const GetInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetInsightAsyncHelper(XRayClient const * const clientThis, const GetInsightRequest& request, const GetInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInsight(request), context);
}

void XRayClient::GetInsightAsync(const GetInsightRequest& request, const GetInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetInsightAsyncHelper( this, request, handler, context ); } );
}

GetInsightEventsOutcome XRayClient::GetInsightEvents(const GetInsightEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/InsightEvents");
  return GetInsightEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightEventsOutcomeCallable XRayClient::GetInsightEventsCallable(const GetInsightEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetInsightEventsAsyncHelper(XRayClient const * const clientThis, const GetInsightEventsRequest& request, const GetInsightEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInsightEvents(request), context);
}

void XRayClient::GetInsightEventsAsync(const GetInsightEventsRequest& request, const GetInsightEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetInsightEventsAsyncHelper( this, request, handler, context ); } );
}

GetInsightImpactGraphOutcome XRayClient::GetInsightImpactGraph(const GetInsightImpactGraphRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/InsightImpactGraph");
  return GetInsightImpactGraphOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightImpactGraphOutcomeCallable XRayClient::GetInsightImpactGraphCallable(const GetInsightImpactGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightImpactGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightImpactGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetInsightImpactGraphAsyncHelper(XRayClient const * const clientThis, const GetInsightImpactGraphRequest& request, const GetInsightImpactGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInsightImpactGraph(request), context);
}

void XRayClient::GetInsightImpactGraphAsync(const GetInsightImpactGraphRequest& request, const GetInsightImpactGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetInsightImpactGraphAsyncHelper( this, request, handler, context ); } );
}

GetInsightSummariesOutcome XRayClient::GetInsightSummaries(const GetInsightSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/InsightSummaries");
  return GetInsightSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightSummariesOutcomeCallable XRayClient::GetInsightSummariesCallable(const GetInsightSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetInsightSummariesAsyncHelper(XRayClient const * const clientThis, const GetInsightSummariesRequest& request, const GetInsightSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInsightSummaries(request), context);
}

void XRayClient::GetInsightSummariesAsync(const GetInsightSummariesRequest& request, const GetInsightSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetInsightSummariesAsyncHelper( this, request, handler, context ); } );
}

GetSamplingRulesOutcome XRayClient::GetSamplingRules(const GetSamplingRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/GetSamplingRules");
  return GetSamplingRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSamplingRulesOutcomeCallable XRayClient::GetSamplingRulesCallable(const GetSamplingRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSamplingRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSamplingRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetSamplingRulesAsyncHelper(XRayClient const * const clientThis, const GetSamplingRulesRequest& request, const GetSamplingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSamplingRules(request), context);
}

void XRayClient::GetSamplingRulesAsync(const GetSamplingRulesRequest& request, const GetSamplingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetSamplingRulesAsyncHelper( this, request, handler, context ); } );
}

GetSamplingStatisticSummariesOutcome XRayClient::GetSamplingStatisticSummaries(const GetSamplingStatisticSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/SamplingStatisticSummaries");
  return GetSamplingStatisticSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSamplingStatisticSummariesOutcomeCallable XRayClient::GetSamplingStatisticSummariesCallable(const GetSamplingStatisticSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSamplingStatisticSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSamplingStatisticSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetSamplingStatisticSummariesAsyncHelper(XRayClient const * const clientThis, const GetSamplingStatisticSummariesRequest& request, const GetSamplingStatisticSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSamplingStatisticSummaries(request), context);
}

void XRayClient::GetSamplingStatisticSummariesAsync(const GetSamplingStatisticSummariesRequest& request, const GetSamplingStatisticSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetSamplingStatisticSummariesAsyncHelper( this, request, handler, context ); } );
}

GetSamplingTargetsOutcome XRayClient::GetSamplingTargets(const GetSamplingTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/SamplingTargets");
  return GetSamplingTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSamplingTargetsOutcomeCallable XRayClient::GetSamplingTargetsCallable(const GetSamplingTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSamplingTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSamplingTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetSamplingTargetsAsyncHelper(XRayClient const * const clientThis, const GetSamplingTargetsRequest& request, const GetSamplingTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSamplingTargets(request), context);
}

void XRayClient::GetSamplingTargetsAsync(const GetSamplingTargetsRequest& request, const GetSamplingTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetSamplingTargetsAsyncHelper( this, request, handler, context ); } );
}

GetServiceGraphOutcome XRayClient::GetServiceGraph(const GetServiceGraphRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ServiceGraph");
  return GetServiceGraphOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceGraphOutcomeCallable XRayClient::GetServiceGraphCallable(const GetServiceGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetServiceGraphAsyncHelper(XRayClient const * const clientThis, const GetServiceGraphRequest& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetServiceGraph(request), context);
}

void XRayClient::GetServiceGraphAsync(const GetServiceGraphRequest& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetServiceGraphAsyncHelper( this, request, handler, context ); } );
}

GetTimeSeriesServiceStatisticsOutcome XRayClient::GetTimeSeriesServiceStatistics(const GetTimeSeriesServiceStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TimeSeriesServiceStatistics");
  return GetTimeSeriesServiceStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTimeSeriesServiceStatisticsOutcomeCallable XRayClient::GetTimeSeriesServiceStatisticsCallable(const GetTimeSeriesServiceStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTimeSeriesServiceStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTimeSeriesServiceStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetTimeSeriesServiceStatisticsAsyncHelper(XRayClient const * const clientThis, const GetTimeSeriesServiceStatisticsRequest& request, const GetTimeSeriesServiceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTimeSeriesServiceStatistics(request), context);
}

void XRayClient::GetTimeSeriesServiceStatisticsAsync(const GetTimeSeriesServiceStatisticsRequest& request, const GetTimeSeriesServiceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetTimeSeriesServiceStatisticsAsyncHelper( this, request, handler, context ); } );
}

GetTraceGraphOutcome XRayClient::GetTraceGraph(const GetTraceGraphRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TraceGraph");
  return GetTraceGraphOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTraceGraphOutcomeCallable XRayClient::GetTraceGraphCallable(const GetTraceGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTraceGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTraceGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetTraceGraphAsyncHelper(XRayClient const * const clientThis, const GetTraceGraphRequest& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTraceGraph(request), context);
}

void XRayClient::GetTraceGraphAsync(const GetTraceGraphRequest& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetTraceGraphAsyncHelper( this, request, handler, context ); } );
}

GetTraceSummariesOutcome XRayClient::GetTraceSummaries(const GetTraceSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TraceSummaries");
  return GetTraceSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTraceSummariesOutcomeCallable XRayClient::GetTraceSummariesCallable(const GetTraceSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTraceSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTraceSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientGetTraceSummariesAsyncHelper(XRayClient const * const clientThis, const GetTraceSummariesRequest& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTraceSummaries(request), context);
}

void XRayClient::GetTraceSummariesAsync(const GetTraceSummariesRequest& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientGetTraceSummariesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome XRayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListTagsForResource");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable XRayClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientListTagsForResourceAsyncHelper(XRayClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void XRayClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutEncryptionConfigOutcome XRayClient::PutEncryptionConfig(const PutEncryptionConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/PutEncryptionConfig");
  return PutEncryptionConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEncryptionConfigOutcomeCallable XRayClient::PutEncryptionConfigCallable(const PutEncryptionConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEncryptionConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEncryptionConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientPutEncryptionConfigAsyncHelper(XRayClient const * const clientThis, const PutEncryptionConfigRequest& request, const PutEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEncryptionConfig(request), context);
}

void XRayClient::PutEncryptionConfigAsync(const PutEncryptionConfigRequest& request, const PutEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientPutEncryptionConfigAsyncHelper( this, request, handler, context ); } );
}

PutTelemetryRecordsOutcome XRayClient::PutTelemetryRecords(const PutTelemetryRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TelemetryRecords");
  return PutTelemetryRecordsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutTelemetryRecordsOutcomeCallable XRayClient::PutTelemetryRecordsCallable(const PutTelemetryRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTelemetryRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTelemetryRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientPutTelemetryRecordsAsyncHelper(XRayClient const * const clientThis, const PutTelemetryRecordsRequest& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutTelemetryRecords(request), context);
}

void XRayClient::PutTelemetryRecordsAsync(const PutTelemetryRecordsRequest& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientPutTelemetryRecordsAsyncHelper( this, request, handler, context ); } );
}

PutTraceSegmentsOutcome XRayClient::PutTraceSegments(const PutTraceSegmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TraceSegments");
  return PutTraceSegmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutTraceSegmentsOutcomeCallable XRayClient::PutTraceSegmentsCallable(const PutTraceSegmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTraceSegmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTraceSegments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientPutTraceSegmentsAsyncHelper(XRayClient const * const clientThis, const PutTraceSegmentsRequest& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutTraceSegments(request), context);
}

void XRayClient::PutTraceSegmentsAsync(const PutTraceSegmentsRequest& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientPutTraceSegmentsAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome XRayClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TagResource");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable XRayClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientTagResourceAsyncHelper(XRayClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void XRayClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome XRayClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UntagResource");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable XRayClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientUntagResourceAsyncHelper(XRayClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void XRayClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateGroupOutcome XRayClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateGroup");
  return UpdateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcomeCallable XRayClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientUpdateGroupAsyncHelper(XRayClient const * const clientThis, const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGroup(request), context);
}

void XRayClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientUpdateGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateSamplingRuleOutcome XRayClient::UpdateSamplingRule(const UpdateSamplingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UpdateSamplingRule");
  return UpdateSamplingRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSamplingRuleOutcomeCallable XRayClient::UpdateSamplingRuleCallable(const UpdateSamplingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSamplingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSamplingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClientUpdateSamplingRuleAsyncHelper(XRayClient const * const clientThis, const UpdateSamplingRuleRequest& request, const UpdateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSamplingRule(request), context);
}

void XRayClient::UpdateSamplingRuleAsync(const UpdateSamplingRuleRequest& request, const UpdateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ XRayClientUpdateSamplingRuleAsyncHelper( this, request, handler, context ); } );
}

