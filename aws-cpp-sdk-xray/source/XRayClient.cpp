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

#include <aws/xray/XRayClient.h>
#include <aws/xray/XRayErrorMarshaller.h>
#include <aws/xray/XRayEndpointProvider.h>
#include <aws/xray/model/BatchGetTracesRequest.h>
#include <aws/xray/model/CreateGroupRequest.h>
#include <aws/xray/model/CreateSamplingRuleRequest.h>
#include <aws/xray/model/DeleteGroupRequest.h>
#include <aws/xray/model/DeleteResourcePolicyRequest.h>
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
#include <aws/xray/model/ListResourcePoliciesRequest.h>
#include <aws/xray/model/ListTagsForResourceRequest.h>
#include <aws/xray/model/PutEncryptionConfigRequest.h>
#include <aws/xray/model/PutResourcePolicyRequest.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* XRayClient::SERVICE_NAME = "xray";
const char* XRayClient::ALLOCATION_TAG = "XRayClient";

XRayClient::XRayClient(const XRay::XRayClientConfiguration& clientConfiguration,
                       std::shared_ptr<XRayEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

XRayClient::XRayClient(const AWSCredentials& credentials,
                       std::shared_ptr<XRayEndpointProviderBase> endpointProvider,
                       const XRay::XRayClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

XRayClient::XRayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<XRayEndpointProviderBase> endpointProvider,
                       const XRay::XRayClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  XRayClient::XRayClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<XRayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

XRayClient::XRayClient(const AWSCredentials& credentials,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<XRayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

XRayClient::XRayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<XRayEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
XRayClient::~XRayClient()
{
}

std::shared_ptr<XRayEndpointProviderBase>& XRayClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void XRayClient::init(const XRay::XRayClientConfiguration& config)
{
  AWSClient::SetServiceClientName("XRay");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void XRayClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchGetTracesOutcome XRayClient::BatchGetTraces(const BatchGetTracesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetTraces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetTraces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/Traces");
  return BatchGetTracesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetTraces(request), context);
    } );
}

CreateGroupOutcome XRayClient::CreateGroup(const CreateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateGroup");
  return CreateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGroup(request), context);
    } );
}

CreateSamplingRuleOutcome XRayClient::CreateSamplingRule(const CreateSamplingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSamplingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSamplingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateSamplingRule");
  return CreateSamplingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSamplingRule(request), context);
    } );
}

DeleteGroupOutcome XRayClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteGroup");
  return DeleteGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGroup(request), context);
    } );
}

DeleteResourcePolicyOutcome XRayClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteResourcePolicy");
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable XRayClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DeleteSamplingRuleOutcome XRayClient::DeleteSamplingRule(const DeleteSamplingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSamplingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSamplingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteSamplingRule");
  return DeleteSamplingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSamplingRule(request), context);
    } );
}

GetEncryptionConfigOutcome XRayClient::GetEncryptionConfig(const GetEncryptionConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEncryptionConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEncryptionConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/EncryptionConfig");
  return GetEncryptionConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEncryptionConfig(request), context);
    } );
}

GetGroupOutcome XRayClient::GetGroup(const GetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetGroup");
  return GetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGroup(request), context);
    } );
}

GetGroupsOutcome XRayClient::GetGroups(const GetGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/Groups");
  return GetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGroups(request), context);
    } );
}

GetInsightOutcome XRayClient::GetInsight(const GetInsightRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsight, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/Insight");
  return GetInsightOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightOutcomeCallable XRayClient::GetInsightCallable(const GetInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetInsightAsync(const GetInsightRequest& request, const GetInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsight(request), context);
    } );
}

GetInsightEventsOutcome XRayClient::GetInsightEvents(const GetInsightEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsightEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsightEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/InsightEvents");
  return GetInsightEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightEventsOutcomeCallable XRayClient::GetInsightEventsCallable(const GetInsightEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetInsightEventsAsync(const GetInsightEventsRequest& request, const GetInsightEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsightEvents(request), context);
    } );
}

GetInsightImpactGraphOutcome XRayClient::GetInsightImpactGraph(const GetInsightImpactGraphRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsightImpactGraph, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsightImpactGraph, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/InsightImpactGraph");
  return GetInsightImpactGraphOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightImpactGraphOutcomeCallable XRayClient::GetInsightImpactGraphCallable(const GetInsightImpactGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightImpactGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightImpactGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetInsightImpactGraphAsync(const GetInsightImpactGraphRequest& request, const GetInsightImpactGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsightImpactGraph(request), context);
    } );
}

GetInsightSummariesOutcome XRayClient::GetInsightSummaries(const GetInsightSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsightSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsightSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/InsightSummaries");
  return GetInsightSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInsightSummariesOutcomeCallable XRayClient::GetInsightSummariesCallable(const GetInsightSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetInsightSummariesAsync(const GetInsightSummariesRequest& request, const GetInsightSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsightSummaries(request), context);
    } );
}

GetSamplingRulesOutcome XRayClient::GetSamplingRules(const GetSamplingRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSamplingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSamplingRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetSamplingRules");
  return GetSamplingRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSamplingRules(request), context);
    } );
}

GetSamplingStatisticSummariesOutcome XRayClient::GetSamplingStatisticSummaries(const GetSamplingStatisticSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSamplingStatisticSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSamplingStatisticSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/SamplingStatisticSummaries");
  return GetSamplingStatisticSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSamplingStatisticSummaries(request), context);
    } );
}

GetSamplingTargetsOutcome XRayClient::GetSamplingTargets(const GetSamplingTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSamplingTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSamplingTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/SamplingTargets");
  return GetSamplingTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSamplingTargets(request), context);
    } );
}

GetServiceGraphOutcome XRayClient::GetServiceGraph(const GetServiceGraphRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceGraph, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceGraph, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ServiceGraph");
  return GetServiceGraphOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceGraph(request), context);
    } );
}

GetTimeSeriesServiceStatisticsOutcome XRayClient::GetTimeSeriesServiceStatistics(const GetTimeSeriesServiceStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTimeSeriesServiceStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTimeSeriesServiceStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TimeSeriesServiceStatistics");
  return GetTimeSeriesServiceStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTimeSeriesServiceStatistics(request), context);
    } );
}

GetTraceGraphOutcome XRayClient::GetTraceGraph(const GetTraceGraphRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTraceGraph, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTraceGraph, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TraceGraph");
  return GetTraceGraphOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTraceGraph(request), context);
    } );
}

GetTraceSummariesOutcome XRayClient::GetTraceSummaries(const GetTraceSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTraceSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTraceSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TraceSummaries");
  return GetTraceSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTraceSummaries(request), context);
    } );
}

ListResourcePoliciesOutcome XRayClient::ListResourcePolicies(const ListResourcePoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourcePolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourcePolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListResourcePolicies");
  return ListResourcePoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcePoliciesOutcomeCallable XRayClient::ListResourcePoliciesCallable(const ListResourcePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::ListResourcePoliciesAsync(const ListResourcePoliciesRequest& request, const ListResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourcePolicies(request), context);
    } );
}

ListTagsForResourceOutcome XRayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListTagsForResource");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable XRayClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutEncryptionConfigOutcome XRayClient::PutEncryptionConfig(const PutEncryptionConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEncryptionConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEncryptionConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutEncryptionConfig");
  return PutEncryptionConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEncryptionConfig(request), context);
    } );
}

PutResourcePolicyOutcome XRayClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutResourcePolicy");
  return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable XRayClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

PutTelemetryRecordsOutcome XRayClient::PutTelemetryRecords(const PutTelemetryRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutTelemetryRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTelemetryRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TelemetryRecords");
  return PutTelemetryRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutTelemetryRecords(request), context);
    } );
}

PutTraceSegmentsOutcome XRayClient::PutTraceSegments(const PutTraceSegmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutTraceSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutTraceSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TraceSegments");
  return PutTraceSegmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutTraceSegments(request), context);
    } );
}

TagResourceOutcome XRayClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable XRayClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome XRayClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable XRayClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateGroupOutcome XRayClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateGroup");
  return UpdateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGroup(request), context);
    } );
}

UpdateSamplingRuleOutcome XRayClient::UpdateSamplingRule(const UpdateSamplingRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSamplingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSamplingRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateSamplingRule");
  return UpdateSamplingRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSamplingRule(request), context);
    } );
}

