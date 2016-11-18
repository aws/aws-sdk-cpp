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
#include <aws/workspaces/model/WorkspaceDirectory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkspaceDirectory::WorkspaceDirectory() : 
    m_directoryIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_directoryNameHasBeenSet(false),
    m_registrationCodeHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_dnsIpAddressesHasBeenSet(false),
    m_customerUserNameHasBeenSet(false),
    m_iamRoleIdHasBeenSet(false),
    m_directoryType(WorkspaceDirectoryType::NOT_SET),
    m_directoryTypeHasBeenSet(false),
    m_workspaceSecurityGroupIdHasBeenSet(false),
    m_state(WorkspaceDirectoryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_workspaceCreationPropertiesHasBeenSet(false)
{
}

WorkspaceDirectory::WorkspaceDirectory(const JsonValue& jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_directoryNameHasBeenSet(false),
    m_registrationCodeHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_dnsIpAddressesHasBeenSet(false),
    m_customerUserNameHasBeenSet(false),
    m_iamRoleIdHasBeenSet(false),
    m_directoryType(WorkspaceDirectoryType::NOT_SET),
    m_directoryTypeHasBeenSet(false),
    m_workspaceSecurityGroupIdHasBeenSet(false),
    m_state(WorkspaceDirectoryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_workspaceCreationPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceDirectory& WorkspaceDirectory::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryName"))
  {
    m_directoryName = jsonValue.GetString("DirectoryName");

    m_directoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationCode"))
  {
    m_registrationCode = jsonValue.GetString("RegistrationCode");

    m_registrationCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Array<JsonValue> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsIpAddresses"))
  {
    Array<JsonValue> dnsIpAddressesJsonList = jsonValue.GetArray("DnsIpAddresses");
    for(unsigned dnsIpAddressesIndex = 0; dnsIpAddressesIndex < dnsIpAddressesJsonList.GetLength(); ++dnsIpAddressesIndex)
    {
      m_dnsIpAddresses.push_back(dnsIpAddressesJsonList[dnsIpAddressesIndex].AsString());
    }
    m_dnsIpAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerUserName"))
  {
    m_customerUserName = jsonValue.GetString("CustomerUserName");

    m_customerUserNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleId"))
  {
    m_iamRoleId = jsonValue.GetString("IamRoleId");

    m_iamRoleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryType"))
  {
    m_directoryType = WorkspaceDirectoryTypeMapper::GetWorkspaceDirectoryTypeForName(jsonValue.GetString("DirectoryType"));

    m_directoryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceSecurityGroupId"))
  {
    m_workspaceSecurityGroupId = jsonValue.GetString("WorkspaceSecurityGroupId");

    m_workspaceSecurityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkspaceDirectoryStateMapper::GetWorkspaceDirectoryStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceCreationProperties"))
  {
    m_workspaceCreationProperties = jsonValue.GetObject("WorkspaceCreationProperties");

    m_workspaceCreationPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceDirectory::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_directoryNameHasBeenSet)
  {
   payload.WithString("DirectoryName", m_directoryName);

  }

  if(m_registrationCodeHasBeenSet)
  {
   payload.WithString("RegistrationCode", m_registrationCode);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_dnsIpAddressesHasBeenSet)
  {
   Array<JsonValue> dnsIpAddressesJsonList(m_dnsIpAddresses.size());
   for(unsigned dnsIpAddressesIndex = 0; dnsIpAddressesIndex < dnsIpAddressesJsonList.GetLength(); ++dnsIpAddressesIndex)
   {
     dnsIpAddressesJsonList[dnsIpAddressesIndex].AsString(m_dnsIpAddresses[dnsIpAddressesIndex]);
   }
   payload.WithArray("DnsIpAddresses", std::move(dnsIpAddressesJsonList));

  }

  if(m_customerUserNameHasBeenSet)
  {
   payload.WithString("CustomerUserName", m_customerUserName);

  }

  if(m_iamRoleIdHasBeenSet)
  {
   payload.WithString("IamRoleId", m_iamRoleId);

  }

  if(m_directoryTypeHasBeenSet)
  {
   payload.WithString("DirectoryType", WorkspaceDirectoryTypeMapper::GetNameForWorkspaceDirectoryType(m_directoryType));
  }

  if(m_workspaceSecurityGroupIdHasBeenSet)
  {
   payload.WithString("WorkspaceSecurityGroupId", m_workspaceSecurityGroupId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", WorkspaceDirectoryStateMapper::GetNameForWorkspaceDirectoryState(m_state));
  }

  if(m_workspaceCreationPropertiesHasBeenSet)
  {
   payload.WithObject("WorkspaceCreationProperties", m_workspaceCreationProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws