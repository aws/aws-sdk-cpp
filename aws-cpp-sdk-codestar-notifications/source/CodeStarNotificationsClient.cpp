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

#include <aws/codestar-notifications/CodeStarNotificationsClient.h>
#include <aws/codestar-notifications/CodeStarNotificationsErrorMarshaller.h>
#include <aws/codestar-notifications/CodeStarNotificationsEndpointProvider.h>
#include <aws/codestar-notifications/model/CreateNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/DeleteNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/DeleteTargetRequest.h>
#include <aws/codestar-notifications/model/DescribeNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/ListEventTypesRequest.h>
#include <aws/codestar-notifications/model/ListNotificationRulesRequest.h>
#include <aws/codestar-notifications/model/ListTagsForResourceRequest.h>
#include <aws/codestar-notifications/model/ListTargetsRequest.h>
#include <aws/codestar-notifications/model/SubscribeRequest.h>
#include <aws/codestar-notifications/model/TagResourceRequest.h>
#include <aws/codestar-notifications/model/UnsubscribeRequest.h>
#include <aws/codestar-notifications/model/UntagResourceRequest.h>
#include <aws/codestar-notifications/model/UpdateNotificationRuleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeStarNotifications;
using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CodeStarNotificationsClient::SERVICE_NAME = "codestar-notifications";
const char* CodeStarNotificationsClient::ALLOCATION_TAG = "CodeStarNotificationsClient";

CodeStarNotificationsClient::CodeStarNotificationsClient(const CodeStarNotifications::CodeStarNotificationsClientConfiguration& clientConfiguration,
                                                         std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeStarNotificationsClient::CodeStarNotificationsClient(const AWSCredentials& credentials,
                                                         std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider,
                                                         const CodeStarNotifications::CodeStarNotificationsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeStarNotificationsClient::CodeStarNotificationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                         std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider,
                                                         const CodeStarNotifications::CodeStarNotificationsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CodeStarNotificationsClient::CodeStarNotificationsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CodeStarNotificationsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeStarNotificationsClient::CodeStarNotificationsClient(const AWSCredentials& credentials,
                                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeStarNotificationsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeStarNotificationsClient::CodeStarNotificationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeStarNotificationsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CodeStarNotificationsClient::~CodeStarNotificationsClient()
{
}

std::shared_ptr<CodeStarNotificationsEndpointProviderBase>& CodeStarNotificationsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CodeStarNotificationsClient::init(const CodeStarNotifications::CodeStarNotificationsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("codestar notifications");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CodeStarNotificationsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateNotificationRuleOutcome CodeStarNotificationsClient::CreateNotificationRule(const CreateNotificationRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNotificationRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNotificationRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createNotificationRule");
  return CreateNotificationRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNotificationRuleOutcomeCallable CodeStarNotificationsClient::CreateNotificationRuleCallable(const CreateNotificationRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotificationRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotificationRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::CreateNotificationRuleAsync(const CreateNotificationRuleRequest& request, const CreateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNotificationRule(request), context);
    } );
}

DeleteNotificationRuleOutcome CodeStarNotificationsClient::DeleteNotificationRule(const DeleteNotificationRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNotificationRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNotificationRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteNotificationRule");
  return DeleteNotificationRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNotificationRuleOutcomeCallable CodeStarNotificationsClient::DeleteNotificationRuleCallable(const DeleteNotificationRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotificationRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotificationRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::DeleteNotificationRuleAsync(const DeleteNotificationRuleRequest& request, const DeleteNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNotificationRule(request), context);
    } );
}

DeleteTargetOutcome CodeStarNotificationsClient::DeleteTarget(const DeleteTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteTarget");
  return DeleteTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTargetOutcomeCallable CodeStarNotificationsClient::DeleteTargetCallable(const DeleteTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::DeleteTargetAsync(const DeleteTargetRequest& request, const DeleteTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTarget(request), context);
    } );
}

DescribeNotificationRuleOutcome CodeStarNotificationsClient::DescribeNotificationRule(const DescribeNotificationRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNotificationRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNotificationRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeNotificationRule");
  return DescribeNotificationRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotificationRuleOutcomeCallable CodeStarNotificationsClient::DescribeNotificationRuleCallable(const DescribeNotificationRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotificationRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotificationRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::DescribeNotificationRuleAsync(const DescribeNotificationRuleRequest& request, const DescribeNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNotificationRule(request), context);
    } );
}

ListEventTypesOutcome CodeStarNotificationsClient::ListEventTypes(const ListEventTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listEventTypes");
  return ListEventTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventTypesOutcomeCallable CodeStarNotificationsClient::ListEventTypesCallable(const ListEventTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::ListEventTypesAsync(const ListEventTypesRequest& request, const ListEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventTypes(request), context);
    } );
}

ListNotificationRulesOutcome CodeStarNotificationsClient::ListNotificationRules(const ListNotificationRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotificationRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotificationRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listNotificationRules");
  return ListNotificationRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotificationRulesOutcomeCallable CodeStarNotificationsClient::ListNotificationRulesCallable(const ListNotificationRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotificationRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::ListNotificationRulesAsync(const ListNotificationRulesRequest& request, const ListNotificationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNotificationRules(request), context);
    } );
}

ListTagsForResourceOutcome CodeStarNotificationsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listTagsForResource");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodeStarNotificationsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTargetsOutcome CodeStarNotificationsClient::ListTargets(const ListTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listTargets");
  return ListTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsOutcomeCallable CodeStarNotificationsClient::ListTargetsCallable(const ListTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::ListTargetsAsync(const ListTargetsRequest& request, const ListTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTargets(request), context);
    } );
}

SubscribeOutcome CodeStarNotificationsClient::Subscribe(const SubscribeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Subscribe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Subscribe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscribe");
  return SubscribeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubscribeOutcomeCallable CodeStarNotificationsClient::SubscribeCallable(const SubscribeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubscribeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Subscribe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::SubscribeAsync(const SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Subscribe(request), context);
    } );
}

TagResourceOutcome CodeStarNotificationsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tagResource");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodeStarNotificationsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UnsubscribeOutcome CodeStarNotificationsClient::Unsubscribe(const UnsubscribeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Unsubscribe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Unsubscribe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/unsubscribe");
  return UnsubscribeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnsubscribeOutcomeCallable CodeStarNotificationsClient::UnsubscribeCallable(const UnsubscribeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnsubscribeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Unsubscribe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::UnsubscribeAsync(const UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Unsubscribe(request), context);
    } );
}

UntagResourceOutcome CodeStarNotificationsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeStarNotificationsErrors>(CodeStarNotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeStarNotificationsErrors>(CodeStarNotificationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/untagResource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodeStarNotificationsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateNotificationRuleOutcome CodeStarNotificationsClient::UpdateNotificationRule(const UpdateNotificationRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNotificationRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNotificationRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateNotificationRule");
  return UpdateNotificationRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotificationRuleOutcomeCallable CodeStarNotificationsClient::UpdateNotificationRuleCallable(const UpdateNotificationRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotificationRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotificationRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::UpdateNotificationRuleAsync(const UpdateNotificationRuleRequest& request, const UpdateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNotificationRule(request), context);
    } );
}

