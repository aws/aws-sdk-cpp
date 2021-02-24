/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ScheduledAutoTuneDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ScheduledAutoTuneDetails::ScheduledAutoTuneDetails() : 
    m_dateHasBeenSet(false),
    m_actionType(ScheduledAutoTuneActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_severity(ScheduledAutoTuneSeverityType::NOT_SET),
    m_severityHasBeenSet(false)
{
}

ScheduledAutoTuneDetails::ScheduledAutoTuneDetails(JsonView jsonValue) : 
    m_dateHasBeenSet(false),
    m_actionType(ScheduledAutoTuneActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_severity(ScheduledAutoTuneSeverityType::NOT_SET),
    m_severityHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledAutoTuneDetails& ScheduledAutoTuneDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetDouble("Date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionType"))
  {
    m_actionType = ScheduledAutoTuneActionTypeMapper::GetScheduledAutoTuneActionTypeForName(jsonValue.GetString("ActionType"));

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = ScheduledAutoTuneSeverityTypeMapper::GetScheduledAutoTuneSeverityTypeForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledAutoTuneDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", ScheduledAutoTuneActionTypeMapper::GetNameForScheduledAutoTuneActionType(m_actionType));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", ScheduledAutoTuneSeverityTypeMapper::GetNameForScheduledAutoTuneSeverityType(m_severity));
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
