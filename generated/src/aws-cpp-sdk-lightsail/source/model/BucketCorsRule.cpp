/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/BucketCorsRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

BucketCorsRule::BucketCorsRule(JsonView jsonValue)
{
  *this = jsonValue;
}

BucketCorsRule& BucketCorsRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedMethods"))
  {
    Aws::Utils::Array<JsonView> allowedMethodsJsonList = jsonValue.GetArray("allowedMethods");
    for(unsigned allowedMethodsIndex = 0; allowedMethodsIndex < allowedMethodsJsonList.GetLength(); ++allowedMethodsIndex)
    {
      m_allowedMethods.push_back(allowedMethodsJsonList[allowedMethodsIndex].AsString());
    }
    m_allowedMethodsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedOrigins"))
  {
    Aws::Utils::Array<JsonView> allowedOriginsJsonList = jsonValue.GetArray("allowedOrigins");
    for(unsigned allowedOriginsIndex = 0; allowedOriginsIndex < allowedOriginsJsonList.GetLength(); ++allowedOriginsIndex)
    {
      m_allowedOrigins.push_back(allowedOriginsJsonList[allowedOriginsIndex].AsString());
    }
    m_allowedOriginsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedHeaders"))
  {
    Aws::Utils::Array<JsonView> allowedHeadersJsonList = jsonValue.GetArray("allowedHeaders");
    for(unsigned allowedHeadersIndex = 0; allowedHeadersIndex < allowedHeadersJsonList.GetLength(); ++allowedHeadersIndex)
    {
      m_allowedHeaders.push_back(allowedHeadersJsonList[allowedHeadersIndex].AsString());
    }
    m_allowedHeadersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exposeHeaders"))
  {
    Aws::Utils::Array<JsonView> exposeHeadersJsonList = jsonValue.GetArray("exposeHeaders");
    for(unsigned exposeHeadersIndex = 0; exposeHeadersIndex < exposeHeadersJsonList.GetLength(); ++exposeHeadersIndex)
    {
      m_exposeHeaders.push_back(exposeHeadersJsonList[exposeHeadersIndex].AsString());
    }
    m_exposeHeadersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxAgeSeconds"))
  {
    m_maxAgeSeconds = jsonValue.GetInteger("maxAgeSeconds");
    m_maxAgeSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue BucketCorsRule::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_allowedMethodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedMethodsJsonList(m_allowedMethods.size());
   for(unsigned allowedMethodsIndex = 0; allowedMethodsIndex < allowedMethodsJsonList.GetLength(); ++allowedMethodsIndex)
   {
     allowedMethodsJsonList[allowedMethodsIndex].AsString(m_allowedMethods[allowedMethodsIndex]);
   }
   payload.WithArray("allowedMethods", std::move(allowedMethodsJsonList));

  }

  if(m_allowedOriginsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedOriginsJsonList(m_allowedOrigins.size());
   for(unsigned allowedOriginsIndex = 0; allowedOriginsIndex < allowedOriginsJsonList.GetLength(); ++allowedOriginsIndex)
   {
     allowedOriginsJsonList[allowedOriginsIndex].AsString(m_allowedOrigins[allowedOriginsIndex]);
   }
   payload.WithArray("allowedOrigins", std::move(allowedOriginsJsonList));

  }

  if(m_allowedHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedHeadersJsonList(m_allowedHeaders.size());
   for(unsigned allowedHeadersIndex = 0; allowedHeadersIndex < allowedHeadersJsonList.GetLength(); ++allowedHeadersIndex)
   {
     allowedHeadersJsonList[allowedHeadersIndex].AsString(m_allowedHeaders[allowedHeadersIndex]);
   }
   payload.WithArray("allowedHeaders", std::move(allowedHeadersJsonList));

  }

  if(m_exposeHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exposeHeadersJsonList(m_exposeHeaders.size());
   for(unsigned exposeHeadersIndex = 0; exposeHeadersIndex < exposeHeadersJsonList.GetLength(); ++exposeHeadersIndex)
   {
     exposeHeadersJsonList[exposeHeadersIndex].AsString(m_exposeHeaders[exposeHeadersIndex]);
   }
   payload.WithArray("exposeHeaders", std::move(exposeHeadersJsonList));

  }

  if(m_maxAgeSecondsHasBeenSet)
  {
   payload.WithInteger("maxAgeSeconds", m_maxAgeSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
