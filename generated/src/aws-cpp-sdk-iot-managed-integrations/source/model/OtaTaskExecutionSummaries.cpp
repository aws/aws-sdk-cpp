/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskExecutionSummaries.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

OtaTaskExecutionSummaries::OtaTaskExecutionSummaries(JsonView jsonValue)
{
  *this = jsonValue;
}

OtaTaskExecutionSummaries& OtaTaskExecutionSummaries::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskExecutionSummary"))
  {
    m_taskExecutionSummary = jsonValue.GetObject("TaskExecutionSummary");
    m_taskExecutionSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedThingId"))
  {
    m_managedThingId = jsonValue.GetString("ManagedThingId");
    m_managedThingIdHasBeenSet = true;
  }
  return *this;
}

JsonValue OtaTaskExecutionSummaries::Jsonize() const
{
  JsonValue payload;

  if(m_taskExecutionSummaryHasBeenSet)
  {
   payload.WithObject("TaskExecutionSummary", m_taskExecutionSummary.Jsonize());

  }

  if(m_managedThingIdHasBeenSet)
  {
   payload.WithString("ManagedThingId", m_managedThingId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
