/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/CorsRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaStore
{
namespace Model
{

CorsRule::CorsRule() : 
    m_allowedOriginsHasBeenSet(false),
    m_allowedMethodsHasBeenSet(false),
    m_allowedHeadersHasBeenSet(false),
    m_maxAgeSeconds(0),
    m_maxAgeSecondsHasBeenSet(false),
    m_exposeHeadersHasBeenSet(false)
{
}

CorsRule::CorsRule(JsonView jsonValue) : 
    m_allowedOriginsHasBeenSet(false),
    m_allowedMethodsHasBeenSet(false),
    m_allowedHeadersHasBeenSet(false),
    m_maxAgeSeconds(0),
    m_maxAgeSecondsHasBeenSet(false),
    m_exposeHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

CorsRule& CorsRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowedOrigins"))
  {
    Aws::Utils::Array<JsonView> allowedOriginsJsonList = jsonValue.GetArray("AllowedOrigins");
    for(unsigned allowedOriginsIndex = 0; allowedOriginsIndex < allowedOriginsJsonList.GetLength(); ++allowedOriginsIndex)
    {
      m_allowedOrigins.push_back(allowedOriginsJsonList[allowedOriginsIndex].AsString());
    }
    m_allowedOriginsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedMethods"))
  {
    Aws::Utils::Array<JsonView> allowedMethodsJsonList = jsonValue.GetArray("AllowedMethods");
    for(unsigned allowedMethodsIndex = 0; allowedMethodsIndex < allowedMethodsJsonList.GetLength(); ++allowedMethodsIndex)
    {
      m_allowedMethods.push_back(MethodNameMapper::GetMethodNameForName(allowedMethodsJsonList[allowedMethodsIndex].AsString()));
    }
    m_allowedMethodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedHeaders"))
  {
    Aws::Utils::Array<JsonView> allowedHeadersJsonList = jsonValue.GetArray("AllowedHeaders");
    for(unsigned allowedHeadersIndex = 0; allowedHeadersIndex < allowedHeadersJsonList.GetLength(); ++allowedHeadersIndex)
    {
      m_allowedHeaders.push_back(allowedHeadersJsonList[allowedHeadersIndex].AsString());
    }
    m_allowedHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAgeSeconds"))
  {
    m_maxAgeSeconds = jsonValue.GetInteger("MaxAgeSeconds");

    m_maxAgeSecondsHasBeenSet = true;
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

  return *this;
}

JsonValue CorsRule::Jsonize() const
{
  JsonValue payload;

  if(m_allowedOriginsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedOriginsJsonList(m_allowedOrigins.size());
   for(unsigned allowedOriginsIndex = 0; allowedOriginsIndex < allowedOriginsJsonList.GetLength(); ++allowedOriginsIndex)
   {
     allowedOriginsJsonList[allowedOriginsIndex].AsString(m_allowedOrigins[allowedOriginsIndex]);
   }
   payload.WithArray("AllowedOrigins", std::move(allowedOriginsJsonList));

  }

  if(m_allowedMethodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedMethodsJsonList(m_allowedMethods.size());
   for(unsigned allowedMethodsIndex = 0; allowedMethodsIndex < allowedMethodsJsonList.GetLength(); ++allowedMethodsIndex)
   {
     allowedMethodsJsonList[allowedMethodsIndex].AsString(MethodNameMapper::GetNameForMethodName(m_allowedMethods[allowedMethodsIndex]));
   }
   payload.WithArray("AllowedMethods", std::move(allowedMethodsJsonList));

  }

  if(m_allowedHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedHeadersJsonList(m_allowedHeaders.size());
   for(unsigned allowedHeadersIndex = 0; allowedHeadersIndex < allowedHeadersJsonList.GetLength(); ++allowedHeadersIndex)
   {
     allowedHeadersJsonList[allowedHeadersIndex].AsString(m_allowedHeaders[allowedHeadersIndex]);
   }
   payload.WithArray("AllowedHeaders", std::move(allowedHeadersJsonList));

  }

  if(m_maxAgeSecondsHasBeenSet)
  {
   payload.WithInteger("MaxAgeSeconds", m_maxAgeSeconds);

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

  return payload;
}

} // namespace Model
} // namespace MediaStore
} // namespace Aws
