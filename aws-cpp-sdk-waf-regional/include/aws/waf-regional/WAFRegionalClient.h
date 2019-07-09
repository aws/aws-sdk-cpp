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

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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

        typedef Aws::Utils::Outcome<AssociateWebACLResult, Aws::Client::AWSError<WAFRegionalErrors>> AssociateWebACLOutcome;
        typedef Aws::Utils::Outcome<CreateByteMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateByteMatchSetOutcome;
        typedef Aws::Utils::Outcome<CreateGeoMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateGeoMatchSetOutcome;
        typedef Aws::Utils::Outcome<CreateIPSetResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateIPSetOutcome;
        typedef Aws::Utils::Outcome<CreateRateBasedRuleResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateRateBasedRuleOutcome;
        typedef Aws::Utils::Outcome<CreateRegexMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateRegexMatchSetOutcome;
        typedef Aws::Utils::Outcome<CreateRegexPatternSetResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateRegexPatternSetOutcome;
        typedef Aws::Utils::Outcome<CreateRuleResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateRuleOutcome;
        typedef Aws::Utils::Outcome<CreateRuleGroupResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateRuleGroupOutcome;
        typedef Aws::Utils::Outcome<CreateSizeConstraintSetResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateSizeConstraintSetOutcome;
        typedef Aws::Utils::Outcome<CreateSqlInjectionMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateSqlInjectionMatchSetOutcome;
        typedef Aws::Utils::Outcome<CreateWebACLResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateWebACLOutcome;
        typedef Aws::Utils::Outcome<CreateXssMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> CreateXssMatchSetOutcome;
        typedef Aws::Utils::Outcome<DeleteByteMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteByteMatchSetOutcome;
        typedef Aws::Utils::Outcome<DeleteGeoMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteGeoMatchSetOutcome;
        typedef Aws::Utils::Outcome<DeleteIPSetResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteIPSetOutcome;
        typedef Aws::Utils::Outcome<DeleteLoggingConfigurationResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeletePermissionPolicyResult, Aws::Client::AWSError<WAFRegionalErrors>> DeletePermissionPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteRateBasedRuleResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteRateBasedRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteRegexMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteRegexMatchSetOutcome;
        typedef Aws::Utils::Outcome<DeleteRegexPatternSetResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteRegexPatternSetOutcome;
        typedef Aws::Utils::Outcome<DeleteRuleResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteRuleGroupResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteRuleGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteSizeConstraintSetResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteSizeConstraintSetOutcome;
        typedef Aws::Utils::Outcome<DeleteSqlInjectionMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteSqlInjectionMatchSetOutcome;
        typedef Aws::Utils::Outcome<DeleteWebACLResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteWebACLOutcome;
        typedef Aws::Utils::Outcome<DeleteXssMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> DeleteXssMatchSetOutcome;
        typedef Aws::Utils::Outcome<DisassociateWebACLResult, Aws::Client::AWSError<WAFRegionalErrors>> DisassociateWebACLOutcome;
        typedef Aws::Utils::Outcome<GetByteMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> GetByteMatchSetOutcome;
        typedef Aws::Utils::Outcome<GetChangeTokenResult, Aws::Client::AWSError<WAFRegionalErrors>> GetChangeTokenOutcome;
        typedef Aws::Utils::Outcome<GetChangeTokenStatusResult, Aws::Client::AWSError<WAFRegionalErrors>> GetChangeTokenStatusOutcome;
        typedef Aws::Utils::Outcome<GetGeoMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> GetGeoMatchSetOutcome;
        typedef Aws::Utils::Outcome<GetIPSetResult, Aws::Client::AWSError<WAFRegionalErrors>> GetIPSetOutcome;
        typedef Aws::Utils::Outcome<GetLoggingConfigurationResult, Aws::Client::AWSError<WAFRegionalErrors>> GetLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetPermissionPolicyResult, Aws::Client::AWSError<WAFRegionalErrors>> GetPermissionPolicyOutcome;
        typedef Aws::Utils::Outcome<GetRateBasedRuleResult, Aws::Client::AWSError<WAFRegionalErrors>> GetRateBasedRuleOutcome;
        typedef Aws::Utils::Outcome<GetRateBasedRuleManagedKeysResult, Aws::Client::AWSError<WAFRegionalErrors>> GetRateBasedRuleManagedKeysOutcome;
        typedef Aws::Utils::Outcome<GetRegexMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> GetRegexMatchSetOutcome;
        typedef Aws::Utils::Outcome<GetRegexPatternSetResult, Aws::Client::AWSError<WAFRegionalErrors>> GetRegexPatternSetOutcome;
        typedef Aws::Utils::Outcome<GetRuleResult, Aws::Client::AWSError<WAFRegionalErrors>> GetRuleOutcome;
        typedef Aws::Utils::Outcome<GetRuleGroupResult, Aws::Client::AWSError<WAFRegionalErrors>> GetRuleGroupOutcome;
        typedef Aws::Utils::Outcome<GetSampledRequestsResult, Aws::Client::AWSError<WAFRegionalErrors>> GetSampledRequestsOutcome;
        typedef Aws::Utils::Outcome<GetSizeConstraintSetResult, Aws::Client::AWSError<WAFRegionalErrors>> GetSizeConstraintSetOutcome;
        typedef Aws::Utils::Outcome<GetSqlInjectionMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> GetSqlInjectionMatchSetOutcome;
        typedef Aws::Utils::Outcome<GetWebACLResult, Aws::Client::AWSError<WAFRegionalErrors>> GetWebACLOutcome;
        typedef Aws::Utils::Outcome<GetWebACLForResourceResult, Aws::Client::AWSError<WAFRegionalErrors>> GetWebACLForResourceOutcome;
        typedef Aws::Utils::Outcome<GetXssMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> GetXssMatchSetOutcome;
        typedef Aws::Utils::Outcome<ListActivatedRulesInRuleGroupResult, Aws::Client::AWSError<WAFRegionalErrors>> ListActivatedRulesInRuleGroupOutcome;
        typedef Aws::Utils::Outcome<ListByteMatchSetsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListByteMatchSetsOutcome;
        typedef Aws::Utils::Outcome<ListGeoMatchSetsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListGeoMatchSetsOutcome;
        typedef Aws::Utils::Outcome<ListIPSetsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListIPSetsOutcome;
        typedef Aws::Utils::Outcome<ListLoggingConfigurationsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListLoggingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListRateBasedRulesResult, Aws::Client::AWSError<WAFRegionalErrors>> ListRateBasedRulesOutcome;
        typedef Aws::Utils::Outcome<ListRegexMatchSetsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListRegexMatchSetsOutcome;
        typedef Aws::Utils::Outcome<ListRegexPatternSetsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListRegexPatternSetsOutcome;
        typedef Aws::Utils::Outcome<ListResourcesForWebACLResult, Aws::Client::AWSError<WAFRegionalErrors>> ListResourcesForWebACLOutcome;
        typedef Aws::Utils::Outcome<ListRuleGroupsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListRuleGroupsOutcome;
        typedef Aws::Utils::Outcome<ListRulesResult, Aws::Client::AWSError<WAFRegionalErrors>> ListRulesOutcome;
        typedef Aws::Utils::Outcome<ListSizeConstraintSetsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListSizeConstraintSetsOutcome;
        typedef Aws::Utils::Outcome<ListSqlInjectionMatchSetsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListSqlInjectionMatchSetsOutcome;
        typedef Aws::Utils::Outcome<ListSubscribedRuleGroupsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListSubscribedRuleGroupsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<WAFRegionalErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWebACLsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListWebACLsOutcome;
        typedef Aws::Utils::Outcome<ListXssMatchSetsResult, Aws::Client::AWSError<WAFRegionalErrors>> ListXssMatchSetsOutcome;
        typedef Aws::Utils::Outcome<PutLoggingConfigurationResult, Aws::Client::AWSError<WAFRegionalErrors>> PutLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutPermissionPolicyResult, Aws::Client::AWSError<WAFRegionalErrors>> PutPermissionPolicyOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<WAFRegionalErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<WAFRegionalErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateByteMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateByteMatchSetOutcome;
        typedef Aws::Utils::Outcome<UpdateGeoMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateGeoMatchSetOutcome;
        typedef Aws::Utils::Outcome<UpdateIPSetResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateIPSetOutcome;
        typedef Aws::Utils::Outcome<UpdateRateBasedRuleResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateRateBasedRuleOutcome;
        typedef Aws::Utils::Outcome<UpdateRegexMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateRegexMatchSetOutcome;
        typedef Aws::Utils::Outcome<UpdateRegexPatternSetResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateRegexPatternSetOutcome;
        typedef Aws::Utils::Outcome<UpdateRuleResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateRuleOutcome;
        typedef Aws::Utils::Outcome<UpdateRuleGroupResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateRuleGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateSizeConstraintSetResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateSizeConstraintSetOutcome;
        typedef Aws::Utils::Outcome<UpdateSqlInjectionMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateSqlInjectionMatchSetOutcome;
        typedef Aws::Utils::Outcome<UpdateWebACLResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateWebACLOutcome;
        typedef Aws::Utils::Outcome<UpdateXssMatchSetResult, Aws::Client::AWSError<WAFRegionalErrors>> UpdateXssMatchSetOutcome;

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
} // namespace Model

  class WAFRegionalClient;

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

  /**
   * <p>This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with
   * Elastic Load Balancing (ELB) Application Load Balancers. The AWS WAF actions and
   * data types listed in the reference are available for protecting Application Load
   * Balancers. You can use these actions and data types by means of the endpoints
   * listed in <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS
   * Regions and Endpoints</a>. This guide is for developers who need detailed
   * information about the AWS WAF API actions, data types, and errors. For detailed
   * information about AWS WAF features and an overview of how to use the AWS WAF
   * API, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
   * Guide</a>.</p>
   */
  class AWS_WAFREGIONAL_API WAFRegionalClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFRegionalClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WAFRegionalClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WAFRegionalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WAFRegionalClient();

        inline virtual const char* GetServiceClientName() const override { return "WAF Regional"; }


        /**
         * <p>Associates a web ACL with a resource, either an application load balancer or
         * Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/AssociateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWebACLOutcome AssociateWebACL(const Model::AssociateWebACLRequest& request) const;

        /**
         * <p>Associates a web ACL with a resource, either an application load balancer or
         * Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/AssociateWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWebACLOutcomeCallable AssociateWebACLCallable(const Model::AssociateWebACLRequest& request) const;

        /**
         * <p>Associates a web ACL with a resource, either an application load balancer or
         * Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/AssociateWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWebACLAsync(const Model::AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>ByteMatchSet</code>. You then use <a>UpdateByteMatchSet</a>
         * to identify the part of a web request that you want AWS WAF to inspect, such as
         * the values of the <code>User-Agent</code> header or the query string. For
         * example, you can create a <code>ByteMatchSet</code> that matches any requests
         * with <code>User-Agent</code> headers that contain the string
         * <code>BadBot</code>. You can then configure AWS WAF to reject those
         * requests.</p> <p>To create and configure a <code>ByteMatchSet</code>, perform
         * the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateByteMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateByteMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateByteMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateByteMatchSet</a> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the value that you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateByteMatchSetOutcome CreateByteMatchSet(const Model::CreateByteMatchSetRequest& request) const;

        /**
         * <p>Creates a <code>ByteMatchSet</code>. You then use <a>UpdateByteMatchSet</a>
         * to identify the part of a web request that you want AWS WAF to inspect, such as
         * the values of the <code>User-Agent</code> header or the query string. For
         * example, you can create a <code>ByteMatchSet</code> that matches any requests
         * with <code>User-Agent</code> headers that contain the string
         * <code>BadBot</code>. You can then configure AWS WAF to reject those
         * requests.</p> <p>To create and configure a <code>ByteMatchSet</code>, perform
         * the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateByteMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateByteMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateByteMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateByteMatchSet</a> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the value that you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateByteMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateByteMatchSetOutcomeCallable CreateByteMatchSetCallable(const Model::CreateByteMatchSetRequest& request) const;

        /**
         * <p>Creates a <code>ByteMatchSet</code>. You then use <a>UpdateByteMatchSet</a>
         * to identify the part of a web request that you want AWS WAF to inspect, such as
         * the values of the <code>User-Agent</code> header or the query string. For
         * example, you can create a <code>ByteMatchSet</code> that matches any requests
         * with <code>User-Agent</code> headers that contain the string
         * <code>BadBot</code>. You can then configure AWS WAF to reject those
         * requests.</p> <p>To create and configure a <code>ByteMatchSet</code>, perform
         * the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateByteMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateByteMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateByteMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateByteMatchSet</a> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the value that you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateByteMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateByteMatchSetAsync(const Model::CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a>GeoMatchSet</a>, which you use to specify which web requests
         * you want to allow or block based on the country that the requests originate
         * from. For example, if you're receiving a lot of requests from one or more
         * countries and you want to block the requests, you can create an
         * <code>GeoMatchSet</code> that contains those countries and then configure AWS
         * WAF to block the requests. </p> <p>To create and configure a
         * <code>GeoMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateGeoMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateGeoMatchSet</code> request.</p>
         * </li> <li> <p>Use <code>GetChangeToken</code> to get the change token that you
         * provide in the <code>ChangeToken</code> parameter of an <a>UpdateGeoMatchSet</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateGeoMatchSetSet</code> request
         * to specify the countries that you want AWS WAF to watch for.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGeoMatchSetOutcome CreateGeoMatchSet(const Model::CreateGeoMatchSetRequest& request) const;

        /**
         * <p>Creates an <a>GeoMatchSet</a>, which you use to specify which web requests
         * you want to allow or block based on the country that the requests originate
         * from. For example, if you're receiving a lot of requests from one or more
         * countries and you want to block the requests, you can create an
         * <code>GeoMatchSet</code> that contains those countries and then configure AWS
         * WAF to block the requests. </p> <p>To create and configure a
         * <code>GeoMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateGeoMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateGeoMatchSet</code> request.</p>
         * </li> <li> <p>Use <code>GetChangeToken</code> to get the change token that you
         * provide in the <code>ChangeToken</code> parameter of an <a>UpdateGeoMatchSet</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateGeoMatchSetSet</code> request
         * to specify the countries that you want AWS WAF to watch for.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateGeoMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGeoMatchSetOutcomeCallable CreateGeoMatchSetCallable(const Model::CreateGeoMatchSetRequest& request) const;

        /**
         * <p>Creates an <a>GeoMatchSet</a>, which you use to specify which web requests
         * you want to allow or block based on the country that the requests originate
         * from. For example, if you're receiving a lot of requests from one or more
         * countries and you want to block the requests, you can create an
         * <code>GeoMatchSet</code> that contains those countries and then configure AWS
         * WAF to block the requests. </p> <p>To create and configure a
         * <code>GeoMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateGeoMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateGeoMatchSet</code> request.</p>
         * </li> <li> <p>Use <code>GetChangeToken</code> to get the change token that you
         * provide in the <code>ChangeToken</code> parameter of an <a>UpdateGeoMatchSet</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateGeoMatchSetSet</code> request
         * to specify the countries that you want AWS WAF to watch for.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateGeoMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGeoMatchSetAsync(const Model::CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a>IPSet</a>, which you use to specify which web requests that you
         * want to allow or block based on the IP addresses that the requests originate
         * from. For example, if you're receiving a lot of requests from one or more
         * individual IP addresses or one or more ranges of IP addresses and you want to
         * block the requests, you can create an <code>IPSet</code> that contains those IP
         * addresses and then configure AWS WAF to block the requests. </p> <p>To create
         * and configure an <code>IPSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateIPSet</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateIPSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateIPSet</code> request to specify the IP addresses
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIPSetOutcome CreateIPSet(const Model::CreateIPSetRequest& request) const;

        /**
         * <p>Creates an <a>IPSet</a>, which you use to specify which web requests that you
         * want to allow or block based on the IP addresses that the requests originate
         * from. For example, if you're receiving a lot of requests from one or more
         * individual IP addresses or one or more ranges of IP addresses and you want to
         * block the requests, you can create an <code>IPSet</code> that contains those IP
         * addresses and then configure AWS WAF to block the requests. </p> <p>To create
         * and configure an <code>IPSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateIPSet</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateIPSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateIPSet</code> request to specify the IP addresses
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const Model::CreateIPSetRequest& request) const;

        /**
         * <p>Creates an <a>IPSet</a>, which you use to specify which web requests that you
         * want to allow or block based on the IP addresses that the requests originate
         * from. For example, if you're receiving a lot of requests from one or more
         * individual IP addresses or one or more ranges of IP addresses and you want to
         * block the requests, you can create an <code>IPSet</code> that contains those IP
         * addresses and then configure AWS WAF to block the requests. </p> <p>To create
         * and configure an <code>IPSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateIPSet</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateIPSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateIPSet</code> request to specify the IP addresses
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIPSetAsync(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>RateBasedRule</a>. The <code>RateBasedRule</code> contains a
         * <code>RateLimit</code>, which specifies the maximum number of requests that AWS
         * WAF allows from a specified IP address in a five-minute period. The
         * <code>RateBasedRule</code> also contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to count or block if these requests exceed the
         * <code>RateLimit</code>.</p> <p>If you add more than one predicate to a
         * <code>RateBasedRule</code>, a request not only must exceed the
         * <code>RateLimit</code>, but it also must match all the specifications to be
         * counted or blocked. For example, suppose you add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches
         * the IP address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 15,000.</p> <p>You then add the
         * <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that meet the conditions in the rule. For a request to be
         * blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
         * <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code>. Further, requests that match these two conditions must be
         * received at a rate of more than 15,000 requests every five minutes. If both
         * conditions are met and the rate is exceeded, AWS WAF blocks the requests. If the
         * rate drops below 15,000 for a five-minute period, AWS WAF no longer blocks the
         * requests.</p> <p>As a second example, suppose you want to limit requests to a
         * particular page on your site. To do this, you could add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>A <code>ByteMatchSet</code> with
         * <code>FieldToMatch</code> of <code>URI</code> </p> </li> <li> <p>A
         * <code>PositionalConstraint</code> of <code>STARTS_WITH</code> </p> </li> <li>
         * <p>A <code>TargetString</code> of <code>login</code> </p> </li> </ul>
         * <p>Further, you specify a <code>RateLimit</code> of 15,000.</p> <p>By adding
         * this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit
         * requests to your login page without affecting the rest of your site.</p> <p>To
         * create and configure a <code>RateBasedRule</code>, perform the following
         * steps:</p> <ol> <li> <p>Create and update the predicates that you want to
         * include in the rule. For more information, see <a>CreateByteMatchSet</a>,
         * <a>CreateIPSet</a>, and <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRule</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateRateBasedRule</code> request.</p> </li> <li>
         * <p>Use <code>GetChangeToken</code> to get the change token that you provide in
         * the <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p>
         * </li> <li> <p>Submit an <code>UpdateRateBasedRule</code> request to specify the
         * predicates that you want to include in the rule.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RateBasedRule</code>. For
         * more information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRateBasedRuleOutcome CreateRateBasedRule(const Model::CreateRateBasedRuleRequest& request) const;

        /**
         * <p>Creates a <a>RateBasedRule</a>. The <code>RateBasedRule</code> contains a
         * <code>RateLimit</code>, which specifies the maximum number of requests that AWS
         * WAF allows from a specified IP address in a five-minute period. The
         * <code>RateBasedRule</code> also contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to count or block if these requests exceed the
         * <code>RateLimit</code>.</p> <p>If you add more than one predicate to a
         * <code>RateBasedRule</code>, a request not only must exceed the
         * <code>RateLimit</code>, but it also must match all the specifications to be
         * counted or blocked. For example, suppose you add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches
         * the IP address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 15,000.</p> <p>You then add the
         * <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that meet the conditions in the rule. For a request to be
         * blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
         * <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code>. Further, requests that match these two conditions must be
         * received at a rate of more than 15,000 requests every five minutes. If both
         * conditions are met and the rate is exceeded, AWS WAF blocks the requests. If the
         * rate drops below 15,000 for a five-minute period, AWS WAF no longer blocks the
         * requests.</p> <p>As a second example, suppose you want to limit requests to a
         * particular page on your site. To do this, you could add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>A <code>ByteMatchSet</code> with
         * <code>FieldToMatch</code> of <code>URI</code> </p> </li> <li> <p>A
         * <code>PositionalConstraint</code> of <code>STARTS_WITH</code> </p> </li> <li>
         * <p>A <code>TargetString</code> of <code>login</code> </p> </li> </ul>
         * <p>Further, you specify a <code>RateLimit</code> of 15,000.</p> <p>By adding
         * this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit
         * requests to your login page without affecting the rest of your site.</p> <p>To
         * create and configure a <code>RateBasedRule</code>, perform the following
         * steps:</p> <ol> <li> <p>Create and update the predicates that you want to
         * include in the rule. For more information, see <a>CreateByteMatchSet</a>,
         * <a>CreateIPSet</a>, and <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRule</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateRateBasedRule</code> request.</p> </li> <li>
         * <p>Use <code>GetChangeToken</code> to get the change token that you provide in
         * the <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p>
         * </li> <li> <p>Submit an <code>UpdateRateBasedRule</code> request to specify the
         * predicates that you want to include in the rule.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RateBasedRule</code>. For
         * more information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRateBasedRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRateBasedRuleOutcomeCallable CreateRateBasedRuleCallable(const Model::CreateRateBasedRuleRequest& request) const;

        /**
         * <p>Creates a <a>RateBasedRule</a>. The <code>RateBasedRule</code> contains a
         * <code>RateLimit</code>, which specifies the maximum number of requests that AWS
         * WAF allows from a specified IP address in a five-minute period. The
         * <code>RateBasedRule</code> also contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to count or block if these requests exceed the
         * <code>RateLimit</code>.</p> <p>If you add more than one predicate to a
         * <code>RateBasedRule</code>, a request not only must exceed the
         * <code>RateLimit</code>, but it also must match all the specifications to be
         * counted or blocked. For example, suppose you add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches
         * the IP address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 15,000.</p> <p>You then add the
         * <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that meet the conditions in the rule. For a request to be
         * blocked, it must come from the IP address 192.0.2.44 <i>and</i> the
         * <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code>. Further, requests that match these two conditions must be
         * received at a rate of more than 15,000 requests every five minutes. If both
         * conditions are met and the rate is exceeded, AWS WAF blocks the requests. If the
         * rate drops below 15,000 for a five-minute period, AWS WAF no longer blocks the
         * requests.</p> <p>As a second example, suppose you want to limit requests to a
         * particular page on your site. To do this, you could add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>A <code>ByteMatchSet</code> with
         * <code>FieldToMatch</code> of <code>URI</code> </p> </li> <li> <p>A
         * <code>PositionalConstraint</code> of <code>STARTS_WITH</code> </p> </li> <li>
         * <p>A <code>TargetString</code> of <code>login</code> </p> </li> </ul>
         * <p>Further, you specify a <code>RateLimit</code> of 15,000.</p> <p>By adding
         * this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit
         * requests to your login page without affecting the rest of your site.</p> <p>To
         * create and configure a <code>RateBasedRule</code>, perform the following
         * steps:</p> <ol> <li> <p>Create and update the predicates that you want to
         * include in the rule. For more information, see <a>CreateByteMatchSet</a>,
         * <a>CreateIPSet</a>, and <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRule</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateRateBasedRule</code> request.</p> </li> <li>
         * <p>Use <code>GetChangeToken</code> to get the change token that you provide in
         * the <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p>
         * </li> <li> <p>Submit an <code>UpdateRateBasedRule</code> request to specify the
         * predicates that you want to include in the rule.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RateBasedRule</code>. For
         * more information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRateBasedRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRateBasedRuleAsync(const Model::CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>RegexMatchSet</a>. You then use <a>UpdateRegexMatchSet</a> to
         * identify the part of a web request that you want AWS WAF to inspect, such as the
         * values of the <code>User-Agent</code> header or the query string. For example,
         * you can create a <code>RegexMatchSet</code> that contains a
         * <code>RegexMatchTuple</code> that looks for any requests with
         * <code>User-Agent</code> headers that match a <code>RegexPatternSet</code> with
         * pattern <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject
         * those requests.</p> <p>To create and configure a <code>RegexMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateRegexMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateRegexMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateRegexMatchSet</a> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the value, using a <code>RegexPatternSet</code>, that
         * you want AWS WAF to watch for.</p> </li> </ol> <p>For more information about how
         * to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegexMatchSetOutcome CreateRegexMatchSet(const Model::CreateRegexMatchSetRequest& request) const;

        /**
         * <p>Creates a <a>RegexMatchSet</a>. You then use <a>UpdateRegexMatchSet</a> to
         * identify the part of a web request that you want AWS WAF to inspect, such as the
         * values of the <code>User-Agent</code> header or the query string. For example,
         * you can create a <code>RegexMatchSet</code> that contains a
         * <code>RegexMatchTuple</code> that looks for any requests with
         * <code>User-Agent</code> headers that match a <code>RegexPatternSet</code> with
         * pattern <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject
         * those requests.</p> <p>To create and configure a <code>RegexMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateRegexMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateRegexMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateRegexMatchSet</a> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the value, using a <code>RegexPatternSet</code>, that
         * you want AWS WAF to watch for.</p> </li> </ol> <p>For more information about how
         * to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRegexMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegexMatchSetOutcomeCallable CreateRegexMatchSetCallable(const Model::CreateRegexMatchSetRequest& request) const;

        /**
         * <p>Creates a <a>RegexMatchSet</a>. You then use <a>UpdateRegexMatchSet</a> to
         * identify the part of a web request that you want AWS WAF to inspect, such as the
         * values of the <code>User-Agent</code> header or the query string. For example,
         * you can create a <code>RegexMatchSet</code> that contains a
         * <code>RegexMatchTuple</code> that looks for any requests with
         * <code>User-Agent</code> headers that match a <code>RegexPatternSet</code> with
         * pattern <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject
         * those requests.</p> <p>To create and configure a <code>RegexMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateRegexMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateRegexMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <a>UpdateRegexMatchSet</a> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the value, using a <code>RegexPatternSet</code>, that
         * you want AWS WAF to watch for.</p> </li> </ol> <p>For more information about how
         * to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRegexMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRegexMatchSetAsync(const Model::CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>RegexPatternSet</code>. You then use
         * <a>UpdateRegexPatternSet</a> to specify the regular expression (regex) pattern
         * that you want AWS WAF to search for, such as <code>B[a@]dB[o0]t</code>. You can
         * then configure AWS WAF to reject those requests.</p> <p>To create and configure
         * a <code>RegexPatternSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateRegexPatternSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateRegexPatternSet</a> request to specify the string that you want AWS WAF
         * to watch for.</p> </li> </ol> <p>For more information about how to use the AWS
         * WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegexPatternSetOutcome CreateRegexPatternSet(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * <p>Creates a <code>RegexPatternSet</code>. You then use
         * <a>UpdateRegexPatternSet</a> to specify the regular expression (regex) pattern
         * that you want AWS WAF to search for, such as <code>B[a@]dB[o0]t</code>. You can
         * then configure AWS WAF to reject those requests.</p> <p>To create and configure
         * a <code>RegexPatternSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateRegexPatternSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateRegexPatternSet</a> request to specify the string that you want AWS WAF
         * to watch for.</p> </li> </ol> <p>For more information about how to use the AWS
         * WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegexPatternSetOutcomeCallable CreateRegexPatternSetCallable(const Model::CreateRegexPatternSetRequest& request) const;

        /**
         * <p>Creates a <code>RegexPatternSet</code>. You then use
         * <a>UpdateRegexPatternSet</a> to specify the regular expression (regex) pattern
         * that you want AWS WAF to search for, such as <code>B[a@]dB[o0]t</code>. You can
         * then configure AWS WAF to reject those requests.</p> <p>To create and configure
         * a <code>RegexPatternSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateRegexPatternSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateRegexPatternSet</a> request to specify the string that you want AWS WAF
         * to watch for.</p> </li> </ol> <p>For more information about how to use the AWS
         * WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRegexPatternSetAsync(const Model::CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Rule</code>, which contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to block. If you add more than one predicate to a
         * <code>Rule</code>, a request must match all of the specifications to be allowed
         * or blocked. For example, suppose that you add the following to a
         * <code>Rule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches the IP
         * address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>You then add the
         * <code>Rule</code> to a <code>WebACL</code> and specify that you want to blocks
         * requests that satisfy the <code>Rule</code>. For a request to be blocked, it
         * must come from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code>
         * header in the request must contain the value <code>BadBot</code>.</p> <p>To
         * create and configure a <code>Rule</code>, perform the following steps:</p> <ol>
         * <li> <p>Create and update the predicates that you want to include in the
         * <code>Rule</code>. For more information, see <a>CreateByteMatchSet</a>,
         * <a>CreateIPSet</a>, and <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRule</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateRule</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to specify the predicates that
         * you want to include in the <code>Rule</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>Rule</code>. For more
         * information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * <p>Creates a <code>Rule</code>, which contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to block. If you add more than one predicate to a
         * <code>Rule</code>, a request must match all of the specifications to be allowed
         * or blocked. For example, suppose that you add the following to a
         * <code>Rule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches the IP
         * address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>You then add the
         * <code>Rule</code> to a <code>WebACL</code> and specify that you want to blocks
         * requests that satisfy the <code>Rule</code>. For a request to be blocked, it
         * must come from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code>
         * header in the request must contain the value <code>BadBot</code>.</p> <p>To
         * create and configure a <code>Rule</code>, perform the following steps:</p> <ol>
         * <li> <p>Create and update the predicates that you want to include in the
         * <code>Rule</code>. For more information, see <a>CreateByteMatchSet</a>,
         * <a>CreateIPSet</a>, and <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRule</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateRule</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to specify the predicates that
         * you want to include in the <code>Rule</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>Rule</code>. For more
         * information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request) const;

        /**
         * <p>Creates a <code>Rule</code>, which contains the <code>IPSet</code> objects,
         * <code>ByteMatchSet</code> objects, and other predicates that identify the
         * requests that you want to block. If you add more than one predicate to a
         * <code>Rule</code>, a request must match all of the specifications to be allowed
         * or blocked. For example, suppose that you add the following to a
         * <code>Rule</code>:</p> <ul> <li> <p>An <code>IPSet</code> that matches the IP
         * address <code>192.0.2.44/32</code> </p> </li> <li> <p>A
         * <code>ByteMatchSet</code> that matches <code>BadBot</code> in the
         * <code>User-Agent</code> header</p> </li> </ul> <p>You then add the
         * <code>Rule</code> to a <code>WebACL</code> and specify that you want to blocks
         * requests that satisfy the <code>Rule</code>. For a request to be blocked, it
         * must come from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code>
         * header in the request must contain the value <code>BadBot</code>.</p> <p>To
         * create and configure a <code>Rule</code>, perform the following steps:</p> <ol>
         * <li> <p>Create and update the predicates that you want to include in the
         * <code>Rule</code>. For more information, see <a>CreateByteMatchSet</a>,
         * <a>CreateIPSet</a>, and <a>CreateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateRule</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateRule</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to specify the predicates that
         * you want to include in the <code>Rule</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>Rule</code>. For more
         * information, see <a>CreateWebACL</a>.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>RuleGroup</code>. A rule group is a collection of predefined
         * rules that you add to a web ACL. You use <a>UpdateRuleGroup</a> to add rules to
         * the rule group.</p> <p>Rule groups are subject to the following limits:</p> <ul>
         * <li> <p>Three rule groups per account. You can request an increase to this limit
         * by contacting customer support.</p> </li> <li> <p>One rule group per web
         * ACL.</p> </li> <li> <p>Ten rules per rule group.</p> </li> </ul> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupOutcome CreateRuleGroup(const Model::CreateRuleGroupRequest& request) const;

        /**
         * <p>Creates a <code>RuleGroup</code>. A rule group is a collection of predefined
         * rules that you add to a web ACL. You use <a>UpdateRuleGroup</a> to add rules to
         * the rule group.</p> <p>Rule groups are subject to the following limits:</p> <ul>
         * <li> <p>Three rule groups per account. You can request an increase to this limit
         * by contacting customer support.</p> </li> <li> <p>One rule group per web
         * ACL.</p> </li> <li> <p>Ten rules per rule group.</p> </li> </ul> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleGroupOutcomeCallable CreateRuleGroupCallable(const Model::CreateRuleGroupRequest& request) const;

        /**
         * <p>Creates a <code>RuleGroup</code>. A rule group is a collection of predefined
         * rules that you add to a web ACL. You use <a>UpdateRuleGroup</a> to add rules to
         * the rule group.</p> <p>Rule groups are subject to the following limits:</p> <ul>
         * <li> <p>Three rule groups per account. You can request an increase to this limit
         * by contacting customer support.</p> </li> <li> <p>One rule group per web
         * ACL.</p> </li> <li> <p>Ten rules per rule group.</p> </li> </ul> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleGroupAsync(const Model::CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>SizeConstraintSet</code>. You then use
         * <a>UpdateSizeConstraintSet</a> to identify the part of a web request that you
         * want AWS WAF to check for length, such as the length of the
         * <code>User-Agent</code> header or the length of the query string. For example,
         * you can create a <code>SizeConstraintSet</code> that matches any requests that
         * have a query string that is longer than 100 bytes. You can then configure AWS
         * WAF to reject those requests.</p> <p>To create and configure a
         * <code>SizeConstraintSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateSizeConstraintSet</a> request to specify the part of the request that
         * you want AWS WAF to inspect (for example, the header or the URI) and the value
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSizeConstraintSetOutcome CreateSizeConstraintSet(const Model::CreateSizeConstraintSetRequest& request) const;

        /**
         * <p>Creates a <code>SizeConstraintSet</code>. You then use
         * <a>UpdateSizeConstraintSet</a> to identify the part of a web request that you
         * want AWS WAF to check for length, such as the length of the
         * <code>User-Agent</code> header or the length of the query string. For example,
         * you can create a <code>SizeConstraintSet</code> that matches any requests that
         * have a query string that is longer than 100 bytes. You can then configure AWS
         * WAF to reject those requests.</p> <p>To create and configure a
         * <code>SizeConstraintSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateSizeConstraintSet</a> request to specify the part of the request that
         * you want AWS WAF to inspect (for example, the header or the URI) and the value
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateSizeConstraintSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSizeConstraintSetOutcomeCallable CreateSizeConstraintSetCallable(const Model::CreateSizeConstraintSetRequest& request) const;

        /**
         * <p>Creates a <code>SizeConstraintSet</code>. You then use
         * <a>UpdateSizeConstraintSet</a> to identify the part of a web request that you
         * want AWS WAF to check for length, such as the length of the
         * <code>User-Agent</code> header or the length of the query string. For example,
         * you can create a <code>SizeConstraintSet</code> that matches any requests that
         * have a query string that is longer than 100 bytes. You can then configure AWS
         * WAF to reject those requests.</p> <p>To create and configure a
         * <code>SizeConstraintSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <code>UpdateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit an
         * <a>UpdateSizeConstraintSet</a> request to specify the part of the request that
         * you want AWS WAF to inspect (for example, the header or the URI) and the value
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateSizeConstraintSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSizeConstraintSetAsync(const Model::CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a>SqlInjectionMatchSet</a>, which you use to allow, block, or
         * count requests that contain snippets of SQL code in a specified part of web
         * requests. AWS WAF searches for character sequences that are likely to be
         * malicious strings.</p> <p>To create and configure a
         * <code>SqlInjectionMatchSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <a>UpdateSqlInjectionMatchSet</a> request.</p> </li> <li> <p>Submit an
         * <a>UpdateSqlInjectionMatchSet</a> request to specify the parts of web requests
         * in which you want to allow, block, or count malicious SQL code.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSqlInjectionMatchSetOutcome CreateSqlInjectionMatchSet(const Model::CreateSqlInjectionMatchSetRequest& request) const;

        /**
         * <p>Creates a <a>SqlInjectionMatchSet</a>, which you use to allow, block, or
         * count requests that contain snippets of SQL code in a specified part of web
         * requests. AWS WAF searches for character sequences that are likely to be
         * malicious strings.</p> <p>To create and configure a
         * <code>SqlInjectionMatchSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <a>UpdateSqlInjectionMatchSet</a> request.</p> </li> <li> <p>Submit an
         * <a>UpdateSqlInjectionMatchSet</a> request to specify the parts of web requests
         * in which you want to allow, block, or count malicious SQL code.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSqlInjectionMatchSetOutcomeCallable CreateSqlInjectionMatchSetCallable(const Model::CreateSqlInjectionMatchSetRequest& request) const;

        /**
         * <p>Creates a <a>SqlInjectionMatchSet</a>, which you use to allow, block, or
         * count requests that contain snippets of SQL code in a specified part of web
         * requests. AWS WAF searches for character sequences that are likely to be
         * malicious strings.</p> <p>To create and configure a
         * <code>SqlInjectionMatchSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>CreateSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Use <code>GetChangeToken</code> to get the change
         * token that you provide in the <code>ChangeToken</code> parameter of an
         * <a>UpdateSqlInjectionMatchSet</a> request.</p> </li> <li> <p>Submit an
         * <a>UpdateSqlInjectionMatchSet</a> request to specify the parts of web requests
         * in which you want to allow, block, or count malicious SQL code.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSqlInjectionMatchSetAsync(const Model::CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>WebACL</code>, which contains the <code>Rules</code> that
         * identify the CloudFront web requests that you want to allow, block, or count.
         * AWS WAF evaluates <code>Rules</code> in order based on the value of
         * <code>Priority</code> for each <code>Rule</code>.</p> <p>You also specify a
         * default action, either <code>ALLOW</code> or <code>BLOCK</code>. If a web
         * request doesn't match any of the <code>Rules</code> in a <code>WebACL</code>,
         * AWS WAF responds to the request with the default action. </p> <p>To create and
         * configure a <code>WebACL</code>, perform the following steps:</p> <ol> <li>
         * <p>Create and update the <code>ByteMatchSet</code> objects and other predicates
         * that you want to include in <code>Rules</code>. For more information, see
         * <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>, <a>CreateIPSet</a>,
         * <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateWebACL</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateWebACL</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <a>UpdateWebACL</a> request to specify the <code>Rules</code>
         * that you want to include in the <code>WebACL</code>, to specify the default
         * action, and to associate the <code>WebACL</code> with a CloudFront
         * distribution.</p> </li> </ol> <p>For more information about how to use the AWS
         * WAF API, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebACLOutcome CreateWebACL(const Model::CreateWebACLRequest& request) const;

        /**
         * <p>Creates a <code>WebACL</code>, which contains the <code>Rules</code> that
         * identify the CloudFront web requests that you want to allow, block, or count.
         * AWS WAF evaluates <code>Rules</code> in order based on the value of
         * <code>Priority</code> for each <code>Rule</code>.</p> <p>You also specify a
         * default action, either <code>ALLOW</code> or <code>BLOCK</code>. If a web
         * request doesn't match any of the <code>Rules</code> in a <code>WebACL</code>,
         * AWS WAF responds to the request with the default action. </p> <p>To create and
         * configure a <code>WebACL</code>, perform the following steps:</p> <ol> <li>
         * <p>Create and update the <code>ByteMatchSet</code> objects and other predicates
         * that you want to include in <code>Rules</code>. For more information, see
         * <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>, <a>CreateIPSet</a>,
         * <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateWebACL</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateWebACL</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <a>UpdateWebACL</a> request to specify the <code>Rules</code>
         * that you want to include in the <code>WebACL</code>, to specify the default
         * action, and to associate the <code>WebACL</code> with a CloudFront
         * distribution.</p> </li> </ol> <p>For more information about how to use the AWS
         * WAF API, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebACLOutcomeCallable CreateWebACLCallable(const Model::CreateWebACLRequest& request) const;

        /**
         * <p>Creates a <code>WebACL</code>, which contains the <code>Rules</code> that
         * identify the CloudFront web requests that you want to allow, block, or count.
         * AWS WAF evaluates <code>Rules</code> in order based on the value of
         * <code>Priority</code> for each <code>Rule</code>.</p> <p>You also specify a
         * default action, either <code>ALLOW</code> or <code>BLOCK</code>. If a web
         * request doesn't match any of the <code>Rules</code> in a <code>WebACL</code>,
         * AWS WAF responds to the request with the default action. </p> <p>To create and
         * configure a <code>WebACL</code>, perform the following steps:</p> <ol> <li>
         * <p>Create and update the <code>ByteMatchSet</code> objects and other predicates
         * that you want to include in <code>Rules</code>. For more information, see
         * <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>, <a>CreateIPSet</a>,
         * <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>CreateWebACL</code> request.</p>
         * </li> <li> <p>Submit a <code>CreateWebACL</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <a>UpdateWebACL</a> request to specify the <code>Rules</code>
         * that you want to include in the <code>WebACL</code>, to specify the default
         * action, and to associate the <code>WebACL</code> with a CloudFront
         * distribution.</p> </li> </ol> <p>For more information about how to use the AWS
         * WAF API, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebACLAsync(const Model::CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a>XssMatchSet</a>, which you use to allow, block, or count
         * requests that contain cross-site scripting attacks in the specified part of web
         * requests. AWS WAF searches for character sequences that are likely to be
         * malicious strings.</p> <p>To create and configure an <code>XssMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateXssMatchSet</a> request.</p>
         * </li> <li> <p>Submit an <a>UpdateXssMatchSet</a> request to specify the parts of
         * web requests in which you want to allow, block, or count cross-site scripting
         * attacks.</p> </li> </ol> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateXssMatchSetOutcome CreateXssMatchSet(const Model::CreateXssMatchSetRequest& request) const;

        /**
         * <p>Creates an <a>XssMatchSet</a>, which you use to allow, block, or count
         * requests that contain cross-site scripting attacks in the specified part of web
         * requests. AWS WAF searches for character sequences that are likely to be
         * malicious strings.</p> <p>To create and configure an <code>XssMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateXssMatchSet</a> request.</p>
         * </li> <li> <p>Submit an <a>UpdateXssMatchSet</a> request to specify the parts of
         * web requests in which you want to allow, block, or count cross-site scripting
         * attacks.</p> </li> </ol> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateXssMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateXssMatchSetOutcomeCallable CreateXssMatchSetCallable(const Model::CreateXssMatchSetRequest& request) const;

        /**
         * <p>Creates an <a>XssMatchSet</a>, which you use to allow, block, or count
         * requests that contain cross-site scripting attacks in the specified part of web
         * requests. AWS WAF searches for character sequences that are likely to be
         * malicious strings.</p> <p>To create and configure an <code>XssMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>CreateXssMatchSet</code> request.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateXssMatchSet</a> request.</p>
         * </li> <li> <p>Submit an <a>UpdateXssMatchSet</a> request to specify the parts of
         * web requests in which you want to allow, block, or count cross-site scripting
         * attacks.</p> </li> </ol> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/CreateXssMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateXssMatchSetAsync(const Model::CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>ByteMatchSet</a>. You can't delete a
         * <code>ByteMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any <a>ByteMatchTuple</a> objects (any filters).</p> <p>If you
         * just want to remove a <code>ByteMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a <code>ByteMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Update the
         * <code>ByteMatchSet</code> to remove filters, if any. For more information, see
         * <a>UpdateByteMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteByteMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteByteMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteByteMatchSetOutcome DeleteByteMatchSet(const Model::DeleteByteMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>ByteMatchSet</a>. You can't delete a
         * <code>ByteMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any <a>ByteMatchTuple</a> objects (any filters).</p> <p>If you
         * just want to remove a <code>ByteMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a <code>ByteMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Update the
         * <code>ByteMatchSet</code> to remove filters, if any. For more information, see
         * <a>UpdateByteMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteByteMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteByteMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteByteMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteByteMatchSetOutcomeCallable DeleteByteMatchSetCallable(const Model::DeleteByteMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>ByteMatchSet</a>. You can't delete a
         * <code>ByteMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any <a>ByteMatchTuple</a> objects (any filters).</p> <p>If you
         * just want to remove a <code>ByteMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete a <code>ByteMatchSet</code>,
         * perform the following steps:</p> <ol> <li> <p>Update the
         * <code>ByteMatchSet</code> to remove filters, if any. For more information, see
         * <a>UpdateByteMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteByteMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteByteMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteByteMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteByteMatchSetAsync(const Model::DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>GeoMatchSet</a>. You can't delete a
         * <code>GeoMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any countries.</p> <p>If you just want to remove a
         * <code>GeoMatchSet</code> from a <code>Rule</code>, use <a>UpdateRule</a>.</p>
         * <p>To permanently delete a <code>GeoMatchSet</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>GeoMatchSet</code> to remove
         * any countries. For more information, see <a>UpdateGeoMatchSet</a>.</p> </li>
         * <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide in
         * the <code>ChangeToken</code> parameter of a <code>DeleteGeoMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteGeoMatchSet</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGeoMatchSetOutcome DeleteGeoMatchSet(const Model::DeleteGeoMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>GeoMatchSet</a>. You can't delete a
         * <code>GeoMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any countries.</p> <p>If you just want to remove a
         * <code>GeoMatchSet</code> from a <code>Rule</code>, use <a>UpdateRule</a>.</p>
         * <p>To permanently delete a <code>GeoMatchSet</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>GeoMatchSet</code> to remove
         * any countries. For more information, see <a>UpdateGeoMatchSet</a>.</p> </li>
         * <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide in
         * the <code>ChangeToken</code> parameter of a <code>DeleteGeoMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteGeoMatchSet</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteGeoMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGeoMatchSetOutcomeCallable DeleteGeoMatchSetCallable(const Model::DeleteGeoMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>GeoMatchSet</a>. You can't delete a
         * <code>GeoMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any countries.</p> <p>If you just want to remove a
         * <code>GeoMatchSet</code> from a <code>Rule</code>, use <a>UpdateRule</a>.</p>
         * <p>To permanently delete a <code>GeoMatchSet</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>GeoMatchSet</code> to remove
         * any countries. For more information, see <a>UpdateGeoMatchSet</a>.</p> </li>
         * <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide in
         * the <code>ChangeToken</code> parameter of a <code>DeleteGeoMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteGeoMatchSet</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteGeoMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGeoMatchSetAsync(const Model::DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes an <a>IPSet</a>. You can't delete an <code>IPSet</code>
         * if it's still used in any <code>Rules</code> or if it still includes any IP
         * addresses.</p> <p>If you just want to remove an <code>IPSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete an
         * <code>IPSet</code> from AWS WAF, perform the following steps:</p> <ol> <li>
         * <p>Update the <code>IPSet</code> to remove IP address ranges, if any. For more
         * information, see <a>UpdateIPSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a>
         * to get the change token that you provide in the <code>ChangeToken</code>
         * parameter of a <code>DeleteIPSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteIPSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;

        /**
         * <p>Permanently deletes an <a>IPSet</a>. You can't delete an <code>IPSet</code>
         * if it's still used in any <code>Rules</code> or if it still includes any IP
         * addresses.</p> <p>If you just want to remove an <code>IPSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete an
         * <code>IPSet</code> from AWS WAF, perform the following steps:</p> <ol> <li>
         * <p>Update the <code>IPSet</code> to remove IP address ranges, if any. For more
         * information, see <a>UpdateIPSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a>
         * to get the change token that you provide in the <code>ChangeToken</code>
         * parameter of a <code>DeleteIPSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteIPSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const Model::DeleteIPSetRequest& request) const;

        /**
         * <p>Permanently deletes an <a>IPSet</a>. You can't delete an <code>IPSet</code>
         * if it's still used in any <code>Rules</code> or if it still includes any IP
         * addresses.</p> <p>If you just want to remove an <code>IPSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete an
         * <code>IPSet</code> from AWS WAF, perform the following steps:</p> <ol> <li>
         * <p>Update the <code>IPSet</code> to remove IP address ranges, if any. For more
         * information, see <a>UpdateIPSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a>
         * to get the change token that you provide in the <code>ChangeToken</code>
         * parameter of a <code>DeleteIPSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteIPSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIPSetAsync(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes the <a>LoggingConfiguration</a> from the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggingConfigurationOutcome DeleteLoggingConfiguration(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * <p>Permanently deletes the <a>LoggingConfiguration</a> from the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * <p>Permanently deletes the <a>LoggingConfiguration</a> from the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoggingConfigurationAsync(const Model::DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes an IAM policy from the specified RuleGroup.</p> <p>The
         * user making the request must be the owner of the RuleGroup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeletePermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionPolicyOutcome DeletePermissionPolicy(const Model::DeletePermissionPolicyRequest& request) const;

        /**
         * <p>Permanently deletes an IAM policy from the specified RuleGroup.</p> <p>The
         * user making the request must be the owner of the RuleGroup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeletePermissionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePermissionPolicyOutcomeCallable DeletePermissionPolicyCallable(const Model::DeletePermissionPolicyRequest& request) const;

        /**
         * <p>Permanently deletes an IAM policy from the specified RuleGroup.</p> <p>The
         * user making the request must be the owner of the RuleGroup.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeletePermissionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePermissionPolicyAsync(const Model::DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>RateBasedRule</a>. You can't delete a rule if it's
         * still used in any <code>WebACL</code> objects or if it still includes any
         * predicates, such as <code>ByteMatchSet</code> objects.</p> <p>If you just want
         * to remove a rule from a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p> <p>To
         * permanently delete a <code>RateBasedRule</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>RateBasedRule</code> to
         * remove predicates, if any. For more information, see
         * <a>UpdateRateBasedRule</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteRateBasedRule</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRateBasedRule</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRateBasedRuleOutcome DeleteRateBasedRule(const Model::DeleteRateBasedRuleRequest& request) const;

        /**
         * <p>Permanently deletes a <a>RateBasedRule</a>. You can't delete a rule if it's
         * still used in any <code>WebACL</code> objects or if it still includes any
         * predicates, such as <code>ByteMatchSet</code> objects.</p> <p>If you just want
         * to remove a rule from a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p> <p>To
         * permanently delete a <code>RateBasedRule</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>RateBasedRule</code> to
         * remove predicates, if any. For more information, see
         * <a>UpdateRateBasedRule</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteRateBasedRule</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRateBasedRule</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRateBasedRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRateBasedRuleOutcomeCallable DeleteRateBasedRuleCallable(const Model::DeleteRateBasedRuleRequest& request) const;

        /**
         * <p>Permanently deletes a <a>RateBasedRule</a>. You can't delete a rule if it's
         * still used in any <code>WebACL</code> objects or if it still includes any
         * predicates, such as <code>ByteMatchSet</code> objects.</p> <p>If you just want
         * to remove a rule from a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p> <p>To
         * permanently delete a <code>RateBasedRule</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>RateBasedRule</code> to
         * remove predicates, if any. For more information, see
         * <a>UpdateRateBasedRule</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteRateBasedRule</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRateBasedRule</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRateBasedRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRateBasedRuleAsync(const Model::DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>RegexMatchSet</a>. You can't delete a
         * <code>RegexMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any <code>RegexMatchTuples</code> objects (any filters).</p>
         * <p>If you just want to remove a <code>RegexMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>RegexMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Update
         * the <code>RegexMatchSet</code> to remove filters, if any. For more information,
         * see <a>UpdateRegexMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of a <code>DeleteRegexMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRegexMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegexMatchSetOutcome DeleteRegexMatchSet(const Model::DeleteRegexMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>RegexMatchSet</a>. You can't delete a
         * <code>RegexMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any <code>RegexMatchTuples</code> objects (any filters).</p>
         * <p>If you just want to remove a <code>RegexMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>RegexMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Update
         * the <code>RegexMatchSet</code> to remove filters, if any. For more information,
         * see <a>UpdateRegexMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of a <code>DeleteRegexMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRegexMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRegexMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegexMatchSetOutcomeCallable DeleteRegexMatchSetCallable(const Model::DeleteRegexMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>RegexMatchSet</a>. You can't delete a
         * <code>RegexMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still includes any <code>RegexMatchTuples</code> objects (any filters).</p>
         * <p>If you just want to remove a <code>RegexMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>RegexMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Update
         * the <code>RegexMatchSet</code> to remove filters, if any. For more information,
         * see <a>UpdateRegexMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of a <code>DeleteRegexMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteRegexMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRegexMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegexMatchSetAsync(const Model::DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>RegexPatternSet</a>. You can't delete a
         * <code>RegexPatternSet</code> if it's still used in any
         * <code>RegexMatchSet</code> or if the <code>RegexPatternSet</code> is not empty.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegexPatternSetOutcome DeleteRegexPatternSet(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>RegexPatternSet</a>. You can't delete a
         * <code>RegexPatternSet</code> if it's still used in any
         * <code>RegexMatchSet</code> or if the <code>RegexPatternSet</code> is not empty.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegexPatternSetOutcomeCallable DeleteRegexPatternSetCallable(const Model::DeleteRegexPatternSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>RegexPatternSet</a>. You can't delete a
         * <code>RegexPatternSet</code> if it's still used in any
         * <code>RegexMatchSet</code> or if the <code>RegexPatternSet</code> is not empty.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegexPatternSetAsync(const Model::DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>Rule</a>. You can't delete a <code>Rule</code> if
         * it's still used in any <code>WebACL</code> objects or if it still includes any
         * predicates, such as <code>ByteMatchSet</code> objects.</p> <p>If you just want
         * to remove a <code>Rule</code> from a <code>WebACL</code>, use
         * <a>UpdateWebACL</a>.</p> <p>To permanently delete a <code>Rule</code> from AWS
         * WAF, perform the following steps:</p> <ol> <li> <p>Update the <code>Rule</code>
         * to remove predicates, if any. For more information, see <a>UpdateRule</a>.</p>
         * </li> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of a <code>DeleteRule</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteRule</code> request.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Permanently deletes a <a>Rule</a>. You can't delete a <code>Rule</code> if
         * it's still used in any <code>WebACL</code> objects or if it still includes any
         * predicates, such as <code>ByteMatchSet</code> objects.</p> <p>If you just want
         * to remove a <code>Rule</code> from a <code>WebACL</code>, use
         * <a>UpdateWebACL</a>.</p> <p>To permanently delete a <code>Rule</code> from AWS
         * WAF, perform the following steps:</p> <ol> <li> <p>Update the <code>Rule</code>
         * to remove predicates, if any. For more information, see <a>UpdateRule</a>.</p>
         * </li> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of a <code>DeleteRule</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteRule</code> request.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request) const;

        /**
         * <p>Permanently deletes a <a>Rule</a>. You can't delete a <code>Rule</code> if
         * it's still used in any <code>WebACL</code> objects or if it still includes any
         * predicates, such as <code>ByteMatchSet</code> objects.</p> <p>If you just want
         * to remove a <code>Rule</code> from a <code>WebACL</code>, use
         * <a>UpdateWebACL</a>.</p> <p>To permanently delete a <code>Rule</code> from AWS
         * WAF, perform the following steps:</p> <ol> <li> <p>Update the <code>Rule</code>
         * to remove predicates, if any. For more information, see <a>UpdateRule</a>.</p>
         * </li> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of a <code>DeleteRule</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteRule</code> request.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>RuleGroup</a>. You can't delete a
         * <code>RuleGroup</code> if it's still used in any <code>WebACL</code> objects or
         * if it still includes any rules.</p> <p>If you just want to remove a
         * <code>RuleGroup</code> from a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p>
         * <p>To permanently delete a <code>RuleGroup</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>RuleGroup</code> to remove
         * rules, if any. For more information, see <a>UpdateRuleGroup</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteRuleGroup</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteRuleGroup</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupOutcome DeleteRuleGroup(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * <p>Permanently deletes a <a>RuleGroup</a>. You can't delete a
         * <code>RuleGroup</code> if it's still used in any <code>WebACL</code> objects or
         * if it still includes any rules.</p> <p>If you just want to remove a
         * <code>RuleGroup</code> from a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p>
         * <p>To permanently delete a <code>RuleGroup</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>RuleGroup</code> to remove
         * rules, if any. For more information, see <a>UpdateRuleGroup</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteRuleGroup</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteRuleGroup</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleGroupOutcomeCallable DeleteRuleGroupCallable(const Model::DeleteRuleGroupRequest& request) const;

        /**
         * <p>Permanently deletes a <a>RuleGroup</a>. You can't delete a
         * <code>RuleGroup</code> if it's still used in any <code>WebACL</code> objects or
         * if it still includes any rules.</p> <p>If you just want to remove a
         * <code>RuleGroup</code> from a <code>WebACL</code>, use <a>UpdateWebACL</a>.</p>
         * <p>To permanently delete a <code>RuleGroup</code> from AWS WAF, perform the
         * following steps:</p> <ol> <li> <p>Update the <code>RuleGroup</code> to remove
         * rules, if any. For more information, see <a>UpdateRuleGroup</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteRuleGroup</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteRuleGroup</code> request.</p>
         * </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleGroupAsync(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>SizeConstraintSet</a>. You can't delete a
         * <code>SizeConstraintSet</code> if it's still used in any <code>Rules</code> or
         * if it still includes any <a>SizeConstraint</a> objects (any filters).</p> <p>If
         * you just want to remove a <code>SizeConstraintSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SizeConstraintSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Update the <code>SizeConstraintSet</code> to remove filters, if any. For more
         * information, see <a>UpdateSizeConstraintSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSizeConstraintSetOutcome DeleteSizeConstraintSet(const Model::DeleteSizeConstraintSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>SizeConstraintSet</a>. You can't delete a
         * <code>SizeConstraintSet</code> if it's still used in any <code>Rules</code> or
         * if it still includes any <a>SizeConstraint</a> objects (any filters).</p> <p>If
         * you just want to remove a <code>SizeConstraintSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SizeConstraintSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Update the <code>SizeConstraintSet</code> to remove filters, if any. For more
         * information, see <a>UpdateSizeConstraintSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSizeConstraintSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSizeConstraintSetOutcomeCallable DeleteSizeConstraintSetCallable(const Model::DeleteSizeConstraintSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>SizeConstraintSet</a>. You can't delete a
         * <code>SizeConstraintSet</code> if it's still used in any <code>Rules</code> or
         * if it still includes any <a>SizeConstraint</a> objects (any filters).</p> <p>If
         * you just want to remove a <code>SizeConstraintSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SizeConstraintSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Update the <code>SizeConstraintSet</code> to remove filters, if any. For more
         * information, see <a>UpdateSizeConstraintSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSizeConstraintSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSizeConstraintSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSizeConstraintSetAsync(const Model::DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>SqlInjectionMatchSet</a>. You can't delete a
         * <code>SqlInjectionMatchSet</code> if it's still used in any <code>Rules</code>
         * or if it still contains any <a>SqlInjectionMatchTuple</a> objects.</p> <p>If you
         * just want to remove a <code>SqlInjectionMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SqlInjectionMatchSet</code> from AWS WAF, perform the following steps:</p>
         * <ol> <li> <p>Update the <code>SqlInjectionMatchSet</code> to remove filters, if
         * any. For more information, see <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSqlInjectionMatchSetOutcome DeleteSqlInjectionMatchSet(const Model::DeleteSqlInjectionMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>SqlInjectionMatchSet</a>. You can't delete a
         * <code>SqlInjectionMatchSet</code> if it's still used in any <code>Rules</code>
         * or if it still contains any <a>SqlInjectionMatchTuple</a> objects.</p> <p>If you
         * just want to remove a <code>SqlInjectionMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SqlInjectionMatchSet</code> from AWS WAF, perform the following steps:</p>
         * <ol> <li> <p>Update the <code>SqlInjectionMatchSet</code> to remove filters, if
         * any. For more information, see <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSqlInjectionMatchSetOutcomeCallable DeleteSqlInjectionMatchSetCallable(const Model::DeleteSqlInjectionMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes a <a>SqlInjectionMatchSet</a>. You can't delete a
         * <code>SqlInjectionMatchSet</code> if it's still used in any <code>Rules</code>
         * or if it still contains any <a>SqlInjectionMatchTuple</a> objects.</p> <p>If you
         * just want to remove a <code>SqlInjectionMatchSet</code> from a
         * <code>Rule</code>, use <a>UpdateRule</a>.</p> <p>To permanently delete a
         * <code>SqlInjectionMatchSet</code> from AWS WAF, perform the following steps:</p>
         * <ol> <li> <p>Update the <code>SqlInjectionMatchSet</code> to remove filters, if
         * any. For more information, see <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li>
         * <p>Use <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> <li> <p>Submit a <code>DeleteSqlInjectionMatchSet</code>
         * request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSqlInjectionMatchSetAsync(const Model::DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes a <a>WebACL</a>. You can't delete a <code>WebACL</code>
         * if it still contains any <code>Rules</code>.</p> <p>To delete a
         * <code>WebACL</code>, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>WebACL</code> to remove <code>Rules</code>, if any. For more information,
         * see <a>UpdateWebACL</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteWebACL</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteWebACL</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebACLOutcome DeleteWebACL(const Model::DeleteWebACLRequest& request) const;

        /**
         * <p>Permanently deletes a <a>WebACL</a>. You can't delete a <code>WebACL</code>
         * if it still contains any <code>Rules</code>.</p> <p>To delete a
         * <code>WebACL</code>, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>WebACL</code> to remove <code>Rules</code>, if any. For more information,
         * see <a>UpdateWebACL</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteWebACL</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteWebACL</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebACLOutcomeCallable DeleteWebACLCallable(const Model::DeleteWebACLRequest& request) const;

        /**
         * <p>Permanently deletes a <a>WebACL</a>. You can't delete a <code>WebACL</code>
         * if it still contains any <code>Rules</code>.</p> <p>To delete a
         * <code>WebACL</code>, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>WebACL</code> to remove <code>Rules</code>, if any. For more information,
         * see <a>UpdateWebACL</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteWebACL</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteWebACL</code> request.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWebACLAsync(const Model::DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes an <a>XssMatchSet</a>. You can't delete an
         * <code>XssMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still contains any <a>XssMatchTuple</a> objects.</p> <p>If you just want to
         * remove an <code>XssMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete an <code>XssMatchSet</code> from
         * AWS WAF, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>XssMatchSet</code> to remove filters, if any. For more information, see
         * <a>UpdateXssMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteXssMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteXssMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteXssMatchSetOutcome DeleteXssMatchSet(const Model::DeleteXssMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes an <a>XssMatchSet</a>. You can't delete an
         * <code>XssMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still contains any <a>XssMatchTuple</a> objects.</p> <p>If you just want to
         * remove an <code>XssMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete an <code>XssMatchSet</code> from
         * AWS WAF, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>XssMatchSet</code> to remove filters, if any. For more information, see
         * <a>UpdateXssMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteXssMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteXssMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteXssMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteXssMatchSetOutcomeCallable DeleteXssMatchSetCallable(const Model::DeleteXssMatchSetRequest& request) const;

        /**
         * <p>Permanently deletes an <a>XssMatchSet</a>. You can't delete an
         * <code>XssMatchSet</code> if it's still used in any <code>Rules</code> or if it
         * still contains any <a>XssMatchTuple</a> objects.</p> <p>If you just want to
         * remove an <code>XssMatchSet</code> from a <code>Rule</code>, use
         * <a>UpdateRule</a>.</p> <p>To permanently delete an <code>XssMatchSet</code> from
         * AWS WAF, perform the following steps:</p> <ol> <li> <p>Update the
         * <code>XssMatchSet</code> to remove filters, if any. For more information, see
         * <a>UpdateXssMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get the
         * change token that you provide in the <code>ChangeToken</code> parameter of a
         * <code>DeleteXssMatchSet</code> request.</p> </li> <li> <p>Submit a
         * <code>DeleteXssMatchSet</code> request.</p> </li> </ol><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DeleteXssMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteXssMatchSetAsync(const Model::DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a web ACL from the specified resource, either an application load
         * balancer or Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DisassociateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWebACLOutcome DisassociateWebACL(const Model::DisassociateWebACLRequest& request) const;

        /**
         * <p>Removes a web ACL from the specified resource, either an application load
         * balancer or Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DisassociateWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWebACLOutcomeCallable DisassociateWebACLCallable(const Model::DisassociateWebACLRequest& request) const;

        /**
         * <p>Removes a web ACL from the specified resource, either an application load
         * balancer or Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/DisassociateWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWebACLAsync(const Model::DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>ByteMatchSet</a> specified by
         * <code>ByteMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetByteMatchSetOutcome GetByteMatchSet(const Model::GetByteMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>ByteMatchSet</a> specified by
         * <code>ByteMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetByteMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetByteMatchSetOutcomeCallable GetByteMatchSetCallable(const Model::GetByteMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>ByteMatchSet</a> specified by
         * <code>ByteMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetByteMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetByteMatchSetAsync(const Model::GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When you want to create, update, or delete AWS WAF objects, get a change
         * token and include the change token in the create, update, or delete request.
         * Change tokens ensure that your application doesn't submit conflicting requests
         * to AWS WAF.</p> <p>Each create, update, or delete request must use a unique
         * change token. If your application submits a <code>GetChangeToken</code> request
         * and then submits a second <code>GetChangeToken</code> request before submitting
         * a create, update, or delete request, the second <code>GetChangeToken</code>
         * request returns the same value as the first <code>GetChangeToken</code>
         * request.</p> <p>When you use a change token in a create, update, or delete
         * request, the status of the change token changes to <code>PENDING</code>, which
         * indicates that AWS WAF is propagating the change to all AWS WAF servers. Use
         * <code>GetChangeTokenStatus</code> to determine the status of your change
         * token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetChangeToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeTokenOutcome GetChangeToken(const Model::GetChangeTokenRequest& request) const;

        /**
         * <p>When you want to create, update, or delete AWS WAF objects, get a change
         * token and include the change token in the create, update, or delete request.
         * Change tokens ensure that your application doesn't submit conflicting requests
         * to AWS WAF.</p> <p>Each create, update, or delete request must use a unique
         * change token. If your application submits a <code>GetChangeToken</code> request
         * and then submits a second <code>GetChangeToken</code> request before submitting
         * a create, update, or delete request, the second <code>GetChangeToken</code>
         * request returns the same value as the first <code>GetChangeToken</code>
         * request.</p> <p>When you use a change token in a create, update, or delete
         * request, the status of the change token changes to <code>PENDING</code>, which
         * indicates that AWS WAF is propagating the change to all AWS WAF servers. Use
         * <code>GetChangeTokenStatus</code> to determine the status of your change
         * token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetChangeToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangeTokenOutcomeCallable GetChangeTokenCallable(const Model::GetChangeTokenRequest& request) const;

        /**
         * <p>When you want to create, update, or delete AWS WAF objects, get a change
         * token and include the change token in the create, update, or delete request.
         * Change tokens ensure that your application doesn't submit conflicting requests
         * to AWS WAF.</p> <p>Each create, update, or delete request must use a unique
         * change token. If your application submits a <code>GetChangeToken</code> request
         * and then submits a second <code>GetChangeToken</code> request before submitting
         * a create, update, or delete request, the second <code>GetChangeToken</code>
         * request returns the same value as the first <code>GetChangeToken</code>
         * request.</p> <p>When you use a change token in a create, update, or delete
         * request, the status of the change token changes to <code>PENDING</code>, which
         * indicates that AWS WAF is propagating the change to all AWS WAF servers. Use
         * <code>GetChangeTokenStatus</code> to determine the status of your change
         * token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetChangeToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangeTokenAsync(const Model::GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the status of a <code>ChangeToken</code> that you got by calling
         * <a>GetChangeToken</a>. <code>ChangeTokenStatus</code> is one of the following
         * values:</p> <ul> <li> <p> <code>PROVISIONED</code>: You requested the change
         * token by calling <code>GetChangeToken</code>, but you haven't used it yet in a
         * call to create, update, or delete an AWS WAF object.</p> </li> <li> <p>
         * <code>PENDING</code>: AWS WAF is propagating the create, update, or delete
         * request to all AWS WAF servers.</p> </li> <li> <p> <code>INSYNC</code>:
         * Propagation is complete.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetChangeTokenStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeTokenStatusOutcome GetChangeTokenStatus(const Model::GetChangeTokenStatusRequest& request) const;

        /**
         * <p>Returns the status of a <code>ChangeToken</code> that you got by calling
         * <a>GetChangeToken</a>. <code>ChangeTokenStatus</code> is one of the following
         * values:</p> <ul> <li> <p> <code>PROVISIONED</code>: You requested the change
         * token by calling <code>GetChangeToken</code>, but you haven't used it yet in a
         * call to create, update, or delete an AWS WAF object.</p> </li> <li> <p>
         * <code>PENDING</code>: AWS WAF is propagating the create, update, or delete
         * request to all AWS WAF servers.</p> </li> <li> <p> <code>INSYNC</code>:
         * Propagation is complete.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetChangeTokenStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangeTokenStatusOutcomeCallable GetChangeTokenStatusCallable(const Model::GetChangeTokenStatusRequest& request) const;

        /**
         * <p>Returns the status of a <code>ChangeToken</code> that you got by calling
         * <a>GetChangeToken</a>. <code>ChangeTokenStatus</code> is one of the following
         * values:</p> <ul> <li> <p> <code>PROVISIONED</code>: You requested the change
         * token by calling <code>GetChangeToken</code>, but you haven't used it yet in a
         * call to create, update, or delete an AWS WAF object.</p> </li> <li> <p>
         * <code>PENDING</code>: AWS WAF is propagating the create, update, or delete
         * request to all AWS WAF servers.</p> </li> <li> <p> <code>INSYNC</code>:
         * Propagation is complete.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetChangeTokenStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangeTokenStatusAsync(const Model::GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>GeoMatchSet</a> that is specified by
         * <code>GeoMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeoMatchSetOutcome GetGeoMatchSet(const Model::GetGeoMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>GeoMatchSet</a> that is specified by
         * <code>GeoMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetGeoMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGeoMatchSetOutcomeCallable GetGeoMatchSetCallable(const Model::GetGeoMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>GeoMatchSet</a> that is specified by
         * <code>GeoMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetGeoMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGeoMatchSetAsync(const Model::GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>IPSet</a> that is specified by
         * <code>IPSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;

        /**
         * <p>Returns the <a>IPSet</a> that is specified by
         * <code>IPSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIPSetOutcomeCallable GetIPSetCallable(const Model::GetIPSetRequest& request) const;

        /**
         * <p>Returns the <a>IPSet</a> that is specified by
         * <code>IPSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIPSetAsync(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>LoggingConfiguration</a> for the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingConfigurationOutcome GetLoggingConfiguration(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * <p>Returns the <a>LoggingConfiguration</a> for the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggingConfigurationOutcomeCallable GetLoggingConfigurationCallable(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * <p>Returns the <a>LoggingConfiguration</a> for the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggingConfigurationAsync(const Model::GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the IAM policy attached to the RuleGroup.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionPolicyOutcome GetPermissionPolicy(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * <p>Returns the IAM policy attached to the RuleGroup.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetPermissionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPermissionPolicyOutcomeCallable GetPermissionPolicyCallable(const Model::GetPermissionPolicyRequest& request) const;

        /**
         * <p>Returns the IAM policy attached to the RuleGroup.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetPermissionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPermissionPolicyAsync(const Model::GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>RateBasedRule</a> that is specified by the <code>RuleId</code>
         * that you included in the <code>GetRateBasedRule</code> request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRateBasedRuleOutcome GetRateBasedRule(const Model::GetRateBasedRuleRequest& request) const;

        /**
         * <p>Returns the <a>RateBasedRule</a> that is specified by the <code>RuleId</code>
         * that you included in the <code>GetRateBasedRule</code> request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRateBasedRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRateBasedRuleOutcomeCallable GetRateBasedRuleCallable(const Model::GetRateBasedRuleRequest& request) const;

        /**
         * <p>Returns the <a>RateBasedRule</a> that is specified by the <code>RuleId</code>
         * that you included in the <code>GetRateBasedRule</code> request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRateBasedRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRateBasedRuleAsync(const Model::GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of IP addresses currently being blocked by the
         * <a>RateBasedRule</a> that is specified by the <code>RuleId</code>. The maximum
         * number of managed keys that will be blocked is 10,000. If more than 10,000
         * addresses exceed the rate limit, the 10,000 addresses with the highest rates
         * will be blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRateBasedRuleManagedKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRateBasedRuleManagedKeysOutcome GetRateBasedRuleManagedKeys(const Model::GetRateBasedRuleManagedKeysRequest& request) const;

        /**
         * <p>Returns an array of IP addresses currently being blocked by the
         * <a>RateBasedRule</a> that is specified by the <code>RuleId</code>. The maximum
         * number of managed keys that will be blocked is 10,000. If more than 10,000
         * addresses exceed the rate limit, the 10,000 addresses with the highest rates
         * will be blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRateBasedRuleManagedKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRateBasedRuleManagedKeysOutcomeCallable GetRateBasedRuleManagedKeysCallable(const Model::GetRateBasedRuleManagedKeysRequest& request) const;

        /**
         * <p>Returns an array of IP addresses currently being blocked by the
         * <a>RateBasedRule</a> that is specified by the <code>RuleId</code>. The maximum
         * number of managed keys that will be blocked is 10,000. If more than 10,000
         * addresses exceed the rate limit, the 10,000 addresses with the highest rates
         * will be blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRateBasedRuleManagedKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRateBasedRuleManagedKeysAsync(const Model::GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>RegexMatchSet</a> specified by
         * <code>RegexMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegexMatchSetOutcome GetRegexMatchSet(const Model::GetRegexMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>RegexMatchSet</a> specified by
         * <code>RegexMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRegexMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegexMatchSetOutcomeCallable GetRegexMatchSetCallable(const Model::GetRegexMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>RegexMatchSet</a> specified by
         * <code>RegexMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRegexMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegexMatchSetAsync(const Model::GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>RegexPatternSet</a> specified by
         * <code>RegexPatternSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegexPatternSetOutcome GetRegexPatternSet(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * <p>Returns the <a>RegexPatternSet</a> specified by
         * <code>RegexPatternSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegexPatternSetOutcomeCallable GetRegexPatternSetCallable(const Model::GetRegexPatternSetRequest& request) const;

        /**
         * <p>Returns the <a>RegexPatternSet</a> specified by
         * <code>RegexPatternSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegexPatternSetAsync(const Model::GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>Rule</a> that is specified by the <code>RuleId</code> that you
         * included in the <code>GetRule</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleOutcome GetRule(const Model::GetRuleRequest& request) const;

        /**
         * <p>Returns the <a>Rule</a> that is specified by the <code>RuleId</code> that you
         * included in the <code>GetRule</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRuleOutcomeCallable GetRuleCallable(const Model::GetRuleRequest& request) const;

        /**
         * <p>Returns the <a>Rule</a> that is specified by the <code>RuleId</code> that you
         * included in the <code>GetRule</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRuleAsync(const Model::GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>RuleGroup</a> that is specified by the
         * <code>RuleGroupId</code> that you included in the <code>GetRuleGroup</code>
         * request.</p> <p>To view the rules in a rule group, use
         * <a>ListActivatedRulesInRuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleGroupOutcome GetRuleGroup(const Model::GetRuleGroupRequest& request) const;

        /**
         * <p>Returns the <a>RuleGroup</a> that is specified by the
         * <code>RuleGroupId</code> that you included in the <code>GetRuleGroup</code>
         * request.</p> <p>To view the rules in a rule group, use
         * <a>ListActivatedRulesInRuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRuleGroupOutcomeCallable GetRuleGroupCallable(const Model::GetRuleGroupRequest& request) const;

        /**
         * <p>Returns the <a>RuleGroup</a> that is specified by the
         * <code>RuleGroupId</code> that you included in the <code>GetRuleGroup</code>
         * request.</p> <p>To view the rules in a rule group, use
         * <a>ListActivatedRulesInRuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRuleGroupAsync(const Model::GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information about a specified number of requests--a
         * sample--that AWS WAF randomly selects from among the first 5,000 requests that
         * your AWS resource received during a time range that you choose. You can specify
         * a sample size of up to 500 requests, and you can specify any time range in the
         * previous three hours.</p> <p> <code>GetSampledRequests</code> returns a time
         * range, which is usually the time range that you specified. However, if your
         * resource (such as a CloudFront distribution) received 5,000 requests before the
         * specified time range elapsed, <code>GetSampledRequests</code> returns an updated
         * time range. This new time range indicates the actual period during which AWS WAF
         * selected the requests in the sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSampledRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSampledRequestsOutcome GetSampledRequests(const Model::GetSampledRequestsRequest& request) const;

        /**
         * <p>Gets detailed information about a specified number of requests--a
         * sample--that AWS WAF randomly selects from among the first 5,000 requests that
         * your AWS resource received during a time range that you choose. You can specify
         * a sample size of up to 500 requests, and you can specify any time range in the
         * previous three hours.</p> <p> <code>GetSampledRequests</code> returns a time
         * range, which is usually the time range that you specified. However, if your
         * resource (such as a CloudFront distribution) received 5,000 requests before the
         * specified time range elapsed, <code>GetSampledRequests</code> returns an updated
         * time range. This new time range indicates the actual period during which AWS WAF
         * selected the requests in the sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSampledRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSampledRequestsOutcomeCallable GetSampledRequestsCallable(const Model::GetSampledRequestsRequest& request) const;

        /**
         * <p>Gets detailed information about a specified number of requests--a
         * sample--that AWS WAF randomly selects from among the first 5,000 requests that
         * your AWS resource received during a time range that you choose. You can specify
         * a sample size of up to 500 requests, and you can specify any time range in the
         * previous three hours.</p> <p> <code>GetSampledRequests</code> returns a time
         * range, which is usually the time range that you specified. However, if your
         * resource (such as a CloudFront distribution) received 5,000 requests before the
         * specified time range elapsed, <code>GetSampledRequests</code> returns an updated
         * time range. This new time range indicates the actual period during which AWS WAF
         * selected the requests in the sample.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSampledRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSampledRequestsAsync(const Model::GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>SizeConstraintSet</a> specified by
         * <code>SizeConstraintSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSizeConstraintSetOutcome GetSizeConstraintSet(const Model::GetSizeConstraintSetRequest& request) const;

        /**
         * <p>Returns the <a>SizeConstraintSet</a> specified by
         * <code>SizeConstraintSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSizeConstraintSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSizeConstraintSetOutcomeCallable GetSizeConstraintSetCallable(const Model::GetSizeConstraintSetRequest& request) const;

        /**
         * <p>Returns the <a>SizeConstraintSet</a> specified by
         * <code>SizeConstraintSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSizeConstraintSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSizeConstraintSetAsync(const Model::GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>SqlInjectionMatchSet</a> that is specified by
         * <code>SqlInjectionMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSqlInjectionMatchSetOutcome GetSqlInjectionMatchSet(const Model::GetSqlInjectionMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>SqlInjectionMatchSet</a> that is specified by
         * <code>SqlInjectionMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSqlInjectionMatchSetOutcomeCallable GetSqlInjectionMatchSetCallable(const Model::GetSqlInjectionMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>SqlInjectionMatchSet</a> that is specified by
         * <code>SqlInjectionMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSqlInjectionMatchSetAsync(const Model::GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>WebACL</a> that is specified by
         * <code>WebACLId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebACLOutcome GetWebACL(const Model::GetWebACLRequest& request) const;

        /**
         * <p>Returns the <a>WebACL</a> that is specified by
         * <code>WebACLId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebACLOutcomeCallable GetWebACLCallable(const Model::GetWebACLRequest& request) const;

        /**
         * <p>Returns the <a>WebACL</a> that is specified by
         * <code>WebACLId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebACLAsync(const Model::GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the web ACL for the specified resource, either an application load
         * balancer or Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetWebACLForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebACLForResourceOutcome GetWebACLForResource(const Model::GetWebACLForResourceRequest& request) const;

        /**
         * <p>Returns the web ACL for the specified resource, either an application load
         * balancer or Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetWebACLForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWebACLForResourceOutcomeCallable GetWebACLForResourceCallable(const Model::GetWebACLForResourceRequest& request) const;

        /**
         * <p>Returns the web ACL for the specified resource, either an application load
         * balancer or Amazon API Gateway stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetWebACLForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWebACLForResourceAsync(const Model::GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a>XssMatchSet</a> that is specified by
         * <code>XssMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetXssMatchSetOutcome GetXssMatchSet(const Model::GetXssMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>XssMatchSet</a> that is specified by
         * <code>XssMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetXssMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetXssMatchSetOutcomeCallable GetXssMatchSetCallable(const Model::GetXssMatchSetRequest& request) const;

        /**
         * <p>Returns the <a>XssMatchSet</a> that is specified by
         * <code>XssMatchSetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetXssMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetXssMatchSetAsync(const Model::GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>ActivatedRule</a> objects.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListActivatedRulesInRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActivatedRulesInRuleGroupOutcome ListActivatedRulesInRuleGroup(const Model::ListActivatedRulesInRuleGroupRequest& request) const;

        /**
         * <p>Returns an array of <a>ActivatedRule</a> objects.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListActivatedRulesInRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActivatedRulesInRuleGroupOutcomeCallable ListActivatedRulesInRuleGroupCallable(const Model::ListActivatedRulesInRuleGroupRequest& request) const;

        /**
         * <p>Returns an array of <a>ActivatedRule</a> objects.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListActivatedRulesInRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActivatedRulesInRuleGroupAsync(const Model::ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>ByteMatchSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListByteMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListByteMatchSetsOutcome ListByteMatchSets(const Model::ListByteMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>ByteMatchSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListByteMatchSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListByteMatchSetsOutcomeCallable ListByteMatchSetsCallable(const Model::ListByteMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>ByteMatchSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListByteMatchSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListByteMatchSetsAsync(const Model::ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>GeoMatchSetSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListGeoMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeoMatchSetsOutcome ListGeoMatchSets(const Model::ListGeoMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>GeoMatchSetSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListGeoMatchSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeoMatchSetsOutcomeCallable ListGeoMatchSetsCallable(const Model::ListGeoMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>GeoMatchSetSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListGeoMatchSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGeoMatchSetsAsync(const Model::ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>IPSetSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListIPSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIPSetsOutcome ListIPSets(const Model::ListIPSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>IPSetSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListIPSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const Model::ListIPSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>IPSetSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListIPSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIPSetsAsync(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>LoggingConfiguration</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggingConfigurationsOutcome ListLoggingConfigurations(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * <p>Returns an array of <a>LoggingConfiguration</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggingConfigurationsOutcomeCallable ListLoggingConfigurationsCallable(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * <p>Returns an array of <a>LoggingConfiguration</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggingConfigurationsAsync(const Model::ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRateBasedRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRateBasedRulesOutcome ListRateBasedRules(const Model::ListRateBasedRulesRequest& request) const;

        /**
         * <p>Returns an array of <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRateBasedRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRateBasedRulesOutcomeCallable ListRateBasedRulesCallable(const Model::ListRateBasedRulesRequest& request) const;

        /**
         * <p>Returns an array of <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRateBasedRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRateBasedRulesAsync(const Model::ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>RegexMatchSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRegexMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegexMatchSetsOutcome ListRegexMatchSets(const Model::ListRegexMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>RegexMatchSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRegexMatchSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegexMatchSetsOutcomeCallable ListRegexMatchSetsCallable(const Model::ListRegexMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>RegexMatchSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRegexMatchSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegexMatchSetsAsync(const Model::ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>RegexPatternSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRegexPatternSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegexPatternSetsOutcome ListRegexPatternSets(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>RegexPatternSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRegexPatternSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegexPatternSetsOutcomeCallable ListRegexPatternSetsCallable(const Model::ListRegexPatternSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>RegexPatternSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRegexPatternSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegexPatternSetsAsync(const Model::ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of resources associated with the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListResourcesForWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesForWebACLOutcome ListResourcesForWebACL(const Model::ListResourcesForWebACLRequest& request) const;

        /**
         * <p>Returns an array of resources associated with the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListResourcesForWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesForWebACLOutcomeCallable ListResourcesForWebACLCallable(const Model::ListResourcesForWebACLRequest& request) const;

        /**
         * <p>Returns an array of resources associated with the specified web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListResourcesForWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesForWebACLAsync(const Model::ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>RuleGroup</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsOutcome ListRuleGroups(const Model::ListRuleGroupsRequest& request) const;

        /**
         * <p>Returns an array of <a>RuleGroup</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRuleGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleGroupsOutcomeCallable ListRuleGroupsCallable(const Model::ListRuleGroupsRequest& request) const;

        /**
         * <p>Returns an array of <a>RuleGroup</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRuleGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleGroupsAsync(const Model::ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * <p>Returns an array of <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesOutcomeCallable ListRulesCallable(const Model::ListRulesRequest& request) const;

        /**
         * <p>Returns an array of <a>RuleSummary</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesAsync(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>SizeConstraintSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSizeConstraintSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSizeConstraintSetsOutcome ListSizeConstraintSets(const Model::ListSizeConstraintSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>SizeConstraintSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSizeConstraintSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSizeConstraintSetsOutcomeCallable ListSizeConstraintSetsCallable(const Model::ListSizeConstraintSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>SizeConstraintSetSummary</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSizeConstraintSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSizeConstraintSetsAsync(const Model::ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>SqlInjectionMatchSet</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSqlInjectionMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSqlInjectionMatchSetsOutcome ListSqlInjectionMatchSets(const Model::ListSqlInjectionMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>SqlInjectionMatchSet</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSqlInjectionMatchSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSqlInjectionMatchSetsOutcomeCallable ListSqlInjectionMatchSetsCallable(const Model::ListSqlInjectionMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>SqlInjectionMatchSet</a> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSqlInjectionMatchSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSqlInjectionMatchSetsAsync(const Model::ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>RuleGroup</a> objects that you are subscribed
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSubscribedRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscribedRuleGroupsOutcome ListSubscribedRuleGroups(const Model::ListSubscribedRuleGroupsRequest& request) const;

        /**
         * <p>Returns an array of <a>RuleGroup</a> objects that you are subscribed
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSubscribedRuleGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscribedRuleGroupsOutcomeCallable ListSubscribedRuleGroupsCallable(const Model::ListSubscribedRuleGroupsRequest& request) const;

        /**
         * <p>Returns an array of <a>RuleGroup</a> objects that you are subscribed
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListSubscribedRuleGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscribedRuleGroupsAsync(const Model::ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>WebACLSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListWebACLs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebACLsOutcome ListWebACLs(const Model::ListWebACLsRequest& request) const;

        /**
         * <p>Returns an array of <a>WebACLSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListWebACLs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWebACLsOutcomeCallable ListWebACLsCallable(const Model::ListWebACLsRequest& request) const;

        /**
         * <p>Returns an array of <a>WebACLSummary</a> objects in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListWebACLs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWebACLsAsync(const Model::ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <a>XssMatchSet</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListXssMatchSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListXssMatchSetsOutcome ListXssMatchSets(const Model::ListXssMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>XssMatchSet</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListXssMatchSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListXssMatchSetsOutcomeCallable ListXssMatchSetsCallable(const Model::ListXssMatchSetsRequest& request) const;

        /**
         * <p>Returns an array of <a>XssMatchSet</a> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListXssMatchSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListXssMatchSetsAsync(const Model::ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a <a>LoggingConfiguration</a> with a specified web ACL.</p> <p>You
         * can access information about all traffic that AWS WAF inspects using the
         * following steps:</p> <ol> <li> <p>Create an Amazon Kinesis Data Firehose . </p>
         * <p>Create the data firehose with a PUT source and in the region that you are
         * operating. However, if you are capturing logs for Amazon CloudFront, always
         * create the firehose in US East (N. Virginia). </p> <note> <p>Do not create the
         * data firehose using a <code>Kinesis stream</code> as your source.</p> </note>
         * </li> <li> <p>Associate that firehose to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, AWS WAF will create a service linked role with the necessary
         * permissions to write logs to the Amazon Kinesis Data Firehose. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * Web ACL Traffic Information</a> in the <i>AWS WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingConfigurationOutcome PutLoggingConfiguration(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * <p>Associates a <a>LoggingConfiguration</a> with a specified web ACL.</p> <p>You
         * can access information about all traffic that AWS WAF inspects using the
         * following steps:</p> <ol> <li> <p>Create an Amazon Kinesis Data Firehose . </p>
         * <p>Create the data firehose with a PUT source and in the region that you are
         * operating. However, if you are capturing logs for Amazon CloudFront, always
         * create the firehose in US East (N. Virginia). </p> <note> <p>Do not create the
         * data firehose using a <code>Kinesis stream</code> as your source.</p> </note>
         * </li> <li> <p>Associate that firehose to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, AWS WAF will create a service linked role with the necessary
         * permissions to write logs to the Amazon Kinesis Data Firehose. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * Web ACL Traffic Information</a> in the <i>AWS WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLoggingConfigurationOutcomeCallable PutLoggingConfigurationCallable(const Model::PutLoggingConfigurationRequest& request) const;

        /**
         * <p>Associates a <a>LoggingConfiguration</a> with a specified web ACL.</p> <p>You
         * can access information about all traffic that AWS WAF inspects using the
         * following steps:</p> <ol> <li> <p>Create an Amazon Kinesis Data Firehose . </p>
         * <p>Create the data firehose with a PUT source and in the region that you are
         * operating. However, if you are capturing logs for Amazon CloudFront, always
         * create the firehose in US East (N. Virginia). </p> <note> <p>Do not create the
         * data firehose using a <code>Kinesis stream</code> as your source.</p> </note>
         * </li> <li> <p>Associate that firehose to your web ACL using a
         * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
         * successfully enable logging using a <code>PutLoggingConfiguration</code>
         * request, AWS WAF will create a service linked role with the necessary
         * permissions to write logs to the Amazon Kinesis Data Firehose. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
         * Web ACL Traffic Information</a> in the <i>AWS WAF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/PutLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLoggingConfigurationAsync(const Model::PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a IAM policy to the specified resource. The only supported use for
         * this action is to share a RuleGroup across accounts.</p> <p>The
         * <code>PutPermissionPolicy</code> is subject to the following restrictions:</p>
         * <ul> <li> <p>You can attach only one policy with each
         * <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The policy must
         * include an <code>Effect</code>, <code>Action</code> and <code>Principal</code>.
         * </p> </li> <li> <p> <code>Effect</code> must specify <code>Allow</code>.</p>
         * </li> <li> <p>The <code>Action</code> in the policy must be
         * <code>waf:UpdateWebACL</code>, <code>waf-regional:UpdateWebACL</code>,
         * <code>waf:GetRuleGroup</code> and <code>waf-regional:GetRuleGroup</code> . Any
         * extra or wildcard actions in the policy will be rejected.</p> </li> <li> <p>The
         * policy cannot include a <code>Resource</code> parameter.</p> </li> <li> <p>The
         * ARN in the request must be a valid WAF RuleGroup ARN and the RuleGroup must
         * exist in the same region.</p> </li> <li> <p>The user making the request must be
         * the owner of the RuleGroup.</p> </li> <li> <p>Your policy must be composed using
         * IAM Policy version 2012-10-17.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM
         * Policies</a>. </p> <p>An example of a valid policy parameter is shown in the
         * Examples section below.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/PutPermissionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionPolicyOutcome PutPermissionPolicy(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * <p>Attaches a IAM policy to the specified resource. The only supported use for
         * this action is to share a RuleGroup across accounts.</p> <p>The
         * <code>PutPermissionPolicy</code> is subject to the following restrictions:</p>
         * <ul> <li> <p>You can attach only one policy with each
         * <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The policy must
         * include an <code>Effect</code>, <code>Action</code> and <code>Principal</code>.
         * </p> </li> <li> <p> <code>Effect</code> must specify <code>Allow</code>.</p>
         * </li> <li> <p>The <code>Action</code> in the policy must be
         * <code>waf:UpdateWebACL</code>, <code>waf-regional:UpdateWebACL</code>,
         * <code>waf:GetRuleGroup</code> and <code>waf-regional:GetRuleGroup</code> . Any
         * extra or wildcard actions in the policy will be rejected.</p> </li> <li> <p>The
         * policy cannot include a <code>Resource</code> parameter.</p> </li> <li> <p>The
         * ARN in the request must be a valid WAF RuleGroup ARN and the RuleGroup must
         * exist in the same region.</p> </li> <li> <p>The user making the request must be
         * the owner of the RuleGroup.</p> </li> <li> <p>Your policy must be composed using
         * IAM Policy version 2012-10-17.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM
         * Policies</a>. </p> <p>An example of a valid policy parameter is shown in the
         * Examples section below.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/PutPermissionPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPermissionPolicyOutcomeCallable PutPermissionPolicyCallable(const Model::PutPermissionPolicyRequest& request) const;

        /**
         * <p>Attaches a IAM policy to the specified resource. The only supported use for
         * this action is to share a RuleGroup across accounts.</p> <p>The
         * <code>PutPermissionPolicy</code> is subject to the following restrictions:</p>
         * <ul> <li> <p>You can attach only one policy with each
         * <code>PutPermissionPolicy</code> request.</p> </li> <li> <p>The policy must
         * include an <code>Effect</code>, <code>Action</code> and <code>Principal</code>.
         * </p> </li> <li> <p> <code>Effect</code> must specify <code>Allow</code>.</p>
         * </li> <li> <p>The <code>Action</code> in the policy must be
         * <code>waf:UpdateWebACL</code>, <code>waf-regional:UpdateWebACL</code>,
         * <code>waf:GetRuleGroup</code> and <code>waf-regional:GetRuleGroup</code> . Any
         * extra or wildcard actions in the policy will be rejected.</p> </li> <li> <p>The
         * policy cannot include a <code>Resource</code> parameter.</p> </li> <li> <p>The
         * ARN in the request must be a valid WAF RuleGroup ARN and the RuleGroup must
         * exist in the same region.</p> </li> <li> <p>The user making the request must be
         * the owner of the RuleGroup.</p> </li> <li> <p>Your policy must be composed using
         * IAM Policy version 2012-10-17.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM
         * Policies</a>. </p> <p>An example of a valid policy parameter is shown in the
         * Examples section below.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/PutPermissionPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPermissionPolicyAsync(const Model::PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>ByteMatchTuple</a> objects (filters) in a
         * <a>ByteMatchSet</a>. For each <code>ByteMatchTuple</code> object, you specify
         * the following values: </p> <ul> <li> <p>Whether to insert or delete the object
         * from the array. If you want to change a <code>ByteMatchSetUpdate</code> object,
         * you delete the existing object and add a new one.</p> </li> <li> <p>The part of
         * a web request that you want AWS WAF to inspect, such as a query string or the
         * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The bytes
         * (typically a string that corresponds with ASCII characters) that you want AWS
         * WAF to look for. For more information, including how you specify the values for
         * the AWS WAF API and the AWS CLI or SDKs, see <code>TargetString</code> in the
         * <a>ByteMatchTuple</a> data type. </p> </li> <li> <p>Where to look, such as at
         * the beginning or the end of a query string.</p> </li> <li> <p>Whether to perform
         * any conversions on the request, such as converting it to lowercase, before
         * inspecting it for the specified string.</p> </li> </ul> <p>For example, you can
         * add a <code>ByteMatchSetUpdate</code> object that matches web requests in which
         * <code>User-Agent</code> headers contain the string <code>BadBot</code>. You can
         * then configure AWS WAF to block those requests.</p> <p>To create and configure a
         * <code>ByteMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Create
         * a <code>ByteMatchSet.</code> For more information, see
         * <a>CreateByteMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <code>UpdateByteMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateByteMatchSet</code> request to specify the part of the request that
         * you want AWS WAF to inspect (for example, the header or the URI) and the value
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateByteMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateByteMatchSetOutcome UpdateByteMatchSet(const Model::UpdateByteMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>ByteMatchTuple</a> objects (filters) in a
         * <a>ByteMatchSet</a>. For each <code>ByteMatchTuple</code> object, you specify
         * the following values: </p> <ul> <li> <p>Whether to insert or delete the object
         * from the array. If you want to change a <code>ByteMatchSetUpdate</code> object,
         * you delete the existing object and add a new one.</p> </li> <li> <p>The part of
         * a web request that you want AWS WAF to inspect, such as a query string or the
         * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The bytes
         * (typically a string that corresponds with ASCII characters) that you want AWS
         * WAF to look for. For more information, including how you specify the values for
         * the AWS WAF API and the AWS CLI or SDKs, see <code>TargetString</code> in the
         * <a>ByteMatchTuple</a> data type. </p> </li> <li> <p>Where to look, such as at
         * the beginning or the end of a query string.</p> </li> <li> <p>Whether to perform
         * any conversions on the request, such as converting it to lowercase, before
         * inspecting it for the specified string.</p> </li> </ul> <p>For example, you can
         * add a <code>ByteMatchSetUpdate</code> object that matches web requests in which
         * <code>User-Agent</code> headers contain the string <code>BadBot</code>. You can
         * then configure AWS WAF to block those requests.</p> <p>To create and configure a
         * <code>ByteMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Create
         * a <code>ByteMatchSet.</code> For more information, see
         * <a>CreateByteMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <code>UpdateByteMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateByteMatchSet</code> request to specify the part of the request that
         * you want AWS WAF to inspect (for example, the header or the URI) and the value
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateByteMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateByteMatchSetOutcomeCallable UpdateByteMatchSetCallable(const Model::UpdateByteMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>ByteMatchTuple</a> objects (filters) in a
         * <a>ByteMatchSet</a>. For each <code>ByteMatchTuple</code> object, you specify
         * the following values: </p> <ul> <li> <p>Whether to insert or delete the object
         * from the array. If you want to change a <code>ByteMatchSetUpdate</code> object,
         * you delete the existing object and add a new one.</p> </li> <li> <p>The part of
         * a web request that you want AWS WAF to inspect, such as a query string or the
         * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The bytes
         * (typically a string that corresponds with ASCII characters) that you want AWS
         * WAF to look for. For more information, including how you specify the values for
         * the AWS WAF API and the AWS CLI or SDKs, see <code>TargetString</code> in the
         * <a>ByteMatchTuple</a> data type. </p> </li> <li> <p>Where to look, such as at
         * the beginning or the end of a query string.</p> </li> <li> <p>Whether to perform
         * any conversions on the request, such as converting it to lowercase, before
         * inspecting it for the specified string.</p> </li> </ul> <p>For example, you can
         * add a <code>ByteMatchSetUpdate</code> object that matches web requests in which
         * <code>User-Agent</code> headers contain the string <code>BadBot</code>. You can
         * then configure AWS WAF to block those requests.</p> <p>To create and configure a
         * <code>ByteMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Create
         * a <code>ByteMatchSet.</code> For more information, see
         * <a>CreateByteMatchSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <code>UpdateByteMatchSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateByteMatchSet</code> request to specify the part of the request that
         * you want AWS WAF to inspect (for example, the header or the URI) and the value
         * that you want AWS WAF to watch for.</p> </li> </ol> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateByteMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateByteMatchSetAsync(const Model::UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>GeoMatchConstraint</a> objects in an
         * <code>GeoMatchSet</code>. For each <code>GeoMatchConstraint</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change an <code>GeoMatchConstraint</code>
         * object, you delete the existing object and add a new one.</p> </li> <li> <p>The
         * <code>Type</code>. The only valid value for <code>Type</code> is
         * <code>Country</code>.</p> </li> <li> <p>The <code>Value</code>, which is a two
         * character code for the country to add to the <code>GeoMatchConstraint</code>
         * object. Valid codes are listed in <a>GeoMatchConstraint$Value</a>.</p> </li>
         * </ul> <p>To create and configure an <code>GeoMatchSet</code>, perform the
         * following steps:</p> <ol> <li> <p>Submit a <a>CreateGeoMatchSet</a> request.</p>
         * </li> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of an <a>UpdateGeoMatchSet</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateGeoMatchSet</code> request to
         * specify the country that you want AWS WAF to watch for.</p> </li> </ol> <p>When
         * you update an <code>GeoMatchSet</code>, you specify the country that you want to
         * add and/or the country that you want to delete. If you want to change a country,
         * you delete the existing country and add the new one.</p> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateGeoMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGeoMatchSetOutcome UpdateGeoMatchSet(const Model::UpdateGeoMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>GeoMatchConstraint</a> objects in an
         * <code>GeoMatchSet</code>. For each <code>GeoMatchConstraint</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change an <code>GeoMatchConstraint</code>
         * object, you delete the existing object and add a new one.</p> </li> <li> <p>The
         * <code>Type</code>. The only valid value for <code>Type</code> is
         * <code>Country</code>.</p> </li> <li> <p>The <code>Value</code>, which is a two
         * character code for the country to add to the <code>GeoMatchConstraint</code>
         * object. Valid codes are listed in <a>GeoMatchConstraint$Value</a>.</p> </li>
         * </ul> <p>To create and configure an <code>GeoMatchSet</code>, perform the
         * following steps:</p> <ol> <li> <p>Submit a <a>CreateGeoMatchSet</a> request.</p>
         * </li> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of an <a>UpdateGeoMatchSet</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateGeoMatchSet</code> request to
         * specify the country that you want AWS WAF to watch for.</p> </li> </ol> <p>When
         * you update an <code>GeoMatchSet</code>, you specify the country that you want to
         * add and/or the country that you want to delete. If you want to change a country,
         * you delete the existing country and add the new one.</p> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateGeoMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGeoMatchSetOutcomeCallable UpdateGeoMatchSetCallable(const Model::UpdateGeoMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>GeoMatchConstraint</a> objects in an
         * <code>GeoMatchSet</code>. For each <code>GeoMatchConstraint</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change an <code>GeoMatchConstraint</code>
         * object, you delete the existing object and add a new one.</p> </li> <li> <p>The
         * <code>Type</code>. The only valid value for <code>Type</code> is
         * <code>Country</code>.</p> </li> <li> <p>The <code>Value</code>, which is a two
         * character code for the country to add to the <code>GeoMatchConstraint</code>
         * object. Valid codes are listed in <a>GeoMatchConstraint$Value</a>.</p> </li>
         * </ul> <p>To create and configure an <code>GeoMatchSet</code>, perform the
         * following steps:</p> <ol> <li> <p>Submit a <a>CreateGeoMatchSet</a> request.</p>
         * </li> <li> <p>Use <a>GetChangeToken</a> to get the change token that you provide
         * in the <code>ChangeToken</code> parameter of an <a>UpdateGeoMatchSet</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateGeoMatchSet</code> request to
         * specify the country that you want AWS WAF to watch for.</p> </li> </ol> <p>When
         * you update an <code>GeoMatchSet</code>, you specify the country that you want to
         * add and/or the country that you want to delete. If you want to change a country,
         * you delete the existing country and add the new one.</p> <p>For more information
         * about how to use the AWS WAF API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateGeoMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGeoMatchSetAsync(const Model::UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>IPSetDescriptor</a> objects in an <code>IPSet</code>.
         * For each <code>IPSetDescriptor</code> object, you specify the following values:
         * </p> <ul> <li> <p>Whether to insert or delete the object from the array. If you
         * want to change an <code>IPSetDescriptor</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The IP address version,
         * <code>IPv4</code> or <code>IPv6</code>. </p> </li> <li> <p>The IP address in
         * CIDR notation, for example, <code>192.0.2.0/24</code> (for the range of IP
         * addresses from <code>192.0.2.0</code> to <code>192.0.2.255</code>) or
         * <code>192.0.2.44/32</code> (for the individual IP address
         * <code>192.0.2.44</code>). </p> </li> </ul> <p>AWS WAF supports IPv4 address
         * ranges: /8 and any range between /16 through /32. AWS WAF supports IPv6 address
         * ranges: /24, /32, /48, /56, /64, and /128. For more information about CIDR
         * notation, see the Wikipedia entry <a
         * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>.</p> <p>IPv6 addresses can be represented using any of
         * the following formats:</p> <ul> <li>
         * <p>1111:0000:0000:0000:0000:0000:0000:0111/128</p> </li> <li>
         * <p>1111:0:0:0:0:0:0:0111/128</p> </li> <li> <p>1111::0111/128</p> </li> <li>
         * <p>1111::111/128</p> </li> </ul> <p>You use an <code>IPSet</code> to specify
         * which web requests you want to allow or block based on the IP addresses that the
         * requests originated from. For example, if you're receiving a lot of requests
         * from one or a small number of IP addresses and you want to block the requests,
         * you can create an <code>IPSet</code> that specifies those IP addresses, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>IPSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateIPSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateIPSet</code> request to specify the IP addresses that you want AWS
         * WAF to watch for.</p> </li> </ol> <p>When you update an <code>IPSet</code>, you
         * specify the IP addresses that you want to add and/or the IP addresses that you
         * want to delete. If you want to change an IP address, you delete the existing IP
         * address and add the new one.</p> <p>You can insert a maximum of 1000 addresses
         * in a single request.</p> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>IPSetDescriptor</a> objects in an <code>IPSet</code>.
         * For each <code>IPSetDescriptor</code> object, you specify the following values:
         * </p> <ul> <li> <p>Whether to insert or delete the object from the array. If you
         * want to change an <code>IPSetDescriptor</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The IP address version,
         * <code>IPv4</code> or <code>IPv6</code>. </p> </li> <li> <p>The IP address in
         * CIDR notation, for example, <code>192.0.2.0/24</code> (for the range of IP
         * addresses from <code>192.0.2.0</code> to <code>192.0.2.255</code>) or
         * <code>192.0.2.44/32</code> (for the individual IP address
         * <code>192.0.2.44</code>). </p> </li> </ul> <p>AWS WAF supports IPv4 address
         * ranges: /8 and any range between /16 through /32. AWS WAF supports IPv6 address
         * ranges: /24, /32, /48, /56, /64, and /128. For more information about CIDR
         * notation, see the Wikipedia entry <a
         * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>.</p> <p>IPv6 addresses can be represented using any of
         * the following formats:</p> <ul> <li>
         * <p>1111:0000:0000:0000:0000:0000:0000:0111/128</p> </li> <li>
         * <p>1111:0:0:0:0:0:0:0111/128</p> </li> <li> <p>1111::0111/128</p> </li> <li>
         * <p>1111::111/128</p> </li> </ul> <p>You use an <code>IPSet</code> to specify
         * which web requests you want to allow or block based on the IP addresses that the
         * requests originated from. For example, if you're receiving a lot of requests
         * from one or a small number of IP addresses and you want to block the requests,
         * you can create an <code>IPSet</code> that specifies those IP addresses, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>IPSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateIPSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateIPSet</code> request to specify the IP addresses that you want AWS
         * WAF to watch for.</p> </li> </ol> <p>When you update an <code>IPSet</code>, you
         * specify the IP addresses that you want to add and/or the IP addresses that you
         * want to delete. If you want to change an IP address, you delete the existing IP
         * address and add the new one.</p> <p>You can insert a maximum of 1000 addresses
         * in a single request.</p> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const Model::UpdateIPSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>IPSetDescriptor</a> objects in an <code>IPSet</code>.
         * For each <code>IPSetDescriptor</code> object, you specify the following values:
         * </p> <ul> <li> <p>Whether to insert or delete the object from the array. If you
         * want to change an <code>IPSetDescriptor</code> object, you delete the existing
         * object and add a new one.</p> </li> <li> <p>The IP address version,
         * <code>IPv4</code> or <code>IPv6</code>. </p> </li> <li> <p>The IP address in
         * CIDR notation, for example, <code>192.0.2.0/24</code> (for the range of IP
         * addresses from <code>192.0.2.0</code> to <code>192.0.2.255</code>) or
         * <code>192.0.2.44/32</code> (for the individual IP address
         * <code>192.0.2.44</code>). </p> </li> </ul> <p>AWS WAF supports IPv4 address
         * ranges: /8 and any range between /16 through /32. AWS WAF supports IPv6 address
         * ranges: /24, /32, /48, /56, /64, and /128. For more information about CIDR
         * notation, see the Wikipedia entry <a
         * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
         * Inter-Domain Routing</a>.</p> <p>IPv6 addresses can be represented using any of
         * the following formats:</p> <ul> <li>
         * <p>1111:0000:0000:0000:0000:0000:0000:0111/128</p> </li> <li>
         * <p>1111:0:0:0:0:0:0:0111/128</p> </li> <li> <p>1111::0111/128</p> </li> <li>
         * <p>1111::111/128</p> </li> </ul> <p>You use an <code>IPSet</code> to specify
         * which web requests you want to allow or block based on the IP addresses that the
         * requests originated from. For example, if you're receiving a lot of requests
         * from one or a small number of IP addresses and you want to block the requests,
         * you can create an <code>IPSet</code> that specifies those IP addresses, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure an
         * <code>IPSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateIPSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to get
         * the change token that you provide in the <code>ChangeToken</code> parameter of
         * an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateIPSet</code> request to specify the IP addresses that you want AWS
         * WAF to watch for.</p> </li> </ol> <p>When you update an <code>IPSet</code>, you
         * specify the IP addresses that you want to add and/or the IP addresses that you
         * want to delete. If you want to change an IP address, you delete the existing IP
         * address and add the new one.</p> <p>You can insert a maximum of 1000 addresses
         * in a single request.</p> <p>For more information about how to use the AWS WAF
         * API to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIPSetAsync(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>Predicate</a> objects in a rule and updates the
         * <code>RateLimit</code> in the rule. </p> <p>Each <code>Predicate</code> object
         * identifies a predicate, such as a <a>ByteMatchSet</a> or an <a>IPSet</a>, that
         * specifies the web requests that you want to block or count. The
         * <code>RateLimit</code> specifies the number of requests every five minutes that
         * triggers the rule.</p> <p>If you add more than one predicate to a
         * <code>RateBasedRule</code>, a request must match all the predicates and exceed
         * the <code>RateLimit</code> to be counted or blocked. For example, suppose you
         * add the following to a <code>RateBasedRule</code>:</p> <ul> <li> <p>An
         * <code>IPSet</code> that matches the IP address <code>192.0.2.44/32</code> </p>
         * </li> <li> <p>A <code>ByteMatchSet</code> that matches <code>BadBot</code> in
         * the <code>User-Agent</code> header</p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 15,000.</p> <p>You then add the
         * <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that satisfy the rule. For a request to be blocked, it must come
         * from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code> header in
         * the request must contain the value <code>BadBot</code>. Further, requests that
         * match these two conditions much be received at a rate of more than 15,000 every
         * five minutes. If the rate drops below this limit, AWS WAF no longer blocks the
         * requests.</p> <p>As a second example, suppose you want to limit requests to a
         * particular page on your site. To do this, you could add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>A <code>ByteMatchSet</code> with
         * <code>FieldToMatch</code> of <code>URI</code> </p> </li> <li> <p>A
         * <code>PositionalConstraint</code> of <code>STARTS_WITH</code> </p> </li> <li>
         * <p>A <code>TargetString</code> of <code>login</code> </p> </li> </ul>
         * <p>Further, you specify a <code>RateLimit</code> of 15,000.</p> <p>By adding
         * this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit
         * requests to your login page without affecting the rest of your
         * site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRateBasedRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRateBasedRuleOutcome UpdateRateBasedRule(const Model::UpdateRateBasedRuleRequest& request) const;

        /**
         * <p>Inserts or deletes <a>Predicate</a> objects in a rule and updates the
         * <code>RateLimit</code> in the rule. </p> <p>Each <code>Predicate</code> object
         * identifies a predicate, such as a <a>ByteMatchSet</a> or an <a>IPSet</a>, that
         * specifies the web requests that you want to block or count. The
         * <code>RateLimit</code> specifies the number of requests every five minutes that
         * triggers the rule.</p> <p>If you add more than one predicate to a
         * <code>RateBasedRule</code>, a request must match all the predicates and exceed
         * the <code>RateLimit</code> to be counted or blocked. For example, suppose you
         * add the following to a <code>RateBasedRule</code>:</p> <ul> <li> <p>An
         * <code>IPSet</code> that matches the IP address <code>192.0.2.44/32</code> </p>
         * </li> <li> <p>A <code>ByteMatchSet</code> that matches <code>BadBot</code> in
         * the <code>User-Agent</code> header</p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 15,000.</p> <p>You then add the
         * <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that satisfy the rule. For a request to be blocked, it must come
         * from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code> header in
         * the request must contain the value <code>BadBot</code>. Further, requests that
         * match these two conditions much be received at a rate of more than 15,000 every
         * five minutes. If the rate drops below this limit, AWS WAF no longer blocks the
         * requests.</p> <p>As a second example, suppose you want to limit requests to a
         * particular page on your site. To do this, you could add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>A <code>ByteMatchSet</code> with
         * <code>FieldToMatch</code> of <code>URI</code> </p> </li> <li> <p>A
         * <code>PositionalConstraint</code> of <code>STARTS_WITH</code> </p> </li> <li>
         * <p>A <code>TargetString</code> of <code>login</code> </p> </li> </ul>
         * <p>Further, you specify a <code>RateLimit</code> of 15,000.</p> <p>By adding
         * this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit
         * requests to your login page without affecting the rest of your
         * site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRateBasedRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRateBasedRuleOutcomeCallable UpdateRateBasedRuleCallable(const Model::UpdateRateBasedRuleRequest& request) const;

        /**
         * <p>Inserts or deletes <a>Predicate</a> objects in a rule and updates the
         * <code>RateLimit</code> in the rule. </p> <p>Each <code>Predicate</code> object
         * identifies a predicate, such as a <a>ByteMatchSet</a> or an <a>IPSet</a>, that
         * specifies the web requests that you want to block or count. The
         * <code>RateLimit</code> specifies the number of requests every five minutes that
         * triggers the rule.</p> <p>If you add more than one predicate to a
         * <code>RateBasedRule</code>, a request must match all the predicates and exceed
         * the <code>RateLimit</code> to be counted or blocked. For example, suppose you
         * add the following to a <code>RateBasedRule</code>:</p> <ul> <li> <p>An
         * <code>IPSet</code> that matches the IP address <code>192.0.2.44/32</code> </p>
         * </li> <li> <p>A <code>ByteMatchSet</code> that matches <code>BadBot</code> in
         * the <code>User-Agent</code> header</p> </li> </ul> <p>Further, you specify a
         * <code>RateLimit</code> of 15,000.</p> <p>You then add the
         * <code>RateBasedRule</code> to a <code>WebACL</code> and specify that you want to
         * block requests that satisfy the rule. For a request to be blocked, it must come
         * from the IP address 192.0.2.44 <i>and</i> the <code>User-Agent</code> header in
         * the request must contain the value <code>BadBot</code>. Further, requests that
         * match these two conditions much be received at a rate of more than 15,000 every
         * five minutes. If the rate drops below this limit, AWS WAF no longer blocks the
         * requests.</p> <p>As a second example, suppose you want to limit requests to a
         * particular page on your site. To do this, you could add the following to a
         * <code>RateBasedRule</code>:</p> <ul> <li> <p>A <code>ByteMatchSet</code> with
         * <code>FieldToMatch</code> of <code>URI</code> </p> </li> <li> <p>A
         * <code>PositionalConstraint</code> of <code>STARTS_WITH</code> </p> </li> <li>
         * <p>A <code>TargetString</code> of <code>login</code> </p> </li> </ul>
         * <p>Further, you specify a <code>RateLimit</code> of 15,000.</p> <p>By adding
         * this <code>RateBasedRule</code> to a <code>WebACL</code>, you could limit
         * requests to your login page without affecting the rest of your
         * site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRateBasedRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRateBasedRuleAsync(const Model::UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>RegexMatchTuple</a> objects (filters) in a
         * <a>RegexMatchSet</a>. For each <code>RegexMatchSetUpdate</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change a <code>RegexMatchSetUpdate</code>
         * object, you delete the existing object and add a new one.</p> </li> <li> <p>The
         * part of a web request that you want AWS WAF to inspectupdate, such as a query
         * string or the value of the <code>User-Agent</code> header. </p> </li> <li>
         * <p>The identifier of the pattern (a regular expression) that you want AWS WAF to
         * look for. For more information, see <a>RegexPatternSet</a>. </p> </li> <li>
         * <p>Whether to perform any conversions on the request, such as converting it to
         * lowercase, before inspecting it for the specified string.</p> </li> </ul> <p>
         * For example, you can create a <code>RegexPatternSet</code> that matches any
         * requests with <code>User-Agent</code> headers that contain the string
         * <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject those
         * requests.</p> <p>To create and configure a <code>RegexMatchSet</code>, perform
         * the following steps:</p> <ol> <li> <p>Create a <code>RegexMatchSet.</code> For
         * more information, see <a>CreateRegexMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexMatchSet</code> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the identifier of the <code>RegexPatternSet</code>
         * that contain the regular expression patters you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRegexMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegexMatchSetOutcome UpdateRegexMatchSet(const Model::UpdateRegexMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>RegexMatchTuple</a> objects (filters) in a
         * <a>RegexMatchSet</a>. For each <code>RegexMatchSetUpdate</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change a <code>RegexMatchSetUpdate</code>
         * object, you delete the existing object and add a new one.</p> </li> <li> <p>The
         * part of a web request that you want AWS WAF to inspectupdate, such as a query
         * string or the value of the <code>User-Agent</code> header. </p> </li> <li>
         * <p>The identifier of the pattern (a regular expression) that you want AWS WAF to
         * look for. For more information, see <a>RegexPatternSet</a>. </p> </li> <li>
         * <p>Whether to perform any conversions on the request, such as converting it to
         * lowercase, before inspecting it for the specified string.</p> </li> </ul> <p>
         * For example, you can create a <code>RegexPatternSet</code> that matches any
         * requests with <code>User-Agent</code> headers that contain the string
         * <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject those
         * requests.</p> <p>To create and configure a <code>RegexMatchSet</code>, perform
         * the following steps:</p> <ol> <li> <p>Create a <code>RegexMatchSet.</code> For
         * more information, see <a>CreateRegexMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexMatchSet</code> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the identifier of the <code>RegexPatternSet</code>
         * that contain the regular expression patters you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRegexMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegexMatchSetOutcomeCallable UpdateRegexMatchSetCallable(const Model::UpdateRegexMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>RegexMatchTuple</a> objects (filters) in a
         * <a>RegexMatchSet</a>. For each <code>RegexMatchSetUpdate</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change a <code>RegexMatchSetUpdate</code>
         * object, you delete the existing object and add a new one.</p> </li> <li> <p>The
         * part of a web request that you want AWS WAF to inspectupdate, such as a query
         * string or the value of the <code>User-Agent</code> header. </p> </li> <li>
         * <p>The identifier of the pattern (a regular expression) that you want AWS WAF to
         * look for. For more information, see <a>RegexPatternSet</a>. </p> </li> <li>
         * <p>Whether to perform any conversions on the request, such as converting it to
         * lowercase, before inspecting it for the specified string.</p> </li> </ul> <p>
         * For example, you can create a <code>RegexPatternSet</code> that matches any
         * requests with <code>User-Agent</code> headers that contain the string
         * <code>B[a@]dB[o0]t</code>. You can then configure AWS WAF to reject those
         * requests.</p> <p>To create and configure a <code>RegexMatchSet</code>, perform
         * the following steps:</p> <ol> <li> <p>Create a <code>RegexMatchSet.</code> For
         * more information, see <a>CreateRegexMatchSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexMatchSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexMatchSet</code> request to
         * specify the part of the request that you want AWS WAF to inspect (for example,
         * the header or the URI) and the identifier of the <code>RegexPatternSet</code>
         * that contain the regular expression patters you want AWS WAF to watch for.</p>
         * </li> </ol> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRegexMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegexMatchSetAsync(const Model::UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <code>RegexPatternString</code> objects in a
         * <a>RegexPatternSet</a>. For each <code>RegexPatternString</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * <code>RegexPatternString</code>.</p> </li> <li> <p>The regular expression
         * pattern that you want to insert or delete. For more information, see
         * <a>RegexPatternSet</a>. </p> </li> </ul> <p> For example, you can create a
         * <code>RegexPatternString</code> such as <code>B[a@]dB[o0]t</code>. AWS WAF will
         * match this <code>RegexPatternString</code> to:</p> <ul> <li> <p>BadBot</p> </li>
         * <li> <p>BadB0t</p> </li> <li> <p>B@dBot</p> </li> <li> <p>B@dB0t</p> </li> </ul>
         * <p>To create and configure a <code>RegexPatternSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Create a <code>RegexPatternSet.</code> For more
         * information, see <a>CreateRegexPatternSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexPatternSet</code> request
         * to specify the regular expression pattern that you want AWS WAF to watch
         * for.</p> </li> </ol> <p>For more information about how to use the AWS WAF API to
         * allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegexPatternSetOutcome UpdateRegexPatternSet(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * <p>Inserts or deletes <code>RegexPatternString</code> objects in a
         * <a>RegexPatternSet</a>. For each <code>RegexPatternString</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * <code>RegexPatternString</code>.</p> </li> <li> <p>The regular expression
         * pattern that you want to insert or delete. For more information, see
         * <a>RegexPatternSet</a>. </p> </li> </ul> <p> For example, you can create a
         * <code>RegexPatternString</code> such as <code>B[a@]dB[o0]t</code>. AWS WAF will
         * match this <code>RegexPatternString</code> to:</p> <ul> <li> <p>BadBot</p> </li>
         * <li> <p>BadB0t</p> </li> <li> <p>B@dBot</p> </li> <li> <p>B@dB0t</p> </li> </ul>
         * <p>To create and configure a <code>RegexPatternSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Create a <code>RegexPatternSet.</code> For more
         * information, see <a>CreateRegexPatternSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexPatternSet</code> request
         * to specify the regular expression pattern that you want AWS WAF to watch
         * for.</p> </li> </ol> <p>For more information about how to use the AWS WAF API to
         * allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegexPatternSetOutcomeCallable UpdateRegexPatternSetCallable(const Model::UpdateRegexPatternSetRequest& request) const;

        /**
         * <p>Inserts or deletes <code>RegexPatternString</code> objects in a
         * <a>RegexPatternSet</a>. For each <code>RegexPatternString</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * <code>RegexPatternString</code>.</p> </li> <li> <p>The regular expression
         * pattern that you want to insert or delete. For more information, see
         * <a>RegexPatternSet</a>. </p> </li> </ul> <p> For example, you can create a
         * <code>RegexPatternString</code> such as <code>B[a@]dB[o0]t</code>. AWS WAF will
         * match this <code>RegexPatternString</code> to:</p> <ul> <li> <p>BadBot</p> </li>
         * <li> <p>BadB0t</p> </li> <li> <p>B@dBot</p> </li> <li> <p>B@dB0t</p> </li> </ul>
         * <p>To create and configure a <code>RegexPatternSet</code>, perform the following
         * steps:</p> <ol> <li> <p>Create a <code>RegexPatternSet.</code> For more
         * information, see <a>CreateRegexPatternSet</a>.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <code>UpdateRegexPatternSet</code>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRegexPatternSet</code> request
         * to specify the regular expression pattern that you want AWS WAF to watch
         * for.</p> </li> </ol> <p>For more information about how to use the AWS WAF API to
         * allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRegexPatternSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegexPatternSetAsync(const Model::UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>Predicate</a> objects in a <code>Rule</code>. Each
         * <code>Predicate</code> object identifies a predicate, such as a
         * <a>ByteMatchSet</a> or an <a>IPSet</a>, that specifies the web requests that you
         * want to allow, block, or count. If you add more than one predicate to a
         * <code>Rule</code>, a request must match all of the specifications to be allowed,
         * blocked, or counted. For example, suppose that you add the following to a
         * <code>Rule</code>: </p> <ul> <li> <p>A <code>ByteMatchSet</code> that matches
         * the value <code>BadBot</code> in the <code>User-Agent</code> header</p> </li>
         * <li> <p>An <code>IPSet</code> that matches the IP address
         * <code>192.0.2.44</code> </p> </li> </ul> <p>You then add the <code>Rule</code>
         * to a <code>WebACL</code> and specify that you want to block requests that
         * satisfy the <code>Rule</code>. For a request to be blocked, the
         * <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code> <i>and</i> the request must originate from the IP address
         * 192.0.2.44.</p> <p>To create and configure a <code>Rule</code>, perform the
         * following steps:</p> <ol> <li> <p>Create and update the predicates that you want
         * to include in the <code>Rule</code>.</p> </li> <li> <p>Create the
         * <code>Rule</code>. See <a>CreateRule</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to add predicates to the
         * <code>Rule</code>.</p> </li> <li> <p>Create and update a <code>WebACL</code>
         * that contains the <code>Rule</code>. See <a>CreateWebACL</a>.</p> </li> </ol>
         * <p>If you want to replace one <code>ByteMatchSet</code> or <code>IPSet</code>
         * with another, you delete the existing one and add the new one.</p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;

        /**
         * <p>Inserts or deletes <a>Predicate</a> objects in a <code>Rule</code>. Each
         * <code>Predicate</code> object identifies a predicate, such as a
         * <a>ByteMatchSet</a> or an <a>IPSet</a>, that specifies the web requests that you
         * want to allow, block, or count. If you add more than one predicate to a
         * <code>Rule</code>, a request must match all of the specifications to be allowed,
         * blocked, or counted. For example, suppose that you add the following to a
         * <code>Rule</code>: </p> <ul> <li> <p>A <code>ByteMatchSet</code> that matches
         * the value <code>BadBot</code> in the <code>User-Agent</code> header</p> </li>
         * <li> <p>An <code>IPSet</code> that matches the IP address
         * <code>192.0.2.44</code> </p> </li> </ul> <p>You then add the <code>Rule</code>
         * to a <code>WebACL</code> and specify that you want to block requests that
         * satisfy the <code>Rule</code>. For a request to be blocked, the
         * <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code> <i>and</i> the request must originate from the IP address
         * 192.0.2.44.</p> <p>To create and configure a <code>Rule</code>, perform the
         * following steps:</p> <ol> <li> <p>Create and update the predicates that you want
         * to include in the <code>Rule</code>.</p> </li> <li> <p>Create the
         * <code>Rule</code>. See <a>CreateRule</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to add predicates to the
         * <code>Rule</code>.</p> </li> <li> <p>Create and update a <code>WebACL</code>
         * that contains the <code>Rule</code>. See <a>CreateWebACL</a>.</p> </li> </ol>
         * <p>If you want to replace one <code>ByteMatchSet</code> or <code>IPSet</code>
         * with another, you delete the existing one and add the new one.</p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleOutcomeCallable UpdateRuleCallable(const Model::UpdateRuleRequest& request) const;

        /**
         * <p>Inserts or deletes <a>Predicate</a> objects in a <code>Rule</code>. Each
         * <code>Predicate</code> object identifies a predicate, such as a
         * <a>ByteMatchSet</a> or an <a>IPSet</a>, that specifies the web requests that you
         * want to allow, block, or count. If you add more than one predicate to a
         * <code>Rule</code>, a request must match all of the specifications to be allowed,
         * blocked, or counted. For example, suppose that you add the following to a
         * <code>Rule</code>: </p> <ul> <li> <p>A <code>ByteMatchSet</code> that matches
         * the value <code>BadBot</code> in the <code>User-Agent</code> header</p> </li>
         * <li> <p>An <code>IPSet</code> that matches the IP address
         * <code>192.0.2.44</code> </p> </li> </ul> <p>You then add the <code>Rule</code>
         * to a <code>WebACL</code> and specify that you want to block requests that
         * satisfy the <code>Rule</code>. For a request to be blocked, the
         * <code>User-Agent</code> header in the request must contain the value
         * <code>BadBot</code> <i>and</i> the request must originate from the IP address
         * 192.0.2.44.</p> <p>To create and configure a <code>Rule</code>, perform the
         * following steps:</p> <ol> <li> <p>Create and update the predicates that you want
         * to include in the <code>Rule</code>.</p> </li> <li> <p>Create the
         * <code>Rule</code>. See <a>CreateRule</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateRule</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateRule</code> request to add predicates to the
         * <code>Rule</code>.</p> </li> <li> <p>Create and update a <code>WebACL</code>
         * that contains the <code>Rule</code>. See <a>CreateWebACL</a>.</p> </li> </ol>
         * <p>If you want to replace one <code>ByteMatchSet</code> or <code>IPSet</code>
         * with another, you delete the existing one and add the new one.</p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>ActivatedRule</a> objects in a
         * <code>RuleGroup</code>.</p> <p>You can only insert <code>REGULAR</code> rules
         * into a rule group.</p> <p>You can have a maximum of ten rules per rule
         * group.</p> <p>To create and configure a <code>RuleGroup</code>, perform the
         * following steps:</p> <ol> <li> <p>Create and update the <code>Rules</code> that
         * you want to include in the <code>RuleGroup</code>. See <a>CreateRule</a>.</p>
         * </li> <li> <p>Use <code>GetChangeToken</code> to get the change token that you
         * provide in the <code>ChangeToken</code> parameter of an <a>UpdateRuleGroup</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRuleGroup</code> request to add
         * <code>Rules</code> to the <code>RuleGroup</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RuleGroup</code>. See
         * <a>CreateWebACL</a>.</p> </li> </ol> <p>If you want to replace one
         * <code>Rule</code> with another, you delete the existing one and add the new
         * one.</p> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleGroupOutcome UpdateRuleGroup(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * <p>Inserts or deletes <a>ActivatedRule</a> objects in a
         * <code>RuleGroup</code>.</p> <p>You can only insert <code>REGULAR</code> rules
         * into a rule group.</p> <p>You can have a maximum of ten rules per rule
         * group.</p> <p>To create and configure a <code>RuleGroup</code>, perform the
         * following steps:</p> <ol> <li> <p>Create and update the <code>Rules</code> that
         * you want to include in the <code>RuleGroup</code>. See <a>CreateRule</a>.</p>
         * </li> <li> <p>Use <code>GetChangeToken</code> to get the change token that you
         * provide in the <code>ChangeToken</code> parameter of an <a>UpdateRuleGroup</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRuleGroup</code> request to add
         * <code>Rules</code> to the <code>RuleGroup</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RuleGroup</code>. See
         * <a>CreateWebACL</a>.</p> </li> </ol> <p>If you want to replace one
         * <code>Rule</code> with another, you delete the existing one and add the new
         * one.</p> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRuleGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuleGroupOutcomeCallable UpdateRuleGroupCallable(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * <p>Inserts or deletes <a>ActivatedRule</a> objects in a
         * <code>RuleGroup</code>.</p> <p>You can only insert <code>REGULAR</code> rules
         * into a rule group.</p> <p>You can have a maximum of ten rules per rule
         * group.</p> <p>To create and configure a <code>RuleGroup</code>, perform the
         * following steps:</p> <ol> <li> <p>Create and update the <code>Rules</code> that
         * you want to include in the <code>RuleGroup</code>. See <a>CreateRule</a>.</p>
         * </li> <li> <p>Use <code>GetChangeToken</code> to get the change token that you
         * provide in the <code>ChangeToken</code> parameter of an <a>UpdateRuleGroup</a>
         * request.</p> </li> <li> <p>Submit an <code>UpdateRuleGroup</code> request to add
         * <code>Rules</code> to the <code>RuleGroup</code>.</p> </li> <li> <p>Create and
         * update a <code>WebACL</code> that contains the <code>RuleGroup</code>. See
         * <a>CreateWebACL</a>.</p> </li> </ol> <p>If you want to replace one
         * <code>Rule</code> with another, you delete the existing one and add the new
         * one.</p> <p>For more information about how to use the AWS WAF API to allow or
         * block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateRuleGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuleGroupAsync(const Model::UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>SizeConstraint</a> objects (filters) in a
         * <a>SizeConstraintSet</a>. For each <code>SizeConstraint</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change a
         * <code>SizeConstraintSetUpdate</code> object, you delete the existing object and
         * add a new one.</p> </li> <li> <p>The part of a web request that you want AWS WAF
         * to evaluate, such as the length of a query string or the length of the
         * <code>User-Agent</code> header.</p> </li> <li> <p>Whether to perform any
         * transformations on the request, such as converting it to lowercase, before
         * checking its length. Note that transformations of the request body are not
         * supported because the AWS resource forwards only the first <code>8192</code>
         * bytes of your request to AWS WAF.</p> <p>You can only specify a single type of
         * TextTransformation.</p> </li> <li> <p>A <code>ComparisonOperator</code> used for
         * evaluating the selected part of the request against the specified
         * <code>Size</code>, such as equals, greater than, less than, and so on.</p> </li>
         * <li> <p>The length, in bytes, that you want AWS WAF to watch for in selected
         * part of the request. The length is computed after applying the
         * transformation.</p> </li> </ul> <p>For example, you can add a
         * <code>SizeConstraintSetUpdate</code> object that matches web requests in which
         * the length of the <code>User-Agent</code> header is greater than 100 bytes. You
         * can then configure AWS WAF to block those requests.</p> <p>To create and
         * configure a <code>SizeConstraintSet</code>, perform the following steps:</p>
         * <ol> <li> <p>Create a <code>SizeConstraintSet.</code> For more information, see
         * <a>CreateSizeConstraintSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <code>UpdateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateSizeConstraintSet</code> request to specify the part of the request
         * that you want AWS WAF to inspect (for example, the header or the URI) and the
         * value that you want AWS WAF to watch for.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateSizeConstraintSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSizeConstraintSetOutcome UpdateSizeConstraintSet(const Model::UpdateSizeConstraintSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>SizeConstraint</a> objects (filters) in a
         * <a>SizeConstraintSet</a>. For each <code>SizeConstraint</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change a
         * <code>SizeConstraintSetUpdate</code> object, you delete the existing object and
         * add a new one.</p> </li> <li> <p>The part of a web request that you want AWS WAF
         * to evaluate, such as the length of a query string or the length of the
         * <code>User-Agent</code> header.</p> </li> <li> <p>Whether to perform any
         * transformations on the request, such as converting it to lowercase, before
         * checking its length. Note that transformations of the request body are not
         * supported because the AWS resource forwards only the first <code>8192</code>
         * bytes of your request to AWS WAF.</p> <p>You can only specify a single type of
         * TextTransformation.</p> </li> <li> <p>A <code>ComparisonOperator</code> used for
         * evaluating the selected part of the request against the specified
         * <code>Size</code>, such as equals, greater than, less than, and so on.</p> </li>
         * <li> <p>The length, in bytes, that you want AWS WAF to watch for in selected
         * part of the request. The length is computed after applying the
         * transformation.</p> </li> </ul> <p>For example, you can add a
         * <code>SizeConstraintSetUpdate</code> object that matches web requests in which
         * the length of the <code>User-Agent</code> header is greater than 100 bytes. You
         * can then configure AWS WAF to block those requests.</p> <p>To create and
         * configure a <code>SizeConstraintSet</code>, perform the following steps:</p>
         * <ol> <li> <p>Create a <code>SizeConstraintSet.</code> For more information, see
         * <a>CreateSizeConstraintSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <code>UpdateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateSizeConstraintSet</code> request to specify the part of the request
         * that you want AWS WAF to inspect (for example, the header or the URI) and the
         * value that you want AWS WAF to watch for.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateSizeConstraintSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSizeConstraintSetOutcomeCallable UpdateSizeConstraintSetCallable(const Model::UpdateSizeConstraintSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>SizeConstraint</a> objects (filters) in a
         * <a>SizeConstraintSet</a>. For each <code>SizeConstraint</code> object, you
         * specify the following values: </p> <ul> <li> <p>Whether to insert or delete the
         * object from the array. If you want to change a
         * <code>SizeConstraintSetUpdate</code> object, you delete the existing object and
         * add a new one.</p> </li> <li> <p>The part of a web request that you want AWS WAF
         * to evaluate, such as the length of a query string or the length of the
         * <code>User-Agent</code> header.</p> </li> <li> <p>Whether to perform any
         * transformations on the request, such as converting it to lowercase, before
         * checking its length. Note that transformations of the request body are not
         * supported because the AWS resource forwards only the first <code>8192</code>
         * bytes of your request to AWS WAF.</p> <p>You can only specify a single type of
         * TextTransformation.</p> </li> <li> <p>A <code>ComparisonOperator</code> used for
         * evaluating the selected part of the request against the specified
         * <code>Size</code>, such as equals, greater than, less than, and so on.</p> </li>
         * <li> <p>The length, in bytes, that you want AWS WAF to watch for in selected
         * part of the request. The length is computed after applying the
         * transformation.</p> </li> </ul> <p>For example, you can add a
         * <code>SizeConstraintSetUpdate</code> object that matches web requests in which
         * the length of the <code>User-Agent</code> header is greater than 100 bytes. You
         * can then configure AWS WAF to block those requests.</p> <p>To create and
         * configure a <code>SizeConstraintSet</code>, perform the following steps:</p>
         * <ol> <li> <p>Create a <code>SizeConstraintSet.</code> For more information, see
         * <a>CreateSizeConstraintSet</a>.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <code>UpdateSizeConstraintSet</code> request.</p> </li> <li> <p>Submit an
         * <code>UpdateSizeConstraintSet</code> request to specify the part of the request
         * that you want AWS WAF to inspect (for example, the header or the URI) and the
         * value that you want AWS WAF to watch for.</p> </li> </ol> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateSizeConstraintSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSizeConstraintSetAsync(const Model::UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>SqlInjectionMatchTuple</a> objects (filters) in a
         * <a>SqlInjectionMatchSet</a>. For each <code>SqlInjectionMatchTuple</code>
         * object, you specify the following values:</p> <ul> <li> <p> <code>Action</code>:
         * Whether to insert the object into or delete the object from the array. To change
         * a <code>SqlInjectionMatchTuple</code>, you delete the existing object and add a
         * new one.</p> </li> <li> <p> <code>FieldToMatch</code>: The part of web requests
         * that you want AWS WAF to inspect and, if you want AWS WAF to inspect a header or
         * custom query parameter, the name of the header or parameter.</p> </li> <li> <p>
         * <code>TextTransformation</code>: Which text transformation, if any, to perform
         * on the web request before inspecting the request for snippets of malicious SQL
         * code.</p> <p>You can only specify a single type of TextTransformation.</p> </li>
         * </ul> <p>You use <code>SqlInjectionMatchSet</code> objects to specify which
         * CloudFront requests that you want to allow, block, or count. For example, if
         * you're receiving requests that contain snippets of SQL code in the query string
         * and you want to block the requests, you can create a
         * <code>SqlInjectionMatchSet</code> with the applicable settings, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure a
         * <code>SqlInjectionMatchSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Submit a <a>CreateSqlInjectionMatchSet</a> request.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateSqlInjectionMatchSet</code> request to specify the
         * parts of web requests that you want AWS WAF to inspect for snippets of SQL
         * code.</p> </li> </ol> <p>For more information about how to use the AWS WAF API
         * to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSqlInjectionMatchSetOutcome UpdateSqlInjectionMatchSet(const Model::UpdateSqlInjectionMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>SqlInjectionMatchTuple</a> objects (filters) in a
         * <a>SqlInjectionMatchSet</a>. For each <code>SqlInjectionMatchTuple</code>
         * object, you specify the following values:</p> <ul> <li> <p> <code>Action</code>:
         * Whether to insert the object into or delete the object from the array. To change
         * a <code>SqlInjectionMatchTuple</code>, you delete the existing object and add a
         * new one.</p> </li> <li> <p> <code>FieldToMatch</code>: The part of web requests
         * that you want AWS WAF to inspect and, if you want AWS WAF to inspect a header or
         * custom query parameter, the name of the header or parameter.</p> </li> <li> <p>
         * <code>TextTransformation</code>: Which text transformation, if any, to perform
         * on the web request before inspecting the request for snippets of malicious SQL
         * code.</p> <p>You can only specify a single type of TextTransformation.</p> </li>
         * </ul> <p>You use <code>SqlInjectionMatchSet</code> objects to specify which
         * CloudFront requests that you want to allow, block, or count. For example, if
         * you're receiving requests that contain snippets of SQL code in the query string
         * and you want to block the requests, you can create a
         * <code>SqlInjectionMatchSet</code> with the applicable settings, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure a
         * <code>SqlInjectionMatchSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Submit a <a>CreateSqlInjectionMatchSet</a> request.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateSqlInjectionMatchSet</code> request to specify the
         * parts of web requests that you want AWS WAF to inspect for snippets of SQL
         * code.</p> </li> </ol> <p>For more information about how to use the AWS WAF API
         * to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSqlInjectionMatchSetOutcomeCallable UpdateSqlInjectionMatchSetCallable(const Model::UpdateSqlInjectionMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>SqlInjectionMatchTuple</a> objects (filters) in a
         * <a>SqlInjectionMatchSet</a>. For each <code>SqlInjectionMatchTuple</code>
         * object, you specify the following values:</p> <ul> <li> <p> <code>Action</code>:
         * Whether to insert the object into or delete the object from the array. To change
         * a <code>SqlInjectionMatchTuple</code>, you delete the existing object and add a
         * new one.</p> </li> <li> <p> <code>FieldToMatch</code>: The part of web requests
         * that you want AWS WAF to inspect and, if you want AWS WAF to inspect a header or
         * custom query parameter, the name of the header or parameter.</p> </li> <li> <p>
         * <code>TextTransformation</code>: Which text transformation, if any, to perform
         * on the web request before inspecting the request for snippets of malicious SQL
         * code.</p> <p>You can only specify a single type of TextTransformation.</p> </li>
         * </ul> <p>You use <code>SqlInjectionMatchSet</code> objects to specify which
         * CloudFront requests that you want to allow, block, or count. For example, if
         * you're receiving requests that contain snippets of SQL code in the query string
         * and you want to block the requests, you can create a
         * <code>SqlInjectionMatchSet</code> with the applicable settings, and then
         * configure AWS WAF to block the requests. </p> <p>To create and configure a
         * <code>SqlInjectionMatchSet</code>, perform the following steps:</p> <ol> <li>
         * <p>Submit a <a>CreateSqlInjectionMatchSet</a> request.</p> </li> <li> <p>Use
         * <a>GetChangeToken</a> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateIPSet</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateSqlInjectionMatchSet</code> request to specify the
         * parts of web requests that you want AWS WAF to inspect for snippets of SQL
         * code.</p> </li> </ol> <p>For more information about how to use the AWS WAF API
         * to allow or block HTTP requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateSqlInjectionMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSqlInjectionMatchSetAsync(const Model::UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>ActivatedRule</a> objects in a <code>WebACL</code>.
         * Each <code>Rule</code> identifies web requests that you want to allow, block, or
         * count. When you update a <code>WebACL</code>, you specify the following
         * values:</p> <ul> <li> <p>A default action for the <code>WebACL</code>, either
         * <code>ALLOW</code> or <code>BLOCK</code>. AWS WAF performs the default action if
         * a request doesn't match the criteria in any of the <code>Rules</code> in a
         * <code>WebACL</code>.</p> </li> <li> <p>The <code>Rules</code> that you want to
         * add or delete. If you want to replace one <code>Rule</code> with another, you
         * delete the existing <code>Rule</code> and add the new one.</p> </li> <li> <p>For
         * each <code>Rule</code>, whether you want AWS WAF to allow requests, block
         * requests, or count requests that match the conditions in the
         * <code>Rule</code>.</p> </li> <li> <p>The order in which you want AWS WAF to
         * evaluate the <code>Rules</code> in a <code>WebACL</code>. If you add more than
         * one <code>Rule</code> to a <code>WebACL</code>, AWS WAF evaluates each request
         * against the <code>Rules</code> in order based on the value of
         * <code>Priority</code>. (The <code>Rule</code> that has the lowest value for
         * <code>Priority</code> is evaluated first.) When a web request matches all the
         * predicates (such as <code>ByteMatchSets</code> and <code>IPSets</code>) in a
         * <code>Rule</code>, AWS WAF immediately takes the corresponding action, allow or
         * block, and doesn't evaluate the request against the remaining <code>Rules</code>
         * in the <code>WebACL</code>, if any. </p> </li> </ul> <p>To create and configure
         * a <code>WebACL</code>, perform the following steps:</p> <ol> <li> <p>Create and
         * update the predicates that you want to include in <code>Rules</code>. For more
         * information, see <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>,
         * <a>CreateIPSet</a>, <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li>
         * <p>Create a <code>WebACL</code>. See <a>CreateWebACL</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateWebACL</code> request to specify the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>, to
         * specify the default action, and to associate the <code>WebACL</code> with a
         * CloudFront distribution. </p> <p>The <code>ActivatedRule</code> can be a rule
         * group. If you specify a rule group as your <code>ActivatedRule</code>, you can
         * exclude specific rules from that rule group.</p> <p>If you already have a rule
         * group associated with a web ACL and want to submit an <code>UpdateWebACL</code>
         * request to exclude certain rules from that rule group, you must first remove the
         * rule group from the web ACL, the re-insert it again, specifying the excluded
         * rules. For details, see <a>ActivatedRule$ExcludedRules</a>. </p> </li> </ol>
         * <p>Be aware that if you try to add a RATE_BASED rule to a web ACL without
         * setting the rule type when first creating the rule, the <a>UpdateWebACL</a>
         * request will fail because the request tries to add a REGULAR rule (the default
         * rule type) with the specified ID, which does not exist. </p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateWebACL">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebACLOutcome UpdateWebACL(const Model::UpdateWebACLRequest& request) const;

        /**
         * <p>Inserts or deletes <a>ActivatedRule</a> objects in a <code>WebACL</code>.
         * Each <code>Rule</code> identifies web requests that you want to allow, block, or
         * count. When you update a <code>WebACL</code>, you specify the following
         * values:</p> <ul> <li> <p>A default action for the <code>WebACL</code>, either
         * <code>ALLOW</code> or <code>BLOCK</code>. AWS WAF performs the default action if
         * a request doesn't match the criteria in any of the <code>Rules</code> in a
         * <code>WebACL</code>.</p> </li> <li> <p>The <code>Rules</code> that you want to
         * add or delete. If you want to replace one <code>Rule</code> with another, you
         * delete the existing <code>Rule</code> and add the new one.</p> </li> <li> <p>For
         * each <code>Rule</code>, whether you want AWS WAF to allow requests, block
         * requests, or count requests that match the conditions in the
         * <code>Rule</code>.</p> </li> <li> <p>The order in which you want AWS WAF to
         * evaluate the <code>Rules</code> in a <code>WebACL</code>. If you add more than
         * one <code>Rule</code> to a <code>WebACL</code>, AWS WAF evaluates each request
         * against the <code>Rules</code> in order based on the value of
         * <code>Priority</code>. (The <code>Rule</code> that has the lowest value for
         * <code>Priority</code> is evaluated first.) When a web request matches all the
         * predicates (such as <code>ByteMatchSets</code> and <code>IPSets</code>) in a
         * <code>Rule</code>, AWS WAF immediately takes the corresponding action, allow or
         * block, and doesn't evaluate the request against the remaining <code>Rules</code>
         * in the <code>WebACL</code>, if any. </p> </li> </ul> <p>To create and configure
         * a <code>WebACL</code>, perform the following steps:</p> <ol> <li> <p>Create and
         * update the predicates that you want to include in <code>Rules</code>. For more
         * information, see <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>,
         * <a>CreateIPSet</a>, <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li>
         * <p>Create a <code>WebACL</code>. See <a>CreateWebACL</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateWebACL</code> request to specify the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>, to
         * specify the default action, and to associate the <code>WebACL</code> with a
         * CloudFront distribution. </p> <p>The <code>ActivatedRule</code> can be a rule
         * group. If you specify a rule group as your <code>ActivatedRule</code>, you can
         * exclude specific rules from that rule group.</p> <p>If you already have a rule
         * group associated with a web ACL and want to submit an <code>UpdateWebACL</code>
         * request to exclude certain rules from that rule group, you must first remove the
         * rule group from the web ACL, the re-insert it again, specifying the excluded
         * rules. For details, see <a>ActivatedRule$ExcludedRules</a>. </p> </li> </ol>
         * <p>Be aware that if you try to add a RATE_BASED rule to a web ACL without
         * setting the rule type when first creating the rule, the <a>UpdateWebACL</a>
         * request will fail because the request tries to add a REGULAR rule (the default
         * rule type) with the specified ID, which does not exist. </p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateWebACL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebACLOutcomeCallable UpdateWebACLCallable(const Model::UpdateWebACLRequest& request) const;

        /**
         * <p>Inserts or deletes <a>ActivatedRule</a> objects in a <code>WebACL</code>.
         * Each <code>Rule</code> identifies web requests that you want to allow, block, or
         * count. When you update a <code>WebACL</code>, you specify the following
         * values:</p> <ul> <li> <p>A default action for the <code>WebACL</code>, either
         * <code>ALLOW</code> or <code>BLOCK</code>. AWS WAF performs the default action if
         * a request doesn't match the criteria in any of the <code>Rules</code> in a
         * <code>WebACL</code>.</p> </li> <li> <p>The <code>Rules</code> that you want to
         * add or delete. If you want to replace one <code>Rule</code> with another, you
         * delete the existing <code>Rule</code> and add the new one.</p> </li> <li> <p>For
         * each <code>Rule</code>, whether you want AWS WAF to allow requests, block
         * requests, or count requests that match the conditions in the
         * <code>Rule</code>.</p> </li> <li> <p>The order in which you want AWS WAF to
         * evaluate the <code>Rules</code> in a <code>WebACL</code>. If you add more than
         * one <code>Rule</code> to a <code>WebACL</code>, AWS WAF evaluates each request
         * against the <code>Rules</code> in order based on the value of
         * <code>Priority</code>. (The <code>Rule</code> that has the lowest value for
         * <code>Priority</code> is evaluated first.) When a web request matches all the
         * predicates (such as <code>ByteMatchSets</code> and <code>IPSets</code>) in a
         * <code>Rule</code>, AWS WAF immediately takes the corresponding action, allow or
         * block, and doesn't evaluate the request against the remaining <code>Rules</code>
         * in the <code>WebACL</code>, if any. </p> </li> </ul> <p>To create and configure
         * a <code>WebACL</code>, perform the following steps:</p> <ol> <li> <p>Create and
         * update the predicates that you want to include in <code>Rules</code>. For more
         * information, see <a>CreateByteMatchSet</a>, <a>UpdateByteMatchSet</a>,
         * <a>CreateIPSet</a>, <a>UpdateIPSet</a>, <a>CreateSqlInjectionMatchSet</a>, and
         * <a>UpdateSqlInjectionMatchSet</a>.</p> </li> <li> <p>Create and update the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>. For more
         * information, see <a>CreateRule</a> and <a>UpdateRule</a>.</p> </li> <li>
         * <p>Create a <code>WebACL</code>. See <a>CreateWebACL</a>.</p> </li> <li> <p>Use
         * <code>GetChangeToken</code> to get the change token that you provide in the
         * <code>ChangeToken</code> parameter of an <a>UpdateWebACL</a> request.</p> </li>
         * <li> <p>Submit an <code>UpdateWebACL</code> request to specify the
         * <code>Rules</code> that you want to include in the <code>WebACL</code>, to
         * specify the default action, and to associate the <code>WebACL</code> with a
         * CloudFront distribution. </p> <p>The <code>ActivatedRule</code> can be a rule
         * group. If you specify a rule group as your <code>ActivatedRule</code>, you can
         * exclude specific rules from that rule group.</p> <p>If you already have a rule
         * group associated with a web ACL and want to submit an <code>UpdateWebACL</code>
         * request to exclude certain rules from that rule group, you must first remove the
         * rule group from the web ACL, the re-insert it again, specifying the excluded
         * rules. For details, see <a>ActivatedRule$ExcludedRules</a>. </p> </li> </ol>
         * <p>Be aware that if you try to add a RATE_BASED rule to a web ACL without
         * setting the rule type when first creating the rule, the <a>UpdateWebACL</a>
         * request will fail because the request tries to add a REGULAR rule (the default
         * rule type) with the specified ID, which does not exist. </p> <p>For more
         * information about how to use the AWS WAF API to allow or block HTTP requests,
         * see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateWebACL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWebACLAsync(const Model::UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts or deletes <a>XssMatchTuple</a> objects (filters) in an
         * <a>XssMatchSet</a>. For each <code>XssMatchTuple</code> object, you specify the
         * following values:</p> <ul> <li> <p> <code>Action</code>: Whether to insert the
         * object into or delete the object from the array. To change an
         * <code>XssMatchTuple</code>, you delete the existing object and add a new
         * one.</p> </li> <li> <p> <code>FieldToMatch</code>: The part of web requests that
         * you want AWS WAF to inspect and, if you want AWS WAF to inspect a header or
         * custom query parameter, the name of the header or parameter.</p> </li> <li> <p>
         * <code>TextTransformation</code>: Which text transformation, if any, to perform
         * on the web request before inspecting the request for cross-site scripting
         * attacks.</p> <p>You can only specify a single type of TextTransformation.</p>
         * </li> </ul> <p>You use <code>XssMatchSet</code> objects to specify which
         * CloudFront requests that you want to allow, block, or count. For example, if
         * you're receiving requests that contain cross-site scripting attacks in the
         * request body and you want to block the requests, you can create an
         * <code>XssMatchSet</code> with the applicable settings, and then configure AWS
         * WAF to block the requests. </p> <p>To create and configure an
         * <code>XssMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateXssMatchSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateXssMatchSet</code> request to specify the parts of web requests that
         * you want AWS WAF to inspect for cross-site scripting attacks.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateXssMatchSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateXssMatchSetOutcome UpdateXssMatchSet(const Model::UpdateXssMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>XssMatchTuple</a> objects (filters) in an
         * <a>XssMatchSet</a>. For each <code>XssMatchTuple</code> object, you specify the
         * following values:</p> <ul> <li> <p> <code>Action</code>: Whether to insert the
         * object into or delete the object from the array. To change an
         * <code>XssMatchTuple</code>, you delete the existing object and add a new
         * one.</p> </li> <li> <p> <code>FieldToMatch</code>: The part of web requests that
         * you want AWS WAF to inspect and, if you want AWS WAF to inspect a header or
         * custom query parameter, the name of the header or parameter.</p> </li> <li> <p>
         * <code>TextTransformation</code>: Which text transformation, if any, to perform
         * on the web request before inspecting the request for cross-site scripting
         * attacks.</p> <p>You can only specify a single type of TextTransformation.</p>
         * </li> </ul> <p>You use <code>XssMatchSet</code> objects to specify which
         * CloudFront requests that you want to allow, block, or count. For example, if
         * you're receiving requests that contain cross-site scripting attacks in the
         * request body and you want to block the requests, you can create an
         * <code>XssMatchSet</code> with the applicable settings, and then configure AWS
         * WAF to block the requests. </p> <p>To create and configure an
         * <code>XssMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateXssMatchSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateXssMatchSet</code> request to specify the parts of web requests that
         * you want AWS WAF to inspect for cross-site scripting attacks.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateXssMatchSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateXssMatchSetOutcomeCallable UpdateXssMatchSetCallable(const Model::UpdateXssMatchSetRequest& request) const;

        /**
         * <p>Inserts or deletes <a>XssMatchTuple</a> objects (filters) in an
         * <a>XssMatchSet</a>. For each <code>XssMatchTuple</code> object, you specify the
         * following values:</p> <ul> <li> <p> <code>Action</code>: Whether to insert the
         * object into or delete the object from the array. To change an
         * <code>XssMatchTuple</code>, you delete the existing object and add a new
         * one.</p> </li> <li> <p> <code>FieldToMatch</code>: The part of web requests that
         * you want AWS WAF to inspect and, if you want AWS WAF to inspect a header or
         * custom query parameter, the name of the header or parameter.</p> </li> <li> <p>
         * <code>TextTransformation</code>: Which text transformation, if any, to perform
         * on the web request before inspecting the request for cross-site scripting
         * attacks.</p> <p>You can only specify a single type of TextTransformation.</p>
         * </li> </ul> <p>You use <code>XssMatchSet</code> objects to specify which
         * CloudFront requests that you want to allow, block, or count. For example, if
         * you're receiving requests that contain cross-site scripting attacks in the
         * request body and you want to block the requests, you can create an
         * <code>XssMatchSet</code> with the applicable settings, and then configure AWS
         * WAF to block the requests. </p> <p>To create and configure an
         * <code>XssMatchSet</code>, perform the following steps:</p> <ol> <li> <p>Submit a
         * <a>CreateXssMatchSet</a> request.</p> </li> <li> <p>Use <a>GetChangeToken</a> to
         * get the change token that you provide in the <code>ChangeToken</code> parameter
         * of an <a>UpdateIPSet</a> request.</p> </li> <li> <p>Submit an
         * <code>UpdateXssMatchSet</code> request to specify the parts of web requests that
         * you want AWS WAF to inspect for cross-site scripting attacks.</p> </li> </ol>
         * <p>For more information about how to use the AWS WAF API to allow or block HTTP
         * requests, see the <a
         * href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
         * Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/UpdateXssMatchSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateXssMatchSetAsync(const Model::UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateWebACLAsyncHelper(const Model::AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateByteMatchSetAsyncHelper(const Model::CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGeoMatchSetAsyncHelper(const Model::CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIPSetAsyncHelper(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRateBasedRuleAsyncHelper(const Model::CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRegexMatchSetAsyncHelper(const Model::CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRegexPatternSetAsyncHelper(const Model::CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRuleAsyncHelper(const Model::CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRuleGroupAsyncHelper(const Model::CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSizeConstraintSetAsyncHelper(const Model::CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSqlInjectionMatchSetAsyncHelper(const Model::CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWebACLAsyncHelper(const Model::CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateXssMatchSetAsyncHelper(const Model::CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteByteMatchSetAsyncHelper(const Model::DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGeoMatchSetAsyncHelper(const Model::DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIPSetAsyncHelper(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoggingConfigurationAsyncHelper(const Model::DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePermissionPolicyAsyncHelper(const Model::DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRateBasedRuleAsyncHelper(const Model::DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRegexMatchSetAsyncHelper(const Model::DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRegexPatternSetAsyncHelper(const Model::DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRuleAsyncHelper(const Model::DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRuleGroupAsyncHelper(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSizeConstraintSetAsyncHelper(const Model::DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSqlInjectionMatchSetAsyncHelper(const Model::DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWebACLAsyncHelper(const Model::DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteXssMatchSetAsyncHelper(const Model::DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWebACLAsyncHelper(const Model::DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetByteMatchSetAsyncHelper(const Model::GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChangeTokenAsyncHelper(const Model::GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChangeTokenStatusAsyncHelper(const Model::GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGeoMatchSetAsyncHelper(const Model::GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIPSetAsyncHelper(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoggingConfigurationAsyncHelper(const Model::GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPermissionPolicyAsyncHelper(const Model::GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRateBasedRuleAsyncHelper(const Model::GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRateBasedRuleManagedKeysAsyncHelper(const Model::GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegexMatchSetAsyncHelper(const Model::GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegexPatternSetAsyncHelper(const Model::GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRuleAsyncHelper(const Model::GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRuleGroupAsyncHelper(const Model::GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSampledRequestsAsyncHelper(const Model::GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSizeConstraintSetAsyncHelper(const Model::GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSqlInjectionMatchSetAsyncHelper(const Model::GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWebACLAsyncHelper(const Model::GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWebACLForResourceAsyncHelper(const Model::GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetXssMatchSetAsyncHelper(const Model::GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListActivatedRulesInRuleGroupAsyncHelper(const Model::ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListByteMatchSetsAsyncHelper(const Model::ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGeoMatchSetsAsyncHelper(const Model::ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIPSetsAsyncHelper(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLoggingConfigurationsAsyncHelper(const Model::ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRateBasedRulesAsyncHelper(const Model::ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRegexMatchSetsAsyncHelper(const Model::ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRegexPatternSetsAsyncHelper(const Model::ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourcesForWebACLAsyncHelper(const Model::ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRuleGroupsAsyncHelper(const Model::ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRulesAsyncHelper(const Model::ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSizeConstraintSetsAsyncHelper(const Model::ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSqlInjectionMatchSetsAsyncHelper(const Model::ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscribedRuleGroupsAsyncHelper(const Model::ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWebACLsAsyncHelper(const Model::ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListXssMatchSetsAsyncHelper(const Model::ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLoggingConfigurationAsyncHelper(const Model::PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPermissionPolicyAsyncHelper(const Model::PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateByteMatchSetAsyncHelper(const Model::UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGeoMatchSetAsyncHelper(const Model::UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIPSetAsyncHelper(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRateBasedRuleAsyncHelper(const Model::UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRegexMatchSetAsyncHelper(const Model::UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRegexPatternSetAsyncHelper(const Model::UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuleAsyncHelper(const Model::UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRuleGroupAsyncHelper(const Model::UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSizeConstraintSetAsyncHelper(const Model::UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSqlInjectionMatchSetAsyncHelper(const Model::UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWebACLAsyncHelper(const Model::UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateXssMatchSetAsyncHelper(const Model::UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WAFRegional
} // namespace Aws
