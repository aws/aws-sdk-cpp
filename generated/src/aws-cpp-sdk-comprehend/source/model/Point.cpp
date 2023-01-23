/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/Point.h>
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

Point::Point() : 
    m_x(0.0),
    m_xHasBeenSet(false),
    m_y(0.0),
    m_yHasBeenSet(false)
{
}

Point::Point(JsonView jsonValue) : 
    m_x(0.0),
    m_xHasBeenSet(false),
    m_y(0.0),
    m_yHasBeenSet(false)
{
  *this = jsonValue;
}

Point& Point::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("X"))
  {
    m_x = jsonValue.GetDouble("X");

    m_xHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Y"))
  {
    m_y = jsonValue.GetDouble("Y");

    m_yHasBeenSet = true;
  }

  return *this;
}

JsonValue Point::Jsonize() const
{
  JsonValue payload;

  if(m_xHasBeenSet)
  {
   payload.WithDouble("X", m_x);

  }

  if(m_yHasBeenSet)
  {
   payload.WithDouble("Y", m_y);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
