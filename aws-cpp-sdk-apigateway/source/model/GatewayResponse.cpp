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

#include <aws/apigateway/model/GatewayResponse.h>
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

GatewayResponse::GatewayResponse() : 
    m_responseType(GatewayResponseType::NOT_SET),
    m_responseTypeHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_responseTemplatesHasBeenSet(false),
    m_defaultResponse(false),
    m_defaultResponseHasBeenSet(false)
{
}

GatewayResponse::GatewayResponse(const JsonValue& jsonValue) : 
    m_responseType(GatewayResponseType::NOT_SET),
    m_responseTypeHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_responseTemplatesHasBeenSet(false),
    m_defaultResponse(false),
    m_defaultResponseHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayResponse& GatewayResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("responseType"))
  {
    m_responseType = GatewayResponseTypeMapper::GetGatewayResponseTypeForName(jsonValue.GetString("responseType"));

    m_responseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseParameters"))
  {
    Aws::Map<Aws::String, JsonValue> responseParametersJsonMap = jsonValue.GetObject("responseParameters").GetAllObjects();
    for(auto& responseParametersItem : responseParametersJsonMap)
    {
      m_responseParameters[responseParametersItem.first] = responseParametersItem.second.AsString();
    }
    m_responseParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseTemplates"))
  {
    Aws::Map<Aws::String, JsonValue> responseTemplatesJsonMap = jsonValue.GetObject("responseTemplates").GetAllObjects();
    for(auto& responseTemplatesItem : responseTemplatesJsonMap)
    {
      m_responseTemplates[responseTemplatesItem.first] = responseTemplatesItem.second.AsString();
    }
    m_responseTemplatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultResponse"))
  {
    m_defaultResponse = jsonValue.GetBool("defaultResponse");

    m_defaultResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayResponse::Jsonize() const
{
  JsonValue payload;

  if(m_responseTypeHasBeenSet)
  {
   payload.WithString("responseType", GatewayResponseTypeMapper::GetNameForGatewayResponseType(m_responseType));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", m_statusCode);

  }

  if(m_responseParametersHasBeenSet)
  {
   JsonValue responseParametersJsonMap;
   for(auto& responseParametersItem : m_responseParameters)
   {
     responseParametersJsonMap.WithString(responseParametersItem.first, responseParametersItem.second);
   }
   payload.WithObject("responseParameters", std::move(responseParametersJsonMap));

  }

  if(m_responseTemplatesHasBeenSet)
  {
   JsonValue responseTemplatesJsonMap;
   for(auto& responseTemplatesItem : m_responseTemplates)
   {
     responseTemplatesJsonMap.WithString(responseTemplatesItem.first, responseTemplatesItem.second);
   }
   payload.WithObject("responseTemplates", std::move(responseTemplatesJsonMap));

  }

  if(m_defaultResponseHasBeenSet)
  {
   payload.WithBool("defaultResponse", m_defaultResponse);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
