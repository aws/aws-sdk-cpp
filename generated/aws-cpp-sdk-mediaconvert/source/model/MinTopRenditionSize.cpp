/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MinTopRenditionSize.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

MinTopRenditionSize::MinTopRenditionSize() : 
    m_height(0),
    m_heightHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
}

MinTopRenditionSize::MinTopRenditionSize(JsonView jsonValue) : 
    m_height(0),
    m_heightHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

MinTopRenditionSize& MinTopRenditionSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue MinTopRenditionSize::Jsonize() const
{
  JsonValue payload;

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
