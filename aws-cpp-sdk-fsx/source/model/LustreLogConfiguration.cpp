/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/LustreLogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

LustreLogConfiguration::LustreLogConfiguration() : 
    m_level(LustreAccessAuditLogLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

LustreLogConfiguration::LustreLogConfiguration(JsonView jsonValue) : 
    m_level(LustreAccessAuditLogLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

LustreLogConfiguration& LustreLogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Level"))
  {
    m_level = LustreAccessAuditLogLevelMapper::GetLustreAccessAuditLogLevelForName(jsonValue.GetString("Level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue LustreLogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_levelHasBeenSet)
  {
   payload.WithString("Level", LustreAccessAuditLogLevelMapper::GetNameForLustreAccessAuditLogLevel(m_level));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
