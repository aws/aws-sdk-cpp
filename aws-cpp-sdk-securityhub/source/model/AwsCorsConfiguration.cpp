/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCorsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCorsConfiguration::AwsCorsConfiguration() : 
    m_allowOriginsHasBeenSet(false),
    m_allowCredentials(false),
    m_allowCredentialsHasBeenSet(false),
    m_exposeHeadersHasBeenSet(false),
    m_maxAge(0),
    m_maxAgeHasBeenSet(false),
    m_allowMethodsHasBeenSet(false),
    m_allowHeadersHasBeenSet(false)
{
}

AwsCorsConfiguration::AwsCorsConfiguration(JsonView jsonValue) : 
    m_allowOriginsHasBeenSet(false),
    m_allowCredentials(false),
    m_allowCredentialsHasBeenSet(false),
    m_exposeHeadersHasBeenSet(false),
    m_maxAge(0),
    m_maxAgeHasBeenSet(false),
    m_allowMethodsHasBeenSet(false),
    m_allowHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCorsConfiguration& AwsCorsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowOrigins"))
  {
    Aws::Utils::Array<JsonView> allowOriginsJsonList = jsonValue.GetArray("AllowOrigins");
    for(unsigned allowOriginsIndex = 0; allowOriginsIndex < allowOriginsJsonList.GetLength(); ++allowOriginsIndex)
    {
      m_allowOrigins.push_back(allowOriginsJsonList[allowOriginsIndex].AsString());
    }
    m_allowOriginsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowCredentials"))
  {
    m_allowCredentials = jsonValue.GetBool("AllowCredentials");

    m_allowCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExposeHeaders"))
  {
    Aws::Utils::Array<JsonView> exposeHeadersJsonList = jsonValue.GetArray("ExposeHeaders");
    for(unsigned exposeHeadersIndex = 0; exposeHeadersIndex < exposeHeadersJsonList.GetLength(); ++exposeHeadersIndex)
    {
      m_exposeHeaders.push_back(exposeHeadersJsonList[exposeHeadersIndex].AsString());
    }
    m_exposeHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAge"))
  {
    m_maxAge = jsonValue.GetInteger("MaxAge");

    m_maxAgeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowMethods"))
  {
    Aws::Utils::Array<JsonView> allowMethodsJsonList = jsonValue.GetArray("AllowMethods");
    for(unsigned allowMethodsIndex = 0; allowMethodsIndex < allowMethodsJsonList.GetLength(); ++allowMethodsIndex)
    {
      m_allowMethods.push_back(allowMethodsJsonList[allowMethodsIndex].AsString());
    }
    m_allowMethodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowHeaders"))
  {
    Aws::Utils::Array<JsonView> allowHeadersJsonList = jsonValue.GetArray("AllowHeaders");
    for(unsigned allowHeadersIndex = 0; allowHeadersIndex < allowHeadersJsonList.GetLength(); ++allowHeadersIndex)
    {
      m_allowHeaders.push_back(allowHeadersJsonList[allowHeadersIndex].AsString());
    }
    m_allowHeadersHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCorsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowOriginsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowOriginsJsonList(m_allowOrigins.size());
   for(unsigned allowOriginsIndex = 0; allowOriginsIndex < allowOriginsJsonList.GetLength(); ++allowOriginsIndex)
   {
     allowOriginsJsonList[allowOriginsIndex].AsString(m_allowOrigins[allowOriginsIndex]);
   }
   payload.WithArray("AllowOrigins", std::move(allowOriginsJsonList));

  }

  if(m_allowCredentialsHasBeenSet)
  {
   payload.WithBool("AllowCredentials", m_allowCredentials);

  }

  if(m_exposeHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exposeHeadersJsonList(m_exposeHeaders.size());
   for(unsigned exposeHeadersIndex = 0; exposeHeadersIndex < exposeHeadersJsonList.GetLength(); ++exposeHeadersIndex)
   {
     exposeHeadersJsonList[exposeHeadersIndex].AsString(m_exposeHeaders[exposeHeadersIndex]);
   }
   payload.WithArray("ExposeHeaders", std::move(exposeHeadersJsonList));

  }

  if(m_maxAgeHasBeenSet)
  {
   payload.WithInteger("MaxAge", m_maxAge);

  }

  if(m_allowMethodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowMethodsJsonList(m_allowMethods.size());
   for(unsigned allowMethodsIndex = 0; allowMethodsIndex < allowMethodsJsonList.GetLength(); ++allowMethodsIndex)
   {
     allowMethodsJsonList[allowMethodsIndex].AsString(m_allowMethods[allowMethodsIndex]);
   }
   payload.WithArray("AllowMethods", std::move(allowMethodsJsonList));

  }

  if(m_allowHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowHeadersJsonList(m_allowHeaders.size());
   for(unsigned allowHeadersIndex = 0; allowHeadersIndex < allowHeadersJsonList.GetLength(); ++allowHeadersIndex)
   {
     allowHeadersJsonList[allowHeadersIndex].AsString(m_allowHeaders[allowHeadersIndex]);
   }
   payload.WithArray("AllowHeaders", std::move(allowHeadersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
