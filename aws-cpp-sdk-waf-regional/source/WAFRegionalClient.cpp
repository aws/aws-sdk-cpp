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

#include <aws/waf-regional/WAFRegionalClient.h>
#include <aws/waf-regional/WAFRegionalErrorMarshaller.h>
#include <aws/waf-regional/WAFRegionalEndpointProvider.h>
#include <aws/waf-regional/model/AssociateWebACLRequest.h>
#include <aws/waf-regional/model/CreateByteMatchSetRequest.h>
#include <aws/waf-regional/model/CreateGeoMatchSetRequest.h>
#include <aws/waf-regional/model/CreateIPSetRequest.h>
#include <aws/waf-regional/model/CreateRateBasedRuleRequest.h>
#include <aws/waf-regional/model/CreateRegexMatchSetRequest.h>
#include <aws/waf-regional/model/CreateRegexPatternSetRequest.h>
#include <aws/waf-regional/model/CreateRuleRequest.h>
#include <aws/waf-regional/model/CreateRuleGroupRequest.h>
#include <aws/waf-regional/model/CreateSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/CreateSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/CreateWebACLRequest.h>
#include <aws/waf-regional/model/CreateWebACLMigrationStackRequest.h>
#include <aws/waf-regional/model/CreateXssMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteByteMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteGeoMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteIPSetRequest.h>
#include <aws/waf-regional/model/DeleteLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/DeletePermissionPolicyRequest.h>
#include <aws/waf-regional/model/DeleteRateBasedRuleRequest.h>
#include <aws/waf-regional/model/DeleteRegexMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteRegexPatternSetRequest.h>
#include <aws/waf-regional/model/DeleteRuleRequest.h>
#include <aws/waf-regional/model/DeleteRuleGroupRequest.h>
#include <aws/waf-regional/model/DeleteSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/DeleteSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteWebACLRequest.h>
#include <aws/waf-regional/model/DeleteXssMatchSetRequest.h>
#include <aws/waf-regional/model/DisassociateWebACLRequest.h>
#include <aws/waf-regional/model/GetByteMatchSetRequest.h>
#include <aws/waf-regional/model/GetChangeTokenRequest.h>
#include <aws/waf-regional/model/GetChangeTokenStatusRequest.h>
#include <aws/waf-regional/model/GetGeoMatchSetRequest.h>
#include <aws/waf-regional/model/GetIPSetRequest.h>
#include <aws/waf-regional/model/GetLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/GetPermissionPolicyRequest.h>
#include <aws/waf-regional/model/GetRateBasedRuleRequest.h>
#include <aws/waf-regional/model/GetRateBasedRuleManagedKeysRequest.h>
#include <aws/waf-regional/model/GetRegexMatchSetRequest.h>
#include <aws/waf-regional/model/GetRegexPatternSetRequest.h>
#include <aws/waf-regional/model/GetRuleRequest.h>
#include <aws/waf-regional/model/GetRuleGroupRequest.h>
#include <aws/waf-regional/model/GetSampledRequestsRequest.h>
#include <aws/waf-regional/model/GetSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/GetSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/GetWebACLRequest.h>
#include <aws/waf-regional/model/GetWebACLForResourceRequest.h>
#include <aws/waf-regional/model/GetXssMatchSetRequest.h>
#include <aws/waf-regional/model/ListActivatedRulesInRuleGroupRequest.h>
#include <aws/waf-regional/model/ListByteMatchSetsRequest.h>
#include <aws/waf-regional/model/ListGeoMatchSetsRequest.h>
#include <aws/waf-regional/model/ListIPSetsRequest.h>
#include <aws/waf-regional/model/ListLoggingConfigurationsRequest.h>
#include <aws/waf-regional/model/ListRateBasedRulesRequest.h>
#include <aws/waf-regional/model/ListRegexMatchSetsRequest.h>
#include <aws/waf-regional/model/ListRegexPatternSetsRequest.h>
#include <aws/waf-regional/model/ListResourcesForWebACLRequest.h>
#include <aws/waf-regional/model/ListRuleGroupsRequest.h>
#include <aws/waf-regional/model/ListRulesRequest.h>
#include <aws/waf-regional/model/ListSizeConstraintSetsRequest.h>
#include <aws/waf-regional/model/ListSqlInjectionMatchSetsRequest.h>
#include <aws/waf-regional/model/ListSubscribedRuleGroupsRequest.h>
#include <aws/waf-regional/model/ListTagsForResourceRequest.h>
#include <aws/waf-regional/model/ListWebACLsRequest.h>
#include <aws/waf-regional/model/ListXssMatchSetsRequest.h>
#include <aws/waf-regional/model/PutLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/PutPermissionPolicyRequest.h>
#include <aws/waf-regional/model/TagResourceRequest.h>
#include <aws/waf-regional/model/UntagResourceRequest.h>
#include <aws/waf-regional/model/UpdateByteMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateGeoMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateIPSetRequest.h>
#include <aws/waf-regional/model/UpdateRateBasedRuleRequest.h>
#include <aws/waf-regional/model/UpdateRegexMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateRegexPatternSetRequest.h>
#include <aws/waf-regional/model/UpdateRuleRequest.h>
#include <aws/waf-regional/model/UpdateRuleGroupRequest.h>
#include <aws/waf-regional/model/UpdateSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/UpdateSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateWebACLRequest.h>
#include <aws/waf-regional/model/UpdateXssMatchSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WAFRegional;
using namespace Aws::WAFRegional::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* WAFRegionalClient::SERVICE_NAME = "waf-regional";
const char* WAFRegionalClient::ALLOCATION_TAG = "WAFRegionalClient";

WAFRegionalClient::WAFRegionalClient(const WAFRegional::WAFRegionalClientConfiguration& clientConfiguration,
                                     std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const AWSCredentials& credentials,
                                     std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider,
                                     const WAFRegional::WAFRegionalClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<WAFRegionalEndpointProviderBase> endpointProvider,
                                     const WAFRegional::WAFRegionalClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  WAFRegionalClient::WAFRegionalClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WAFRegionalEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
WAFRegionalClient::~WAFRegionalClient()
{
}

std::shared_ptr<WAFRegionalEndpointProviderBase>& WAFRegionalClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WAFRegionalClient::init(const WAFRegional::WAFRegionalClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WAF Regional");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void WAFRegionalClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateWebACLOutcome WAFRegionalClient::AssociateWebACL(const AssociateWebACLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateWebACLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateWebACLOutcomeCallable WAFRegionalClient::AssociateWebACLCallable(const AssociateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::AssociateWebACLAsync(const AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateWebACL(request), context);
    } );
}

CreateByteMatchSetOutcome WAFRegionalClient::CreateByteMatchSet(const CreateByteMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateByteMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateByteMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateByteMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateByteMatchSetOutcomeCallable WAFRegionalClient::CreateByteMatchSetCallable(const CreateByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateByteMatchSetAsync(const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateByteMatchSet(request), context);
    } );
}

CreateGeoMatchSetOutcome WAFRegionalClient::CreateGeoMatchSet(const CreateGeoMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGeoMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGeoMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGeoMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGeoMatchSetOutcomeCallable WAFRegionalClient::CreateGeoMatchSetCallable(const CreateGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateGeoMatchSetAsync(const CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateGeoMatchSet(request), context);
    } );
}

CreateIPSetOutcome WAFRegionalClient::CreateIPSet(const CreateIPSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIPSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIPSetOutcomeCallable WAFRegionalClient::CreateIPSetCallable(const CreateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateIPSetAsync(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateIPSet(request), context);
    } );
}

CreateRateBasedRuleOutcome WAFRegionalClient::CreateRateBasedRule(const CreateRateBasedRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRateBasedRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRateBasedRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRateBasedRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRateBasedRuleOutcomeCallable WAFRegionalClient::CreateRateBasedRuleCallable(const CreateRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRateBasedRuleAsync(const CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRateBasedRule(request), context);
    } );
}

CreateRegexMatchSetOutcome WAFRegionalClient::CreateRegexMatchSet(const CreateRegexMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRegexMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRegexMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRegexMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegexMatchSetOutcomeCallable WAFRegionalClient::CreateRegexMatchSetCallable(const CreateRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRegexMatchSetAsync(const CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRegexMatchSet(request), context);
    } );
}

CreateRegexPatternSetOutcome WAFRegionalClient::CreateRegexPatternSet(const CreateRegexPatternSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRegexPatternSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRegexPatternSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRegexPatternSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegexPatternSetOutcomeCallable WAFRegionalClient::CreateRegexPatternSetCallable(const CreateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRegexPatternSetAsync(const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRegexPatternSet(request), context);
    } );
}

CreateRuleOutcome WAFRegionalClient::CreateRule(const CreateRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleOutcomeCallable WAFRegionalClient::CreateRuleCallable(const CreateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRule(request), context);
    } );
}

CreateRuleGroupOutcome WAFRegionalClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRuleGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleGroupOutcomeCallable WAFRegionalClient::CreateRuleGroupCallable(const CreateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRuleGroupAsync(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRuleGroup(request), context);
    } );
}

CreateSizeConstraintSetOutcome WAFRegionalClient::CreateSizeConstraintSet(const CreateSizeConstraintSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSizeConstraintSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSizeConstraintSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSizeConstraintSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSizeConstraintSetOutcomeCallable WAFRegionalClient::CreateSizeConstraintSetCallable(const CreateSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateSizeConstraintSetAsync(const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSizeConstraintSet(request), context);
    } );
}

CreateSqlInjectionMatchSetOutcome WAFRegionalClient::CreateSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSqlInjectionMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSqlInjectionMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSqlInjectionMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::CreateSqlInjectionMatchSetCallable(const CreateSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateSqlInjectionMatchSetAsync(const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSqlInjectionMatchSet(request), context);
    } );
}

CreateWebACLOutcome WAFRegionalClient::CreateWebACL(const CreateWebACLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWebACLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebACLOutcomeCallable WAFRegionalClient::CreateWebACLCallable(const CreateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateWebACLAsync(const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWebACL(request), context);
    } );
}

CreateWebACLMigrationStackOutcome WAFRegionalClient::CreateWebACLMigrationStack(const CreateWebACLMigrationStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWebACLMigrationStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWebACLMigrationStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWebACLMigrationStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebACLMigrationStackOutcomeCallable WAFRegionalClient::CreateWebACLMigrationStackCallable(const CreateWebACLMigrationStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebACLMigrationStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebACLMigrationStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateWebACLMigrationStackAsync(const CreateWebACLMigrationStackRequest& request, const CreateWebACLMigrationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWebACLMigrationStack(request), context);
    } );
}

CreateXssMatchSetOutcome WAFRegionalClient::CreateXssMatchSet(const CreateXssMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateXssMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateXssMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateXssMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateXssMatchSetOutcomeCallable WAFRegionalClient::CreateXssMatchSetCallable(const CreateXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateXssMatchSetAsync(const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateXssMatchSet(request), context);
    } );
}

DeleteByteMatchSetOutcome WAFRegionalClient::DeleteByteMatchSet(const DeleteByteMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteByteMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteByteMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteByteMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteByteMatchSetOutcomeCallable WAFRegionalClient::DeleteByteMatchSetCallable(const DeleteByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteByteMatchSetAsync(const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteByteMatchSet(request), context);
    } );
}

DeleteGeoMatchSetOutcome WAFRegionalClient::DeleteGeoMatchSet(const DeleteGeoMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGeoMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGeoMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGeoMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGeoMatchSetOutcomeCallable WAFRegionalClient::DeleteGeoMatchSetCallable(const DeleteGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteGeoMatchSetAsync(const DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGeoMatchSet(request), context);
    } );
}

DeleteIPSetOutcome WAFRegionalClient::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIPSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIPSetOutcomeCallable WAFRegionalClient::DeleteIPSetCallable(const DeleteIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteIPSetAsync(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIPSet(request), context);
    } );
}

DeleteLoggingConfigurationOutcome WAFRegionalClient::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoggingConfigurationOutcomeCallable WAFRegionalClient::DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLoggingConfiguration(request), context);
    } );
}

DeletePermissionPolicyOutcome WAFRegionalClient::DeletePermissionPolicy(const DeletePermissionPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePermissionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePermissionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePermissionPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionPolicyOutcomeCallable WAFRegionalClient::DeletePermissionPolicyCallable(const DeletePermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeletePermissionPolicyAsync(const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePermissionPolicy(request), context);
    } );
}

