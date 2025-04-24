/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/ImageOverrideConfiguration.h>
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

ImageOverrideConfiguration::ImageOverrideConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageOverrideConfiguration& ImageOverrideConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modalityProcessing"))
  {
    m_modalityProcessing = jsonValue.GetObject("modalityProcessing");
    m_modalityProcessingHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageOverrideConfiguration::Jsonize() const
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
