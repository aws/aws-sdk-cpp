/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/MonitorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

MonitorConfig::MonitorConfig() : 
    m_monitorNameHasBeenSet(false)
{
}

MonitorConfig::MonitorConfig(JsonView jsonValue) : 
    m_monitorNameHasBeenSet(false)
{
  *this = jsonValue;
}

MonitorConfig& MonitorConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitorName"))
  {
    m_monitorName = jsonValue.GetString("MonitorName");

    m_monitorNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitorConfig::Jsonize() const
{
  JsonValue payload;

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("MonitorName", m_monitorName);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
