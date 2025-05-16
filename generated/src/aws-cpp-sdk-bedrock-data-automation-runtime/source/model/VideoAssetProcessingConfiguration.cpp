/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/VideoAssetProcessingConfiguration.h>
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

VideoAssetProcessingConfiguration::VideoAssetProcessingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoAssetProcessingConfiguration& VideoAssetProcessingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("segmentConfiguration"))
  {
    m_segmentConfiguration = jsonValue.GetObject("segmentConfiguration");
    m_segmentConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoAssetProcessingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_segmentConfigurationHasBeenSet)
  {
   payload.WithObject("segmentConfiguration", m_segmentConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
