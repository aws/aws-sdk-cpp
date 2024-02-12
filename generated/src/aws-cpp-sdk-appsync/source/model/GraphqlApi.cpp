/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GraphqlApi.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

GraphqlApi::GraphqlApi() : 
    m_nameHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false),
    m_openIDConnectConfigHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_urisHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_additionalAuthenticationProvidersHasBeenSet(false),
    m_xrayEnabled(false),
    m_xrayEnabledHasBeenSet(false),
    m_wafWebAclArnHasBeenSet(false),
    m_lambdaAuthorizerConfigHasBeenSet(false),
    m_dnsHasBeenSet(false),
    m_visibility(GraphQLApiVisibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_apiType(GraphQLApiType::NOT_SET),
    m_apiTypeHasBeenSet(false),
    m_mergedApiExecutionRoleArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerContactHasBeenSet(false),
    m_introspectionConfig(GraphQLApiIntrospectionConfig::NOT_SET),
    m_introspectionConfigHasBeenSet(false),
    m_queryDepthLimit(0),
    m_queryDepthLimitHasBeenSet(false),
    m_resolverCountLimit(0),
    m_resolverCountLimitHasBeenSet(false),
    m_enhancedMetricsConfigHasBeenSet(false)
{
}

GraphqlApi::GraphqlApi(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false),
    m_openIDConnectConfigHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_urisHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_additionalAuthenticationProvidersHasBeenSet(false),
    m_xrayEnabled(false),
    m_xrayEnabledHasBeenSet(false),
    m_wafWebAclArnHasBeenSet(false),
    m_lambdaAuthorizerConfigHasBeenSet(false),
    m_dnsHasBeenSet(false),
    m_visibility(GraphQLApiVisibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_apiType(GraphQLApiType::NOT_SET),
    m_apiTypeHasBeenSet(false),
    m_mergedApiExecutionRoleArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerContactHasBeenSet(false),
    m_introspectionConfig(GraphQLApiIntrospectionConfig::NOT_SET),
    m_introspectionConfigHasBeenSet(false),
    m_queryDepthLimit(0),
    m_queryDepthLimitHasBeenSet(false),
    m_resolverCountLimit(0),
    m_resolverCountLimitHasBeenSet(false),
    m_enhancedMetricsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

GraphqlApi& GraphqlApi::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");

    m_apiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("authenticationType"));

    m_authenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logConfig"))
  {
    m_logConfig = jsonValue.GetObject("logConfig");

    m_logConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userPoolConfig"))
  {
    m_userPoolConfig = jsonValue.GetObject("userPoolConfig");

    m_userPoolConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openIDConnectConfig"))
  {
    m_openIDConnectConfig = jsonValue.GetObject("openIDConnectConfig");

    m_openIDConnectConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uris"))
  {
    Aws::Map<Aws::String, JsonView> urisJsonMap = jsonValue.GetObject("uris").GetAllObjects();
    for(auto& urisItem : urisJsonMap)
    {
      m_uris[urisItem.first] = urisItem.second.AsString();
    }
    m_urisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalAuthenticationProviders"))
  {
    Aws::Utils::Array<JsonView> additionalAuthenticationProvidersJsonList = jsonValue.GetArray("additionalAuthenticationProviders");
    for(unsigned additionalAuthenticationProvidersIndex = 0; additionalAuthenticationProvidersIndex < additionalAuthenticationProvidersJsonList.GetLength(); ++additionalAuthenticationProvidersIndex)
    {
      m_additionalAuthenticationProviders.push_back(additionalAuthenticationProvidersJsonList[additionalAuthenticationProvidersIndex].AsObject());
    }
    m_additionalAuthenticationProvidersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xrayEnabled"))
  {
    m_xrayEnabled = jsonValue.GetBool("xrayEnabled");

    m_xrayEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("wafWebAclArn"))
  {
    m_wafWebAclArn = jsonValue.GetString("wafWebAclArn");

    m_wafWebAclArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaAuthorizerConfig"))
  {
    m_lambdaAuthorizerConfig = jsonValue.GetObject("lambdaAuthorizerConfig");

    m_lambdaAuthorizerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dns"))
  {
    Aws::Map<Aws::String, JsonView> dnsJsonMap = jsonValue.GetObject("dns").GetAllObjects();
    for(auto& dnsItem : dnsJsonMap)
    {
      m_dns[dnsItem.first] = dnsItem.second.AsString();
    }
    m_dnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("visibility"))
  {
    m_visibility = GraphQLApiVisibilityMapper::GetGraphQLApiVisibilityForName(jsonValue.GetString("visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiType"))
  {
    m_apiType = GraphQLApiTypeMapper::GetGraphQLApiTypeForName(jsonValue.GetString("apiType"));

    m_apiTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergedApiExecutionRoleArn"))
  {
    m_mergedApiExecutionRoleArn = jsonValue.GetString("mergedApiExecutionRoleArn");

    m_mergedApiExecutionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerContact"))
  {
    m_ownerContact = jsonValue.GetString("ownerContact");

    m_ownerContactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("introspectionConfig"))
  {
    m_introspectionConfig = GraphQLApiIntrospectionConfigMapper::GetGraphQLApiIntrospectionConfigForName(jsonValue.GetString("introspectionConfig"));

    m_introspectionConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryDepthLimit"))
  {
    m_queryDepthLimit = jsonValue.GetInteger("queryDepthLimit");

    m_queryDepthLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolverCountLimit"))
  {
    m_resolverCountLimit = jsonValue.GetInteger("resolverCountLimit");

    m_resolverCountLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enhancedMetricsConfig"))
  {
    m_enhancedMetricsConfig = jsonValue.GetObject("enhancedMetricsConfig");

    m_enhancedMetricsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue GraphqlApi::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_logConfigHasBeenSet)
  {
   payload.WithObject("logConfig", m_logConfig.Jsonize());

  }

  if(m_userPoolConfigHasBeenSet)
  {
   payload.WithObject("userPoolConfig", m_userPoolConfig.Jsonize());

  }

  if(m_openIDConnectConfigHasBeenSet)
  {
   payload.WithObject("openIDConnectConfig", m_openIDConnectConfig.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_urisHasBeenSet)
  {
   JsonValue urisJsonMap;
   for(auto& urisItem : m_uris)
   {
     urisJsonMap.WithString(urisItem.first, urisItem.second);
   }
   payload.WithObject("uris", std::move(urisJsonMap));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_additionalAuthenticationProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalAuthenticationProvidersJsonList(m_additionalAuthenticationProviders.size());
   for(unsigned additionalAuthenticationProvidersIndex = 0; additionalAuthenticationProvidersIndex < additionalAuthenticationProvidersJsonList.GetLength(); ++additionalAuthenticationProvidersIndex)
   {
     additionalAuthenticationProvidersJsonList[additionalAuthenticationProvidersIndex].AsObject(m_additionalAuthenticationProviders[additionalAuthenticationProvidersIndex].Jsonize());
   }
   payload.WithArray("additionalAuthenticationProviders", std::move(additionalAuthenticationProvidersJsonList));

  }

  if(m_xrayEnabledHasBeenSet)
  {
   payload.WithBool("xrayEnabled", m_xrayEnabled);

  }

  if(m_wafWebAclArnHasBeenSet)
  {
   payload.WithString("wafWebAclArn", m_wafWebAclArn);

  }

  if(m_lambdaAuthorizerConfigHasBeenSet)
  {
   payload.WithObject("lambdaAuthorizerConfig", m_lambdaAuthorizerConfig.Jsonize());

  }

  if(m_dnsHasBeenSet)
  {
   JsonValue dnsJsonMap;
   for(auto& dnsItem : m_dns)
   {
     dnsJsonMap.WithString(dnsItem.first, dnsItem.second);
   }
   payload.WithObject("dns", std::move(dnsJsonMap));

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("visibility", GraphQLApiVisibilityMapper::GetNameForGraphQLApiVisibility(m_visibility));
  }

  if(m_apiTypeHasBeenSet)
  {
   payload.WithString("apiType", GraphQLApiTypeMapper::GetNameForGraphQLApiType(m_apiType));
  }

  if(m_mergedApiExecutionRoleArnHasBeenSet)
  {
   payload.WithString("mergedApiExecutionRoleArn", m_mergedApiExecutionRoleArn);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_ownerContactHasBeenSet)
  {
   payload.WithString("ownerContact", m_ownerContact);

  }

  if(m_introspectionConfigHasBeenSet)
  {
   payload.WithString("introspectionConfig", GraphQLApiIntrospectionConfigMapper::GetNameForGraphQLApiIntrospectionConfig(m_introspectionConfig));
  }

  if(m_queryDepthLimitHasBeenSet)
  {
   payload.WithInteger("queryDepthLimit", m_queryDepthLimit);

  }

  if(m_resolverCountLimitHasBeenSet)
  {
   payload.WithInteger("resolverCountLimit", m_resolverCountLimit);

  }

  if(m_enhancedMetricsConfigHasBeenSet)
  {
   payload.WithObject("enhancedMetricsConfig", m_enhancedMetricsConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