DeleteRateBasedRuleOutcome WAFRegionalClient::DeleteRateBasedRule(const DeleteRateBasedRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRateBasedRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRateBasedRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRateBasedRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRateBasedRuleOutcomeCallable WAFRegionalClient::DeleteRateBasedRuleCallable(const DeleteRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRateBasedRuleAsync(const DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRateBasedRule(request), context);
    } );
}

DeleteRegexMatchSetOutcome WAFRegionalClient::DeleteRegexMatchSet(const DeleteRegexMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRegexMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRegexMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRegexMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegexMatchSetOutcomeCallable WAFRegionalClient::DeleteRegexMatchSetCallable(const DeleteRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRegexMatchSetAsync(const DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRegexMatchSet(request), context);
    } );
}

DeleteRegexPatternSetOutcome WAFRegionalClient::DeleteRegexPatternSet(const DeleteRegexPatternSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRegexPatternSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRegexPatternSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRegexPatternSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegexPatternSetOutcomeCallable WAFRegionalClient::DeleteRegexPatternSetCallable(const DeleteRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRegexPatternSetAsync(const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRegexPatternSet(request), context);
    } );
}

DeleteRuleOutcome WAFRegionalClient::DeleteRule(const DeleteRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcomeCallable WAFRegionalClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRule(request), context);
    } );
}

DeleteRuleGroupOutcome WAFRegionalClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRuleGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleGroupOutcomeCallable WAFRegionalClient::DeleteRuleGroupCallable(const DeleteRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRuleGroup(request), context);
    } );
}

DeleteSizeConstraintSetOutcome WAFRegionalClient::DeleteSizeConstraintSet(const DeleteSizeConstraintSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSizeConstraintSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSizeConstraintSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSizeConstraintSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSizeConstraintSetOutcomeCallable WAFRegionalClient::DeleteSizeConstraintSetCallable(const DeleteSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteSizeConstraintSetAsync(const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSizeConstraintSet(request), context);
    } );
}

DeleteSqlInjectionMatchSetOutcome WAFRegionalClient::DeleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSqlInjectionMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSqlInjectionMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSqlInjectionMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::DeleteSqlInjectionMatchSetCallable(const DeleteSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteSqlInjectionMatchSetAsync(const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSqlInjectionMatchSet(request), context);
    } );
}

DeleteWebACLOutcome WAFRegionalClient::DeleteWebACL(const DeleteWebACLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWebACLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebACLOutcomeCallable WAFRegionalClient::DeleteWebACLCallable(const DeleteWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteWebACLAsync(const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWebACL(request), context);
    } );
}

DeleteXssMatchSetOutcome WAFRegionalClient::DeleteXssMatchSet(const DeleteXssMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteXssMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteXssMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteXssMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteXssMatchSetOutcomeCallable WAFRegionalClient::DeleteXssMatchSetCallable(const DeleteXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteXssMatchSetAsync(const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteXssMatchSet(request), context);
    } );
}

DisassociateWebACLOutcome WAFRegionalClient::DisassociateWebACL(const DisassociateWebACLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateWebACLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWebACLOutcomeCallable WAFRegionalClient::DisassociateWebACLCallable(const DisassociateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DisassociateWebACLAsync(const DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateWebACL(request), context);
    } );
}

GetByteMatchSetOutcome WAFRegionalClient::GetByteMatchSet(const GetByteMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetByteMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetByteMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetByteMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetByteMatchSetOutcomeCallable WAFRegionalClient::GetByteMatchSetCallable(const GetByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetByteMatchSetAsync(const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetByteMatchSet(request), context);
    } );
}

GetChangeTokenOutcome WAFRegionalClient::GetChangeToken(const GetChangeTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChangeToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChangeToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetChangeTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetChangeTokenOutcomeCallable WAFRegionalClient::GetChangeTokenCallable(const GetChangeTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetChangeTokenAsync(const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetChangeToken(request), context);
    } );
}

GetChangeTokenStatusOutcome WAFRegionalClient::GetChangeTokenStatus(const GetChangeTokenStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChangeTokenStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChangeTokenStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetChangeTokenStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetChangeTokenStatusOutcomeCallable WAFRegionalClient::GetChangeTokenStatusCallable(const GetChangeTokenStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeTokenStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeTokenStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetChangeTokenStatusAsync(const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetChangeTokenStatus(request), context);
    } );
}

GetGeoMatchSetOutcome WAFRegionalClient::GetGeoMatchSet(const GetGeoMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGeoMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGeoMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetGeoMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGeoMatchSetOutcomeCallable WAFRegionalClient::GetGeoMatchSetCallable(const GetGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetGeoMatchSetAsync(const GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGeoMatchSet(request), context);
    } );
}

GetIPSetOutcome WAFRegionalClient::GetIPSet(const GetIPSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIPSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIPSetOutcomeCallable WAFRegionalClient::GetIPSetCallable(const GetIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetIPSetAsync(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIPSet(request), context);
    } );
}

GetLoggingConfigurationOutcome WAFRegionalClient::GetLoggingConfiguration(const GetLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoggingConfigurationOutcomeCallable WAFRegionalClient::GetLoggingConfigurationCallable(const GetLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetLoggingConfigurationAsync(const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoggingConfiguration(request), context);
    } );
}

GetPermissionPolicyOutcome WAFRegionalClient::GetPermissionPolicy(const GetPermissionPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPermissionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPermissionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPermissionPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPermissionPolicyOutcomeCallable WAFRegionalClient::GetPermissionPolicyCallable(const GetPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetPermissionPolicyAsync(const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPermissionPolicy(request), context);
    } );
}

GetRateBasedRuleOutcome WAFRegionalClient::GetRateBasedRule(const GetRateBasedRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRateBasedRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRateBasedRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRateBasedRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRateBasedRuleOutcomeCallable WAFRegionalClient::GetRateBasedRuleCallable(const GetRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRateBasedRuleAsync(const GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRateBasedRule(request), context);
    } );
}

GetRateBasedRuleManagedKeysOutcome WAFRegionalClient::GetRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRateBasedRuleManagedKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRateBasedRuleManagedKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRateBasedRuleManagedKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRateBasedRuleManagedKeysOutcomeCallable WAFRegionalClient::GetRateBasedRuleManagedKeysCallable(const GetRateBasedRuleManagedKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedRuleManagedKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedRuleManagedKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRateBasedRuleManagedKeysAsync(const GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRateBasedRuleManagedKeys(request), context);
    } );
}

GetRegexMatchSetOutcome WAFRegionalClient::GetRegexMatchSet(const GetRegexMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRegexMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRegexMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRegexMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegexMatchSetOutcomeCallable WAFRegionalClient::GetRegexMatchSetCallable(const GetRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRegexMatchSetAsync(const GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRegexMatchSet(request), context);
    } );
}

GetRegexPatternSetOutcome WAFRegionalClient::GetRegexPatternSet(const GetRegexPatternSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRegexPatternSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRegexPatternSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRegexPatternSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegexPatternSetOutcomeCallable WAFRegionalClient::GetRegexPatternSetCallable(const GetRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRegexPatternSetAsync(const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRegexPatternSet(request), context);
    } );
}

GetRuleOutcome WAFRegionalClient::GetRule(const GetRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRuleOutcomeCallable WAFRegionalClient::GetRuleCallable(const GetRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRuleAsync(const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRule(request), context);
    } );
}

GetRuleGroupOutcome WAFRegionalClient::GetRuleGroup(const GetRuleGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRuleGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRuleGroupOutcomeCallable WAFRegionalClient::GetRuleGroupCallable(const GetRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRuleGroupAsync(const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRuleGroup(request), context);
    } );
}

GetSampledRequestsOutcome WAFRegionalClient::GetSampledRequests(const GetSampledRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSampledRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSampledRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSampledRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSampledRequestsOutcomeCallable WAFRegionalClient::GetSampledRequestsCallable(const GetSampledRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSampledRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSampledRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetSampledRequestsAsync(const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSampledRequests(request), context);
    } );
}

GetSizeConstraintSetOutcome WAFRegionalClient::GetSizeConstraintSet(const GetSizeConstraintSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSizeConstraintSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSizeConstraintSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSizeConstraintSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSizeConstraintSetOutcomeCallable WAFRegionalClient::GetSizeConstraintSetCallable(const GetSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetSizeConstraintSetAsync(const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSizeConstraintSet(request), context);
    } );
}

GetSqlInjectionMatchSetOutcome WAFRegionalClient::GetSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSqlInjectionMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSqlInjectionMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSqlInjectionMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::GetSqlInjectionMatchSetCallable(const GetSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetSqlInjectionMatchSetAsync(const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSqlInjectionMatchSet(request), context);
    } );
}

GetWebACLOutcome WAFRegionalClient::GetWebACL(const GetWebACLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetWebACLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWebACLOutcomeCallable WAFRegionalClient::GetWebACLCallable(const GetWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetWebACLAsync(const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWebACL(request), context);
    } );
}

GetWebACLForResourceOutcome WAFRegionalClient::GetWebACLForResource(const GetWebACLForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWebACLForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWebACLForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetWebACLForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWebACLForResourceOutcomeCallable WAFRegionalClient::GetWebACLForResourceCallable(const GetWebACLForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACLForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetWebACLForResourceAsync(const GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWebACLForResource(request), context);
    } );
}

GetXssMatchSetOutcome WAFRegionalClient::GetXssMatchSet(const GetXssMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetXssMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetXssMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetXssMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetXssMatchSetOutcomeCallable WAFRegionalClient::GetXssMatchSetCallable(const GetXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetXssMatchSetAsync(const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetXssMatchSet(request), context);
    } );
}

ListActivatedRulesInRuleGroupOutcome WAFRegionalClient::ListActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListActivatedRulesInRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListActivatedRulesInRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListActivatedRulesInRuleGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListActivatedRulesInRuleGroupOutcomeCallable WAFRegionalClient::ListActivatedRulesInRuleGroupCallable(const ListActivatedRulesInRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActivatedRulesInRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActivatedRulesInRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListActivatedRulesInRuleGroupAsync(const ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListActivatedRulesInRuleGroup(request), context);
    } );
}

ListByteMatchSetsOutcome WAFRegionalClient::ListByteMatchSets(const ListByteMatchSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListByteMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListByteMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListByteMatchSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListByteMatchSetsOutcomeCallable WAFRegionalClient::ListByteMatchSetsCallable(const ListByteMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListByteMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListByteMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListByteMatchSetsAsync(const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListByteMatchSets(request), context);
    } );
}

ListGeoMatchSetsOutcome WAFRegionalClient::ListGeoMatchSets(const ListGeoMatchSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGeoMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGeoMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGeoMatchSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGeoMatchSetsOutcomeCallable WAFRegionalClient::ListGeoMatchSetsCallable(const ListGeoMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeoMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeoMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListGeoMatchSetsAsync(const ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGeoMatchSets(request), context);
    } );
}

ListIPSetsOutcome WAFRegionalClient::ListIPSets(const ListIPSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIPSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIPSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListIPSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIPSetsOutcomeCallable WAFRegionalClient::ListIPSetsCallable(const ListIPSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIPSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIPSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListIPSetsAsync(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIPSets(request), context);
    } );
}

ListLoggingConfigurationsOutcome WAFRegionalClient::ListLoggingConfigurations(const ListLoggingConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLoggingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLoggingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLoggingConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLoggingConfigurationsOutcomeCallable WAFRegionalClient::ListLoggingConfigurationsCallable(const ListLoggingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListLoggingConfigurationsAsync(const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLoggingConfigurations(request), context);
    } );
}

ListRateBasedRulesOutcome WAFRegionalClient::ListRateBasedRules(const ListRateBasedRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRateBasedRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRateBasedRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRateBasedRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRateBasedRulesOutcomeCallable WAFRegionalClient::ListRateBasedRulesCallable(const ListRateBasedRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRateBasedRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRateBasedRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRateBasedRulesAsync(const ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRateBasedRules(request), context);
    } );
}

ListRegexMatchSetsOutcome WAFRegionalClient::ListRegexMatchSets(const ListRegexMatchSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRegexMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRegexMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRegexMatchSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRegexMatchSetsOutcomeCallable WAFRegionalClient::ListRegexMatchSetsCallable(const ListRegexMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRegexMatchSetsAsync(const ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRegexMatchSets(request), context);
    } );
}

