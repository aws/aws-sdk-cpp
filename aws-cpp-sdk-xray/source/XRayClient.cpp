/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/xray/model/GetSamplingRulesRequest.h>
#include <aws/xray/model/GetSamplingStatisticSummariesRequest.h>
#include <aws/xray/model/GetSamplingTargetsRequest.h>
#include <aws/xray/model/GetServiceGraphRequest.h>
#include <aws/xray/model/GetTimeSeriesServiceStatisticsRequest.h>
#include <aws/xray/model/GetTraceGraphRequest.h>
#include <aws/xray/model/GetTraceSummariesRequest.h>
#include <aws/xray/model/PutEncryptionConfigRequest.h>
#include <aws/xray/model/PutTelemetryRecordsRequest.h>
#include <aws/xray/model/PutTraceSegmentsRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::XRayClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::XRayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::~XRayClient()
{
}

void XRayClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/Traces";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchGetTracesOutcome(BatchGetTracesResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetTracesOutcome(outcome.GetError());
  }
}

BatchGetTracesOutcomeCallable XRayClient::BatchGetTracesCallable(const BatchGetTracesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetTracesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetTraces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::BatchGetTracesAsync(const BatchGetTracesRequest& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetTracesAsyncHelper( request, handler, context ); } );
}

void XRayClient::BatchGetTracesAsyncHelper(const BatchGetTracesRequest& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetTraces(request), context);
}

CreateGroupOutcome XRayClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CreateGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGroupOutcome(CreateGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateGroupOutcome(outcome.GetError());
  }
}

CreateGroupOutcomeCallable XRayClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGroupAsyncHelper( request, handler, context ); } );
}

void XRayClient::CreateGroupAsyncHelper(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGroup(request), context);
}

CreateSamplingRuleOutcome XRayClient::CreateSamplingRule(const CreateSamplingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CreateSamplingRule";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSamplingRuleOutcome(CreateSamplingRuleResult(outcome.GetResult()));
  }
  else
  {
    return CreateSamplingRuleOutcome(outcome.GetError());
  }
}

CreateSamplingRuleOutcomeCallable XRayClient::CreateSamplingRuleCallable(const CreateSamplingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSamplingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSamplingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::CreateSamplingRuleAsync(const CreateSamplingRuleRequest& request, const CreateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSamplingRuleAsyncHelper( request, handler, context ); } );
}

void XRayClient::CreateSamplingRuleAsyncHelper(const CreateSamplingRuleRequest& request, const CreateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSamplingRule(request), context);
}

DeleteGroupOutcome XRayClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DeleteGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGroupOutcome(DeleteGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGroupOutcome(outcome.GetError());
  }
}

DeleteGroupOutcomeCallable XRayClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGroupAsyncHelper( request, handler, context ); } );
}

void XRayClient::DeleteGroupAsyncHelper(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGroup(request), context);
}

DeleteSamplingRuleOutcome XRayClient::DeleteSamplingRule(const DeleteSamplingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DeleteSamplingRule";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSamplingRuleOutcome(DeleteSamplingRuleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSamplingRuleOutcome(outcome.GetError());
  }
}

DeleteSamplingRuleOutcomeCallable XRayClient::DeleteSamplingRuleCallable(const DeleteSamplingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSamplingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSamplingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::DeleteSamplingRuleAsync(const DeleteSamplingRuleRequest& request, const DeleteSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSamplingRuleAsyncHelper( request, handler, context ); } );
}

void XRayClient::DeleteSamplingRuleAsyncHelper(const DeleteSamplingRuleRequest& request, const DeleteSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSamplingRule(request), context);
}

GetEncryptionConfigOutcome XRayClient::GetEncryptionConfig(const GetEncryptionConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/EncryptionConfig";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEncryptionConfigOutcome(GetEncryptionConfigResult(outcome.GetResult()));
  }
  else
  {
    return GetEncryptionConfigOutcome(outcome.GetError());
  }
}

GetEncryptionConfigOutcomeCallable XRayClient::GetEncryptionConfigCallable(const GetEncryptionConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEncryptionConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEncryptionConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetEncryptionConfigAsync(const GetEncryptionConfigRequest& request, const GetEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEncryptionConfigAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetEncryptionConfigAsyncHelper(const GetEncryptionConfigRequest& request, const GetEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEncryptionConfig(request), context);
}

GetGroupOutcome XRayClient::GetGroup(const GetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/GetGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGroupOutcome(GetGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupOutcome(outcome.GetError());
  }
}

GetGroupOutcomeCallable XRayClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetGroupAsyncHelper(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroup(request), context);
}

