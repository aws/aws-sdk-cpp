/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/waf-regional/WAFRegionalErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/waf-regional/WAFRegionalEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WAFRegionalClient header */
#include <aws/waf-regional/model/AssociateWebACLResult.h>
#include <aws/waf-regional/model/CreateByteMatchSetResult.h>
#include <aws/waf-regional/model/CreateGeoMatchSetResult.h>
#include <aws/waf-regional/model/CreateIPSetResult.h>
#include <aws/waf-regional/model/CreateRateBasedRuleResult.h>
#include <aws/waf-regional/model/CreateRegexMatchSetResult.h>
#include <aws/waf-regional/model/CreateRegexPatternSetResult.h>
#include <aws/waf-regional/model/CreateRuleResult.h>
#include <aws/waf-regional/model/CreateRuleGroupResult.h>
#include <aws/waf-regional/model/CreateSizeConstraintSetResult.h>
#include <aws/waf-regional/model/CreateSqlInjectionMatchSetResult.h>
#include <aws/waf-regional/model/CreateWebACLResult.h>
#include <aws/waf-regional/model/CreateWebACLMigrationStackResult.h>
#include <aws/waf-regional/model/CreateXssMatchSetResult.h>
#include <aws/waf-regional/model/DeleteByteMatchSetResult.h>
#include <aws/waf-regional/model/DeleteGeoMatchSetResult.h>
#include <aws/waf-regional/model/DeleteIPSetResult.h>
#include <aws/waf-regional/model/DeleteLoggingConfigurationResult.h>
#include <aws/waf-regional/model/DeletePermissionPolicyResult.h>
#include <aws/waf-regional/model/DeleteRateBasedRuleResult.h>
#include <aws/waf-regional/model/DeleteRegexMatchSetResult.h>
#include <aws/waf-regional/model/DeleteRegexPatternSetResult.h>
#include <aws/waf-regional/model/DeleteRuleResult.h>
#include <aws/waf-regional/model/DeleteRuleGroupResult.h>
#include <aws/waf-regional/model/DeleteSizeConstraintSetResult.h>
#include <aws/waf-regional/model/DeleteSqlInjectionMatchSetResult.h>
#include <aws/waf-regional/model/DeleteWebACLResult.h>
#include <aws/waf-regional/model/DeleteXssMatchSetResult.h>
#include <aws/waf-regional/model/DisassociateWebACLResult.h>
#include <aws/waf-regional/model/GetByteMatchSetResult.h>
#include <aws/waf-regional/model/GetChangeTokenResult.h>
#include <aws/waf-regional/model/GetChangeTokenStatusResult.h>
#include <aws/waf-regional/model/GetGeoMatchSetResult.h>
#include <aws/waf-regional/model/GetIPSetResult.h>
#include <aws/waf-regional/model/GetLoggingConfigurationResult.h>
#include <aws/waf-regional/model/GetPermissionPolicyResult.h>
#include <aws/waf-regional/model/GetRateBasedRuleResult.h>
#include <aws/waf-regional/model/GetRateBasedRuleManagedKeysResult.h>
#include <aws/waf-regional/model/GetRegexMatchSetResult.h>
#include <aws/waf-regional/model/GetRegexPatternSetResult.h>
#include <aws/waf-regional/model/GetRuleResult.h>
#include <aws/waf-regional/model/GetRuleGroupResult.h>
#include <aws/waf-regional/model/GetSampledRequestsResult.h>
#include <aws/waf-regional/model/GetSizeConstraintSetResult.h>
#include <aws/waf-regional/model/GetSqlInjectionMatchSetResult.h>
#include <aws/waf-regional/model/GetWebACLResult.h>
#include <aws/waf-regional/model/GetWebACLForResourceResult.h>
#include <aws/waf-regional/model/GetXssMatchSetResult.h>
#include <aws/waf-regional/model/ListActivatedRulesInRuleGroupResult.h>
#include <aws/waf-regional/model/ListByteMatchSetsResult.h>
#include <aws/waf-regional/model/ListGeoMatchSetsResult.h>
#include <aws/waf-regional/model/ListIPSetsResult.h>
#include <aws/waf-regional/model/ListLoggingConfigurationsResult.h>
#include <aws/waf-regional/model/ListRateBasedRulesResult.h>
#include <aws/waf-regional/model/ListRegexMatchSetsResult.h>
#include <aws/waf-regional/model/ListRegexPatternSetsResult.h>
#include <aws/waf-regional/model/ListResourcesForWebACLResult.h>
#include <aws/waf-regional/model/ListRuleGroupsResult.h>
#include <aws/waf-regional/model/ListRulesResult.h>
#include <aws/waf-regional/model/ListSizeConstraintSetsResult.h>
#include <aws/waf-regional/model/ListSqlInjectionMatchSetsResult.h>
#include <aws/waf-regional/model/ListSubscribedRuleGroupsResult.h>
#include <aws/waf-regional/model/ListTagsForResourceResult.h>
#include <aws/waf-regional/model/ListWebACLsResult.h>
#include <aws/waf-regional/model/ListXssMatchSetsResult.h>
#include <aws/waf-regional/model/PutLoggingConfigurationResult.h>
#include <aws/waf-regional/model/PutPermissionPolicyResult.h>
#include <aws/waf-regional/model/TagResourceResult.h>
#include <aws/waf-regional/model/UntagResourceResult.h>
#include <aws/waf-regional/model/UpdateByteMatchSetResult.h>
#include <aws/waf-regional/model/UpdateGeoMatchSetResult.h>
#include <aws/waf-regional/model/UpdateIPSetResult.h>
#include <aws/waf-regional/model/UpdateRateBasedRuleResult.h>
#include <aws/waf-regional/model/UpdateRegexMatchSetResult.h>
#include <aws/waf-regional/model/UpdateRegexPatternSetResult.h>
#include <aws/waf-regional/model/UpdateRuleResult.h>
#include <aws/waf-regional/model/UpdateRuleGroupResult.h>
#include <aws/waf-regional/model/UpdateSizeConstraintSetResult.h>
#include <aws/waf-regional/model/UpdateSqlInjectionMatchSetResult.h>
#include <aws/waf-regional/model/UpdateWebACLResult.h>
#include <aws/waf-regional/model/UpdateXssMatchSetResult.h>
/* End of service model headers required in WAFRegionalClient header */

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

  namespace WAFRegional
  {
    using WAFRegionalClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WAFRegionalEndpointProviderBase = Aws::WAFRegional::Endpoint::WAFRegionalEndpointProviderBase;
    using WAFRegionalEndpointProvider = Aws::WAFRegional::Endpoint::WAFRegionalEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WAFRegionalClient header */
      class AssociateWebACLRequest;
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
      class DisassociateWebACLRequest;
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
      class GetWebACLForResourceRequest;
      class GetXssMatchSetRequest;
      class ListActivatedRulesInRuleGroupRequest;
      class ListByteMatchSetsRequest;
      class ListGeoMatchSetsRequest;
      class ListIPSetsRequest;
      class ListLoggingConfigurationsRequest;
      class ListRateBasedRulesRequest;
      class ListRegexMatchSetsRequest;
      class ListRegexPatternSetsRequest;
      class ListResourcesForWebACLRequest;
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
      /* End of service model forward declarations required in WAFRegionalClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateWebACLResult, WAFRegionalError> AssociateWebACLOutcome;
      typedef Aws::Utils::Outcome<CreateByteMatchSetResult, WAFRegionalError> CreateByteMatchSetOutcome;
      typedef Aws::Utils::Outcome<CreateGeoMatchSetResult, WAFRegionalError> CreateGeoMatchSetOutcome;
      typedef Aws::Utils::Outcome<CreateIPSetResult, WAFRegionalError> CreateIPSetOutcome;
      typedef Aws::Utils::Outcome<CreateRateBasedRuleResult, WAFRegionalError> CreateRateBasedRuleOutcome;
      typedef Aws::Utils::Outcome<CreateRegexMatchSetResult, WAFRegionalError> CreateRegexMatchSetOutcome;
      typedef Aws::Utils::Outcome<CreateRegexPatternSetResult, WAFRegionalError> CreateRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<CreateRuleResult, WAFRegionalError> CreateRuleOutcome;
      typedef Aws::Utils::Outcome<CreateRuleGroupResult, WAFRegionalError> CreateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSizeConstraintSetResult, WAFRegionalError> CreateSizeConstraintSetOutcome;
      typedef Aws::Utils::Outcome<CreateSqlInjectionMatchSetResult, WAFRegionalError> CreateSqlInjectionMatchSetOutcome;
      typedef Aws::Utils::Outcome<CreateWebACLResult, WAFRegionalError> CreateWebACLOutcome;
      typedef Aws::Utils::Outcome<CreateWebACLMigrationStackResult, WAFRegionalError> CreateWebACLMigrationStackOutcome;
      typedef Aws::Utils::Outcome<CreateXssMatchSetResult, WAFRegionalError> CreateXssMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteByteMatchSetResult, WAFRegionalError> DeleteByteMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteGeoMatchSetResult, WAFRegionalError> DeleteGeoMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteIPSetResult, WAFRegionalError> DeleteIPSetOutcome;
      typedef Aws::Utils::Outcome<DeleteLoggingConfigurationResult, WAFRegionalError> DeleteLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePermissionPolicyResult, WAFRegionalError> DeletePermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteRateBasedRuleResult, WAFRegionalError> DeleteRateBasedRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteRegexMatchSetResult, WAFRegionalError> DeleteRegexMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteRegexPatternSetResult, WAFRegionalError> DeleteRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleResult, WAFRegionalError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleGroupResult, WAFRegionalError> DeleteRuleGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteSizeConstraintSetResult, WAFRegionalError> DeleteSizeConstraintSetOutcome;
      typedef Aws::Utils::Outcome<DeleteSqlInjectionMatchSetResult, WAFRegionalError> DeleteSqlInjectionMatchSetOutcome;
      typedef Aws::Utils::Outcome<DeleteWebACLResult, WAFRegionalError> DeleteWebACLOutcome;
      typedef Aws::Utils::Outcome<DeleteXssMatchSetResult, WAFRegionalError> DeleteXssMatchSetOutcome;
      typedef Aws::Utils::Outcome<DisassociateWebACLResult, WAFRegionalError> DisassociateWebACLOutcome;
      typedef Aws::Utils::Outcome<GetByteMatchSetResult, WAFRegionalError> GetByteMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetChangeTokenResult, WAFRegionalError> GetChangeTokenOutcome;
      typedef Aws::Utils::Outcome<GetChangeTokenStatusResult, WAFRegionalError> GetChangeTokenStatusOutcome;
      typedef Aws::Utils::Outcome<GetGeoMatchSetResult, WAFRegionalError> GetGeoMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetIPSetResult, WAFRegionalError> GetIPSetOutcome;
      typedef Aws::Utils::Outcome<GetLoggingConfigurationResult, WAFRegionalError> GetLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetPermissionPolicyResult, WAFRegionalError> GetPermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<GetRateBasedRuleResult, WAFRegionalError> GetRateBasedRuleOutcome;
      typedef Aws::Utils::Outcome<GetRateBasedRuleManagedKeysResult, WAFRegionalError> GetRateBasedRuleManagedKeysOutcome;
      typedef Aws::Utils::Outcome<GetRegexMatchSetResult, WAFRegionalError> GetRegexMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetRegexPatternSetResult, WAFRegionalError> GetRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<GetRuleResult, WAFRegionalError> GetRuleOutcome;
      typedef Aws::Utils::Outcome<GetRuleGroupResult, WAFRegionalError> GetRuleGroupOutcome;
      typedef Aws::Utils::Outcome<GetSampledRequestsResult, WAFRegionalError> GetSampledRequestsOutcome;
      typedef Aws::Utils::Outcome<GetSizeConstraintSetResult, WAFRegionalError> GetSizeConstraintSetOutcome;
      typedef Aws::Utils::Outcome<GetSqlInjectionMatchSetResult, WAFRegionalError> GetSqlInjectionMatchSetOutcome;
      typedef Aws::Utils::Outcome<GetWebACLResult, WAFRegionalError> GetWebACLOutcome;
      typedef Aws::Utils::Outcome<GetWebACLForResourceResult, WAFRegionalError> GetWebACLForResourceOutcome;
      typedef Aws::Utils::Outcome<GetXssMatchSetResult, WAFRegionalError> GetXssMatchSetOutcome;
      typedef Aws::Utils::Outcome<ListActivatedRulesInRuleGroupResult, WAFRegionalError> ListActivatedRulesInRuleGroupOutcome;
      typedef Aws::Utils::Outcome<ListByteMatchSetsResult, WAFRegionalError> ListByteMatchSetsOutcome;
      typedef Aws::Utils::Outcome<ListGeoMatchSetsResult, WAFRegionalError> ListGeoMatchSetsOutcome;
      typedef Aws::Utils::Outcome<ListIPSetsResult, WAFRegionalError> ListIPSetsOutcome;
      typedef Aws::Utils::Outcome<ListLoggingConfigurationsResult, WAFRegionalError> ListLoggingConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListRateBasedRulesResult, WAFRegionalError> ListRateBasedRulesOutcome;
      typedef Aws::Utils::Outcome<ListRegexMatchSetsResult, WAFRegionalError> ListRegexMatchSetsOutcome;
      typedef Aws::Utils::Outcome<ListRegexPatternSetsResult, WAFRegionalError> ListRegexPatternSetsOutcome;
      typedef Aws::Utils::Outcome<ListResourcesForWebACLResult, WAFRegionalError> ListResourcesForWebACLOutcome;
      typedef Aws::Utils::Outcome<ListRuleGroupsResult, WAFRegionalError> ListRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, WAFRegionalError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListSizeConstraintSetsResult, WAFRegionalError> ListSizeConstraintSetsOutcome;
      typedef Aws::Utils::Outcome<ListSqlInjectionMatchSetsResult, WAFRegionalError> ListSqlInjectionMatchSetsOutcome;
      typedef Aws::Utils::Outcome<ListSubscribedRuleGroupsResult, WAFRegionalError> ListSubscribedRuleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, WAFRegionalError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWebACLsResult, WAFRegionalError> ListWebACLsOutcome;
      typedef Aws::Utils::Outcome<ListXssMatchSetsResult, WAFRegionalError> ListXssMatchSetsOutcome;
      typedef Aws::Utils::Outcome<PutLoggingConfigurationResult, WAFRegionalError> PutLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutPermissionPolicyResult, WAFRegionalError> PutPermissionPolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, WAFRegionalError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, WAFRegionalError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateByteMatchSetResult, WAFRegionalError> UpdateByteMatchSetOutcome;
      typedef Aws::Utils::Outcome<UpdateGeoMatchSetResult, WAFRegionalError> UpdateGeoMatchSetOutcome;
      typedef Aws::Utils::Outcome<UpdateIPSetResult, WAFRegionalError> UpdateIPSetOutcome;
      typedef Aws::Utils::Outcome<UpdateRateBasedRuleResult, WAFRegionalError> UpdateRateBasedRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateRegexMatchSetResult, WAFRegionalError> UpdateRegexMatchSetOutcome;
      typedef Aws::Utils::Outcome<UpdateRegexPatternSetResult, WAFRegionalError> UpdateRegexPatternSetOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleResult, WAFRegionalError> UpdateRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleGroupResult, WAFRegionalError> UpdateRuleGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateSizeConstraintSetResult, WAFRegionalError> UpdateSizeConstraintSetOutcome;
      typedef Aws::Utils::Outcome<UpdateSqlInjectionMatchSetResult, WAFRegionalError> UpdateSqlInjectionMatchSetOutcome;
      typedef Aws::Utils::Outcome<UpdateWebACLResult, WAFRegionalError> UpdateWebACLOutcome;
      typedef Aws::Utils::Outcome<UpdateXssMatchSetResult, WAFRegionalError> UpdateXssMatchSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateWebACLOutcome> AssociateWebACLOutcomeCallable;
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
      typedef std::future<DisassociateWebACLOutcome> DisassociateWebACLOutcomeCallable;
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
      typedef std::future<GetWebACLForResourceOutcome> GetWebACLForResourceOutcomeCallable;
      typedef std::future<GetXssMatchSetOutcome> GetXssMatchSetOutcomeCallable;
      typedef std::future<ListActivatedRulesInRuleGroupOutcome> ListActivatedRulesInRuleGroupOutcomeCallable;
      typedef std::future<ListByteMatchSetsOutcome> ListByteMatchSetsOutcomeCallable;
      typedef std::future<ListGeoMatchSetsOutcome> ListGeoMatchSetsOutcomeCallable;
      typedef std::future<ListIPSetsOutcome> ListIPSetsOutcomeCallable;
      typedef std::future<ListLoggingConfigurationsOutcome> ListLoggingConfigurationsOutcomeCallable;
      typedef std::future<ListRateBasedRulesOutcome> ListRateBasedRulesOutcomeCallable;
      typedef std::future<ListRegexMatchSetsOutcome> ListRegexMatchSetsOutcomeCallable;
      typedef std::future<ListRegexPatternSetsOutcome> ListRegexPatternSetsOutcomeCallable;
      typedef std::future<ListResourcesForWebACLOutcome> ListResourcesForWebACLOutcomeCallable;
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

    class WAFRegionalClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WAFRegionalClient*, const Model::AssociateWebACLRequest&, const Model::AssociateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateByteMatchSetRequest&, const Model::CreateByteMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateByteMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateGeoMatchSetRequest&, const Model::CreateGeoMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGeoMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateIPSetRequest&, const Model::CreateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateRateBasedRuleRequest&, const Model::CreateRateBasedRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRateBasedRuleResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateRegexMatchSetRequest&, const Model::CreateRegexMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegexMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateRegexPatternSetRequest&, const Model::CreateRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateRuleGroupRequest&, const Model::CreateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateSizeConstraintSetRequest&, const Model::CreateSizeConstraintSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSizeConstraintSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateSqlInjectionMatchSetRequest&, const Model::CreateSqlInjectionMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSqlInjectionMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateWebACLRequest&, const Model::CreateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateWebACLMigrationStackRequest&, const Model::CreateWebACLMigrationStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebACLMigrationStackResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::CreateXssMatchSetRequest&, const Model::CreateXssMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateXssMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteByteMatchSetRequest&, const Model::DeleteByteMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteByteMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteGeoMatchSetRequest&, const Model::DeleteGeoMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGeoMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteIPSetRequest&, const Model::DeleteIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteLoggingConfigurationRequest&, const Model::DeleteLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeletePermissionPolicyRequest&, const Model::DeletePermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteRateBasedRuleRequest&, const Model::DeleteRateBasedRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRateBasedRuleResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteRegexMatchSetRequest&, const Model::DeleteRegexMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegexMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteRegexPatternSetRequest&, const Model::DeleteRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteRuleGroupRequest&, const Model::DeleteRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteSizeConstraintSetRequest&, const Model::DeleteSizeConstraintSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSizeConstraintSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteSqlInjectionMatchSetRequest&, const Model::DeleteSqlInjectionMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSqlInjectionMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteWebACLRequest&, const Model::DeleteWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DeleteXssMatchSetRequest&, const Model::DeleteXssMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteXssMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::DisassociateWebACLRequest&, const Model::DisassociateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetByteMatchSetRequest&, const Model::GetByteMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetByteMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetChangeTokenRequest&, const Model::GetChangeTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangeTokenResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetChangeTokenStatusRequest&, const Model::GetChangeTokenStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChangeTokenStatusResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetGeoMatchSetRequest&, const Model::GetGeoMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeoMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetIPSetRequest&, const Model::GetIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetLoggingConfigurationRequest&, const Model::GetLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetPermissionPolicyRequest&, const Model::GetPermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetRateBasedRuleRequest&, const Model::GetRateBasedRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRateBasedRuleResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetRateBasedRuleManagedKeysRequest&, const Model::GetRateBasedRuleManagedKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRateBasedRuleManagedKeysResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetRegexMatchSetRequest&, const Model::GetRegexMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegexMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetRegexPatternSetRequest&, const Model::GetRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetRuleRequest&, const Model::GetRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetRuleGroupRequest&, const Model::GetRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetSampledRequestsRequest&, const Model::GetSampledRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSampledRequestsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetSizeConstraintSetRequest&, const Model::GetSizeConstraintSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSizeConstraintSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetSqlInjectionMatchSetRequest&, const Model::GetSqlInjectionMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSqlInjectionMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetWebACLRequest&, const Model::GetWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetWebACLForResourceRequest&, const Model::GetWebACLForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebACLForResourceResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::GetXssMatchSetRequest&, const Model::GetXssMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetXssMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListActivatedRulesInRuleGroupRequest&, const Model::ListActivatedRulesInRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActivatedRulesInRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListByteMatchSetsRequest&, const Model::ListByteMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListByteMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListGeoMatchSetsRequest&, const Model::ListGeoMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGeoMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListIPSetsRequest&, const Model::ListIPSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIPSetsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListLoggingConfigurationsRequest&, const Model::ListLoggingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLoggingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListRateBasedRulesRequest&, const Model::ListRateBasedRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRateBasedRulesResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListRegexMatchSetsRequest&, const Model::ListRegexMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegexMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListRegexPatternSetsRequest&, const Model::ListRegexPatternSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegexPatternSetsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListResourcesForWebACLRequest&, const Model::ListResourcesForWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesForWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListRuleGroupsRequest&, const Model::ListRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListSizeConstraintSetsRequest&, const Model::ListSizeConstraintSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSizeConstraintSetsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListSqlInjectionMatchSetsRequest&, const Model::ListSqlInjectionMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSqlInjectionMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListSubscribedRuleGroupsRequest&, const Model::ListSubscribedRuleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscribedRuleGroupsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListWebACLsRequest&, const Model::ListWebACLsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebACLsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::ListXssMatchSetsRequest&, const Model::ListXssMatchSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListXssMatchSetsResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::PutLoggingConfigurationRequest&, const Model::PutLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::PutPermissionPolicyRequest&, const Model::PutPermissionPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionPolicyResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateByteMatchSetRequest&, const Model::UpdateByteMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateByteMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateGeoMatchSetRequest&, const Model::UpdateGeoMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGeoMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateIPSetRequest&, const Model::UpdateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIPSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateRateBasedRuleRequest&, const Model::UpdateRateBasedRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRateBasedRuleResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateRegexMatchSetRequest&, const Model::UpdateRegexMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegexMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateRegexPatternSetRequest&, const Model::UpdateRegexPatternSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegexPatternSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateRuleRequest&, const Model::UpdateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateRuleGroupRequest&, const Model::UpdateRuleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleGroupResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateSizeConstraintSetRequest&, const Model::UpdateSizeConstraintSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSizeConstraintSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateSqlInjectionMatchSetRequest&, const Model::UpdateSqlInjectionMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSqlInjectionMatchSetResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateWebACLRequest&, const Model::UpdateWebACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebACLResponseReceivedHandler;
    typedef std::function<void(const WAFRegionalClient*, const Model::UpdateXssMatchSetRequest&, const Model::UpdateXssMatchSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateXssMatchSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WAFRegional
} // namespace Aws
