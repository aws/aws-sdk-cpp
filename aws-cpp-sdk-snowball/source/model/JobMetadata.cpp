/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
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
    m_jobLogInfoHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_forwardingAddressIdHasBeenSet(false),
    m_taxDocumentsHasBeenSet(false),
    m_deviceConfigurationHasBeenSet(false)
{
}

JobMetadata::JobMetadata(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobState(JobState::NOT_SET),
    m_jobStateHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
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
    m_jobLogInfoHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_forwardingAddressIdHasBeenSet(false),
    m_taxDocumentsHasBeenSet(false),
    m_deviceConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

JobMetadata& JobMetadata::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("SnowballType"))
  {
    m_snowballType = SnowballTypeMapper::GetSnowballTypeForName(jsonValue.GetString("SnowballType"));

    m_snowballTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForwardingAddressId"))
  {
    m_forwardingAddressId = jsonValue.GetString("ForwardingAddressId");

    m_forwardingAddressIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaxDocuments"))
  {
    m_taxDocuments = jsonValue.GetObject("TaxDocuments");

    m_taxDocumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceConfiguration"))
  {
    m_deviceConfiguration = jsonValue.GetObject("DeviceConfiguration");

    m_deviceConfigurationHasBeenSet = true;
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

  if(m_snowballTypeHasBeenSet)
  {
   payload.WithString("SnowballType", SnowballTypeMapper::GetNameForSnowballType(m_snowballType));
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

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_forwardingAddressIdHasBeenSet)
  {
   payload.WithString("ForwardingAddressId", m_forwardingAddressId);

  }

  if(m_taxDocumentsHasBeenSet)
  {
   payload.WithObject("TaxDocuments", m_taxDocuments.Jsonize());

  }

  if(m_deviceConfigurationHasBeenSet)
  {
   payload.WithObject("DeviceConfiguration", m_deviceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