GetGroupsOutcome XRayClient::GetGroups(const GetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/Groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGroupsOutcome(GetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupsOutcome(outcome.GetError());
  }
}

GetGroupsOutcomeCallable XRayClient::GetGroupsCallable(const GetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetGroupsAsync(const GetGroupsRequest& request, const GetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupsAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetGroupsAsyncHelper(const GetGroupsRequest& request, const GetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroups(request), context);
}

GetSamplingRulesOutcome XRayClient::GetSamplingRules(const GetSamplingRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/GetSamplingRules";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSamplingRulesOutcome(GetSamplingRulesResult(outcome.GetResult()));
  }
  else
  {
    return GetSamplingRulesOutcome(outcome.GetError());
  }
}

GetSamplingRulesOutcomeCallable XRayClient::GetSamplingRulesCallable(const GetSamplingRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSamplingRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSamplingRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetSamplingRulesAsync(const GetSamplingRulesRequest& request, const GetSamplingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSamplingRulesAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetSamplingRulesAsyncHelper(const GetSamplingRulesRequest& request, const GetSamplingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSamplingRules(request), context);
}

GetSamplingStatisticSummariesOutcome XRayClient::GetSamplingStatisticSummaries(const GetSamplingStatisticSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/SamplingStatisticSummaries";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSamplingStatisticSummariesOutcome(GetSamplingStatisticSummariesResult(outcome.GetResult()));
  }
  else
  {
    return GetSamplingStatisticSummariesOutcome(outcome.GetError());
  }
}

GetSamplingStatisticSummariesOutcomeCallable XRayClient::GetSamplingStatisticSummariesCallable(const GetSamplingStatisticSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSamplingStatisticSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSamplingStatisticSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetSamplingStatisticSummariesAsync(const GetSamplingStatisticSummariesRequest& request, const GetSamplingStatisticSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSamplingStatisticSummariesAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetSamplingStatisticSummariesAsyncHelper(const GetSamplingStatisticSummariesRequest& request, const GetSamplingStatisticSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSamplingStatisticSummaries(request), context);
}

GetSamplingTargetsOutcome XRayClient::GetSamplingTargets(const GetSamplingTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/SamplingTargets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSamplingTargetsOutcome(GetSamplingTargetsResult(outcome.GetResult()));
  }
  else
  {
    return GetSamplingTargetsOutcome(outcome.GetError());
  }
}

GetSamplingTargetsOutcomeCallable XRayClient::GetSamplingTargetsCallable(const GetSamplingTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSamplingTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSamplingTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetSamplingTargetsAsync(const GetSamplingTargetsRequest& request, const GetSamplingTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSamplingTargetsAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetSamplingTargetsAsyncHelper(const GetSamplingTargetsRequest& request, const GetSamplingTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSamplingTargets(request), context);
}

GetServiceGraphOutcome XRayClient::GetServiceGraph(const GetServiceGraphRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ServiceGraph";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetServiceGraphOutcome(GetServiceGraphResult(outcome.GetResult()));
  }
  else
  {
    return GetServiceGraphOutcome(outcome.GetError());
  }
}

GetServiceGraphOutcomeCallable XRayClient::GetServiceGraphCallable(const GetServiceGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetServiceGraphAsync(const GetServiceGraphRequest& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceGraphAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetServiceGraphAsyncHelper(const GetServiceGraphRequest& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceGraph(request), context);
}

GetTimeSeriesServiceStatisticsOutcome XRayClient::GetTimeSeriesServiceStatistics(const GetTimeSeriesServiceStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/TimeSeriesServiceStatistics";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTimeSeriesServiceStatisticsOutcome(GetTimeSeriesServiceStatisticsResult(outcome.GetResult()));
  }
  else
  {
    return GetTimeSeriesServiceStatisticsOutcome(outcome.GetError());
  }
}

GetTimeSeriesServiceStatisticsOutcomeCallable XRayClient::GetTimeSeriesServiceStatisticsCallable(const GetTimeSeriesServiceStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTimeSeriesServiceStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTimeSeriesServiceStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetTimeSeriesServiceStatisticsAsync(const GetTimeSeriesServiceStatisticsRequest& request, const GetTimeSeriesServiceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTimeSeriesServiceStatisticsAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetTimeSeriesServiceStatisticsAsyncHelper(const GetTimeSeriesServiceStatisticsRequest& request, const GetTimeSeriesServiceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTimeSeriesServiceStatistics(request), context);
}

GetTraceGraphOutcome XRayClient::GetTraceGraph(const GetTraceGraphRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/TraceGraph";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTraceGraphOutcome(GetTraceGraphResult(outcome.GetResult()));
  }
  else
  {
    return GetTraceGraphOutcome(outcome.GetError());
  }
}

