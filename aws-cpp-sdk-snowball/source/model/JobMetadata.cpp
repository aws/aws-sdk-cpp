/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/snowball/model/JobMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

JobMetadata::JobMetadata() : 
    m_jobIdHasBeenSet(false),
    m_jobState(JobState::NOT_SET),
    m_jobStateHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_shippingDetailsHasBeenSet(false),
    m_snowballCapacityPreference(SnowballCapacity::NOT_SET),
    m_snowballCapacityPreferenceHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_dataTransferProgressHasBeenSet(false),
    m_jobLogInfoHasBeenSet(false)
{
}

JobMetadata::JobMetadata(const JsonValue& jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobState(JobState::NOT_SET),
    m_jobStateHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_shippingDetailsHasBeenSet(false),
    m_snowballCapacityPreference(SnowballCapacity::NOT_SET),
    m_snowballCapacityPreferenceHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_dataTransferProgressHasBeenSet(false),
    m_jobLogInfoHasBeenSet(false)
{
  *this = jsonValue;
}

JobMetadata& JobMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobState"))
  {
    m_jobState = JobStateMapper::GetJobStateForName(jsonValue.GetString("JobState"));

    m_jobStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("JobType"));

    m_jobTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    m_resources = jsonValue.GetObject("Resources");

    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyARN"))
  {
    m_kmsKeyARN = jsonValue.GetString("KmsKeyARN");

    m_kmsKeyARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressId"))
  {
    m_addressId = jsonValue.GetString("AddressId");

    m_addressIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShippingDetails"))
  {
    m_shippingDetails = jsonValue.GetObject("ShippingDetails");

    m_shippingDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowballCapacityPreference"))
  {
    m_snowballCapacityPreference = SnowballCapacityMapper::GetSnowballCapacityForName(jsonValue.GetString("SnowballCapacityPreference"));

    m_snowballCapacityPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notification"))
  {
    m_notification = jsonValue.GetObject("Notification");

    m_notificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataTransferProgress"))
  {
    m_dataTransferProgress = jsonValue.GetObject("DataTransferProgress");

    m_dataTransferProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobLogInfo"))
  {
    m_jobLogInfo = jsonValue.GetObject("JobLogInfo");

    m_jobLogInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue JobMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobStateHasBeenSet)
  {
   payload.WithString("JobState", JobStateMapper::GetNameForJobState(m_jobState));
  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_resourcesHasBeenSet)
  {
   payload.WithObject("Resources", m_resources.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_kmsKeyARNHasBeenSet)
  {
   payload.WithString("KmsKeyARN", m_kmsKeyARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_addressIdHasBeenSet)
  {
   payload.WithString("AddressId", m_addressId);

  }

  if(m_shippingDetailsHasBeenSet)
  {
   payload.WithObject("ShippingDetails", m_shippingDetails.Jsonize());

  }

  if(m_snowballCapacityPreferenceHasBeenSet)
  {
   payload.WithString("SnowballCapacityPreference", SnowballCapacityMapper::GetNameForSnowballCapacity(m_snowballCapacityPreference));
  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  if(m_dataTransferProgressHasBeenSet)
  {
   payload.WithObject("DataTransferProgress", m_dataTransferProgress.Jsonize());

  }

  if(m_jobLogInfoHasBeenSet)
  {
   payload.WithObject("JobLogInfo", m_jobLogInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws