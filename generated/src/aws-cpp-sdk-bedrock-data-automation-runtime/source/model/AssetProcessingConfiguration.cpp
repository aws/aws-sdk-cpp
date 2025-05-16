/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/AssetProcessingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{

AssetProcessingConfiguration::AssetProcessingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetProcessingConfiguration& AssetProcessingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("video"))
  {
    m_video = jsonValue.GetObject("video");
    m_videoHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetProcessingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_videoHasBeenSet)
  {
   payload.WithObject("video", m_video.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