GetTraceGraphOutcomeCallable XRayClient::GetTraceGraphCallable(const GetTraceGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTraceGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTraceGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetTraceGraphAsync(const GetTraceGraphRequest& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTraceGraphAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetTraceGraphAsyncHelper(const GetTraceGraphRequest& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTraceGraph(request), context);
}

GetTraceSummariesOutcome XRayClient::GetTraceSummaries(const GetTraceSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/TraceSummaries";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTraceSummariesOutcome(GetTraceSummariesResult(outcome.GetResult()));
  }
  else
  {
    return GetTraceSummariesOutcome(outcome.GetError());
  }
}

GetTraceSummariesOutcomeCallable XRayClient::GetTraceSummariesCallable(const GetTraceSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTraceSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTraceSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetTraceSummariesAsync(const GetTraceSummariesRequest& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTraceSummariesAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetTraceSummariesAsyncHelper(const GetTraceSummariesRequest& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTraceSummaries(request), context);
}

PutEncryptionConfigOutcome XRayClient::PutEncryptionConfig(const PutEncryptionConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/PutEncryptionConfig";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEncryptionConfigOutcome(PutEncryptionConfigResult(outcome.GetResult()));
  }
  else
  {
    return PutEncryptionConfigOutcome(outcome.GetError());
  }
}

PutEncryptionConfigOutcomeCallable XRayClient::PutEncryptionConfigCallable(const PutEncryptionConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEncryptionConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEncryptionConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::PutEncryptionConfigAsync(const PutEncryptionConfigRequest& request, const PutEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEncryptionConfigAsyncHelper( request, handler, context ); } );
}

void XRayClient::PutEncryptionConfigAsyncHelper(const PutEncryptionConfigRequest& request, const PutEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEncryptionConfig(request), context);
}

PutTelemetryRecordsOutcome XRayClient::PutTelemetryRecords(const PutTelemetryRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/TelemetryRecords";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutTelemetryRecordsOutcome(PutTelemetryRecordsResult(outcome.GetResult()));
  }
  else
  {
    return PutTelemetryRecordsOutcome(outcome.GetError());
  }
}

PutTelemetryRecordsOutcomeCallable XRayClient::PutTelemetryRecordsCallable(const PutTelemetryRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTelemetryRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTelemetryRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::PutTelemetryRecordsAsync(const PutTelemetryRecordsRequest& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutTelemetryRecordsAsyncHelper( request, handler, context ); } );
}

void XRayClient::PutTelemetryRecordsAsyncHelper(const PutTelemetryRecordsRequest& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutTelemetryRecords(request), context);
}

PutTraceSegmentsOutcome XRayClient::PutTraceSegments(const PutTraceSegmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/TraceSegments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutTraceSegmentsOutcome(PutTraceSegmentsResult(outcome.GetResult()));
  }
  else
  {
    return PutTraceSegmentsOutcome(outcome.GetError());
  }
}

PutTraceSegmentsOutcomeCallable XRayClient::PutTraceSegmentsCallable(const PutTraceSegmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTraceSegmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTraceSegments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::PutTraceSegmentsAsync(const PutTraceSegmentsRequest& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutTraceSegmentsAsyncHelper( request, handler, context ); } );
}

void XRayClient::PutTraceSegmentsAsyncHelper(const PutTraceSegmentsRequest& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutTraceSegments(request), context);
}

UpdateGroupOutcome XRayClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UpdateGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGroupOutcome(UpdateGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGroupOutcome(outcome.GetError());
  }
}

UpdateGroupOutcomeCallable XRayClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGroupAsyncHelper( request, handler, context ); } );
}

void XRayClient::UpdateGroupAsyncHelper(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGroup(request), context);
}

UpdateSamplingRuleOutcome XRayClient::UpdateSamplingRule(const UpdateSamplingRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UpdateSamplingRule";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSamplingRuleOutcome(UpdateSamplingRuleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSamplingRuleOutcome(outcome.GetError());
  }
}

UpdateSamplingRuleOutcomeCallable XRayClient::UpdateSamplingRuleCallable(const UpdateSamplingRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSamplingRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSamplingRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::UpdateSamplingRuleAsync(const UpdateSamplingRuleRequest& request, const UpdateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSamplingRuleAsyncHelper( request, handler, context ); } );
}

void XRayClient::UpdateSamplingRuleAsyncHelper(const UpdateSamplingRuleRequest& request, const UpdateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSamplingRule(request), context);
}

