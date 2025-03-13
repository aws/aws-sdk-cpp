/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ExecutionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

ExecutionConfiguration::ExecutionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecutionConfiguration& ExecutionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionMode"))
  {
    m_executionMode = ExecutionModeMapper::GetExecutionModeForName(jsonValue.GetString("ExecutionMode"));
    m_executionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnDemandConfiguration"))
  {
    m_onDemandConfiguration = jsonValue.GetObject("OnDemandConfiguration");
    m_onDemandConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduleConfiguration"))
  {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");
    m_scheduleConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_executionModeHasBeenSet)
  {
   payload.WithString("ExecutionMode", ExecutionModeMapper::GetNameForExecutionMode(m_executionMode));
  }

  if(m_onDemandConfigurationHasBeenSet)
  {
   payload.WithObject("OnDemandConfiguration", m_onDemandConfiguration.Jsonize());

  }

  if(m_scheduleConfigurationHasBeenSet)
  {
   payload.WithObject("ScheduleConfiguration", m_scheduleConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