ListRegexPatternSetsOutcome WAFRegionalClient::ListRegexPatternSets(const ListRegexPatternSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRegexPatternSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRegexPatternSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRegexPatternSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRegexPatternSetsOutcomeCallable WAFRegionalClient::ListRegexPatternSetsCallable(const ListRegexPatternSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexPatternSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexPatternSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRegexPatternSetsAsync(const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRegexPatternSets(request), context);
    } );
}

ListResourcesForWebACLOutcome WAFRegionalClient::ListResourcesForWebACL(const ListResourcesForWebACLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourcesForWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourcesForWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourcesForWebACLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesForWebACLOutcomeCallable WAFRegionalClient::ListResourcesForWebACLCallable(const ListResourcesForWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesForWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesForWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListResourcesForWebACLAsync(const ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResourcesForWebACL(request), context);
    } );
}

ListRuleGroupsOutcome WAFRegionalClient::ListRuleGroups(const ListRuleGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRuleGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRuleGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRuleGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleGroupsOutcomeCallable WAFRegionalClient::ListRuleGroupsCallable(const ListRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRuleGroupsAsync(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRuleGroups(request), context);
    } );
}

ListRulesOutcome WAFRegionalClient::ListRules(const ListRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcomeCallable WAFRegionalClient::ListRulesCallable(const ListRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRules(request), context);
    } );
}

ListSizeConstraintSetsOutcome WAFRegionalClient::ListSizeConstraintSets(const ListSizeConstraintSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSizeConstraintSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSizeConstraintSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSizeConstraintSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSizeConstraintSetsOutcomeCallable WAFRegionalClient::ListSizeConstraintSetsCallable(const ListSizeConstraintSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSizeConstraintSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSizeConstraintSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListSizeConstraintSetsAsync(const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSizeConstraintSets(request), context);
    } );
}

ListSqlInjectionMatchSetsOutcome WAFRegionalClient::ListSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSqlInjectionMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSqlInjectionMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSqlInjectionMatchSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSqlInjectionMatchSetsOutcomeCallable WAFRegionalClient::ListSqlInjectionMatchSetsCallable(const ListSqlInjectionMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSqlInjectionMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSqlInjectionMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListSqlInjectionMatchSetsAsync(const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSqlInjectionMatchSets(request), context);
    } );
}

ListSubscribedRuleGroupsOutcome WAFRegionalClient::ListSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscribedRuleGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscribedRuleGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSubscribedRuleGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSubscribedRuleGroupsOutcomeCallable WAFRegionalClient::ListSubscribedRuleGroupsCallable(const ListSubscribedRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscribedRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscribedRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListSubscribedRuleGroupsAsync(const ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSubscribedRuleGroups(request), context);
    } );
}

ListTagsForResourceOutcome WAFRegionalClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WAFRegionalClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListWebACLsOutcome WAFRegionalClient::ListWebACLs(const ListWebACLsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWebACLs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWebACLs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWebACLsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWebACLsOutcomeCallable WAFRegionalClient::ListWebACLsCallable(const ListWebACLsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebACLsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebACLs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListWebACLsAsync(const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWebACLs(request), context);
    } );
}

ListXssMatchSetsOutcome WAFRegionalClient::ListXssMatchSets(const ListXssMatchSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListXssMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListXssMatchSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListXssMatchSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListXssMatchSetsOutcomeCallable WAFRegionalClient::ListXssMatchSetsCallable(const ListXssMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListXssMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListXssMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListXssMatchSetsAsync(const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListXssMatchSets(request), context);
    } );
}

PutLoggingConfigurationOutcome WAFRegionalClient::PutLoggingConfiguration(const PutLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingConfigurationOutcomeCallable WAFRegionalClient::PutLoggingConfigurationCallable(const PutLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::PutLoggingConfigurationAsync(const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLoggingConfiguration(request), context);
    } );
}

PutPermissionPolicyOutcome WAFRegionalClient::PutPermissionPolicy(const PutPermissionPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPermissionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPermissionPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutPermissionPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionPolicyOutcomeCallable WAFRegionalClient::PutPermissionPolicyCallable(const PutPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::PutPermissionPolicyAsync(const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutPermissionPolicy(request), context);
    } );
}

