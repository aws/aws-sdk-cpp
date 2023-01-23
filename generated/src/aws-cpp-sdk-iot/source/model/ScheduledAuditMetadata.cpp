/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ScheduledAuditMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ScheduledAuditMetadata::ScheduledAuditMetadata() : 
    m_scheduledAuditNameHasBeenSet(false),
    m_scheduledAuditArnHasBeenSet(false),
    m_frequency(AuditFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false)
{
}

ScheduledAuditMetadata::ScheduledAuditMetadata(JsonView jsonValue) : 
    m_scheduledAuditNameHasBeenSet(false),
    m_scheduledAuditArnHasBeenSet(false),
    m_frequency(AuditFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledAuditMetadata& ScheduledAuditMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scheduledAuditName"))
  {
    m_scheduledAuditName = jsonValue.GetString("scheduledAuditName");

    m_scheduledAuditNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledAuditArn"))
  {
    m_scheduledAuditArn = jsonValue.GetString("scheduledAuditArn");

    m_scheduledAuditArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = AuditFrequencyMapper::GetAuditFrequencyForName(jsonValue.GetString("frequency"));

    m_frequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetString("dayOfMonth");

    m_dayOfMonthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("dayOfWeek"));

    m_dayOfWeekHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledAuditMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledAuditNameHasBeenSet)
  {
   payload.WithString("scheduledAuditName", m_scheduledAuditName);

  }

  if(m_scheduledAuditArnHasBeenSet)
  {
   payload.WithString("scheduledAuditArn", m_scheduledAuditArn);

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("frequency", AuditFrequencyMapper::GetNameForAuditFrequency(m_frequency));
  }

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithString("dayOfMonth", m_dayOfMonth);

  }

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("dayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
