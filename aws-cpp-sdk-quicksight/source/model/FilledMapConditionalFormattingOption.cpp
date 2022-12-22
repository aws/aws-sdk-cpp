/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilledMapConditionalFormattingOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

FilledMapConditionalFormattingOption::FilledMapConditionalFormattingOption() : 
    m_shapeHasBeenSet(false)
{
}

FilledMapConditionalFormattingOption::FilledMapConditionalFormattingOption(JsonView jsonValue) : 
    m_shapeHasBeenSet(false)
{
  *this = jsonValue;
}

FilledMapConditionalFormattingOption& FilledMapConditionalFormattingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Shape"))
  {
    m_shape = jsonValue.GetObject("Shape");

    m_shapeHasBeenSet = true;
  }

  return *this;
}

JsonValue FilledMapConditionalFormattingOption::Jsonize() const
{
  JsonValue payload;

  if(m_shapeHasBeenSet)
  {
   payload.WithObject("Shape", m_shape.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
