/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/Workspace.h>
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

Workspace::Workspace() : 
    m_workspaceIdHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_state(WorkspaceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_volumeEncryptionKeyHasBeenSet(false),
    m_userVolumeEncryptionEnabled(false),
    m_userVolumeEncryptionEnabledHasBeenSet(false),
    m_rootVolumeEncryptionEnabled(false),
    m_rootVolumeEncryptionEnabledHasBeenSet(false),
    m_workspacePropertiesHasBeenSet(false),
    m_modificationStatesHasBeenSet(false),
    m_relatedWorkspacesHasBeenSet(false)
{
}

Workspace::Workspace(JsonView jsonValue) : 
    m_workspaceIdHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_state(WorkspaceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_volumeEncryptionKeyHasBeenSet(false),
    m_userVolumeEncryptionEnabled(false),
    m_userVolumeEncryptionEnabledHasBeenSet(false),
    m_rootVolumeEncryptionEnabled(false),
    m_rootVolumeEncryptionEnabledHasBeenSet(false),
    m_workspacePropertiesHasBeenSet(false),
    m_modificationStatesHasBeenSet(false),
    m_relatedWorkspacesHasBeenSet(false)
{
  *this = jsonValue;
}

Workspace& Workspace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkspaceId"))
  {
    m_workspaceId = jsonValue.GetString("WorkspaceId");

    m_workspaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkspaceStateMapper::GetWorkspaceStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BundleId"))
  {
    m_bundleId = jsonValue.GetString("BundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputerName"))
  {
    m_computerName = jsonValue.GetString("ComputerName");

    m_computerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeEncryptionKey"))
  {
    m_volumeEncryptionKey = jsonValue.GetString("VolumeEncryptionKey");

    m_volumeEncryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserVolumeEncryptionEnabled"))
  {
    m_userVolumeEncryptionEnabled = jsonValue.GetBool("UserVolumeEncryptionEnabled");

    m_userVolumeEncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootVolumeEncryptionEnabled"))
  {
    m_rootVolumeEncryptionEnabled = jsonValue.GetBool("RootVolumeEncryptionEnabled");

    m_rootVolumeEncryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceProperties"))
  {
    m_workspaceProperties = jsonValue.GetObject("WorkspaceProperties");

    m_workspacePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModificationStates"))
  {
    Aws::Utils::Array<JsonView> modificationStatesJsonList = jsonValue.GetArray("ModificationStates");
    for(unsigned modificationStatesIndex = 0; modificationStatesIndex < modificationStatesJsonList.GetLength(); ++modificationStatesIndex)
    {
      m_modificationStates.push_back(modificationStatesJsonList[modificationStatesIndex].AsObject());
    }
    m_modificationStatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedWorkspaces"))
  {
    Aws::Utils::Array<JsonView> relatedWorkspacesJsonList = jsonValue.GetArray("RelatedWorkspaces");
    for(unsigned relatedWorkspacesIndex = 0; relatedWorkspacesIndex < relatedWorkspacesJsonList.GetLength(); ++relatedWorkspacesIndex)
    {
      m_relatedWorkspaces.push_back(relatedWorkspacesJsonList[relatedWorkspacesIndex].AsObject());
    }
    m_relatedWorkspacesHasBeenSet = true;
  }

  return *this;
}

JsonValue Workspace::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", WorkspaceStateMapper::GetNameForWorkspaceState(m_state));
  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_computerNameHasBeenSet)
  {
   payload.WithString("ComputerName", m_computerName);

  }

  if(m_volumeEncryptionKeyHasBeenSet)
  {
   payload.WithString("VolumeEncryptionKey", m_volumeEncryptionKey);

  }

  if(m_userVolumeEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("UserVolumeEncryptionEnabled", m_userVolumeEncryptionEnabled);

  }

  if(m_rootVolumeEncryptionEnabledHasBeenSet)
  {
   payload.WithBool("RootVolumeEncryptionEnabled", m_rootVolumeEncryptionEnabled);

  }

  if(m_workspacePropertiesHasBeenSet)
  {
   payload.WithObject("WorkspaceProperties", m_workspaceProperties.Jsonize());

  }

  if(m_modificationStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modificationStatesJsonList(m_modificationStates.size());
   for(unsigned modificationStatesIndex = 0; modificationStatesIndex < modificationStatesJsonList.GetLength(); ++modificationStatesIndex)
   {
     modificationStatesJsonList[modificationStatesIndex].AsObject(m_modificationStates[modificationStatesIndex].Jsonize());
   }
   payload.WithArray("ModificationStates", std::move(modificationStatesJsonList));

  }

  if(m_relatedWorkspacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedWorkspacesJsonList(m_relatedWorkspaces.size());
   for(unsigned relatedWorkspacesIndex = 0; relatedWorkspacesIndex < relatedWorkspacesJsonList.GetLength(); ++relatedWorkspacesIndex)
   {
     relatedWorkspacesJsonList[relatedWorkspacesIndex].AsObject(m_relatedWorkspaces[relatedWorkspacesIndex].Jsonize());
   }
   payload.WithArray("RelatedWorkspaces", std::move(relatedWorkspacesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