TagResourceOutcome WAFRegionalClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WAFRegionalClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome WAFRegionalClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WAFRegionalClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateByteMatchSetOutcome WAFRegionalClient::UpdateByteMatchSet(const UpdateByteMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateByteMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateByteMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateByteMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateByteMatchSetOutcomeCallable WAFRegionalClient::UpdateByteMatchSetCallable(const UpdateByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateByteMatchSetAsync(const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateByteMatchSet(request), context);
    } );
}

UpdateGeoMatchSetOutcome WAFRegionalClient::UpdateGeoMatchSet(const UpdateGeoMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGeoMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGeoMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGeoMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGeoMatchSetOutcomeCallable WAFRegionalClient::UpdateGeoMatchSetCallable(const UpdateGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateGeoMatchSetAsync(const UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGeoMatchSet(request), context);
    } );
}

UpdateIPSetOutcome WAFRegionalClient::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateIPSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIPSetOutcomeCallable WAFRegionalClient::UpdateIPSetCallable(const UpdateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateIPSetAsync(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIPSet(request), context);
    } );
}

UpdateRateBasedRuleOutcome WAFRegionalClient::UpdateRateBasedRule(const UpdateRateBasedRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRateBasedRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRateBasedRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRateBasedRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRateBasedRuleOutcomeCallable WAFRegionalClient::UpdateRateBasedRuleCallable(const UpdateRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRateBasedRuleAsync(const UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRateBasedRule(request), context);
    } );
}

UpdateRegexMatchSetOutcome WAFRegionalClient::UpdateRegexMatchSet(const UpdateRegexMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRegexMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRegexMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRegexMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegexMatchSetOutcomeCallable WAFRegionalClient::UpdateRegexMatchSetCallable(const UpdateRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRegexMatchSetAsync(const UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRegexMatchSet(request), context);
    } );
}

UpdateRegexPatternSetOutcome WAFRegionalClient::UpdateRegexPatternSet(const UpdateRegexPatternSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRegexPatternSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRegexPatternSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRegexPatternSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegexPatternSetOutcomeCallable WAFRegionalClient::UpdateRegexPatternSetCallable(const UpdateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRegexPatternSetAsync(const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRegexPatternSet(request), context);
    } );
}

UpdateRuleOutcome WAFRegionalClient::UpdateRule(const UpdateRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleOutcomeCallable WAFRegionalClient::UpdateRuleCallable(const UpdateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRule(request), context);
    } );
}

UpdateRuleGroupOutcome WAFRegionalClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRuleGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRuleGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleGroupOutcomeCallable WAFRegionalClient::UpdateRuleGroupCallable(const UpdateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRuleGroupAsync(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRuleGroup(request), context);
    } );
}

UpdateSizeConstraintSetOutcome WAFRegionalClient::UpdateSizeConstraintSet(const UpdateSizeConstraintSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSizeConstraintSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSizeConstraintSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSizeConstraintSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSizeConstraintSetOutcomeCallable WAFRegionalClient::UpdateSizeConstraintSetCallable(const UpdateSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateSizeConstraintSetAsync(const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSizeConstraintSet(request), context);
    } );
}

UpdateSqlInjectionMatchSetOutcome WAFRegionalClient::UpdateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSqlInjectionMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSqlInjectionMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSqlInjectionMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::UpdateSqlInjectionMatchSetCallable(const UpdateSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateSqlInjectionMatchSetAsync(const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSqlInjectionMatchSet(request), context);
    } );
}

UpdateWebACLOutcome WAFRegionalClient::UpdateWebACL(const UpdateWebACLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWebACL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateWebACLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWebACLOutcomeCallable WAFRegionalClient::UpdateWebACLCallable(const UpdateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateWebACLAsync(const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWebACL(request), context);
    } );
}

UpdateXssMatchSetOutcome WAFRegionalClient::UpdateXssMatchSet(const UpdateXssMatchSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateXssMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateXssMatchSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateXssMatchSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateXssMatchSetOutcomeCallable WAFRegionalClient::UpdateXssMatchSetCallable(const UpdateXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateXssMatchSetAsync(const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateXssMatchSet(request), context);
    } );
}

