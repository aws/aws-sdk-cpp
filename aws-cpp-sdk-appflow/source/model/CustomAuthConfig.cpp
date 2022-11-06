/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CustomAuthConfig.h>
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

CustomAuthConfig::CustomAuthConfig() : 
    m_customAuthenticationTypeHasBeenSet(false),
    m_authParametersHasBeenSet(false)
{
}

CustomAuthConfig::CustomAuthConfig(JsonView jsonValue) : 
    m_customAuthenticationTypeHasBeenSet(false),
    m_authParametersHasBeenSet(false)
{
  *this = jsonValue;
}

CustomAuthConfig& CustomAuthConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customAuthenticationType"))
  {
    m_customAuthenticationType = jsonValue.GetString("customAuthenticationType");

    m_customAuthenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authParameters"))
  {
    Aws::Utils::Array<JsonView> authParametersJsonList = jsonValue.GetArray("authParameters");
    for(unsigned authParametersIndex = 0; authParametersIndex < authParametersJsonList.GetLength(); ++authParametersIndex)
    {
      m_authParameters.push_back(authParametersJsonList[authParametersIndex].AsObject());
    }
    m_authParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomAuthConfig::Jsonize() const
{
  JsonValue payload;

  if(m_customAuthenticationTypeHasBeenSet)
  {
   payload.WithString("customAuthenticationType", m_customAuthenticationType);

  }

  if(m_authParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authParametersJsonList(m_authParameters.size());
   for(unsigned authParametersIndex = 0; authParametersIndex < authParametersJsonList.GetLength(); ++authParametersIndex)
   {
     authParametersJsonList[authParametersIndex].AsObject(m_authParameters[authParametersIndex].Jsonize());
   }
   payload.WithArray("authParameters", std::move(authParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
