/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/Resolution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Resolution::Resolution() : 
    m_width(0),
    m_widthHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false)
{
}

Resolution::Resolution(JsonView jsonValue) : 
    m_width(0),
    m_widthHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false)
{
  *this = jsonValue;
}

Resolution& Resolution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  return *this;
}

JsonValue Resolution::Jsonize() const
{
  JsonValue payload;

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
