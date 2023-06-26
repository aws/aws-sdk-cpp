/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/JWTConfiguration.h>
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

JWTConfiguration::JWTConfiguration() : 
    m_audienceHasBeenSet(false),
    m_issuerHasBeenSet(false)
{
}

JWTConfiguration::JWTConfiguration(JsonView jsonValue) : 
    m_audienceHasBeenSet(false),
    m_issuerHasBeenSet(false)
{
  *this = jsonValue;
}

JWTConfiguration& JWTConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audience"))
  {
    Aws::Utils::Array<JsonView> audienceJsonList = jsonValue.GetArray("audience");
    for(unsigned audienceIndex = 0; audienceIndex < audienceJsonList.GetLength(); ++audienceIndex)
    {
      m_audience.push_back(audienceJsonList[audienceIndex].AsString());
    }
    m_audienceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");

    m_issuerHasBeenSet = true;
  }

  return *this;
}

JsonValue JWTConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_audienceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audienceJsonList(m_audience.size());
   for(unsigned audienceIndex = 0; audienceIndex < audienceJsonList.GetLength(); ++audienceIndex)
   {
     audienceJsonList[audienceIndex].AsString(m_audience[audienceIndex]);
   }
   payload.WithArray("audience", std::move(audienceJsonList));

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
