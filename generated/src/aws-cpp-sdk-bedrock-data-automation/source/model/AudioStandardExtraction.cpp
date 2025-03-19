/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/AudioStandardExtraction.h>
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

AudioStandardExtraction::AudioStandardExtraction(JsonView jsonValue)
{
  *this = jsonValue;
}

AudioStandardExtraction& AudioStandardExtraction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("category"))
  {
    m_category = jsonValue.GetObject("category");
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioStandardExtraction::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithObject("category", m_category.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
