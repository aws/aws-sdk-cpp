/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CustomAuthCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

CustomAuthCredentials::CustomAuthCredentials() : 
    m_customAuthenticationTypeHasBeenSet(false),
    m_credentialsMapHasBeenSet(false)
{
}

CustomAuthCredentials::CustomAuthCredentials(JsonView jsonValue) : 
    m_customAuthenticationTypeHasBeenSet(false),
    m_credentialsMapHasBeenSet(false)
{
  *this = jsonValue;
}

CustomAuthCredentials& CustomAuthCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customAuthenticationType"))
  {
    m_customAuthenticationType = jsonValue.GetString("customAuthenticationType");

    m_customAuthenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialsMap"))
  {
    Aws::Map<Aws::String, JsonView> credentialsMapJsonMap = jsonValue.GetObject("credentialsMap").GetAllObjects();
    for(auto& credentialsMapItem : credentialsMapJsonMap)
    {
      m_credentialsMap[credentialsMapItem.first] = credentialsMapItem.second.AsString();
    }
    m_credentialsMapHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomAuthCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_customAuthenticationTypeHasBeenSet)
  {
   payload.WithString("customAuthenticationType", m_customAuthenticationType);

  }

  if(m_credentialsMapHasBeenSet)
  {
   JsonValue credentialsMapJsonMap;
   for(auto& credentialsMapItem : m_credentialsMap)
   {
     credentialsMapJsonMap.WithString(credentialsMapItem.first, credentialsMapItem.second);
   }
   payload.WithObject("credentialsMap", std::move(credentialsMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
