/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/waf/WAFErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/waf/WAFEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WAFClient header */
#include <aws/waf/model/CreateByteMatchSetResult.h>
#include <aws/waf/model/CreateGeoMatchSetResult.h>
#include <aws/waf/model/CreateIPSetResult.h>
#include <aws/waf/model/CreateRateBasedRuleResult.h>
#include <aws/waf/model/CreateRegexMatchSetResult.h>
#include <aws/waf/model/CreateRegexPatternSetResult.h>
#include <aws/waf/model/CreateRuleResult.h>
#include <aws/waf/model/CreateRuleGroupResult.h>
#include <aws/waf/model/CreateSizeConstraintSetResult.h>
#include <aws/waf/model/CreateSqlInjectionMatchSetResult.h>
#include <aws/waf/model/CreateWebACLResult.h>
#include <aws/waf/model/CreateWebACLMigrationStackResult.h>
#include <aws/waf/model/CreateXssMatchSetResult.h>
#include <aws/waf/model/DeleteByteMatchSetResult.h>
#include <aws/waf/model/DeleteGeoMatchSetResult.h>
#include <aws/waf/model/DeleteIPSetResult.h>
#include <aws/waf/model/DeleteLoggingConfigurationResult.h>
#include <aws/waf/model/DeletePermissionPolicyResult.h>
#include <aws/waf/model/DeleteRateBasedRuleResult.h>
#include <aws/waf/model/DeleteRegexMatchSetResult.h>
#include <aws/waf/model/DeleteRegexPatternSetResult.h>
#include <aws/waf/model/DeleteRuleResult.h>
#include <aws/waf/model/DeleteRuleGroupResult.h>
#include <aws/waf/model/DeleteSizeConstraintSetResult.h>
#include <aws/waf/model/DeleteSqlInjectionMatchSetResult.h>
#include <aws/waf/model/DeleteWebACLResult.h>
#include <aws/waf/model/DeleteXssMatchSetResult.h>
#include <aws/waf/model/GetByteMatchSetResult.h>
#include <aws/waf/model/GetChangeTokenResult.h>
#include <aws/waf/model/GetChangeTokenStatusResult.h>
#include <aws/waf/model/GetGeoMatchSetResult.h>
#include <aws/waf/model/GetIPSetResult.h>
#include <aws/waf/model/GetLoggingConfigurationResult.h>
#include <aws/waf/model/GetPermissionPolicyResult.h>
#include <aws/waf/model/GetRateBasedRuleResult.h>
#include <aws/waf/model/GetRateBasedRuleManagedKeysResult.h>
#include <aws/waf/model/GetRegexMatchSetResult.h>
#include <aws/waf/model/GetRegexPatternSetResult.h>
#include <aws/waf/model/GetRuleResult.h>
#include <aws/waf/model/GetRuleGroupResult.h>
#include <aws/waf/model/GetSampledRequestsResult.h>
#include <aws/waf/model/GetSizeConstraintSetResult.h>
#include <aws/waf/model/GetSqlInjectionMatchSetResult.h>
#include <aws/waf/model/GetWebACLResult.h>
#include <aws/waf/model/GetXssMatchSetResult.h>
#include <aws/waf/model/ListActivatedRulesInRuleGroupResult.h>
#include <aws/waf/model/ListByteMatchSetsResult.h>
#include <aws/waf/model/ListGeoMatchSetsResult.h>
#include <aws/waf/model/ListIPSetsResult.h>
#include <aws/waf/model/ListLoggingConfigurationsResult.h>
#include <aws/waf/model/ListRateBasedRulesResult.h>
#include <aws/waf/model/ListRegexMatchSetsResult.h>
#include <aws/waf/model/ListRegexPatternSetsResult.h>
#include <aws/waf/model/ListRuleGroupsResult.h>
#include <aws/waf/model/ListRulesResult.h>
#include <aws/waf/model/ListSizeConstraintSetsResult.h>
#include <aws/waf/model/ListSqlInjectionMatchSetsResult.h>
#include <aws/waf/model/ListSubscribedRuleGroupsResult.h>
#include <aws/waf/model/ListTagsForResourceResult.h>
#include <aws/waf/model/ListWebACLsResult.h>
#include <aws/waf/model/ListXssMatchSetsResult.h>
#include <aws/waf/model/PutLoggingConfigurationResult.h>
#include <aws/waf/model/PutPermissionPolicyResult.h>
#include <aws/waf/model/TagResourceResult.h>
#include <aws/waf/model/UntagResourceResult.h>
#include <aws/waf/model/UpdateByteMatchSetResult.h>
#include <aws/waf/model/UpdateGeoMatchSetResult.h>
#include <aws/waf/model/UpdateIPSetResult.h>
#include <aws/waf/model/UpdateRateBasedRuleResult.h>
#include <aws/waf/model/UpdateRegexMatchSetResult.h>
#include <aws/waf/model/UpdateRegexPatternSetResult.h>
#include <aws/waf/model/UpdateRuleResult.h>
#include <aws/waf/model/UpdateRuleGroupResult.h>
#include <aws/waf/model/UpdateSizeConstraintSetResult.h>
#include <aws/waf/model/UpdateSqlInjectionMatchSetResult.h>
#include <aws/waf/model/UpdateWebACLResult.h>
#include <aws/waf/model/UpdateXssMatchSetResult.h>
/* End of service model headers required in WAFClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace WAF
  {
    using WAFClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WAFEndpointProviderBase = Aws::WAF::Endpoint::WAFEndpointProviderBase;
    using WAFEndpointProvider = Aws::WAF::Endpoint::WAFEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WAFClient header */
      class CreateByteMatchSetRequest;
      class CreateGeoMatchSetRequest;
      class CreateIPSetRequest;
      class CreateRateBasedRuleRequest;
      class CreateRegexMatchSetRequest;
      class CreateRegexPatternSetRequest;
      class CreateRuleRequest;
      class CreateRuleGroupRequest;
      class CreateSizeConstraintSetRequest;
      class CreateSqlInjectionMatchSetRequest;
      class CreateWebACLRequest;
      class CreateWebACLMigrationStackRequest;
      class CreateXssMatchSetRequest;
      class DeleteByteMatchSetRequest;
      class DeleteGeoMatchSetRequest;
      class DeleteIPSetRequest;
      class DeleteLoggingConfigurationRequest;
      class DeletePermissionPolicyRequest;
      class DeleteRateBasedRuleRequest;
      class DeleteRegexMatchSetRequest;
      class DeleteRegexPatternSetRequest;
      class DeleteRuleRequest;
      class DeleteRuleGroupRequest;
      class DeleteSizeConstraintSetRequest;
      class DeleteSqlInjectionMatchSetRequest;
      class DeleteWebACLRequest;
      class DeleteXssMatchSetRequest;
      class GetByteMatchSetRequest;
      class GetChangeTokenRequest;
      class GetChangeTokenStatusRequest;
      class GetGeoMatchSetRequest;
      class GetIPSetRequest;
      class GetLoggingConfigurationRequest;
      class GetPermissionPolicyRequest;
      class GetRateBasedRuleRequest;
      class GetRateBasedRuleManagedKeysRequest;
      class GetRegexMatchSetRequest;
      class GetRegexPatternSetRequest;
      class GetRuleRequest;
      class GetRuleGroupRequest;
      class GetSampledRequestsRequest;
      class GetSizeConstraintSetRequest;
      class GetSqlInjectionMatchSetRequest;
      class GetWebACLRequest;
      class GetXssMatchSetRequest;
      class ListActivatedRulesInRuleGroupRequest;
      class ListByteMatchSetsRequest;
      class ListGeoMatchSetsRequest;
      class ListIPSetsRequest;
      class ListLoggingConfigurationsRequest;
      class ListRateBasedRulesRequest;
      class ListRegexMatchSetsRequest;
      class ListRegexPatternSetsRequest;
      class ListRuleGroupsRequest;
      class ListRulesRequest;
      class ListSizeConstraintSetsRequest;
      class ListSqlInjectionMatchSetsRequest;
      class ListSubscribedRuleGroupsRequest;
      class ListTagsForResourceRequest;
      class ListWebACLsRequest;
      class ListXssMatchSetsRequest;
      class PutLoggingConfigurationRequest;
      class PutPermissionPolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateByteMatchSetRequest;
      class UpdateGeoMatchSetRequest;
      class UpdateIPSetRequest;
      class UpdateRateBasedRuleRequest;
      class UpdateRegexMatchSetRequest;
      class UpdateRegexPatternSetRequest;
      class UpdateRuleRequest;
      class UpdateRuleGroupRequest;
      class UpdateSizeConstraintSetRequest;
      class UpdateSqlInjectionMatchSetRequest;
      class UpdateWebACLRequest;
      class UpdateXssMatchSetRequest;
      /* End of service model forward declarations required in WAFClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateByteMatchSetResult, WAFError> CreateByteMatchSetOutcome;
      typedef Aws::Utils::Outcome<CreateGeoMatchSetResult, WAFError> CreateGeoMatchSetOutcome;
      typedef Aws::Utils::Outcome<CreateIPSetResult, WAFError> CreateIPSetOutcome;
      typedef Aws::Utils::Outcome<CreateRateBasedRuleResult, WAFError> CreateRateBasedRuleOutcome;
      typedef Aws::Utils::Outcome<CreateRegexMatchSetResult, WAFError> CreateRegexMatchSetOutcome;
      typedef Aws::Utils::Outcome<CreateRegexPatternSetResult, WAFError> CreateRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<CreateRuleResult, WAFError> CreateRuleOutcome;
      typedef Aws::Utils::Outcome<CreateRuleGroupResult, WAFError> CreateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSizeConstraintSetResult, WAFError> CreateSizeConstraintSetOutcome;
      typedef Aws::Utils::Outcome<CreateSqlInjectionMatchSetResult, WAFError> CreateSqlInjectionMatchSetOutcome;
      typedef Aws::Utils::Outcome<CreateWebACLResult, WAFError> CreateWebACLOutcome;
      typedef Aws::Utils::Outcome<CreateWebACLMigrationStackResult, WAFError> CreateWebACLMigrationStackOutcome;
      typedef Aws::Utils::Outcome<CreateXssMatchSetResult, WAFError> CreateXssMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteByteMatchSetResult, WAFError> DeleteByteMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteGeoMatchSetResult, WAFError> DeleteGeoMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteIPSetResult, WAFError> DeleteIPSetOutcome;
      typedef Aws::Utils::Outcome<DeleteLoggingConfigurationResult, WAFError> DeleteLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePermissionPolicyResult, WAFError> DeletePermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteRateBasedRuleResult, WAFError> DeleteRateBasedRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteRegexMatchSetResult, WAFError> DeleteRegexMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteRegexPatternSetResult, WAFError> DeleteRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleResult, WAFError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleGroupResult, WAFError> DeleteRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteSizeConstraintSetResult, WAFError> DeleteSizeConstraintSetOutcome;
      typedef Aws::Utils::Outcome<DeleteSqlInjectionMatchSetResult, WAFError> DeleteSqlInjectionMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteWebACLResult, WAFError> DeleteWebACLOutcome;
      typedef Aws::Utils::Outcome<DeleteXssMatchSetResult, WAFError> DeleteXssMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetByteMatchSetResult, WAFError> GetByteMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetChangeTokenResult, WAFError> GetChangeTokenOutcome;
      typedef Aws::Utils::Outcome<GetChangeTokenStatusResult, WAFError> GetChangeTokenStatusOutcome;
      typedef Aws::Utils::Outcome<GetGeoMatchSetResult, WAFError> GetGeoMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetIPSetResult, WAFError> GetIPSetOutcome;
      typedef Aws::Utils::Outcome<GetLoggingConfigurationResult, WAFError> GetLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetPermissionPolicyResult, WAFError> GetPermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<GetRateBasedRuleResult, WAFError> GetRateBasedRuleOutcome;
      typedef Aws::Utils::Outcome<GetRateBasedRuleManagedKeysResult, WAFError> GetRateBasedRuleManagedKeysOutcome;
      typedef Aws::Utils::Outcome<GetRegexMatchSetResult, WAFError> GetRegexMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetRegexPatternSetResult, WAFError> GetRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<GetRuleResult, WAFError> GetRuleOutcome;
      typedef Aws::Utils::Outcome<GetRuleGroupResult, WAFError> GetRuleGroupOutcome;
      typedef Aws::Utils::Outcome<GetSampledRequestsResult, WAFError> GetSampledRequestsOutcome;
      typedef Aws::Utils::Outcome<GetSizeConstraintSetResult, WAFError> GetSizeConstraintSetOutcome;
      typedef Aws::Utils::Outcome<GetSqlInjectionMatchSetResult, WAFError> GetSqlInjectionMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetWebACLResult, WAFError> GetWebACLOutcome;
      typedef Aws::Utils::Outcome<GetXssMatchSetResult, WAFError> GetXssMatchSetOutcome;
      typedef Aws::Utils::Outcome<ListActivatedRulesInRuleGroupResult, WAFError> ListActivatedRulesInRuleGroupOutcome;
      typedef Aws::Utils::Outcome<ListByteMatchSetsResult, WAFError> ListByteMatchSetsOutcome;
      typedef Aws::Utils::Outcome<ListGeoMatchSetsResult, WAFError> ListGeoMatchSetsOutcome;
      typedef Aws::Utils::Outcome<ListIPSetsResult, WAFError> ListIPSetsOutcome;
      typedef Aws::Utils::Outcome<ListLoggingConfigurationsResult, WAFError> ListLoggingConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListRateBasedRulesResult, WAFError> ListRateBasedRulesOutcome;
      typedef Aws::Utils::Outcome<ListRegexMatchSetsResult, WAFError> ListRegexMatchSetsOutcome;
      typedef Aws::Utils::Outcome<ListRegexPatternSetsResult, WAFError> ListRegexPatternSetsOutcome;
      typedef Aws::Utils::Outcome<ListRuleGroupsResult, WAFError> ListRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, WAFError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListSizeConstraintSetsResult, WAFError> ListSizeConstraintSetsOutcome;
      typedef Aws::Utils::Outcome<ListSqlInjectionMatchSetsResult, WAFError> ListSqlInjectionMatchSetsOutcome;
      typedef Aws::Utils::Outcome<ListSubscribedRuleGroupsResult, WAFError> ListSubscribedRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, WAFError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWebACLsResult, WAFError> ListWebACLsOutcome;
      typedef Aws::Utils::Outcome<ListXssMatchSetsResult, WAFError> ListXssMatchSetsOutcome;
      typedef Aws::Utils::Outcome<PutLoggingConfigurationResult, WAFError> PutLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutPermissionPolicyResult, WAFError> PutPermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, WAFError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, WAFError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateByteMatchSetResult, WAFError> UpdateByteMatchSetOutcome;
      typedef Aws::Utils::Outcome<UpdateGeoMatchSetResult, WAFError> UpdateGeoMatchSetOutcome;
      typedef Aws::Utils::Outcome<UpdateIPSetResult, WAFError> UpdateIPSetOutcome;
      typedef Aws::Utils::Outcome<UpdateRateBasedRuleResult, WAFError> UpdateRateBasedRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateRegexMatchSetResult, WAFError> UpdateRegexMatchSetOutcome;
      typedef Aws::Utils::Outcome<UpdateRegexPatternSetResult, WAFError> UpdateRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleResult, WAFError> UpdateRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleGroupResult, WAFError> UpdateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateSizeConstraintSetResult, WAFError> UpdateSizeConstraintSetOutcome;
      typedef Aws::Utils::Outcome<UpdateSqlInjectionMatchSetResult, WAFError> UpdateSqlInjectionMatchSetOutcome;
      typedef Aws::Utils::Outcome<UpdateWebACLResult, WAFError> UpdateWebACLOutcome;
      typedef Aws::Utils::Outcome<UpdateXssMatchSetResult, WAFError> UpdateXssMatchSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateByteMatchSetOutcome> CreateByteMatchSetOutcomeCallable;
      typedef std::future<CreateGeoMatchSetOutcome> CreateGeoMatchSetOutcomeCallable;
      typedef std::future<CreateIPSetOutcome> CreateIPSetOutcomeCallable;
      typedef std::future<CreateRateBasedRuleOutcome> CreateRateBasedRuleOutcomeCallable;
      typedef std::future<CreateRegexMatchSetOutcome> CreateRegexMatchSetOutcomeCallable;
      typedef std::future<CreateRegexPatternSetOutcome> CreateRegexPatternSetOutcomeCallable;
      typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
      typedef std::future<CreateRuleGroupOutcome> CreateRuleGroupOutcomeCallable;
      typedef std::future<CreateSizeConstraintSetOutcome> CreateSizeConstraintSetOutcomeCallable;
      typedef std::future<CreateSqlInjectionMatchSetOutcome> CreateSqlInjectionMatchSetOutcomeCallable;
      typedef std::future<CreateWebACLOutcome> CreateWebACLOutcomeCallable;
      typedef std::future<CreateWebACLMigrationStackOutcome> CreateWebACLMigrationStackOutcomeCallable;
      typedef std::future<CreateXssMatchSetOutcome> CreateXssMatchSetOutcomeCallable;
      typedef std::future<DeleteByteMatchSetOutcome> DeleteByteMatchSetOutcomeCallable;
      typedef std::future<DeleteGeoMatchSetOutcome> DeleteGeoMatchSetOutcomeCallable;
      typedef std::future<DeleteIPSetOutcome> DeleteIPSetOutcomeCallable;
      typedef std::future<DeleteLoggingConfigurationOutcome> DeleteLoggingConfigurationOutcomeCallable;
      typedef std::future<DeletePermissionPolicyOutcome> DeletePermissionPolicyOutcomeCallable;
      typedef std::future<DeleteRateBasedRuleOutcome> DeleteRateBasedRuleOutcomeCallable;
      typedef std::future<DeleteRegexMatchSetOutcome> DeleteRegexMatchSetOutcomeCallable;
      typedef std::future<DeleteRegexPatternSetOutcome> DeleteRegexPatternSetOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<DeleteRuleGroupOutcome> DeleteRuleGroupOutcomeCallable;
      typedef std::future<DeleteSizeConstraintSetOutcome> DeleteSizeConstraintSetOutcomeCallable;
      typedef std::future<DeleteSqlInjectionMatchSetOutcome> DeleteSqlInjectionMatchSetOutcomeCallable;
      typedef std::future<DeleteWebACLOutcome> DeleteWebACLOutcomeCallable;
      typedef std::future<DeleteXssMatchSetOutcome> DeleteXssMatchSetOutcomeCallable;
      typedef std::future<GetByteMatchSetOutcome> GetByteMatchSetOutcomeCallable;
      typedef std::future<GetChangeTokenOutcome> GetChangeTokenOutcomeCallable;
      typedef std::future<GetChangeTokenStatusOutcome> GetChangeTokenStatusOutcomeCallable;
      typedef std::future<GetGeoMatchSetOutcome> GetGeoMatchSetOutcomeCallable;
      typedef std::future<GetIPSetOutcome> GetIPSetOutcomeCallable;
      typedef std::future<GetLoggingConfigurationOutcome> GetLoggingConfigurationOutcomeCallable;
      typedef std::future<GetPermissionPolicyOutcome> GetPermissionPolicyOutcomeCallable;
      typedef std::future<GetRateBasedRuleOutcome> GetRateBasedRuleOutcomeCallable;
      typedef std::future<GetRateBasedRuleManagedKeysOutcome> GetRateBasedRuleManagedKeysOutcomeCallable;
      typedef std::future<GetRegexMatchSetOutcome> GetRegexMatchSetOutcomeCallable;
      typedef std::future<GetRegexPatternSetOutcome> GetRegexPatternSetOutcomeCallable;
      typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
      typedef std::future<GetRuleGroupOutcome> GetRuleGroupOutcomeCallable;
      typedef std::future<GetSampledRequestsOutcome> GetSampledRequestsOutcomeCallable;
      typedef std::future<GetSizeConstraintSetOutcome> GetSizeConstraintSetOutcomeCallable;
      typedef std::future<GetSqlInjectionMatchSetOutcome> GetSqlInjectionMatchSetOutcomeCallable;
      typedef std::future<GetWebACLOutcome> GetWebACLOutcomeCallable;
      typedef std::future<GetXssMatchSetOutcome> GetXssMatchSetOutcomeCallable;
      typedef std::future<ListActivatedRulesInRuleGroupOutcome> ListActivatedRulesInRuleGroupOutcomeCallable;
      typedef std::future<ListByteMatchSetsOutcome> ListByteMatchSetsOutcomeCallable;
      typedef std::future<ListGeoMatchSetsOutcome> ListGeoMatchSetsOutcomeCallable;
      typedef std::future<ListIPSetsOutcome> ListIPSetsOutcomeCallable;
      typedef std::future<ListLoggingConfigurationsOutcome> ListLoggingConfigurationsOutcomeCallable;
      typedef std::future<ListRateBasedRulesOutcome> ListRateBasedRulesOutcomeCallable;
      typedef std::future<ListRegexMatchSetsOutcome> ListRegexMatchSetsOutcomeCallable;
      typedef std::future<ListRegexPatternSetsOutcome> ListRegexPatternSetsOutcomeCallable;
      typedef std::future<ListRuleGroupsOutcome> ListRuleGroupsOutcomeCallable;
      typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
      typedef std::future<ListSizeConstraintSetsOutcome> ListSizeConstraintSetsOutcomeCallable;
      typedef std::future<ListSqlInjectionMatchSetsOutcome> ListSqlInjectionMatchSetsOutcomeCallable;
      typedef std::future<ListSubscribedRuleGroupsOutcome> ListSubscribedRuleGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWebACLsOutcome> ListWebACLsOutcomeCallable;
      typedef std::future<ListXssMatchSetsOutcome> ListXssMatchSetsOutcomeCallable;
      typedef std::future<PutLoggingConfigurationOutcome> PutLoggingConfigurationOutcomeCallable;
      typedef std::future<PutPermissionPolicyOutcome> PutPermissionPolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateByteMatchSetOutcome> UpdateByteMatchSetOutcomeCallable;
      typedef std::future<UpdateGeoMatchSetOutcome> UpdateGeoMatchSetOutcomeCallable;
      typedef std::future<UpdateIPSetOutcome> UpdateIPSetOutcomeCallable;
      typedef std::future<UpdateRateBasedRuleOutcome> UpdateRateBasedRuleOutcomeCallable;
      typedef std::future<UpdateRegexMatchSetOutcome> UpdateRegexMatchSetOutcomeCallable;
      typedef std::future<UpdateRegexPatternSetOutcome> UpdateRegexPatternSetOutcomeCallable;
      typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
      typedef std::future<UpdateRuleGroupOutcome> UpdateRuleGroupOutcomeCallable;
      typedef std::future<UpdateSizeConstraintSetOutcome> UpdateSizeConstraintSetOutcomeCallable;
      typedef std::future<UpdateSqlInjectionMatchSetOutcome> UpdateSqlInjectionMatchSetOutcomeCallable;
      typedef std::future<UpdateWebACLOutcome> UpdateWebACLOutcomeCallable;
      typedef std::future<UpdateXssMatchSetOutcome> UpdateXssMatchSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WAFClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WAFClient*, const Model::CreateByteMatchSetRequest&, const Model::CreateByteMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateByteMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateGeoMatchSetRequest&, const Model::CreateGeoMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGeoMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateIPSetRequest&, const Model::CreateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateRateBasedRuleRequest&, const Model::CreateRateBasedRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRateBasedRuleResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateRegexMatchSetRequest&, const Model::CreateRegexMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegexMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateRegexPatternSetRequest&, const Model::CreateRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateRuleGroupRequest&, const Model::CreateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateSizeConstraintSetRequest&, const Model::CreateSizeConstraintSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSizeConstraintSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateSqlInjectionMatchSetRequest&, const Model::CreateSqlInjectionMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSqlInjectionMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateWebACLRequest&, const Model::CreateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateWebACLMigrationStackRequest&, const Model::CreateWebACLMigrationStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebACLMigrationStackResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::CreateXssMatchSetRequest&, const Model::CreateXssMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateXssMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteByteMatchSetRequest&, const Model::DeleteByteMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteByteMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteGeoMatchSetRequest&, const Model::DeleteGeoMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGeoMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteIPSetRequest&, const Model::DeleteIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteLoggingConfigurationRequest&, const Model::DeleteLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeletePermissionPolicyRequest&, const Model::DeletePermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteRateBasedRuleRequest&, const Model::DeleteRateBasedRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRateBasedRuleResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteRegexMatchSetRequest&, const Model::DeleteRegexMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegexMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteRegexPatternSetRequest&, const Model::DeleteRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteRuleGroupRequest&, const Model::DeleteRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteSizeConstraintSetRequest&, const Model::DeleteSizeConstraintSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSizeConstraintSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteSqlInjectionMatchSetRequest&, const Model::DeleteSqlInjectionMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSqlInjectionMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteWebACLRequest&, const Model::DeleteWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::DeleteXssMatchSetRequest&, const Model::DeleteXssMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteXssMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetByteMatchSetRequest&, const Model::GetByteMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetByteMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetChangeTokenRequest&, const Model::GetChangeTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangeTokenResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetChangeTokenStatusRequest&, const Model::GetChangeTokenStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangeTokenStatusResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetGeoMatchSetRequest&, const Model::GetGeoMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeoMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetIPSetRequest&, const Model::GetIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetLoggingConfigurationRequest&, const Model::GetLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetPermissionPolicyRequest&, const Model::GetPermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetRateBasedRuleRequest&, const Model::GetRateBasedRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRateBasedRuleResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetRateBasedRuleManagedKeysRequest&, const Model::GetRateBasedRuleManagedKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRateBasedRuleManagedKeysResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetRegexMatchSetRequest&, const Model::GetRegexMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegexMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetRegexPatternSetRequest&, const Model::GetRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetRuleRequest&, const Model::GetRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetRuleGroupRequest&, const Model::GetRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetSampledRequestsRequest&, const Model::GetSampledRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSampledRequestsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetSizeConstraintSetRequest&, const Model::GetSizeConstraintSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSizeConstraintSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetSqlInjectionMatchSetRequest&, const Model::GetSqlInjectionMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSqlInjectionMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetWebACLRequest&, const Model::GetWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::GetXssMatchSetRequest&, const Model::GetXssMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetXssMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListActivatedRulesInRuleGroupRequest&, const Model::ListActivatedRulesInRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActivatedRulesInRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListByteMatchSetsRequest&, const Model::ListByteMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListByteMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListGeoMatchSetsRequest&, const Model::ListGeoMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeoMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListIPSetsRequest&, const Model::ListIPSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIPSetsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListLoggingConfigurationsRequest&, const Model::ListLoggingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLoggingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListRateBasedRulesRequest&, const Model::ListRateBasedRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRateBasedRulesResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListRegexMatchSetsRequest&, const Model::ListRegexMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegexMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListRegexPatternSetsRequest&, const Model::ListRegexPatternSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegexPatternSetsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListRuleGroupsRequest&, const Model::ListRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListSizeConstraintSetsRequest&, const Model::ListSizeConstraintSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSizeConstraintSetsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListSqlInjectionMatchSetsRequest&, const Model::ListSqlInjectionMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSqlInjectionMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListSubscribedRuleGroupsRequest&, const Model::ListSubscribedRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscribedRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListWebACLsRequest&, const Model::ListWebACLsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebACLsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::ListXssMatchSetsRequest&, const Model::ListXssMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListXssMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::PutLoggingConfigurationRequest&, const Model::PutLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::PutPermissionPolicyRequest&, const Model::PutPermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateByteMatchSetRequest&, const Model::UpdateByteMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateByteMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateGeoMatchSetRequest&, const Model::UpdateGeoMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGeoMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateIPSetRequest&, const Model::UpdateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateRateBasedRuleRequest&, const Model::UpdateRateBasedRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRateBasedRuleResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateRegexMatchSetRequest&, const Model::UpdateRegexMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegexMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateRegexPatternSetRequest&, const Model::UpdateRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateRuleRequest&, const Model::UpdateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateRuleGroupRequest&, const Model::UpdateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateSizeConstraintSetRequest&, const Model::UpdateSizeConstraintSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSizeConstraintSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateSqlInjectionMatchSetRequest&, const Model::UpdateSqlInjectionMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSqlInjectionMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateWebACLRequest&, const Model::UpdateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFClient*, const Model::UpdateXssMatchSetRequest&, const Model::UpdateXssMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateXssMatchSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WAF
} // namespace Aws
