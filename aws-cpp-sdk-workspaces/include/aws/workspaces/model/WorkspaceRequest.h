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
#include <aws/workspaces/model/WorkspaceProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>

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
   * <p>Contains information about a WorkSpace creation request.</p>
   */
  class AWS_WORKSPACES_API WorkspaceRequest
  {
  public:
    WorkspaceRequest();
    WorkspaceRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkspaceRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier of the AWS Directory Service directory to create the WorkSpace
     * in. You can use the <a>DescribeWorkspaceDirectories</a> operation to obtain a
     * list of the directories that are available.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the AWS Directory Service directory to create the WorkSpace
     * in. You can use the <a>DescribeWorkspaceDirectories</a> operation to obtain a
     * list of the directories that are available.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the AWS Directory Service directory to create the WorkSpace
     * in. You can use the <a>DescribeWorkspaceDirectories</a> operation to obtain a
     * list of the directories that are available.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the AWS Directory Service directory to create the WorkSpace
     * in. You can use the <a>DescribeWorkspaceDirectories</a> operation to obtain a
     * list of the directories that are available.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the AWS Directory Service directory to create the WorkSpace
     * in. You can use the <a>DescribeWorkspaceDirectories</a> operation to obtain a
     * list of the directories that are available.</p>
     */
    inline WorkspaceRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory to create the WorkSpace
     * in. You can use the <a>DescribeWorkspaceDirectories</a> operation to obtain a
     * list of the directories that are available.</p>
     */
    inline WorkspaceRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory to create the WorkSpace
     * in. You can use the <a>DescribeWorkspaceDirectories</a> operation to obtain a
     * list of the directories that are available.</p>
     */
    inline WorkspaceRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The username that the WorkSpace is assigned to. This username must exist in
     * the AWS Directory Service directory specified by the <code>DirectoryId</code>
     * member.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The username that the WorkSpace is assigned to. This username must exist in
     * the AWS Directory Service directory specified by the <code>DirectoryId</code>
     * member.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The username that the WorkSpace is assigned to. This username must exist in
     * the AWS Directory Service directory specified by the <code>DirectoryId</code>
     * member.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The username that the WorkSpace is assigned to. This username must exist in
     * the AWS Directory Service directory specified by the <code>DirectoryId</code>
     * member.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The username that the WorkSpace is assigned to. This username must exist in
     * the AWS Directory Service directory specified by the <code>DirectoryId</code>
     * member.</p>
     */
    inline WorkspaceRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The username that the WorkSpace is assigned to. This username must exist in
     * the AWS Directory Service directory specified by the <code>DirectoryId</code>
     * member.</p>
     */
    inline WorkspaceRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The username that the WorkSpace is assigned to. This username must exist in
     * the AWS Directory Service directory specified by the <code>DirectoryId</code>
     * member.</p>
     */
    inline WorkspaceRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The identifier of the bundle to create the WorkSpace from. You can use the
     * <a>DescribeWorkspaceBundles</a> operation to obtain a list of the bundles that
     * are available.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The identifier of the bundle to create the WorkSpace from. You can use the
     * <a>DescribeWorkspaceBundles</a> operation to obtain a list of the bundles that
     * are available.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of the bundle to create the WorkSpace from. You can use the
     * <a>DescribeWorkspaceBundles</a> operation to obtain a list of the bundles that
     * are available.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of the bundle to create the WorkSpace from. You can use the
     * <a>DescribeWorkspaceBundles</a> operation to obtain a list of the bundles that
     * are available.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The identifier of the bundle to create the WorkSpace from. You can use the
     * <a>DescribeWorkspaceBundles</a> operation to obtain a list of the bundles that
     * are available.</p>
     */
    inline WorkspaceRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the bundle to create the WorkSpace from. You can use the
     * <a>DescribeWorkspaceBundles</a> operation to obtain a list of the bundles that
     * are available.</p>
     */
    inline WorkspaceRequest& WithBundleId(Aws::String&& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the bundle to create the WorkSpace from. You can use the
     * <a>DescribeWorkspaceBundles</a> operation to obtain a list of the bundles that
     * are available.</p>
     */
    inline WorkspaceRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}

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
    inline WorkspaceRequest& WithVolumeEncryptionKey(const Aws::String& value) { SetVolumeEncryptionKey(value); return *this;}

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline WorkspaceRequest& WithVolumeEncryptionKey(Aws::String&& value) { SetVolumeEncryptionKey(value); return *this;}

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline WorkspaceRequest& WithVolumeEncryptionKey(const char* value) { SetVolumeEncryptionKey(value); return *this;}

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
    inline WorkspaceRequest& WithUserVolumeEncryptionEnabled(bool value) { SetUserVolumeEncryptionEnabled(value); return *this;}

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
    inline WorkspaceRequest& WithRootVolumeEncryptionEnabled(bool value) { SetRootVolumeEncryptionEnabled(value); return *this;}

    
    inline const WorkspaceProperties& GetWorkspaceProperties() const{ return m_workspaceProperties; }

    
    inline void SetWorkspaceProperties(const WorkspaceProperties& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }

    
    inline void SetWorkspaceProperties(WorkspaceProperties&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }

    
    inline WorkspaceRequest& WithWorkspaceProperties(const WorkspaceProperties& value) { SetWorkspaceProperties(value); return *this;}

    
    inline WorkspaceRequest& WithWorkspaceProperties(WorkspaceProperties&& value) { SetWorkspaceProperties(value); return *this;}

    /**
     * <p>The tags of the WorkSpace request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the WorkSpace request.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the WorkSpace request.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the WorkSpace request.</p>
     */
    inline WorkspaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the WorkSpace request.</p>
     */
    inline WorkspaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the WorkSpace request.</p>
     */
    inline WorkspaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags of the WorkSpace request.</p>
     */
    inline WorkspaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;
    Aws::String m_volumeEncryptionKey;
    bool m_volumeEncryptionKeyHasBeenSet;
    bool m_userVolumeEncryptionEnabled;
    bool m_userVolumeEncryptionEnabledHasBeenSet;
    bool m_rootVolumeEncryptionEnabled;
    bool m_rootVolumeEncryptionEnabledHasBeenSet;
    WorkspaceProperties m_workspaceProperties;
    bool m_workspacePropertiesHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
