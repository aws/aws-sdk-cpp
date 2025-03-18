/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/AuthenticationType.h>
#include <aws/appsync/model/LogConfig.h>
#include <aws/appsync/model/UserPoolConfig.h>
#include <aws/appsync/model/OpenIDConnectConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appsync/model/LambdaAuthorizerConfig.h>
#include <aws/appsync/model/GraphQLApiVisibility.h>
#include <aws/appsync/model/GraphQLApiType.h>
#include <aws/appsync/model/GraphQLApiIntrospectionConfig.h>
#include <aws/appsync/model/EnhancedMetricsConfig.h>
#include <aws/appsync/model/AdditionalAuthenticationProvider.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a GraphQL API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GraphqlApi">AWS
   * API Reference</a></p>
   */
  class GraphqlApi
  {
  public:
    AWS_APPSYNC_API GraphqlApi() = default;
    AWS_APPSYNC_API GraphqlApi(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API GraphqlApi& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GraphqlApi& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    GraphqlApi& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline GraphqlApi& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline const LogConfig& GetLogConfig() const { return m_logConfig; }
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
    template<typename LogConfigT = LogConfig>
    void SetLogConfig(LogConfigT&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::forward<LogConfigT>(value); }
    template<typename LogConfigT = LogConfig>
    GraphqlApi& WithLogConfig(LogConfigT&& value) { SetLogConfig(std::forward<LogConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline const UserPoolConfig& GetUserPoolConfig() const { return m_userPoolConfig; }
    inline bool UserPoolConfigHasBeenSet() const { return m_userPoolConfigHasBeenSet; }
    template<typename UserPoolConfigT = UserPoolConfig>
    void SetUserPoolConfig(UserPoolConfigT&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::forward<UserPoolConfigT>(value); }
    template<typename UserPoolConfigT = UserPoolConfig>
    GraphqlApi& WithUserPoolConfig(UserPoolConfigT&& value) { SetUserPoolConfig(std::forward<UserPoolConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const { return m_openIDConnectConfig; }
    inline bool OpenIDConnectConfigHasBeenSet() const { return m_openIDConnectConfigHasBeenSet; }
    template<typename OpenIDConnectConfigT = OpenIDConnectConfig>
    void SetOpenIDConnectConfig(OpenIDConnectConfigT&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::forward<OpenIDConnectConfigT>(value); }
    template<typename OpenIDConnectConfigT = OpenIDConnectConfig>
    GraphqlApi& WithOpenIDConnectConfig(OpenIDConnectConfigT&& value) { SetOpenIDConnectConfig(std::forward<OpenIDConnectConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GraphqlApi& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUris() const { return m_uris; }
    inline bool UrisHasBeenSet() const { return m_urisHasBeenSet; }
    template<typename UrisT = Aws::Map<Aws::String, Aws::String>>
    void SetUris(UrisT&& value) { m_urisHasBeenSet = true; m_uris = std::forward<UrisT>(value); }
    template<typename UrisT = Aws::Map<Aws::String, Aws::String>>
    GraphqlApi& WithUris(UrisT&& value) { SetUris(std::forward<UrisT>(value)); return *this;}
    template<typename UrisKeyT = Aws::String, typename UrisValueT = Aws::String>
    GraphqlApi& AddUris(UrisKeyT&& key, UrisValueT&& value) {
      m_urisHasBeenSet = true; m_uris.emplace(std::forward<UrisKeyT>(key), std::forward<UrisValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GraphqlApi& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GraphqlApi& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline const Aws::Vector<AdditionalAuthenticationProvider>& GetAdditionalAuthenticationProviders() const { return m_additionalAuthenticationProviders; }
    inline bool AdditionalAuthenticationProvidersHasBeenSet() const { return m_additionalAuthenticationProvidersHasBeenSet; }
    template<typename AdditionalAuthenticationProvidersT = Aws::Vector<AdditionalAuthenticationProvider>>
    void SetAdditionalAuthenticationProviders(AdditionalAuthenticationProvidersT&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = std::forward<AdditionalAuthenticationProvidersT>(value); }
    template<typename AdditionalAuthenticationProvidersT = Aws::Vector<AdditionalAuthenticationProvider>>
    GraphqlApi& WithAdditionalAuthenticationProviders(AdditionalAuthenticationProvidersT&& value) { SetAdditionalAuthenticationProviders(std::forward<AdditionalAuthenticationProvidersT>(value)); return *this;}
    template<typename AdditionalAuthenticationProvidersT = AdditionalAuthenticationProvider>
    GraphqlApi& AddAdditionalAuthenticationProviders(AdditionalAuthenticationProvidersT&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.emplace_back(std::forward<AdditionalAuthenticationProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether to use X-Ray tracing for this
     * <code>GraphqlApi</code>.</p>
     */
    inline bool GetXrayEnabled() const { return m_xrayEnabled; }
    inline bool XrayEnabledHasBeenSet() const { return m_xrayEnabledHasBeenSet; }
    inline void SetXrayEnabled(bool value) { m_xrayEnabledHasBeenSet = true; m_xrayEnabled = value; }
    inline GraphqlApi& WithXrayEnabled(bool value) { SetXrayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline const Aws::String& GetWafWebAclArn() const { return m_wafWebAclArn; }
    inline bool WafWebAclArnHasBeenSet() const { return m_wafWebAclArnHasBeenSet; }
    template<typename WafWebAclArnT = Aws::String>
    void SetWafWebAclArn(WafWebAclArnT&& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = std::forward<WafWebAclArnT>(value); }
    template<typename WafWebAclArnT = Aws::String>
    GraphqlApi& WithWafWebAclArn(WafWebAclArnT&& value) { SetWafWebAclArn(std::forward<WafWebAclArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline const LambdaAuthorizerConfig& GetLambdaAuthorizerConfig() const { return m_lambdaAuthorizerConfig; }
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }
    template<typename LambdaAuthorizerConfigT = LambdaAuthorizerConfig>
    void SetLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::forward<LambdaAuthorizerConfigT>(value); }
    template<typename LambdaAuthorizerConfigT = LambdaAuthorizerConfig>
    GraphqlApi& WithLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { SetLambdaAuthorizerConfig(std::forward<LambdaAuthorizerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS records for the API.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDns() const { return m_dns; }
    inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }
    template<typename DnsT = Aws::Map<Aws::String, Aws::String>>
    void SetDns(DnsT&& value) { m_dnsHasBeenSet = true; m_dns = std::forward<DnsT>(value); }
    template<typename DnsT = Aws::Map<Aws::String, Aws::String>>
    GraphqlApi& WithDns(DnsT&& value) { SetDns(std::forward<DnsT>(value)); return *this;}
    template<typename DnsKeyT = Aws::String, typename DnsValueT = Aws::String>
    GraphqlApi& AddDns(DnsKeyT&& key, DnsValueT&& value) {
      m_dnsHasBeenSet = true; m_dns.emplace(std::forward<DnsKeyT>(key), std::forward<DnsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Sets the value of the GraphQL API to public (<code>GLOBAL</code>) or private
     * (<code>PRIVATE</code>). If no value is provided, the visibility will be set to
     * <code>GLOBAL</code> by default. This value cannot be changed once the API has
     * been created.</p>
     */
    inline GraphQLApiVisibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(GraphQLApiVisibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline GraphqlApi& WithVisibility(GraphQLApiVisibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline GraphQLApiType GetApiType() const { return m_apiType; }
    inline bool ApiTypeHasBeenSet() const { return m_apiTypeHasBeenSet; }
    inline void SetApiType(GraphQLApiType value) { m_apiTypeHasBeenSet = true; m_apiType = value; }
    inline GraphqlApi& WithApiType(GraphQLApiType value) { SetApiType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline const Aws::String& GetMergedApiExecutionRoleArn() const { return m_mergedApiExecutionRoleArn; }
    inline bool MergedApiExecutionRoleArnHasBeenSet() const { return m_mergedApiExecutionRoleArnHasBeenSet; }
    template<typename MergedApiExecutionRoleArnT = Aws::String>
    void SetMergedApiExecutionRoleArn(MergedApiExecutionRoleArnT&& value) { m_mergedApiExecutionRoleArnHasBeenSet = true; m_mergedApiExecutionRoleArn = std::forward<MergedApiExecutionRoleArnT>(value); }
    template<typename MergedApiExecutionRoleArnT = Aws::String>
    GraphqlApi& WithMergedApiExecutionRoleArn(MergedApiExecutionRoleArnT&& value) { SetMergedApiExecutionRoleArn(std::forward<MergedApiExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    GraphqlApi& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline const Aws::String& GetOwnerContact() const { return m_ownerContact; }
    inline bool OwnerContactHasBeenSet() const { return m_ownerContactHasBeenSet; }
    template<typename OwnerContactT = Aws::String>
    void SetOwnerContact(OwnerContactT&& value) { m_ownerContactHasBeenSet = true; m_ownerContact = std::forward<OwnerContactT>(value); }
    template<typename OwnerContactT = Aws::String>
    GraphqlApi& WithOwnerContact(OwnerContactT&& value) { SetOwnerContact(std::forward<OwnerContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the value of the GraphQL API to enable (<code>ENABLED</code>) or disable
     * (<code>DISABLED</code>) introspection. If no value is provided, the
     * introspection configuration will be set to <code>ENABLED</code> by default. This
     * field will produce an error if the operation attempts to use the introspection
     * feature while this field is disabled.</p> <p>For more information about
     * introspection, see <a href="https://graphql.org/learn/introspection/">GraphQL
     * introspection</a>.</p>
     */
    inline GraphQLApiIntrospectionConfig GetIntrospectionConfig() const { return m_introspectionConfig; }
    inline bool IntrospectionConfigHasBeenSet() const { return m_introspectionConfigHasBeenSet; }
    inline void SetIntrospectionConfig(GraphQLApiIntrospectionConfig value) { m_introspectionConfigHasBeenSet = true; m_introspectionConfig = value; }
    inline GraphqlApi& WithIntrospectionConfig(GraphQLApiIntrospectionConfig value) { SetIntrospectionConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum depth a query can have in a single request. Depth refers to the
     * amount of nested levels allowed in the body of query. The default value is
     * <code>0</code> (or unspecified), which indicates there's no depth limit. If you
     * set a limit, it can be between <code>1</code> and <code>75</code> nested levels.
     * This field will produce a limit error if the operation falls out of bounds.</p>
     * <p>Note that fields can still be set to nullable or non-nullable. If a
     * non-nullable field produces an error, the error will be thrown upwards to the
     * first nullable field available.</p>
     */
    inline int GetQueryDepthLimit() const { return m_queryDepthLimit; }
    inline bool QueryDepthLimitHasBeenSet() const { return m_queryDepthLimitHasBeenSet; }
    inline void SetQueryDepthLimit(int value) { m_queryDepthLimitHasBeenSet = true; m_queryDepthLimit = value; }
    inline GraphqlApi& WithQueryDepthLimit(int value) { SetQueryDepthLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resolvers that can be invoked in a single request. The
     * default value is <code>0</code> (or unspecified), which will set the limit to
     * <code>10000</code>. When specified, the limit value can be between
     * <code>1</code> and <code>10000</code>. This field will produce a limit error if
     * the operation falls out of bounds.</p>
     */
    inline int GetResolverCountLimit() const { return m_resolverCountLimit; }
    inline bool ResolverCountLimitHasBeenSet() const { return m_resolverCountLimitHasBeenSet; }
    inline void SetResolverCountLimit(int value) { m_resolverCountLimitHasBeenSet = true; m_resolverCountLimit = value; }
    inline GraphqlApi& WithResolverCountLimit(int value) { SetResolverCountLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>enhancedMetricsConfig</code> object.</p>
     */
    inline const EnhancedMetricsConfig& GetEnhancedMetricsConfig() const { return m_enhancedMetricsConfig; }
    inline bool EnhancedMetricsConfigHasBeenSet() const { return m_enhancedMetricsConfigHasBeenSet; }
    template<typename EnhancedMetricsConfigT = EnhancedMetricsConfig>
    void SetEnhancedMetricsConfig(EnhancedMetricsConfigT&& value) { m_enhancedMetricsConfigHasBeenSet = true; m_enhancedMetricsConfig = std::forward<EnhancedMetricsConfigT>(value); }
    template<typename EnhancedMetricsConfigT = EnhancedMetricsConfig>
    GraphqlApi& WithEnhancedMetricsConfig(EnhancedMetricsConfigT&& value) { SetEnhancedMetricsConfig(std::forward<EnhancedMetricsConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    LogConfig m_logConfig;
    bool m_logConfigHasBeenSet = false;

    UserPoolConfig m_userPoolConfig;
    bool m_userPoolConfigHasBeenSet = false;

    OpenIDConnectConfig m_openIDConnectConfig;
    bool m_openIDConnectConfigHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_uris;
    bool m_urisHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AdditionalAuthenticationProvider> m_additionalAuthenticationProviders;
    bool m_additionalAuthenticationProvidersHasBeenSet = false;

    bool m_xrayEnabled{false};
    bool m_xrayEnabledHasBeenSet = false;

    Aws::String m_wafWebAclArn;
    bool m_wafWebAclArnHasBeenSet = false;

    LambdaAuthorizerConfig m_lambdaAuthorizerConfig;
    bool m_lambdaAuthorizerConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dns;
    bool m_dnsHasBeenSet = false;

    GraphQLApiVisibility m_visibility{GraphQLApiVisibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    GraphQLApiType m_apiType{GraphQLApiType::NOT_SET};
    bool m_apiTypeHasBeenSet = false;

    Aws::String m_mergedApiExecutionRoleArn;
    bool m_mergedApiExecutionRoleArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_ownerContact;
    bool m_ownerContactHasBeenSet = false;

    GraphQLApiIntrospectionConfig m_introspectionConfig{GraphQLApiIntrospectionConfig::NOT_SET};
    bool m_introspectionConfigHasBeenSet = false;

    int m_queryDepthLimit{0};
    bool m_queryDepthLimitHasBeenSet = false;

    int m_resolverCountLimit{0};
    bool m_resolverCountLimitHasBeenSet = false;

    EnhancedMetricsConfig m_enhancedMetricsConfig;
    bool m_enhancedMetricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
