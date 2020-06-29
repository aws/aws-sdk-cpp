/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/MethodResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

MethodResponse::MethodResponse() : 
    m_statusCodeHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_responseModelsHasBeenSet(false)
{
}

MethodResponse::MethodResponse(JsonView jsonValue) : 
    m_statusCodeHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_responseModelsHasBeenSet(false)
{
  *this = jsonValue;
}

MethodResponse& MethodResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonView> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      m_responseParameters[responseParametersItem.first] = responseParametersItem.second.AsBool();
    }
    m_responseParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseModels"))
  {
    Aws::Map<Aws::String, JsonView> responseModelsJsonMap = jsonValue.GetObject("responseModels").GetAllObjects();
    for(auto& responseModelsItem : responseModelsJsonMap)
    {
      m_responseModels[responseModelsItem.first] = responseModelsItem.second.AsString();
    }
    m_responseModelsHasBeenSet = true;
  }

  return *this;
}

JsonValue MethodResponse::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", m_statusCode);

  }

  if(m_responseParametersHasBeenSet)
  {
   JsonValue responseParametersJsonMap;
   for(auto& responseParametersItem : m_responseParameters)
   {
     responseParametersJsonMap.WithBool(responseParametersItem.first, responseParametersItem.second);
   }
   payload.WithObject("responseParameters", std::move(responseParametersJsonMap));

  }

  if(m_responseModelsHasBeenSet)
  {
   JsonValue responseModelsJsonMap;
   for(auto& responseModelsItem : m_responseModels)
   {
     responseModelsJsonMap.WithString(responseModelsItem.first, responseModelsItem.second);
   }
   payload.WithObject("responseModels", std::move(responseModelsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
