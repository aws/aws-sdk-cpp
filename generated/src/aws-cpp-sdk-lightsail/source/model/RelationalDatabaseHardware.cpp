/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RelationalDatabaseHardware.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RelationalDatabaseHardware::RelationalDatabaseHardware() : 
    m_cpuCount(0),
    m_cpuCountHasBeenSet(false),
    m_diskSizeInGb(0),
    m_diskSizeInGbHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false)
{
}

RelationalDatabaseHardware::RelationalDatabaseHardware(JsonView jsonValue) : 
    m_cpuCount(0),
    m_cpuCountHasBeenSet(false),
    m_diskSizeInGb(0),
    m_diskSizeInGbHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabaseHardware& RelationalDatabaseHardware::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuCount"))
  {
    m_cpuCount = jsonValue.GetInteger("cpuCount");

    m_cpuCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diskSizeInGb"))
  {
    m_diskSizeInGb = jsonValue.GetInteger("diskSizeInGb");

    m_diskSizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ramSizeInGb"))
  {
    m_ramSizeInGb = jsonValue.GetDouble("ramSizeInGb");

    m_ramSizeInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabaseHardware::Jsonize() const
{
  JsonValue payload;

  if(m_cpuCountHasBeenSet)
  {
   payload.WithInteger("cpuCount", m_cpuCount);

  }

  if(m_diskSizeInGbHasBeenSet)
  {
   payload.WithInteger("diskSizeInGb", m_diskSizeInGb);

  }

  if(m_ramSizeInGbHasBeenSet)
  {
   payload.WithDouble("ramSizeInGb", m_ramSizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
