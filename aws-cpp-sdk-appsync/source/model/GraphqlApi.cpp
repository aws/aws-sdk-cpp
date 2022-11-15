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
    m_lambdaAuthorizerConfigHasBeenSet(false)
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
    m_lambdaAuthorizerConfigHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
