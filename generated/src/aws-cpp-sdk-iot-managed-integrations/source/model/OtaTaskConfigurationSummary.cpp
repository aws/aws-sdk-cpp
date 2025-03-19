/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskConfigurationSummary.h>
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

OtaTaskConfigurationSummary::OtaTaskConfigurationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

OtaTaskConfigurationSummary& OtaTaskConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskConfigurationId"))
  {
    m_taskConfigurationId = jsonValue.GetString("TaskConfigurationId");
    m_taskConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue OtaTaskConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_taskConfigurationIdHasBeenSet)
  {
   payload.WithString("TaskConfigurationId", m_taskConfigurationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
