/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/BoundingBox.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

BoundingBox::BoundingBox() : 
    m_height(0.0),
    m_heightHasBeenSet(false),
    m_left(0.0),
    m_leftHasBeenSet(false),
    m_top(0.0),
    m_topHasBeenSet(false),
    m_width(0.0),
    m_widthHasBeenSet(false)
{
}

BoundingBox::BoundingBox(JsonView jsonValue) : 
    m_height(0.0),
    m_heightHasBeenSet(false),
    m_left(0.0),
    m_leftHasBeenSet(false),
    m_top(0.0),
    m_topHasBeenSet(false),
    m_width(0.0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

BoundingBox& BoundingBox::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetDouble("Height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Left"))
  {
    m_left = jsonValue.GetDouble("Left");

    m_leftHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Top"))
  {
    m_top = jsonValue.GetDouble("Top");

    m_topHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetDouble("Width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue BoundingBox::Jsonize() const
{
  JsonValue payload;

  if(m_heightHasBeenSet)
  {
   payload.WithDouble("Height", m_height);

  }

  if(m_leftHasBeenSet)
  {
   payload.WithDouble("Left", m_left);

  }

  if(m_topHasBeenSet)
  {
   payload.WithDouble("Top", m_top);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithDouble("Width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
