/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UsageReportSubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

UsageReportSubscription::UsageReportSubscription() : 
    m_s3BucketNameHasBeenSet(false),
    m_schedule(UsageReportSchedule::NOT_SET),
    m_scheduleHasBeenSet(false),
    m_lastGeneratedReportDateHasBeenSet(false),
    m_subscriptionErrorsHasBeenSet(false)
{
}

UsageReportSubscription::UsageReportSubscription(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_schedule(UsageReportSchedule::NOT_SET),
    m_scheduleHasBeenSet(false),
    m_lastGeneratedReportDateHasBeenSet(false),
    m_subscriptionErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

UsageReportSubscription& UsageReportSubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = UsageReportScheduleMapper::GetUsageReportScheduleForName(jsonValue.GetString("Schedule"));

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastGeneratedReportDate"))
  {
    m_lastGeneratedReportDate = jsonValue.GetDouble("LastGeneratedReportDate");

    m_lastGeneratedReportDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionErrors"))
  {
    Aws::Utils::Array<JsonView> subscriptionErrorsJsonList = jsonValue.GetArray("SubscriptionErrors");
    for(unsigned subscriptionErrorsIndex = 0; subscriptionErrorsIndex < subscriptionErrorsJsonList.GetLength(); ++subscriptionErrorsIndex)
    {
      m_subscriptionErrors.push_back(subscriptionErrorsJsonList[subscriptionErrorsIndex].AsObject());
    }
    m_subscriptionErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageReportSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", UsageReportScheduleMapper::GetNameForUsageReportSchedule(m_schedule));
  }

  if(m_lastGeneratedReportDateHasBeenSet)
  {
   payload.WithDouble("LastGeneratedReportDate", m_lastGeneratedReportDate.SecondsWithMSPrecision());
  }

  if(m_subscriptionErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscriptionErrorsJsonList(m_subscriptionErrors.size());
   for(unsigned subscriptionErrorsIndex = 0; subscriptionErrorsIndex < subscriptionErrorsJsonList.GetLength(); ++subscriptionErrorsIndex)
   {
     subscriptionErrorsJsonList[subscriptionErrorsIndex].AsObject(m_subscriptionErrors[subscriptionErrorsIndex].Jsonize());
   }
   payload.WithArray("SubscriptionErrors", std::move(subscriptionErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
