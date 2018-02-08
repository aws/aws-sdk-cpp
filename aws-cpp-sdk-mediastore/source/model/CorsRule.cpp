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

CorsRule::CorsRule(const JsonValue& jsonValue) : 
    m_allowedOriginsHasBeenSet(false),
    m_allowedMethodsHasBeenSet(false),
    m_allowedHeadersHasBeenSet(false),
    m_maxAgeSeconds(0),
    m_maxAgeSecondsHasBeenSet(false),
    m_exposeHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

CorsRule& CorsRule::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AllowedOrigins"))
  {
    Array<JsonValue> allowedOriginsJsonList = jsonValue.GetArray("AllowedOrigins");
    for(unsigned allowedOriginsIndex = 0; allowedOriginsIndex < allowedOriginsJsonList.GetLength(); ++allowedOriginsIndex)
    {
      m_allowedOrigins.push_back(allowedOriginsJsonList[allowedOriginsIndex].AsString());
    }
    m_allowedOriginsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedMethods"))
  {
    Array<JsonValue> allowedMethodsJsonList = jsonValue.GetArray("AllowedMethods");
    for(unsigned allowedMethodsIndex = 0; allowedMethodsIndex < allowedMethodsJsonList.GetLength(); ++allowedMethodsIndex)
    {
      m_allowedMethods.push_back(MethodNameMapper::GetMethodNameForName(allowedMethodsJsonList[allowedMethodsIndex].AsString()));
    }
    m_allowedMethodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedHeaders"))
  {
    Array<JsonValue> allowedHeadersJsonList = jsonValue.GetArray("AllowedHeaders");
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
    Array<JsonValue> exposeHeadersJsonList = jsonValue.GetArray("ExposeHeaders");
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
   Array<JsonValue> allowedOriginsJsonList(m_allowedOrigins.size());
   for(unsigned allowedOriginsIndex = 0; allowedOriginsIndex < allowedOriginsJsonList.GetLength(); ++allowedOriginsIndex)
   {
     allowedOriginsJsonList[allowedOriginsIndex].AsString(m_allowedOrigins[allowedOriginsIndex]);
   }
   payload.WithArray("AllowedOrigins", std::move(allowedOriginsJsonList));

  }

  if(m_allowedMethodsHasBeenSet)
  {
   Array<JsonValue> allowedMethodsJsonList(m_allowedMethods.size());
   for(unsigned allowedMethodsIndex = 0; allowedMethodsIndex < allowedMethodsJsonList.GetLength(); ++allowedMethodsIndex)
   {
     allowedMethodsJsonList[allowedMethodsIndex].AsString(MethodNameMapper::GetNameForMethodName(m_allowedMethods[allowedMethodsIndex]));
   }
   payload.WithArray("AllowedMethods", std::move(allowedMethodsJsonList));

  }

  if(m_allowedHeadersHasBeenSet)
  {
   Array<JsonValue> allowedHeadersJsonList(m_allowedHeaders.size());
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
   Array<JsonValue> exposeHeadersJsonList(m_exposeHeaders.size());
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
