/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AuthenticationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

AuthenticationConfiguration::AuthenticationConfiguration() : 
    m_basicAuthenticationHasBeenSet(false)
{
}

AuthenticationConfiguration::AuthenticationConfiguration(JsonView jsonValue) : 
    m_basicAuthenticationHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationConfiguration& AuthenticationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BasicAuthentication"))
  {
    Aws::Utils::Array<JsonView> basicAuthenticationJsonList = jsonValue.GetArray("BasicAuthentication");
    for(unsigned basicAuthenticationIndex = 0; basicAuthenticationIndex < basicAuthenticationJsonList.GetLength(); ++basicAuthenticationIndex)
    {
      m_basicAuthentication.push_back(basicAuthenticationJsonList[basicAuthenticationIndex].AsObject());
    }
    m_basicAuthenticationHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_basicAuthenticationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> basicAuthenticationJsonList(m_basicAuthentication.size());
   for(unsigned basicAuthenticationIndex = 0; basicAuthenticationIndex < basicAuthenticationJsonList.GetLength(); ++basicAuthenticationIndex)
   {
     basicAuthenticationJsonList[basicAuthenticationIndex].AsObject(m_basicAuthentication[basicAuthenticationIndex].Jsonize());
   }
   payload.WithArray("BasicAuthentication", std::move(basicAuthenticationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
