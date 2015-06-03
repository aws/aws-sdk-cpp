/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/CreateStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStackRequest::CreateStackRequest() : 
    m_vpcIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_defaultOsHasBeenSet(false),
    m_hostnameThemeHasBeenSet(false),
    m_defaultAvailabilityZoneHasBeenSet(false),
    m_defaultSubnetIdHasBeenSet(false),
    m_customJsonHasBeenSet(false),
    m_configurationManagerHasBeenSet(false),
    m_chefConfigurationHasBeenSet(false),
    m_useCustomCookbooks(false),
    m_useCustomCookbooksHasBeenSet(false),
    m_useOpsworksSecurityGroups(false),
    m_useOpsworksSecurityGroupsHasBeenSet(false),
    m_customCookbooksSourceHasBeenSet(false),
    m_defaultSshKeyNameHasBeenSet(false),
    m_defaultRootDeviceTypeHasBeenSet(false)
{
}

Aws::String CreateStackRequest::SerializePayload() const
{
  JsonValue payload;

  payload.WithString("Name", m_name);

  payload.WithString("Region", m_region);

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(StackAttributesKeysMapper::GetNameForStackAttributesKeys(attributesItem.first), attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  payload.WithString("DefaultInstanceProfileArn", m_defaultInstanceProfileArn);

  if(m_defaultOsHasBeenSet)
  {
   payload.WithString("DefaultOs", m_defaultOs);

  }

  if(m_hostnameThemeHasBeenSet)
  {
   payload.WithString("HostnameTheme", m_hostnameTheme);

  }

  if(m_defaultAvailabilityZoneHasBeenSet)
  {
   payload.WithString("DefaultAvailabilityZone", m_defaultAvailabilityZone);

  }

  if(m_defaultSubnetIdHasBeenSet)
  {
   payload.WithString("DefaultSubnetId", m_defaultSubnetId);

  }

  if(m_customJsonHasBeenSet)
  {
   payload.WithString("CustomJson", m_customJson);

  }

  if(m_configurationManagerHasBeenSet)
  {
   payload.WithObject("ConfigurationManager", m_configurationManager.Jsonize());

  }

  if(m_chefConfigurationHasBeenSet)
  {
   payload.WithObject("ChefConfiguration", m_chefConfiguration.Jsonize());

  }

  if(m_useCustomCookbooksHasBeenSet)
  {
   payload.WithBool("UseCustomCookbooks", m_useCustomCookbooks);

  }

  if(m_useOpsworksSecurityGroupsHasBeenSet)
  {
   payload.WithBool("UseOpsworksSecurityGroups", m_useOpsworksSecurityGroups);

  }

  if(m_customCookbooksSourceHasBeenSet)
  {
   payload.WithObject("CustomCookbooksSource", m_customCookbooksSource.Jsonize());

  }

  if(m_defaultSshKeyNameHasBeenSet)
  {
   payload.WithString("DefaultSshKeyName", m_defaultSshKeyName);

  }

  if(m_defaultRootDeviceTypeHasBeenSet)
  {
   payload.WithString("DefaultRootDeviceType", RootDeviceTypeMapper::GetNameForRootDeviceType(m_defaultRootDeviceType));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.CreateStack"));
  return std::move(headers);

}



