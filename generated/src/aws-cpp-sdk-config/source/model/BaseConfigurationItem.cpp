﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/BaseConfigurationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

BaseConfigurationItem::BaseConfigurationItem(JsonView jsonValue)
{
  *this = jsonValue;
}

BaseConfigurationItem& BaseConfigurationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationItemCaptureTime"))
  {
    m_configurationItemCaptureTime = jsonValue.GetDouble("configurationItemCaptureTime");
    m_configurationItemCaptureTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationItemStatus"))
  {
    m_configurationItemStatus = ConfigurationItemStatusMapper::GetConfigurationItemStatusForName(jsonValue.GetString("configurationItemStatus"));
    m_configurationItemStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationStateId"))
  {
    m_configurationStateId = jsonValue.GetString("configurationStateId");
    m_configurationStateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");
    m_resourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");
    m_awsRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceCreationTime"))
  {
    m_resourceCreationTime = jsonValue.GetDouble("resourceCreationTime");
    m_resourceCreationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetString("configuration");
    m_configurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supplementaryConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> supplementaryConfigurationJsonMap = jsonValue.GetObject("supplementaryConfiguration").GetAllObjects();
    for(auto& supplementaryConfigurationItem : supplementaryConfigurationJsonMap)
    {
      m_supplementaryConfiguration[supplementaryConfigurationItem.first] = supplementaryConfigurationItem.second.AsString();
    }
    m_supplementaryConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordingFrequency"))
  {
    m_recordingFrequency = RecordingFrequencyMapper::GetRecordingFrequencyForName(jsonValue.GetString("recordingFrequency"));
    m_recordingFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationItemDeliveryTime"))
  {
    m_configurationItemDeliveryTime = jsonValue.GetDouble("configurationItemDeliveryTime");
    m_configurationItemDeliveryTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue BaseConfigurationItem::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_configurationItemCaptureTimeHasBeenSet)
  {
   payload.WithDouble("configurationItemCaptureTime", m_configurationItemCaptureTime.SecondsWithMSPrecision());
  }

  if(m_configurationItemStatusHasBeenSet)
  {
   payload.WithString("configurationItemStatus", ConfigurationItemStatusMapper::GetNameForConfigurationItemStatus(m_configurationItemStatus));
  }

  if(m_configurationStateIdHasBeenSet)
  {
   payload.WithString("configurationStateId", m_configurationStateId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_resourceCreationTimeHasBeenSet)
  {
   payload.WithDouble("resourceCreationTime", m_resourceCreationTime.SecondsWithMSPrecision());
  }

  if(m_configurationHasBeenSet)
  {
   payload.WithString("configuration", m_configuration);

  }

  if(m_supplementaryConfigurationHasBeenSet)
  {
   JsonValue supplementaryConfigurationJsonMap;
   for(auto& supplementaryConfigurationItem : m_supplementaryConfiguration)
   {
     supplementaryConfigurationJsonMap.WithString(supplementaryConfigurationItem.first, supplementaryConfigurationItem.second);
   }
   payload.WithObject("supplementaryConfiguration", std::move(supplementaryConfigurationJsonMap));

  }

  if(m_recordingFrequencyHasBeenSet)
  {
   payload.WithString("recordingFrequency", RecordingFrequencyMapper::GetNameForRecordingFrequency(m_recordingFrequency));
  }

  if(m_configurationItemDeliveryTimeHasBeenSet)
  {
   payload.WithDouble("configurationItemDeliveryTime", m_configurationItemDeliveryTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
