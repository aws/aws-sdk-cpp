/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CreateGraphqlApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGraphqlApiRequest::CreateGraphqlApiRequest() : 
    m_nameHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false),
    m_openIDConnectConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_additionalAuthenticationProvidersHasBeenSet(false),
    m_xrayEnabled(false),
    m_xrayEnabledHasBeenSet(false),
    m_lambdaAuthorizerConfigHasBeenSet(false),
    m_visibility(GraphQLApiVisibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_apiType(GraphQLApiType::NOT_SET),
    m_apiTypeHasBeenSet(false),
    m_mergedApiExecutionRoleArnHasBeenSet(false),
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

Aws::String CreateGraphqlApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_logConfigHasBeenSet)
  {
   payload.WithObject("logConfig", m_logConfig.Jsonize());

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_userPoolConfigHasBeenSet)
  {
   payload.WithObject("userPoolConfig", m_userPoolConfig.Jsonize());

  }

  if(m_openIDConnectConfigHasBeenSet)
  {
   payload.WithObject("openIDConnectConfig", m_openIDConnectConfig.Jsonize());

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

  if(m_lambdaAuthorizerConfigHasBeenSet)
  {
   payload.WithObject("lambdaAuthorizerConfig", m_lambdaAuthorizerConfig.Jsonize());

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

  return payload.View().WriteReadable();
}




