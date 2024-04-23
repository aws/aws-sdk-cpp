/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailTopicPolicyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

GuardrailTopicPolicyConfig::GuardrailTopicPolicyConfig() : 
    m_topicsConfigHasBeenSet(false)
{
}

GuardrailTopicPolicyConfig::GuardrailTopicPolicyConfig(JsonView jsonValue) : 
    m_topicsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

GuardrailTopicPolicyConfig& GuardrailTopicPolicyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicsConfig"))
  {
    Aws::Utils::Array<JsonView> topicsConfigJsonList = jsonValue.GetArray("topicsConfig");
    for(unsigned topicsConfigIndex = 0; topicsConfigIndex < topicsConfigJsonList.GetLength(); ++topicsConfigIndex)
    {
      m_topicsConfig.push_back(topicsConfigJsonList[topicsConfigIndex].AsObject());
    }
    m_topicsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailTopicPolicyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_topicsConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicsConfigJsonList(m_topicsConfig.size());
   for(unsigned topicsConfigIndex = 0; topicsConfigIndex < topicsConfigJsonList.GetLength(); ++topicsConfigIndex)
   {
     topicsConfigJsonList[topicsConfigIndex].AsObject(m_topicsConfig[topicsConfigIndex].Jsonize());
   }
   payload.WithArray("topicsConfig", std::move(topicsConfigJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
