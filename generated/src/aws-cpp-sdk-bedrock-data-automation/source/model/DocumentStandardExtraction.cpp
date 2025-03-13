/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentStandardExtraction.h>
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

DocumentStandardExtraction::DocumentStandardExtraction(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentStandardExtraction& DocumentStandardExtraction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("granularity"))
  {
    m_granularity = jsonValue.GetObject("granularity");
    m_granularityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("boundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("boundingBox");
    m_boundingBoxHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentStandardExtraction::Jsonize() const
{
  JsonValue payload;

  if(m_granularityHasBeenSet)
  {
   payload.WithObject("granularity", m_granularity.Jsonize());

  }

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("boundingBox", m_boundingBox.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
