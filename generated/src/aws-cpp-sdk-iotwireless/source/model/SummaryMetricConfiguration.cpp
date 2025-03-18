/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SummaryMetricConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SummaryMetricConfiguration::SummaryMetricConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SummaryMetricConfiguration& SummaryMetricConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SummaryMetricConfigurationStatusMapper::GetSummaryMetricConfigurationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue SummaryMetricConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SummaryMetricConfigurationStatusMapper::GetNameForSummaryMetricConfigurationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
