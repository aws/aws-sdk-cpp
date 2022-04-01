/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/BusinessReportSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

BusinessReportSchedule::BusinessReportSchedule() : 
    m_scheduleArnHasBeenSet(false),
    m_scheduleNameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_format(BusinessReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_contentRangeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_lastBusinessReportHasBeenSet(false)
{
}

BusinessReportSchedule::BusinessReportSchedule(JsonView jsonValue) : 
    m_scheduleArnHasBeenSet(false),
    m_scheduleNameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false),
    m_format(BusinessReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_contentRangeHasBeenSet(false),
    m_recurrenceHasBeenSet(false),
    m_lastBusinessReportHasBeenSet(false)
{
  *this = jsonValue;
}

BusinessReportSchedule& BusinessReportSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleArn"))
  {
    m_scheduleArn = jsonValue.GetString("ScheduleArn");

    m_scheduleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleName"))
  {
    m_scheduleName = jsonValue.GetString("ScheduleName");

    m_scheduleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = BusinessReportFormatMapper::GetBusinessReportFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentRange"))
  {
    m_contentRange = jsonValue.GetObject("ContentRange");

    m_contentRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recurrence"))
  {
    m_recurrence = jsonValue.GetObject("Recurrence");

    m_recurrenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastBusinessReport"))
  {
    m_lastBusinessReport = jsonValue.GetObject("LastBusinessReport");

    m_lastBusinessReportHasBeenSet = true;
  }

  return *this;
}

JsonValue BusinessReportSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleArnHasBeenSet)
  {
   payload.WithString("ScheduleArn", m_scheduleArn);

  }

  if(m_scheduleNameHasBeenSet)
  {
   payload.WithString("ScheduleName", m_scheduleName);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", BusinessReportFormatMapper::GetNameForBusinessReportFormat(m_format));
  }

  if(m_contentRangeHasBeenSet)
  {
   payload.WithObject("ContentRange", m_contentRange.Jsonize());

  }

  if(m_recurrenceHasBeenSet)
  {
   payload.WithObject("Recurrence", m_recurrence.Jsonize());

  }

  if(m_lastBusinessReportHasBeenSet)
  {
   payload.WithObject("LastBusinessReport", m_lastBusinessReport.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
