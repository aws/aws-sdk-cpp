/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CreateInfrastructureConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInfrastructureConfigurationRequest::CreateInfrastructureConfigurationRequest() : 
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
    m_resourceTagsHasBeenSet(false),
    m_instanceMetadataOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateInfrastructureConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




