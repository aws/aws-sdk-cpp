/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceState.h>
#include <aws/workspaces/model/WorkspaceProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ModificationState.h>
#include <aws/workspaces/model/RelatedWorkspaceProperties.h>
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
  class Workspace
  {
  public:
    AWS_WORKSPACES_API Workspace();
    AWS_WORKSPACES_API Workspace(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Workspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline Workspace& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline Workspace& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
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
     * <p>The operational state of the WorkSpace.</p>  <p>After a WorkSpace is
     * terminated, the <code>TERMINATED</code> state is returned only briefly before
     * the WorkSpace directory metadata is cleaned up, so this state is rarely
     * returned. To confirm that a WorkSpace is terminated, check for the WorkSpace ID
     * by using <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
     * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
     * has been successfully terminated.</p> 
     */
    inline const WorkspaceState& GetState() const{ return m_state; }

    /**
     * <p>The operational state of the WorkSpace.</p>  <p>After a WorkSpace is
     * terminated, the <code>TERMINATED</code> state is returned only briefly before
     * the WorkSpace directory metadata is cleaned up, so this state is rarely
     * returned. To confirm that a WorkSpace is terminated, check for the WorkSpace ID
     * by using <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
     * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
     * has been successfully terminated.</p> 
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The operational state of the WorkSpace.</p>  <p>After a WorkSpace is
     * terminated, the <code>TERMINATED</code> state is returned only briefly before
     * the WorkSpace directory metadata is cleaned up, so this state is rarely
     * returned. To confirm that a WorkSpace is terminated, check for the WorkSpace ID
     * by using <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
     * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
     * has been successfully terminated.</p> 
     */
    inline void SetState(const WorkspaceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The operational state of the WorkSpace.</p>  <p>After a WorkSpace is
     * terminated, the <code>TERMINATED</code> state is returned only briefly before
     * the WorkSpace directory metadata is cleaned up, so this state is rarely
     * returned. To confirm that a WorkSpace is terminated, check for the WorkSpace ID
     * by using <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
     * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
     * has been successfully terminated.</p> 
     */
    inline void SetState(WorkspaceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The operational state of the WorkSpace.</p>  <p>After a WorkSpace is
     * terminated, the <code>TERMINATED</code> state is returned only briefly before
     * the WorkSpace directory metadata is cleaned up, so this state is rarely
     * returned. To confirm that a WorkSpace is terminated, check for the WorkSpace ID
     * by using <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
     * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
     * has been successfully terminated.</p> 
     */
    inline Workspace& WithState(const WorkspaceState& value) { SetState(value); return *this;}

    /**
     * <p>The operational state of the WorkSpace.</p>  <p>After a WorkSpace is
     * terminated, the <code>TERMINATED</code> state is returned only briefly before
     * the WorkSpace directory metadata is cleaned up, so this state is rarely
     * returned. To confirm that a WorkSpace is terminated, check for the WorkSpace ID
     * by using <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
     * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
     * has been successfully terminated.</p> 
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
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }

    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline Workspace& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}

    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline Workspace& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}

    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline Workspace& WithComputerName(const char* value) { SetComputerName(value); return *this;}


    /**
     * <p>The symmetric KMS key used to encrypt data stored on your WorkSpace. Amazon
     * WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const{ return m_volumeEncryptionKey; }

    /**
     * <p>The symmetric KMS key used to encrypt data stored on your WorkSpace. Amazon
     * WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline bool VolumeEncryptionKeyHasBeenSet() const { return m_volumeEncryptionKeyHasBeenSet; }

    /**
     * <p>The symmetric KMS key used to encrypt data stored on your WorkSpace. Amazon
     * WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline void SetVolumeEncryptionKey(const Aws::String& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = value; }

    /**
     * <p>The symmetric KMS key used to encrypt data stored on your WorkSpace. Amazon
     * WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline void SetVolumeEncryptionKey(Aws::String&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = std::move(value); }

    /**
     * <p>The symmetric KMS key used to encrypt data stored on your WorkSpace. Amazon
     * WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline void SetVolumeEncryptionKey(const char* value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey.assign(value); }

    /**
     * <p>The symmetric KMS key used to encrypt data stored on your WorkSpace. Amazon
     * WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline Workspace& WithVolumeEncryptionKey(const Aws::String& value) { SetVolumeEncryptionKey(value); return *this;}

    /**
     * <p>The symmetric KMS key used to encrypt data stored on your WorkSpace. Amazon
     * WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline Workspace& WithVolumeEncryptionKey(Aws::String&& value) { SetVolumeEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The symmetric KMS key used to encrypt data stored on your WorkSpace. Amazon
     * WorkSpaces does not support asymmetric KMS keys.</p>
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


    /**
     * <p>The Standby WorkSpace or Primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline const Aws::Vector<RelatedWorkspaceProperties>& GetRelatedWorkspaces() const{ return m_relatedWorkspaces; }

    /**
     * <p>The Standby WorkSpace or Primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline bool RelatedWorkspacesHasBeenSet() const { return m_relatedWorkspacesHasBeenSet; }

    /**
     * <p>The Standby WorkSpace or Primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline void SetRelatedWorkspaces(const Aws::Vector<RelatedWorkspaceProperties>& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces = value; }

    /**
     * <p>The Standby WorkSpace or Primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline void SetRelatedWorkspaces(Aws::Vector<RelatedWorkspaceProperties>&& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces = std::move(value); }

    /**
     * <p>The Standby WorkSpace or Primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline Workspace& WithRelatedWorkspaces(const Aws::Vector<RelatedWorkspaceProperties>& value) { SetRelatedWorkspaces(value); return *this;}

    /**
     * <p>The Standby WorkSpace or Primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline Workspace& WithRelatedWorkspaces(Aws::Vector<RelatedWorkspaceProperties>&& value) { SetRelatedWorkspaces(std::move(value)); return *this;}

    /**
     * <p>The Standby WorkSpace or Primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline Workspace& AddRelatedWorkspaces(const RelatedWorkspaceProperties& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces.push_back(value); return *this; }

    /**
     * <p>The Standby WorkSpace or Primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline Workspace& AddRelatedWorkspaces(RelatedWorkspaceProperties&& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    WorkspaceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet = false;

    Aws::String m_volumeEncryptionKey;
    bool m_volumeEncryptionKeyHasBeenSet = false;

    bool m_userVolumeEncryptionEnabled;
    bool m_userVolumeEncryptionEnabledHasBeenSet = false;

    bool m_rootVolumeEncryptionEnabled;
    bool m_rootVolumeEncryptionEnabledHasBeenSet = false;

    WorkspaceProperties m_workspaceProperties;
    bool m_workspacePropertiesHasBeenSet = false;

    Aws::Vector<ModificationState> m_modificationStates;
    bool m_modificationStatesHasBeenSet = false;

    Aws::Vector<RelatedWorkspaceProperties> m_relatedWorkspaces;
    bool m_relatedWorkspacesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
