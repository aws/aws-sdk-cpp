/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/VideoStandardExtraction.h>
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

VideoStandardExtraction::VideoStandardExtraction(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoStandardExtraction& VideoStandardExtraction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("category"))
  {
    m_category = jsonValue.GetObject("category");
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("boundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("boundingBox");
    m_boundingBoxHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoStandardExtraction::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithObject("category", m_category.Jsonize());

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
