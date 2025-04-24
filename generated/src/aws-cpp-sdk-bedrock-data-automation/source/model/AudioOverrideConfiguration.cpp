/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/AudioOverrideConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

AudioOverrideConfiguration::AudioOverrideConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AudioOverrideConfiguration& AudioOverrideConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modalityProcessing"))
  {
    m_modalityProcessing = jsonValue.GetObject("modalityProcessing");
    m_modalityProcessingHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioOverrideConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_modalityProcessingHasBeenSet)
  {
   payload.WithObject("modalityProcessing", m_modalityProcessing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
