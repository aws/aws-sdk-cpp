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
#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceState.h>
#include <aws/workspaces/model/WorkspaceProperties.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains information about a WorkSpace.</p>
   */
  class AWS_WORKSPACES_API Workspace
  {
  public:
    Workspace();
    Workspace(const Aws::Utils::Json::JsonValue& jsonValue);
    Workspace& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

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
    inline Workspace& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline Workspace& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory that the WorkSpace
     * belongs to.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the AWS Directory Service directory that the WorkSpace
     * belongs to.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the AWS Directory Service directory that the WorkSpace
     * belongs to.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the AWS Directory Service directory that the WorkSpace
     * belongs to.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the AWS Directory Service directory that the WorkSpace
     * belongs to.</p>
     */
    inline Workspace& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory that the WorkSpace
     * belongs to.</p>
     */
    inline Workspace& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory that the WorkSpace
     * belongs to.</p>
     */
    inline Workspace& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The user that the WorkSpace is assigned to.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user that the WorkSpace is assigned to.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user that the WorkSpace is assigned to.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user that the WorkSpace is assigned to.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user that the WorkSpace is assigned to.</p>
     */
    inline Workspace& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user that the WorkSpace is assigned to.</p>
     */
    inline Workspace& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The user that the WorkSpace is assigned to.</p>
     */
    inline Workspace& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

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
    inline Workspace& WithIpAddress(Aws::String&& value) { SetIpAddress(value); return *this;}

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
    inline void SetState(const WorkspaceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline void SetState(WorkspaceState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline Workspace& WithState(const WorkspaceState& value) { SetState(value); return *this;}

    /**
     * <p>The operational state of the WorkSpace.</p>
     */
    inline Workspace& WithState(WorkspaceState&& value) { SetState(value); return *this;}

    /**
     * <p>The identifier of the bundle that the WorkSpace was created from.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The identifier of the bundle that the WorkSpace was created from.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of the bundle that the WorkSpace was created from.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of the bundle that the WorkSpace was created from.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The identifier of the bundle that the WorkSpace was created from.</p>
     */
    inline Workspace& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the bundle that the WorkSpace was created from.</p>
     */
    inline Workspace& WithBundleId(Aws::String&& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the bundle that the WorkSpace was created from.</p>
     */
    inline Workspace& WithBundleId(const char* value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the subnet that the WorkSpace is in.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The identifier of the subnet that the WorkSpace is in.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The identifier of the subnet that the WorkSpace is in.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The identifier of the subnet that the WorkSpace is in.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The identifier of the subnet that the WorkSpace is in.</p>
     */
    inline Workspace& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The identifier of the subnet that the WorkSpace is in.</p>
     */
    inline Workspace& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The identifier of the subnet that the WorkSpace is in.</p>
     */
    inline Workspace& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>If the WorkSpace could not be created, this contains a textual error message
     * that describes the failure.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>If the WorkSpace could not be created, this contains a textual error message
     * that describes the failure.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>If the WorkSpace could not be created, this contains a textual error message
     * that describes the failure.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>If the WorkSpace could not be created, this contains a textual error message
     * that describes the failure.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>If the WorkSpace could not be created, this contains a textual error message
     * that describes the failure.</p>
     */
    inline Workspace& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>If the WorkSpace could not be created, this contains a textual error message
     * that describes the failure.</p>
     */
    inline Workspace& WithErrorMessage(Aws::String&& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>If the WorkSpace could not be created, this contains a textual error message
     * that describes the failure.</p>
     */
    inline Workspace& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

    /**
     * <p>If the WorkSpace could not be created, this contains the error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>If the WorkSpace could not be created, this contains the error code.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>If the WorkSpace could not be created, this contains the error code.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>If the WorkSpace could not be created, this contains the error code.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>If the WorkSpace could not be created, this contains the error code.</p>
     */
    inline Workspace& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>If the WorkSpace could not be created, this contains the error code.</p>
     */
    inline Workspace& WithErrorCode(Aws::String&& value) { SetErrorCode(value); return *this;}

    /**
     * <p>If the WorkSpace could not be created, this contains the error code.</p>
     */
    inline Workspace& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

    /**
     * <p>The name of the WorkSpace as seen by the operating system.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }

    /**
     * <p>The name of the WorkSpace as seen by the operating system.</p>
     */
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }

    /**
     * <p>The name of the WorkSpace as seen by the operating system.</p>
     */
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = value; }

    /**
     * <p>The name of the WorkSpace as seen by the operating system.</p>
     */
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }

    /**
     * <p>The name of the WorkSpace as seen by the operating system.</p>
     */
    inline Workspace& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}

    /**
     * <p>The name of the WorkSpace as seen by the operating system.</p>
     */
    inline Workspace& WithComputerName(Aws::String&& value) { SetComputerName(value); return *this;}

    /**
     * <p>The name of the WorkSpace as seen by the operating system.</p>
     */
    inline Workspace& WithComputerName(const char* value) { SetComputerName(value); return *this;}

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const{ return m_volumeEncryptionKey; }

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline void SetVolumeEncryptionKey(const Aws::String& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = value; }

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline void SetVolumeEncryptionKey(Aws::String&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = value; }

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
    inline Workspace& WithVolumeEncryptionKey(Aws::String&& value) { SetVolumeEncryptionKey(value); return *this;}

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline Workspace& WithVolumeEncryptionKey(const char* value) { SetVolumeEncryptionKey(value); return *this;}

    /**
     * <p>Specifies whether the data stored on the user volume, or D: drive, is
     * encrypted.</p>
     */
    inline bool GetUserVolumeEncryptionEnabled() const{ return m_userVolumeEncryptionEnabled; }

    /**
     * <p>Specifies whether the data stored on the user volume, or D: drive, is
     * encrypted.</p>
     */
    inline void SetUserVolumeEncryptionEnabled(bool value) { m_userVolumeEncryptionEnabledHasBeenSet = true; m_userVolumeEncryptionEnabled = value; }

    /**
     * <p>Specifies whether the data stored on the user volume, or D: drive, is
     * encrypted.</p>
     */
    inline Workspace& WithUserVolumeEncryptionEnabled(bool value) { SetUserVolumeEncryptionEnabled(value); return *this;}

    /**
     * <p>Specifies whether the data stored on the root volume, or C: drive, is
     * encrypted.</p>
     */
    inline bool GetRootVolumeEncryptionEnabled() const{ return m_rootVolumeEncryptionEnabled; }

    /**
     * <p>Specifies whether the data stored on the root volume, or C: drive, is
     * encrypted.</p>
     */
    inline void SetRootVolumeEncryptionEnabled(bool value) { m_rootVolumeEncryptionEnabledHasBeenSet = true; m_rootVolumeEncryptionEnabled = value; }

    /**
     * <p>Specifies whether the data stored on the root volume, or C: drive, is
     * encrypted.</p>
     */
    inline Workspace& WithRootVolumeEncryptionEnabled(bool value) { SetRootVolumeEncryptionEnabled(value); return *this;}

    
    inline const WorkspaceProperties& GetWorkspaceProperties() const{ return m_workspaceProperties; }

    
    inline void SetWorkspaceProperties(const WorkspaceProperties& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }

    
    inline void SetWorkspaceProperties(WorkspaceProperties&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }

    
    inline Workspace& WithWorkspaceProperties(const WorkspaceProperties& value) { SetWorkspaceProperties(value); return *this;}

    
    inline Workspace& WithWorkspaceProperties(WorkspaceProperties&& value) { SetWorkspaceProperties(value); return *this;}

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
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
