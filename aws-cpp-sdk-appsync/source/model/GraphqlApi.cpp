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
    m_urisHasBeenSet(false)
{
}

GraphqlApi::GraphqlApi(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false),
    m_openIDConnectConfigHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_urisHasBeenSet(false)
{
  *this = jsonValue;
}

GraphqlApi& GraphqlApi::operator =(const JsonValue& jsonValue)
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
    Aws::Map<Aws::String, JsonValue> urisJsonMap = jsonValue.GetObject("uris").GetAllObjects();
    for(auto& urisItem : urisJsonMap)
    {
      m_uris[urisItem.first] = urisItem.second.AsString();
    }
    m_urisHasBeenSet = true;
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

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
