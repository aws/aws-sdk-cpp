/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftLineageSyncConfigurationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RedshiftLineageSyncConfigurationOutput::RedshiftLineageSyncConfigurationOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftLineageSyncConfigurationOutput& RedshiftLineageSyncConfigurationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineageJobId"))
  {
    m_lineageJobId = jsonValue.GetString("lineageJobId");
    m_lineageJobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");
    m_scheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftLineageSyncConfigurationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_lineageJobIdHasBeenSet)
  {
   payload.WithString("lineageJobId", m_lineageJobId);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
