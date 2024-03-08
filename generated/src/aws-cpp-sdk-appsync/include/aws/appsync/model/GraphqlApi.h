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
    AWS_APPSYNC_API GraphqlApi();
    AWS_APPSYNC_API GraphqlApi(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API GraphqlApi& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The API name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The API name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The API name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The API name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The API name.</p>
     */
    inline GraphqlApi& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The API name.</p>
     */
    inline GraphqlApi& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The API name.</p>
     */
    inline GraphqlApi& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline GraphqlApi& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline GraphqlApi& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline GraphqlApi& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The authentication type.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication type.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The authentication type.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication type.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication type.</p>
     */
    inline GraphqlApi& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type.</p>
     */
    inline GraphqlApi& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline const LogConfig& GetLogConfig() const{ return m_logConfig; }

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline void SetLogConfig(const LogConfig& value) { m_logConfigHasBeenSet = true; m_logConfig = value; }

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline void SetLogConfig(LogConfig&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::move(value); }

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline GraphqlApi& WithLogConfig(const LogConfig& value) { SetLogConfig(value); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline GraphqlApi& WithLogConfig(LogConfig&& value) { SetLogConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline const UserPoolConfig& GetUserPoolConfig() const{ return m_userPoolConfig; }

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline bool UserPoolConfigHasBeenSet() const { return m_userPoolConfigHasBeenSet; }

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline void SetUserPoolConfig(const UserPoolConfig& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = value; }

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline void SetUserPoolConfig(UserPoolConfig&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::move(value); }

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline GraphqlApi& WithUserPoolConfig(const UserPoolConfig& value) { SetUserPoolConfig(value); return *this;}

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline GraphqlApi& WithUserPoolConfig(UserPoolConfig&& value) { SetUserPoolConfig(std::move(value)); return *this;}


    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const{ return m_openIDConnectConfig; }

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline bool OpenIDConnectConfigHasBeenSet() const { return m_openIDConnectConfigHasBeenSet; }

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline void SetOpenIDConnectConfig(const OpenIDConnectConfig& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = value; }

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline void SetOpenIDConnectConfig(OpenIDConnectConfig&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::move(value); }

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline GraphqlApi& WithOpenIDConnectConfig(const OpenIDConnectConfig& value) { SetOpenIDConnectConfig(value); return *this;}

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline GraphqlApi& WithOpenIDConnectConfig(OpenIDConnectConfig&& value) { SetOpenIDConnectConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline GraphqlApi& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline GraphqlApi& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline GraphqlApi& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The URIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUris() const{ return m_uris; }

    /**
     * <p>The URIs.</p>
     */
    inline bool UrisHasBeenSet() const { return m_urisHasBeenSet; }

    /**
     * <p>The URIs.</p>
     */
    inline void SetUris(const Aws::Map<Aws::String, Aws::String>& value) { m_urisHasBeenSet = true; m_uris = value; }

    /**
     * <p>The URIs.</p>
     */
    inline void SetUris(Aws::Map<Aws::String, Aws::String>&& value) { m_urisHasBeenSet = true; m_uris = std::move(value); }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& WithUris(const Aws::Map<Aws::String, Aws::String>& value) { SetUris(value); return *this;}

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& WithUris(Aws::Map<Aws::String, Aws::String>&& value) { SetUris(std::move(value)); return *this;}

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(const Aws::String& key, const Aws::String& value) { m_urisHasBeenSet = true; m_uris.emplace(key, value); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(Aws::String&& key, const Aws::String& value) { m_urisHasBeenSet = true; m_uris.emplace(std::move(key), value); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(const Aws::String& key, Aws::String&& value) { m_urisHasBeenSet = true; m_uris.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(Aws::String&& key, Aws::String&& value) { m_urisHasBeenSet = true; m_uris.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(const char* key, Aws::String&& value) { m_urisHasBeenSet = true; m_uris.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(Aws::String&& key, const char* value) { m_urisHasBeenSet = true; m_uris.emplace(std::move(key), value); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(const char* key, const char* value) { m_urisHasBeenSet = true; m_uris.emplace(key, value); return *this; }


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline GraphqlApi& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline const Aws::Vector<AdditionalAuthenticationProvider>& GetAdditionalAuthenticationProviders() const{ return m_additionalAuthenticationProviders; }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline bool AdditionalAuthenticationProvidersHasBeenSet() const { return m_additionalAuthenticationProvidersHasBeenSet; }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline void SetAdditionalAuthenticationProviders(const Aws::Vector<AdditionalAuthenticationProvider>& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = value; }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline void SetAdditionalAuthenticationProviders(Aws::Vector<AdditionalAuthenticationProvider>&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = std::move(value); }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline GraphqlApi& WithAdditionalAuthenticationProviders(const Aws::Vector<AdditionalAuthenticationProvider>& value) { SetAdditionalAuthenticationProviders(value); return *this;}

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline GraphqlApi& WithAdditionalAuthenticationProviders(Aws::Vector<AdditionalAuthenticationProvider>&& value) { SetAdditionalAuthenticationProviders(std::move(value)); return *this;}

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline GraphqlApi& AddAdditionalAuthenticationProviders(const AdditionalAuthenticationProvider& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.push_back(value); return *this; }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline GraphqlApi& AddAdditionalAuthenticationProviders(AdditionalAuthenticationProvider&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag indicating whether to use X-Ray tracing for this
     * <code>GraphqlApi</code>.</p>
     */
    inline bool GetXrayEnabled() const{ return m_xrayEnabled; }

    /**
     * <p>A flag indicating whether to use X-Ray tracing for this
     * <code>GraphqlApi</code>.</p>
     */
    inline bool XrayEnabledHasBeenSet() const { return m_xrayEnabledHasBeenSet; }

    /**
     * <p>A flag indicating whether to use X-Ray tracing for this
     * <code>GraphqlApi</code>.</p>
     */
    inline void SetXrayEnabled(bool value) { m_xrayEnabledHasBeenSet = true; m_xrayEnabled = value; }

    /**
     * <p>A flag indicating whether to use X-Ray tracing for this
     * <code>GraphqlApi</code>.</p>
     */
    inline GraphqlApi& WithXrayEnabled(bool value) { SetXrayEnabled(value); return *this;}


    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline const Aws::String& GetWafWebAclArn() const{ return m_wafWebAclArn; }

    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline bool WafWebAclArnHasBeenSet() const { return m_wafWebAclArnHasBeenSet; }

    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline void SetWafWebAclArn(const Aws::String& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = value; }

    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline void SetWafWebAclArn(Aws::String&& value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn = std::move(value); }

    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline void SetWafWebAclArn(const char* value) { m_wafWebAclArnHasBeenSet = true; m_wafWebAclArn.assign(value); }

    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline GraphqlApi& WithWafWebAclArn(const Aws::String& value) { SetWafWebAclArn(value); return *this;}

    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline GraphqlApi& WithWafWebAclArn(Aws::String&& value) { SetWafWebAclArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the WAF access control list (ACL) associated with this
     * <code>GraphqlApi</code>, if one exists.</p>
     */
    inline GraphqlApi& WithWafWebAclArn(const char* value) { SetWafWebAclArn(value); return *this;}


    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline const LambdaAuthorizerConfig& GetLambdaAuthorizerConfig() const{ return m_lambdaAuthorizerConfig; }

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline void SetLambdaAuthorizerConfig(const LambdaAuthorizerConfig& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = value; }

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline void SetLambdaAuthorizerConfig(LambdaAuthorizerConfig&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::move(value); }

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline GraphqlApi& WithLambdaAuthorizerConfig(const LambdaAuthorizerConfig& value) { SetLambdaAuthorizerConfig(value); return *this;}

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline GraphqlApi& WithLambdaAuthorizerConfig(LambdaAuthorizerConfig&& value) { SetLambdaAuthorizerConfig(std::move(value)); return *this;}


    /**
     * <p>The DNS records for the API.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDns() const{ return m_dns; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline void SetDns(const Aws::Map<Aws::String, Aws::String>& value) { m_dnsHasBeenSet = true; m_dns = value; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline void SetDns(Aws::Map<Aws::String, Aws::String>&& value) { m_dnsHasBeenSet = true; m_dns = std::move(value); }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& WithDns(const Aws::Map<Aws::String, Aws::String>& value) { SetDns(value); return *this;}

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& WithDns(Aws::Map<Aws::String, Aws::String>&& value) { SetDns(std::move(value)); return *this;}

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& AddDns(const Aws::String& key, const Aws::String& value) { m_dnsHasBeenSet = true; m_dns.emplace(key, value); return *this; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& AddDns(Aws::String&& key, const Aws::String& value) { m_dnsHasBeenSet = true; m_dns.emplace(std::move(key), value); return *this; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& AddDns(const Aws::String& key, Aws::String&& value) { m_dnsHasBeenSet = true; m_dns.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& AddDns(Aws::String&& key, Aws::String&& value) { m_dnsHasBeenSet = true; m_dns.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& AddDns(const char* key, Aws::String&& value) { m_dnsHasBeenSet = true; m_dns.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& AddDns(Aws::String&& key, const char* value) { m_dnsHasBeenSet = true; m_dns.emplace(std::move(key), value); return *this; }

    /**
     * <p>The DNS records for the API.</p>
     */
    inline GraphqlApi& AddDns(const char* key, const char* value) { m_dnsHasBeenSet = true; m_dns.emplace(key, value); return *this; }


    /**
     * <p>Sets the value of the GraphQL API to public (<code>GLOBAL</code>) or private
     * (<code>PRIVATE</code>). If no value is provided, the visibility will be set to
     * <code>GLOBAL</code> by default. This value cannot be changed once the API has
     * been created.</p>
     */
    inline const GraphQLApiVisibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>Sets the value of the GraphQL API to public (<code>GLOBAL</code>) or private
     * (<code>PRIVATE</code>). If no value is provided, the visibility will be set to
     * <code>GLOBAL</code> by default. This value cannot be changed once the API has
     * been created.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>Sets the value of the GraphQL API to public (<code>GLOBAL</code>) or private
     * (<code>PRIVATE</code>). If no value is provided, the visibility will be set to
     * <code>GLOBAL</code> by default. This value cannot be changed once the API has
     * been created.</p>
     */
    inline void SetVisibility(const GraphQLApiVisibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>Sets the value of the GraphQL API to public (<code>GLOBAL</code>) or private
     * (<code>PRIVATE</code>). If no value is provided, the visibility will be set to
     * <code>GLOBAL</code> by default. This value cannot be changed once the API has
     * been created.</p>
     */
    inline void SetVisibility(GraphQLApiVisibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>Sets the value of the GraphQL API to public (<code>GLOBAL</code>) or private
     * (<code>PRIVATE</code>). If no value is provided, the visibility will be set to
     * <code>GLOBAL</code> by default. This value cannot be changed once the API has
     * been created.</p>
     */
    inline GraphqlApi& WithVisibility(const GraphQLApiVisibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>Sets the value of the GraphQL API to public (<code>GLOBAL</code>) or private
     * (<code>PRIVATE</code>). If no value is provided, the visibility will be set to
     * <code>GLOBAL</code> by default. This value cannot be changed once the API has
     * been created.</p>
     */
    inline GraphqlApi& WithVisibility(GraphQLApiVisibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline const GraphQLApiType& GetApiType() const{ return m_apiType; }

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline bool ApiTypeHasBeenSet() const { return m_apiTypeHasBeenSet; }

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline void SetApiType(const GraphQLApiType& value) { m_apiTypeHasBeenSet = true; m_apiType = value; }

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline void SetApiType(GraphQLApiType&& value) { m_apiTypeHasBeenSet = true; m_apiType = std::move(value); }

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline GraphqlApi& WithApiType(const GraphQLApiType& value) { SetApiType(value); return *this;}

    /**
     * <p>The value that indicates whether the GraphQL API is a standard API
     * (<code>GRAPHQL</code>) or merged API (<code>MERGED</code>).</p>
     */
    inline GraphqlApi& WithApiType(GraphQLApiType&& value) { SetApiType(std::move(value)); return *this;}


    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline const Aws::String& GetMergedApiExecutionRoleArn() const{ return m_mergedApiExecutionRoleArn; }

    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline bool MergedApiExecutionRoleArnHasBeenSet() const { return m_mergedApiExecutionRoleArnHasBeenSet; }

    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline void SetMergedApiExecutionRoleArn(const Aws::String& value) { m_mergedApiExecutionRoleArnHasBeenSet = true; m_mergedApiExecutionRoleArn = value; }

    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline void SetMergedApiExecutionRoleArn(Aws::String&& value) { m_mergedApiExecutionRoleArnHasBeenSet = true; m_mergedApiExecutionRoleArn = std::move(value); }

    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline void SetMergedApiExecutionRoleArn(const char* value) { m_mergedApiExecutionRoleArnHasBeenSet = true; m_mergedApiExecutionRoleArn.assign(value); }

    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline GraphqlApi& WithMergedApiExecutionRoleArn(const Aws::String& value) { SetMergedApiExecutionRoleArn(value); return *this;}

    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline GraphqlApi& WithMergedApiExecutionRoleArn(Aws::String&& value) { SetMergedApiExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Identity and Access Management service role ARN for a merged API. The
     * AppSync service assumes this role on behalf of the Merged API to validate access
     * to source APIs at runtime and to prompt the <code>AUTO_MERGE</code> to update
     * the merged API endpoint with the source API changes automatically.</p>
     */
    inline GraphqlApi& WithMergedApiExecutionRoleArn(const char* value) { SetMergedApiExecutionRoleArn(value); return *this;}


    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline GraphqlApi& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline GraphqlApi& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The account owner of the GraphQL API.</p>
     */
    inline GraphqlApi& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline const Aws::String& GetOwnerContact() const{ return m_ownerContact; }

    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline bool OwnerContactHasBeenSet() const { return m_ownerContactHasBeenSet; }

    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline void SetOwnerContact(const Aws::String& value) { m_ownerContactHasBeenSet = true; m_ownerContact = value; }

    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline void SetOwnerContact(Aws::String&& value) { m_ownerContactHasBeenSet = true; m_ownerContact = std::move(value); }

    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline void SetOwnerContact(const char* value) { m_ownerContactHasBeenSet = true; m_ownerContact.assign(value); }

    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline GraphqlApi& WithOwnerContact(const Aws::String& value) { SetOwnerContact(value); return *this;}

    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline GraphqlApi& WithOwnerContact(Aws::String&& value) { SetOwnerContact(std::move(value)); return *this;}

    /**
     * <p>The owner contact information for an API resource.</p> <p>This field accepts
     * any string input with a length of 0 - 256 characters.</p>
     */
    inline GraphqlApi& WithOwnerContact(const char* value) { SetOwnerContact(value); return *this;}


    /**
     * <p>Sets the value of the GraphQL API to enable (<code>ENABLED</code>) or disable
     * (<code>DISABLED</code>) introspection. If no value is provided, the
     * introspection configuration will be set to <code>ENABLED</code> by default. This
     * field will produce an error if the operation attempts to use the introspection
     * feature while this field is disabled.</p> <p>For more information about
     * introspection, see <a href="https://graphql.org/learn/introspection/">GraphQL
     * introspection</a>.</p>
     */
    inline const GraphQLApiIntrospectionConfig& GetIntrospectionConfig() const{ return m_introspectionConfig; }

    /**
     * <p>Sets the value of the GraphQL API to enable (<code>ENABLED</code>) or disable
     * (<code>DISABLED</code>) introspection. If no value is provided, the
     * introspection configuration will be set to <code>ENABLED</code> by default. This
     * field will produce an error if the operation attempts to use the introspection
     * feature while this field is disabled.</p> <p>For more information about
     * introspection, see <a href="https://graphql.org/learn/introspection/">GraphQL
     * introspection</a>.</p>
     */
    inline bool IntrospectionConfigHasBeenSet() const { return m_introspectionConfigHasBeenSet; }

    /**
     * <p>Sets the value of the GraphQL API to enable (<code>ENABLED</code>) or disable
     * (<code>DISABLED</code>) introspection. If no value is provided, the
     * introspection configuration will be set to <code>ENABLED</code> by default. This
     * field will produce an error if the operation attempts to use the introspection
     * feature while this field is disabled.</p> <p>For more information about
     * introspection, see <a href="https://graphql.org/learn/introspection/">GraphQL
     * introspection</a>.</p>
     */
    inline void SetIntrospectionConfig(const GraphQLApiIntrospectionConfig& value) { m_introspectionConfigHasBeenSet = true; m_introspectionConfig = value; }

    /**
     * <p>Sets the value of the GraphQL API to enable (<code>ENABLED</code>) or disable
     * (<code>DISABLED</code>) introspection. If no value is provided, the
     * introspection configuration will be set to <code>ENABLED</code> by default. This
     * field will produce an error if the operation attempts to use the introspection
     * feature while this field is disabled.</p> <p>For more information about
     * introspection, see <a href="https://graphql.org/learn/introspection/">GraphQL
     * introspection</a>.</p>
     */
    inline void SetIntrospectionConfig(GraphQLApiIntrospectionConfig&& value) { m_introspectionConfigHasBeenSet = true; m_introspectionConfig = std::move(value); }

    /**
     * <p>Sets the value of the GraphQL API to enable (<code>ENABLED</code>) or disable
     * (<code>DISABLED</code>) introspection. If no value is provided, the
     * introspection configuration will be set to <code>ENABLED</code> by default. This
     * field will produce an error if the operation attempts to use the introspection
     * feature while this field is disabled.</p> <p>For more information about
     * introspection, see <a href="https://graphql.org/learn/introspection/">GraphQL
     * introspection</a>.</p>
     */
    inline GraphqlApi& WithIntrospectionConfig(const GraphQLApiIntrospectionConfig& value) { SetIntrospectionConfig(value); return *this;}

    /**
     * <p>Sets the value of the GraphQL API to enable (<code>ENABLED</code>) or disable
     * (<code>DISABLED</code>) introspection. If no value is provided, the
     * introspection configuration will be set to <code>ENABLED</code> by default. This
     * field will produce an error if the operation attempts to use the introspection
     * feature while this field is disabled.</p> <p>For more information about
     * introspection, see <a href="https://graphql.org/learn/introspection/">GraphQL
     * introspection</a>.</p>
     */
    inline GraphqlApi& WithIntrospectionConfig(GraphQLApiIntrospectionConfig&& value) { SetIntrospectionConfig(std::move(value)); return *this;}


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
    inline int GetQueryDepthLimit() const{ return m_queryDepthLimit; }

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
    inline bool QueryDepthLimitHasBeenSet() const { return m_queryDepthLimitHasBeenSet; }

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
    inline void SetQueryDepthLimit(int value) { m_queryDepthLimitHasBeenSet = true; m_queryDepthLimit = value; }

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
    inline GraphqlApi& WithQueryDepthLimit(int value) { SetQueryDepthLimit(value); return *this;}


    /**
     * <p>The maximum number of resolvers that can be invoked in a single request. The
     * default value is <code>0</code> (or unspecified), which will set the limit to
     * <code>10000</code>. When specified, the limit value can be between
     * <code>1</code> and <code>10000</code>. This field will produce a limit error if
     * the operation falls out of bounds.</p>
     */
    inline int GetResolverCountLimit() const{ return m_resolverCountLimit; }

    /**
     * <p>The maximum number of resolvers that can be invoked in a single request. The
     * default value is <code>0</code> (or unspecified), which will set the limit to
     * <code>10000</code>. When specified, the limit value can be between
     * <code>1</code> and <code>10000</code>. This field will produce a limit error if
     * the operation falls out of bounds.</p>
     */
    inline bool ResolverCountLimitHasBeenSet() const { return m_resolverCountLimitHasBeenSet; }

    /**
     * <p>The maximum number of resolvers that can be invoked in a single request. The
     * default value is <code>0</code> (or unspecified), which will set the limit to
     * <code>10000</code>. When specified, the limit value can be between
     * <code>1</code> and <code>10000</code>. This field will produce a limit error if
     * the operation falls out of bounds.</p>
     */
    inline void SetResolverCountLimit(int value) { m_resolverCountLimitHasBeenSet = true; m_resolverCountLimit = value; }

    /**
     * <p>The maximum number of resolvers that can be invoked in a single request. The
     * default value is <code>0</code> (or unspecified), which will set the limit to
     * <code>10000</code>. When specified, the limit value can be between
     * <code>1</code> and <code>10000</code>. This field will produce a limit error if
     * the operation falls out of bounds.</p>
     */
    inline GraphqlApi& WithResolverCountLimit(int value) { SetResolverCountLimit(value); return *this;}


    /**
     * <p>The <code>enhancedMetricsConfig</code> object.</p>
     */
    inline const EnhancedMetricsConfig& GetEnhancedMetricsConfig() const{ return m_enhancedMetricsConfig; }

    /**
     * <p>The <code>enhancedMetricsConfig</code> object.</p>
     */
    inline bool EnhancedMetricsConfigHasBeenSet() const { return m_enhancedMetricsConfigHasBeenSet; }

    /**
     * <p>The <code>enhancedMetricsConfig</code> object.</p>
     */
    inline void SetEnhancedMetricsConfig(const EnhancedMetricsConfig& value) { m_enhancedMetricsConfigHasBeenSet = true; m_enhancedMetricsConfig = value; }

    /**
     * <p>The <code>enhancedMetricsConfig</code> object.</p>
     */
    inline void SetEnhancedMetricsConfig(EnhancedMetricsConfig&& value) { m_enhancedMetricsConfigHasBeenSet = true; m_enhancedMetricsConfig = std::move(value); }

    /**
     * <p>The <code>enhancedMetricsConfig</code> object.</p>
     */
    inline GraphqlApi& WithEnhancedMetricsConfig(const EnhancedMetricsConfig& value) { SetEnhancedMetricsConfig(value); return *this;}

    /**
     * <p>The <code>enhancedMetricsConfig</code> object.</p>
     */
    inline GraphqlApi& WithEnhancedMetricsConfig(EnhancedMetricsConfig&& value) { SetEnhancedMetricsConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    AuthenticationType m_authenticationType;
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

    bool m_xrayEnabled;
    bool m_xrayEnabledHasBeenSet = false;

    Aws::String m_wafWebAclArn;
    bool m_wafWebAclArnHasBeenSet = false;

    LambdaAuthorizerConfig m_lambdaAuthorizerConfig;
    bool m_lambdaAuthorizerConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dns;
    bool m_dnsHasBeenSet = false;

    GraphQLApiVisibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    GraphQLApiType m_apiType;
    bool m_apiTypeHasBeenSet = false;

    Aws::String m_mergedApiExecutionRoleArn;
    bool m_mergedApiExecutionRoleArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_ownerContact;
    bool m_ownerContactHasBeenSet = false;

    GraphQLApiIntrospectionConfig m_introspectionConfig;
    bool m_introspectionConfigHasBeenSet = false;

    int m_queryDepthLimit;
    bool m_queryDepthLimitHasBeenSet = false;

    int m_resolverCountLimit;
    bool m_resolverCountLimitHasBeenSet = false;

    EnhancedMetricsConfig m_enhancedMetricsConfig;
    bool m_enhancedMetricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
