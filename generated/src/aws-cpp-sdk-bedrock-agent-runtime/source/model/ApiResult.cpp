/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

ApiResult::ApiResult() : 
    m_actionGroupHasBeenSet(false),
    m_apiPathHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_httpStatusCode(0),
    m_httpStatusCodeHasBeenSet(false),
    m_responseBodyHasBeenSet(false),
    m_responseState(ResponseState::NOT_SET),
    m_responseStateHasBeenSet(false)
{
}

ApiResult::ApiResult(JsonView jsonValue) : 
    m_actionGroupHasBeenSet(false),
    m_apiPathHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_httpStatusCode(0),
    m_httpStatusCodeHasBeenSet(false),
    m_responseBodyHasBeenSet(false),
    m_responseState(ResponseState::NOT_SET),
    m_responseStateHasBeenSet(false)
{
  *this = jsonValue;
}

ApiResult& ApiResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroup"))
  {
    m_actionGroup = jsonValue.GetString("actionGroup");

    m_actionGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiPath"))
  {
    m_apiPath = jsonValue.GetString("apiPath");

    m_apiPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpMethod"))
  {
    m_httpMethod = jsonValue.GetString("httpMethod");

    m_httpMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpStatusCode"))
  {
    m_httpStatusCode = jsonValue.GetInteger("httpStatusCode");

    m_httpStatusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseBody"))
  {
    Aws::Map<Aws::String, JsonView> responseBodyJsonMap = jsonValue.GetObject("responseBody").GetAllObjects();
    for(auto& responseBodyItem : responseBodyJsonMap)
    {
      m_responseBody[responseBodyItem.first] = responseBodyItem.second.AsObject();
    }
    m_responseBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseState"))
  {
    m_responseState = ResponseStateMapper::GetResponseStateForName(jsonValue.GetString("responseState"));

    m_responseStateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiResult::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupHasBeenSet)
  {
   payload.WithString("actionGroup", m_actionGroup);

  }

  if(m_apiPathHasBeenSet)
  {
   payload.WithString("apiPath", m_apiPath);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("httpMethod", m_httpMethod);

  }

  if(m_httpStatusCodeHasBeenSet)
  {
   payload.WithInteger("httpStatusCode", m_httpStatusCode);

  }

  if(m_responseBodyHasBeenSet)
  {
   JsonValue responseBodyJsonMap;
   for(auto& responseBodyItem : m_responseBody)
   {
     responseBodyJsonMap.WithObject(responseBodyItem.first, responseBodyItem.second.Jsonize());
   }
   payload.WithObject("responseBody", std::move(responseBodyJsonMap));

  }

  if(m_responseStateHasBeenSet)
  {
   payload.WithString("responseState", ResponseStateMapper::GetNameForResponseState(m_responseState));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
