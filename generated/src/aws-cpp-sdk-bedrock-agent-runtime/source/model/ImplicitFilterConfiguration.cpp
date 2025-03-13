/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ImplicitFilterConfiguration.h>
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

ImplicitFilterConfiguration::ImplicitFilterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ImplicitFilterConfiguration& ImplicitFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadataAttributes"))
  {
    Aws::Utils::Array<JsonView> metadataAttributesJsonList = jsonValue.GetArray("metadataAttributes");
    for(unsigned metadataAttributesIndex = 0; metadataAttributesIndex < metadataAttributesJsonList.GetLength(); ++metadataAttributesIndex)
    {
      m_metadataAttributes.push_back(metadataAttributesJsonList[metadataAttributesIndex].AsObject());
    }
    m_metadataAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ImplicitFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_metadataAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataAttributesJsonList(m_metadataAttributes.size());
   for(unsigned metadataAttributesIndex = 0; metadataAttributesIndex < metadataAttributesJsonList.GetLength(); ++metadataAttributesIndex)
   {
     metadataAttributesJsonList[metadataAttributesIndex].AsObject(m_metadataAttributes[metadataAttributesIndex].Jsonize());
   }
   payload.WithArray("metadataAttributes", std::move(metadataAttributesJsonList));

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
