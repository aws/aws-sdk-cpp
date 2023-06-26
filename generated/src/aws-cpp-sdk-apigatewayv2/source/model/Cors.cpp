/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/Cors.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

Cors::Cors() : 
    m_allowCredentials(false),
    m_allowCredentialsHasBeenSet(false),
    m_allowHeadersHasBeenSet(false),
    m_allowMethodsHasBeenSet(false),
    m_allowOriginsHasBeenSet(false),
    m_exposeHeadersHasBeenSet(false),
    m_maxAge(0),
    m_maxAgeHasBeenSet(false)
{
}

Cors::Cors(JsonView jsonValue) : 
    m_allowCredentials(false),
    m_allowCredentialsHasBeenSet(false),
    m_allowHeadersHasBeenSet(false),
    m_allowMethodsHasBeenSet(false),
    m_allowOriginsHasBeenSet(false),
    m_exposeHeadersHasBeenSet(false),
    m_maxAge(0),
    m_maxAgeHasBeenSet(false)
{
  *this = jsonValue;
}

Cors& Cors::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowCredentials"))
  {
    m_allowCredentials = jsonValue.GetBool("allowCredentials");

    m_allowCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowHeaders"))
  {
    Aws::Utils::Array<JsonView> allowHeadersJsonList = jsonValue.GetArray("allowHeaders");
    for(unsigned allowHeadersIndex = 0; allowHeadersIndex < allowHeadersJsonList.GetLength(); ++allowHeadersIndex)
    {
      m_allowHeaders.push_back(allowHeadersJsonList[allowHeadersIndex].AsString());
    }
    m_allowHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowMethods"))
  {
    Aws::Utils::Array<JsonView> allowMethodsJsonList = jsonValue.GetArray("allowMethods");
    for(unsigned allowMethodsIndex = 0; allowMethodsIndex < allowMethodsJsonList.GetLength(); ++allowMethodsIndex)
    {
      m_allowMethods.push_back(allowMethodsJsonList[allowMethodsIndex].AsString());
    }
    m_allowMethodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowOrigins"))
  {
    Aws::Utils::Array<JsonView> allowOriginsJsonList = jsonValue.GetArray("allowOrigins");
    for(unsigned allowOriginsIndex = 0; allowOriginsIndex < allowOriginsJsonList.GetLength(); ++allowOriginsIndex)
    {
      m_allowOrigins.push_back(allowOriginsJsonList[allowOriginsIndex].AsString());
    }
    m_allowOriginsHasBeenSet = true;
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

  if(jsonValue.ValueExists("maxAge"))
  {
    m_maxAge = jsonValue.GetInteger("maxAge");

    m_maxAgeHasBeenSet = true;
  }

  return *this;
}

JsonValue Cors::Jsonize() const
{
  JsonValue payload;

  if(m_allowCredentialsHasBeenSet)
  {
   payload.WithBool("allowCredentials", m_allowCredentials);

  }

  if(m_allowHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowHeadersJsonList(m_allowHeaders.size());
   for(unsigned allowHeadersIndex = 0; allowHeadersIndex < allowHeadersJsonList.GetLength(); ++allowHeadersIndex)
   {
     allowHeadersJsonList[allowHeadersIndex].AsString(m_allowHeaders[allowHeadersIndex]);
   }
   payload.WithArray("allowHeaders", std::move(allowHeadersJsonList));

  }

  if(m_allowMethodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowMethodsJsonList(m_allowMethods.size());
   for(unsigned allowMethodsIndex = 0; allowMethodsIndex < allowMethodsJsonList.GetLength(); ++allowMethodsIndex)
   {
     allowMethodsJsonList[allowMethodsIndex].AsString(m_allowMethods[allowMethodsIndex]);
   }
   payload.WithArray("allowMethods", std::move(allowMethodsJsonList));

  }

  if(m_allowOriginsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowOriginsJsonList(m_allowOrigins.size());
   for(unsigned allowOriginsIndex = 0; allowOriginsIndex < allowOriginsJsonList.GetLength(); ++allowOriginsIndex)
   {
     allowOriginsJsonList[allowOriginsIndex].AsString(m_allowOrigins[allowOriginsIndex]);
   }
   payload.WithArray("allowOrigins", std::move(allowOriginsJsonList));

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

  if(m_maxAgeHasBeenSet)
  {
   payload.WithInteger("maxAge", m_maxAge);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
