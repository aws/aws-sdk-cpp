/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RequestHeaderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

RequestHeaderConfiguration::RequestHeaderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RequestHeaderConfiguration& RequestHeaderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requestHeaderAllowlist"))
  {
    Aws::Utils::Array<JsonView> requestHeaderAllowlistJsonList = jsonValue.GetArray("requestHeaderAllowlist");
    for(unsigned requestHeaderAllowlistIndex = 0; requestHeaderAllowlistIndex < requestHeaderAllowlistJsonList.GetLength(); ++requestHeaderAllowlistIndex)
    {
      m_requestHeaderAllowlist.push_back(requestHeaderAllowlistJsonList[requestHeaderAllowlistIndex].AsString());
    }
    m_requestHeaderAllowlistHasBeenSet = true;
  }
  return *this;
}

JsonValue RequestHeaderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_requestHeaderAllowlistHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestHeaderAllowlistJsonList(m_requestHeaderAllowlist.size());
   for(unsigned requestHeaderAllowlistIndex = 0; requestHeaderAllowlistIndex < requestHeaderAllowlistJsonList.GetLength(); ++requestHeaderAllowlistIndex)
   {
     requestHeaderAllowlistJsonList[requestHeaderAllowlistIndex].AsString(m_requestHeaderAllowlist[requestHeaderAllowlistIndex]);
   }
   payload.WithArray("requestHeaderAllowlist", std::move(requestHeaderAllowlistJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
