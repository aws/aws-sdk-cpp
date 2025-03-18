/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DataMigrationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

DataMigrationSettings::DataMigrationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DataMigrationSettings& DataMigrationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfJobs"))
  {
    m_numberOfJobs = jsonValue.GetInteger("NumberOfJobs");
    m_numberOfJobsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudwatchLogsEnabled"))
  {
    m_cloudwatchLogsEnabled = jsonValue.GetBool("CloudwatchLogsEnabled");
    m_cloudwatchLogsEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectionRules"))
  {
    m_selectionRules = jsonValue.GetString("SelectionRules");
    m_selectionRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue DataMigrationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfJobsHasBeenSet)
  {
   payload.WithInteger("NumberOfJobs", m_numberOfJobs);

  }

  if(m_cloudwatchLogsEnabledHasBeenSet)
  {
   payload.WithBool("CloudwatchLogsEnabled", m_cloudwatchLogsEnabled);

  }

  if(m_selectionRulesHasBeenSet)
  {
   payload.WithString("SelectionRules", m_selectionRules);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
