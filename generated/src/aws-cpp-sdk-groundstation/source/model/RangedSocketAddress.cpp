/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/RangedSocketAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

RangedSocketAddress::RangedSocketAddress() : 
    m_nameHasBeenSet(false),
    m_portRangeHasBeenSet(false)
{
}

RangedSocketAddress::RangedSocketAddress(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_portRangeHasBeenSet(false)
{
  *this = jsonValue;
}

RangedSocketAddress& RangedSocketAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portRange"))
  {
    m_portRange = jsonValue.GetObject("portRange");

    m_portRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue RangedSocketAddress::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_portRangeHasBeenSet)
  {
   payload.WithObject("portRange", m_portRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
