/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_workspaceCreationPropertiesHasBeenSet(false),
    m_ipGroupIdsHasBeenSet(false),
    m_workspaceAccessPropertiesHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_selfservicePermissionsHasBeenSet(false),
    m_samlPropertiesHasBeenSet(false),
    m_certificateBasedAuthPropertiesHasBeenSet(false)
{
}

WorkspaceDirectory::WorkspaceDirectory(JsonView jsonValue) : 
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
    m_workspaceCreationPropertiesHasBeenSet(false),
    m_ipGroupIdsHasBeenSet(false),
    m_workspaceAccessPropertiesHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_selfservicePermissionsHasBeenSet(false),
    m_samlPropertiesHasBeenSet(false),
    m_certificateBasedAuthPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceDirectory& WorkspaceDirectory::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsIpAddresses"))
  {
    Aws::Utils::Array<JsonView> dnsIpAddressesJsonList = jsonValue.GetArray("DnsIpAddresses");
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

  if(jsonValue.ValueExists("ipGroupIds"))
  {
    Aws::Utils::Array<JsonView> ipGroupIdsJsonList = jsonValue.GetArray("ipGroupIds");
    for(unsigned ipGroupIdsIndex = 0; ipGroupIdsIndex < ipGroupIdsJsonList.GetLength(); ++ipGroupIdsIndex)
    {
      m_ipGroupIds.push_back(ipGroupIdsJsonList[ipGroupIdsIndex].AsString());
    }
    m_ipGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceAccessProperties"))
  {
    m_workspaceAccessProperties = jsonValue.GetObject("WorkspaceAccessProperties");

    m_workspaceAccessPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tenancy"))
  {
    m_tenancy = TenancyMapper::GetTenancyForName(jsonValue.GetString("Tenancy"));

    m_tenancyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelfservicePermissions"))
  {
    m_selfservicePermissions = jsonValue.GetObject("SelfservicePermissions");

    m_selfservicePermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SamlProperties"))
  {
    m_samlProperties = jsonValue.GetObject("SamlProperties");

    m_samlPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateBasedAuthProperties"))
  {
    m_certificateBasedAuthProperties = jsonValue.GetObject("CertificateBasedAuthProperties");

    m_certificateBasedAuthPropertiesHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_dnsIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpAddressesJsonList(m_dnsIpAddresses.size());
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

  if(m_ipGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipGroupIdsJsonList(m_ipGroupIds.size());
   for(unsigned ipGroupIdsIndex = 0; ipGroupIdsIndex < ipGroupIdsJsonList.GetLength(); ++ipGroupIdsIndex)
   {
     ipGroupIdsJsonList[ipGroupIdsIndex].AsString(m_ipGroupIds[ipGroupIdsIndex]);
   }
   payload.WithArray("ipGroupIds", std::move(ipGroupIdsJsonList));

  }

  if(m_workspaceAccessPropertiesHasBeenSet)
  {
   payload.WithObject("WorkspaceAccessProperties", m_workspaceAccessProperties.Jsonize());

  }

  if(m_tenancyHasBeenSet)
  {
   payload.WithString("Tenancy", TenancyMapper::GetNameForTenancy(m_tenancy));
  }

  if(m_selfservicePermissionsHasBeenSet)
  {
   payload.WithObject("SelfservicePermissions", m_selfservicePermissions.Jsonize());

  }

  if(m_samlPropertiesHasBeenSet)
  {
   payload.WithObject("SamlProperties", m_samlProperties.Jsonize());

  }

  if(m_certificateBasedAuthPropertiesHasBeenSet)
  {
   payload.WithObject("CertificateBasedAuthProperties", m_certificateBasedAuthProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
