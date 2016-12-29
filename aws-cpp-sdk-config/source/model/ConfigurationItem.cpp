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
#include <aws/config/model/ConfigurationItem.h>
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

ConfigurationItem::ConfigurationItem() : 
    m_versionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_configurationItemCaptureTimeHasBeenSet(false),
    m_configurationItemStatus(ConfigurationItemStatus::NOT_SET),
    m_configurationItemStatusHasBeenSet(false),
    m_configurationStateIdHasBeenSet(false),
    m_configurationItemMD5HashHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_resourceCreationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_relatedEventsHasBeenSet(false),
    m_relationshipsHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_supplementaryConfigurationHasBeenSet(false)
{
}

ConfigurationItem::ConfigurationItem(const JsonValue& jsonValue) : 
    m_versionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_configurationItemCaptureTimeHasBeenSet(false),
    m_configurationItemStatus(ConfigurationItemStatus::NOT_SET),
    m_configurationItemStatusHasBeenSet(false),
    m_configurationStateIdHasBeenSet(false),
    m_configurationItemMD5HashHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_resourceCreationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_relatedEventsHasBeenSet(false),
    m_relationshipsHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_supplementaryConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationItem& ConfigurationItem::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("configurationItemMD5Hash"))
  {
    m_configurationItemMD5Hash = jsonValue.GetString("configurationItemMD5Hash");

    m_configurationItemMD5HashHasBeenSet = true;
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonValue> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedEvents"))
  {
    Array<JsonValue> relatedEventsJsonList = jsonValue.GetArray("relatedEvents");
    for(unsigned relatedEventsIndex = 0; relatedEventsIndex < relatedEventsJsonList.GetLength(); ++relatedEventsIndex)
    {
      m_relatedEvents.push_back(relatedEventsJsonList[relatedEventsIndex].AsString());
    }
    m_relatedEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationships"))
  {
    Array<JsonValue> relationshipsJsonList = jsonValue.GetArray("relationships");
    for(unsigned relationshipsIndex = 0; relationshipsIndex < relationshipsJsonList.GetLength(); ++relationshipsIndex)
    {
      m_relationships.push_back(relationshipsJsonList[relationshipsIndex].AsObject());
    }
    m_relationshipsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetString("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supplementaryConfiguration"))
  {
    Aws::Map<Aws::String, JsonValue> supplementaryConfigurationJsonMap = jsonValue.GetObject("supplementaryConfiguration").GetAllObjects();
    for(auto& supplementaryConfigurationItem : supplementaryConfigurationJsonMap)
    {
      m_supplementaryConfiguration[supplementaryConfigurationItem.first] = supplementaryConfigurationItem.second.AsString();
    }
    m_supplementaryConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationItem::Jsonize() const
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

  if(m_configurationItemMD5HashHasBeenSet)
  {
   payload.WithString("configurationItemMD5Hash", m_configurationItemMD5Hash);

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_relatedEventsHasBeenSet)
  {
   Array<JsonValue> relatedEventsJsonList(m_relatedEvents.size());
   for(unsigned relatedEventsIndex = 0; relatedEventsIndex < relatedEventsJsonList.GetLength(); ++relatedEventsIndex)
   {
     relatedEventsJsonList[relatedEventsIndex].AsString(m_relatedEvents[relatedEventsIndex]);
   }
   payload.WithArray("relatedEvents", std::move(relatedEventsJsonList));

  }

  if(m_relationshipsHasBeenSet)
  {
   Array<JsonValue> relationshipsJsonList(m_relationships.size());
   for(unsigned relationshipsIndex = 0; relationshipsIndex < relationshipsJsonList.GetLength(); ++relationshipsIndex)
   {
     relationshipsJsonList[relationshipsIndex].AsObject(m_relationships[relationshipsIndex].Jsonize());
   }
   payload.WithArray("relationships", std::move(relationshipsJsonList));

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

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws