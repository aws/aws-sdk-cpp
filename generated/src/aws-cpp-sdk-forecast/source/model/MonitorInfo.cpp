/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/MonitorInfo.h>
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

MonitorInfo::MonitorInfo() : 
    m_monitorArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

MonitorInfo::MonitorInfo(JsonView jsonValue) : 
    m_monitorArnHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

MonitorInfo& MonitorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitorArn"))
  {
    m_monitorArn = jsonValue.GetString("MonitorArn");

    m_monitorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("MonitorArn", m_monitorArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
