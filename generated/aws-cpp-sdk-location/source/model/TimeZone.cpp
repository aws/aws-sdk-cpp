/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/TimeZone.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

TimeZone::TimeZone() : 
    m_nameHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false)
{
}

TimeZone::TimeZone(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false)
{
  *this = jsonValue;
}

TimeZone& TimeZone::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Offset"))
  {
    m_offset = jsonValue.GetInteger("Offset");

    m_offsetHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeZone::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_offsetHasBeenSet)
  {
   payload.WithInteger("Offset", m_offset);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
