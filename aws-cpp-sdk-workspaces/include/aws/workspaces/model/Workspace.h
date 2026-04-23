/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceState.h>
#include <aws/workspaces/model/WorkspaceProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ModificationState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/Workspace">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API Workspace
  {
  public:
    Workspace();
    Workspace(Aws::Utils::Json::JsonView jsonValue);
    Workspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline Workspace& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline Workspace& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline Workspace& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace.</p>
     */
    inline Workspace& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace.</p>
     */
    inline Workspace& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace.</p>
     */
    inline Workspace& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline Workspace& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline Workspace& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline Workspace& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline Workspace& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline Workspace& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline Workspace& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline const WorkspaceState& GetState() const{ return m_state; }

    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline void SetState(const WorkspaceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline void SetState(WorkspaceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline Workspace& WithState(const WorkspaceState& value) { SetState(value); return *this;}

    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline Workspace& WithState(WorkspaceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline Workspace& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline Workspace& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline Workspace& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline Workspace& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline Workspace& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline Workspace& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline Workspace& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline Workspace& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline Workspace& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline Workspace& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline Workspace& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline Workspace& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The name of the WorkSpace, as seen by the operating system.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system.</p>
     */
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system.</p>
     */
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system.</p>
     */
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system.</p>
     */
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system.</p>
     */
    inline Workspace& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}

    /**
     * <p>The name of the WorkSpace, as seen by the operating system.</p>
     */
    inline Workspace& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}

    /**
     * <p>The name of the WorkSpace, as seen by the operating system.</p>
     */
    inline Workspace& WithComputerName(const char* value) { SetComputerName(value); return *this;}


    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const{ return m_volumeEncryptionKey; }

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline bool VolumeEncryptionKeyHasBeenSet() const { return m_volumeEncryptionKeyHasBeenSet; }

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline void SetVolumeEncryptionKey(const Aws::String& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = value; }

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline void SetVolumeEncryptionKey(Aws::String&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = std::move(value); }

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline void SetVolumeEncryptionKey(const char* value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey.assign(value); }

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline Workspace& WithVolumeEncryptionKey(const Aws::String& value) { SetVolumeEncryptionKey(value); return *this;}

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline Workspace& WithVolumeEncryptionKey(Aws::String&& value) { SetVolumeEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline Workspace& WithVolumeEncryptionKey(const char* value) { SetVolumeEncryptionKey(value); return *this;}


    /**
     * <p>Indicates whether the data stored on the user volume is encrypted.</p>
     */
    inline bool GetUserVolumeEncryptionEnabled() const{ return m_userVolumeEncryptionEnabled; }

    /**
     * <p>Indicates whether the data stored on the user volume is encrypted.</p>
     */
    inline bool UserVolumeEncryptionEnabledHasBeenSet() const { return m_userVolumeEncryptionEnabledHasBeenSet; }

    /**
     * <p>Indicates whether the data stored on the user volume is encrypted.</p>
     */
    inline void SetUserVolumeEncryptionEnabled(bool value) { m_userVolumeEncryptionEnabledHasBeenSet = true; m_userVolumeEncryptionEnabled = value; }

    /**
     * <p>Indicates whether the data stored on the user volume is encrypted.</p>
     */
    inline Workspace& WithUserVolumeEncryptionEnabled(bool value) { SetUserVolumeEncryptionEnabled(value); return *this;}


    /**
     * <p>Indicates whether the data stored on the root volume is encrypted.</p>
     */
    inline bool GetRootVolumeEncryptionEnabled() const{ return m_rootVolumeEncryptionEnabled; }

    /**
     * <p>Indicates whether the data stored on the root volume is encrypted.</p>
     */
    inline bool RootVolumeEncryptionEnabledHasBeenSet() const { return m_rootVolumeEncryptionEnabledHasBeenSet; }

    /**
     * <p>Indicates whether the data stored on the root volume is encrypted.</p>
     */
    inline void SetRootVolumeEncryptionEnabled(bool value) { m_rootVolumeEncryptionEnabledHasBeenSet = true; m_rootVolumeEncryptionEnabled = value; }

    /**
     * <p>Indicates whether the data stored on the root volume is encrypted.</p>
     */
    inline Workspace& WithRootVolumeEncryptionEnabled(bool value) { SetRootVolumeEncryptionEnabled(value); return *this;}


    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline const WorkspaceProperties& GetWorkspaceProperties() const{ return m_workspaceProperties; }

    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline bool WorkspacePropertiesHasBeenSet() const { return m_workspacePropertiesHasBeenSet; }

    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline void SetWorkspaceProperties(const WorkspaceProperties& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }

    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline void SetWorkspaceProperties(WorkspaceProperties&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = std::move(value); }

    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline Workspace& WithWorkspaceProperties(const WorkspaceProperties& value) { SetWorkspaceProperties(value); return *this;}

    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline Workspace& WithWorkspaceProperties(WorkspaceProperties&& value) { SetWorkspaceProperties(std::move(value)); return *this;}


    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline const Aws::Vector<ModificationState>& GetModificationStates() const{ return m_modificationStates; }

    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline bool ModificationStatesHasBeenSet() const { return m_modificationStatesHasBeenSet; }

    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline void SetModificationStates(const Aws::Vector<ModificationState>& value) { m_modificationStatesHasBeenSet = true; m_modificationStates = value; }

    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline void SetModificationStates(Aws::Vector<ModificationState>&& value) { m_modificationStatesHasBeenSet = true; m_modificationStates = std::move(value); }

    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline Workspace& WithModificationStates(const Aws::Vector<ModificationState>& value) { SetModificationStates(value); return *this;}

    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline Workspace& WithModificationStates(Aws::Vector<ModificationState>&& value) { SetModificationStates(std::move(value)); return *this;}

    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline Workspace& AddModificationStates(const ModificationState& value) { m_modificationStatesHasBeenSet = true; m_modificationStates.push_back(value); return *this; }

    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline Workspace& AddModificationStates(ModificationState&& value) { m_modificationStatesHasBeenSet = true; m_modificationStates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;

    WorkspaceState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet;

    Aws::String m_volumeEncryptionKey;
    bool m_volumeEncryptionKeyHasBeenSet;

    bool m_userVolumeEncryptionEnabled;
    bool m_userVolumeEncryptionEnabledHasBeenSet;

    bool m_rootVolumeEncryptionEnabled;
    bool m_rootVolumeEncryptionEnabledHasBeenSet;

    WorkspaceProperties m_workspaceProperties;
    bool m_workspacePropertiesHasBeenSet;

    Aws::Vector<ModificationState> m_modificationStates;
    bool m_modificationStatesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
