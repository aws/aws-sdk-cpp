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
#include <aws/opsworks/model/Stack.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Stack::Stack() : 
    m_stackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_defaultInstanceProfileArnHasBeenSet(false),
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
    m_createdAtHasBeenSet(false),
    m_defaultRootDeviceType(RootDeviceType::NOT_SET),
    m_defaultRootDeviceTypeHasBeenSet(false),
    m_agentVersionHasBeenSet(false)
{
}

Stack::Stack(const JsonValue& jsonValue) : 
    m_stackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_defaultInstanceProfileArnHasBeenSet(false),
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
    m_createdAtHasBeenSet(false),
    m_defaultRootDeviceType(RootDeviceType::NOT_SET),
    m_defaultRootDeviceTypeHasBeenSet(false),
    m_agentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Stack& Stack::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonValue> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[StackAttributesKeysMapper::GetStackAttributesKeysForName(attributesItem.first)] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("ServiceRoleArn");

    m_serviceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultInstanceProfileArn"))
  {
    m_defaultInstanceProfileArn = jsonValue.GetString("DefaultInstanceProfileArn");

    m_defaultInstanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultOs"))
  {
    m_defaultOs = jsonValue.GetString("DefaultOs");

    m_defaultOsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostnameTheme"))
  {
    m_hostnameTheme = jsonValue.GetString("HostnameTheme");

    m_hostnameThemeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAvailabilityZone"))
  {
    m_defaultAvailabilityZone = jsonValue.GetString("DefaultAvailabilityZone");

    m_defaultAvailabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSubnetId"))
  {
    m_defaultSubnetId = jsonValue.GetString("DefaultSubnetId");

    m_defaultSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomJson"))
  {
    m_customJson = jsonValue.GetString("CustomJson");

    m_customJsonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationManager"))
  {
    m_configurationManager = jsonValue.GetObject("ConfigurationManager");

    m_configurationManagerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChefConfiguration"))
  {
    m_chefConfiguration = jsonValue.GetObject("ChefConfiguration");

    m_chefConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseCustomCookbooks"))
  {
    m_useCustomCookbooks = jsonValue.GetBool("UseCustomCookbooks");

    m_useCustomCookbooksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseOpsworksSecurityGroups"))
  {
    m_useOpsworksSecurityGroups = jsonValue.GetBool("UseOpsworksSecurityGroups");

    m_useOpsworksSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomCookbooksSource"))
  {
    m_customCookbooksSource = jsonValue.GetObject("CustomCookbooksSource");

    m_customCookbooksSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSshKeyName"))
  {
    m_defaultSshKeyName = jsonValue.GetString("DefaultSshKeyName");

    m_defaultSshKeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRootDeviceType"))
  {
    m_defaultRootDeviceType = RootDeviceTypeMapper::GetRootDeviceTypeForName(jsonValue.GetString("DefaultRootDeviceType"));

    m_defaultRootDeviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");

    m_agentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Stack::Jsonize() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

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

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_defaultInstanceProfileArnHasBeenSet)
  {
   payload.WithString("DefaultInstanceProfileArn", m_defaultInstanceProfileArn);

  }

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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_defaultRootDeviceTypeHasBeenSet)
  {
   payload.WithString("DefaultRootDeviceType", RootDeviceTypeMapper::GetNameForRootDeviceType(m_defaultRootDeviceType));
  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws