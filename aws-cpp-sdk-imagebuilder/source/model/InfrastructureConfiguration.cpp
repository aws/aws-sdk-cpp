/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/InfrastructureConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

InfrastructureConfiguration::InfrastructureConfiguration() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_keyPairHasBeenSet(false),
    m_terminateInstanceOnFailure(false),
    m_terminateInstanceOnFailureHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_instanceMetadataOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

InfrastructureConfiguration::InfrastructureConfiguration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_keyPairHasBeenSet(false),
    m_terminateInstanceOnFailure(false),
    m_terminateInstanceOnFailureHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_instanceMetadataOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

InfrastructureConfiguration& InfrastructureConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceTypes"))
  {
    Aws::Utils::Array<JsonView> instanceTypesJsonList = jsonValue.GetArray("instanceTypes");
    for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
    {
      m_instanceTypes.push_back(instanceTypesJsonList[instanceTypesIndex].AsString());
    }
    m_instanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceProfileName"))
  {
    m_instanceProfileName = jsonValue.GetString("instanceProfileName");

    m_instanceProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetId"))
  {
    m_subnetId = jsonValue.GetString("subnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logging"))
  {
    m_logging = jsonValue.GetObject("logging");

    m_loggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyPair"))
  {
    m_keyPair = jsonValue.GetString("keyPair");

    m_keyPairHasBeenSet = true;
  }

  if(jsonValue.ValueExists("terminateInstanceOnFailure"))
  {
    m_terminateInstanceOnFailure = jsonValue.GetBool("terminateInstanceOnFailure");

    m_terminateInstanceOnFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("snsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetString("dateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dateUpdated"))
  {
    m_dateUpdated = jsonValue.GetString("dateUpdated");

    m_dateUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceTags"))
  {
    Aws::Map<Aws::String, JsonView> resourceTagsJsonMap = jsonValue.GetObject("resourceTags").GetAllObjects();
    for(auto& resourceTagsItem : resourceTagsJsonMap)
    {
      m_resourceTags[resourceTagsItem.first] = resourceTagsItem.second.AsString();
    }
    m_resourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceMetadataOptions"))
  {
    m_instanceMetadataOptions = jsonValue.GetObject("instanceMetadataOptions");

    m_instanceMetadataOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue InfrastructureConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_instanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
   for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
   {
     instanceTypesJsonList[instanceTypesIndex].AsString(m_instanceTypes[instanceTypesIndex]);
   }
   payload.WithArray("instanceTypes", std::move(instanceTypesJsonList));

  }

  if(m_instanceProfileNameHasBeenSet)
  {
   payload.WithString("instanceProfileName", m_instanceProfileName);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithObject("logging", m_logging.Jsonize());

  }

  if(m_keyPairHasBeenSet)
  {
   payload.WithString("keyPair", m_keyPair);

  }

  if(m_terminateInstanceOnFailureHasBeenSet)
  {
   payload.WithBool("terminateInstanceOnFailure", m_terminateInstanceOnFailure);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("snsTopicArn", m_snsTopicArn);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("dateCreated", m_dateCreated);

  }

  if(m_dateUpdatedHasBeenSet)
  {
   payload.WithString("dateUpdated", m_dateUpdated);

  }

  if(m_resourceTagsHasBeenSet)
  {
   JsonValue resourceTagsJsonMap;
   for(auto& resourceTagsItem : m_resourceTags)
   {
     resourceTagsJsonMap.WithString(resourceTagsItem.first, resourceTagsItem.second);
   }
   payload.WithObject("resourceTags", std::move(resourceTagsJsonMap));

  }

  if(m_instanceMetadataOptionsHasBeenSet)
  {
   payload.WithObject("instanceMetadataOptions", m_instanceMetadataOptions.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
