/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PortRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

PortRange::PortRange() : 
    m_begin(0),
    m_beginHasBeenSet(false),
    m_end(0),
    m_endHasBeenSet(false)
{
}

PortRange::PortRange(JsonView jsonValue) : 
    m_begin(0),
    m_beginHasBeenSet(false),
    m_end(0),
    m_endHasBeenSet(false)
{
  *this = jsonValue;
}

PortRange& PortRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("begin"))
  {
    m_begin = jsonValue.GetInteger("begin");

    m_beginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetInteger("end");

    m_endHasBeenSet = true;
  }

  return *this;
}

JsonValue PortRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginHasBeenSet)
  {
   payload.WithInteger("begin", m_begin);

  }

  if(m_endHasBeenSet)
  {
   payload.WithInteger("end", m_end);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
