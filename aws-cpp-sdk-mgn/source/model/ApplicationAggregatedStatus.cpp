/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ApplicationAggregatedStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ApplicationAggregatedStatus::ApplicationAggregatedStatus() : 
    m_healthStatus(ApplicationHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_lastUpdateDateTimeHasBeenSet(false),
    m_progressStatus(ApplicationProgressStatus::NOT_SET),
    m_progressStatusHasBeenSet(false),
    m_totalSourceServers(0),
    m_totalSourceServersHasBeenSet(false)
{
}

ApplicationAggregatedStatus::ApplicationAggregatedStatus(JsonView jsonValue) : 
    m_healthStatus(ApplicationHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_lastUpdateDateTimeHasBeenSet(false),
    m_progressStatus(ApplicationProgressStatus::NOT_SET),
    m_progressStatusHasBeenSet(false),
    m_totalSourceServers(0),
    m_totalSourceServersHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationAggregatedStatus& ApplicationAggregatedStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("healthStatus"))
  {
    m_healthStatus = ApplicationHealthStatusMapper::GetApplicationHealthStatusForName(jsonValue.GetString("healthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateDateTime"))
  {
    m_lastUpdateDateTime = jsonValue.GetString("lastUpdateDateTime");

    m_lastUpdateDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progressStatus"))
  {
    m_progressStatus = ApplicationProgressStatusMapper::GetApplicationProgressStatusForName(jsonValue.GetString("progressStatus"));

    m_progressStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalSourceServers"))
  {
    m_totalSourceServers = jsonValue.GetInt64("totalSourceServers");

    m_totalSourceServersHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationAggregatedStatus::Jsonize() const
{
  JsonValue payload;

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("healthStatus", ApplicationHealthStatusMapper::GetNameForApplicationHealthStatus(m_healthStatus));
  }

  if(m_lastUpdateDateTimeHasBeenSet)
  {
   payload.WithString("lastUpdateDateTime", m_lastUpdateDateTime);

  }

  if(m_progressStatusHasBeenSet)
  {
   payload.WithString("progressStatus", ApplicationProgressStatusMapper::GetNameForApplicationProgressStatus(m_progressStatus));
  }

  if(m_totalSourceServersHasBeenSet)
  {
   payload.WithInt64("totalSourceServers", m_totalSourceServers);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
