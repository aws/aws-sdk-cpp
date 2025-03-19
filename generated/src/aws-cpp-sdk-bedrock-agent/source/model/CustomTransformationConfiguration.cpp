/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CustomTransformationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

CustomTransformationConfiguration::CustomTransformationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomTransformationConfiguration& CustomTransformationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intermediateStorage"))
  {
    m_intermediateStorage = jsonValue.GetObject("intermediateStorage");
    m_intermediateStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transformations"))
  {
    Aws::Utils::Array<JsonView> transformationsJsonList = jsonValue.GetArray("transformations");
    for(unsigned transformationsIndex = 0; transformationsIndex < transformationsJsonList.GetLength(); ++transformationsIndex)
    {
      m_transformations.push_back(transformationsJsonList[transformationsIndex].AsObject());
    }
    m_transformationsHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomTransformationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_intermediateStorageHasBeenSet)
  {
   payload.WithObject("intermediateStorage", m_intermediateStorage.Jsonize());

  }

  if(m_transformationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transformationsJsonList(m_transformations.size());
   for(unsigned transformationsIndex = 0; transformationsIndex < transformationsJsonList.GetLength(); ++transformationsIndex)
   {
     transformationsJsonList[transformationsIndex].AsObject(m_transformations[transformationsIndex].Jsonize());
   }
   payload.WithArray("transformations", std::move(transformationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
