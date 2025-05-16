/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/InputConfiguration.h>
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

InputConfiguration::InputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InputConfiguration& InputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetProcessingConfiguration"))
  {
    m_assetProcessingConfiguration = jsonValue.GetObject("assetProcessingConfiguration");
    m_assetProcessingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue InputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  if(m_assetProcessingConfigurationHasBeenSet)
  {
   payload.WithObject("assetProcessingConfiguration", m_assetProcessingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
