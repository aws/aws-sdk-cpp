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
#include <aws/workspaces/model/WorkspaceProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>
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
   * <p>Describes the information used to create a WorkSpace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API WorkspaceRequest
  {
  public:
    WorkspaceRequest();
    WorkspaceRequest(Aws::Utils::Json::JsonView jsonValue);
    WorkspaceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace. You
     * can use <a>DescribeWorkspaceDirectories</a> to list the available
     * directories.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace. You
     * can use <a>DescribeWorkspaceDirectories</a> to list the available
     * directories.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace. You
     * can use <a>DescribeWorkspaceDirectories</a> to list the available
     * directories.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace. You
     * can use <a>DescribeWorkspaceDirectories</a> to list the available
     * directories.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace. You
     * can use <a>DescribeWorkspaceDirectories</a> to list the available
     * directories.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace. You
     * can use <a>DescribeWorkspaceDirectories</a> to list the available
     * directories.</p>
     */
    inline WorkspaceRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace. You
     * can use <a>DescribeWorkspaceDirectories</a> to list the available
     * directories.</p>
     */
    inline WorkspaceRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the AWS Directory Service directory for the WorkSpace. You
     * can use <a>DescribeWorkspaceDirectories</a> to list the available
     * directories.</p>
     */
    inline WorkspaceRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The username of the user for the WorkSpace. This username must exist in the
     * AWS Directory Service directory for the WorkSpace.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The username of the user for the WorkSpace. This username must exist in the
     * AWS Directory Service directory for the WorkSpace.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The username of the user for the WorkSpace. This username must exist in the
     * AWS Directory Service directory for the WorkSpace.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The username of the user for the WorkSpace. This username must exist in the
     * AWS Directory Service directory for the WorkSpace.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The username of the user for the WorkSpace. This username must exist in the
     * AWS Directory Service directory for the WorkSpace.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The username of the user for the WorkSpace. This username must exist in the
     * AWS Directory Service directory for the WorkSpace.</p>
     */
    inline WorkspaceRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The username of the user for the WorkSpace. This username must exist in the
     * AWS Directory Service directory for the WorkSpace.</p>
     */
    inline WorkspaceRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The username of the user for the WorkSpace. This username must exist in the
     * AWS Directory Service directory for the WorkSpace.</p>
     */
    inline WorkspaceRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline WorkspaceRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline WorkspaceRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bundle for the WorkSpace. You can use
     * <a>DescribeWorkspaceBundles</a> to list the available bundles.</p>
     */
    inline WorkspaceRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}


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
    inline WorkspaceRequest& WithVolumeEncryptionKey(const Aws::String& value) { SetVolumeEncryptionKey(value); return *this;}

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline WorkspaceRequest& WithVolumeEncryptionKey(Aws::String&& value) { SetVolumeEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The KMS key used to encrypt data stored on your WorkSpace.</p>
     */
    inline WorkspaceRequest& WithVolumeEncryptionKey(const char* value) { SetVolumeEncryptionKey(value); return *this;}


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
    inline WorkspaceRequest& WithUserVolumeEncryptionEnabled(bool value) { SetUserVolumeEncryptionEnabled(value); return *this;}


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
    inline WorkspaceRequest& WithRootVolumeEncryptionEnabled(bool value) { SetRootVolumeEncryptionEnabled(value); return *this;}


    /**
     * <p>The WorkSpace properties.</p>
     */
    inline const WorkspaceProperties& GetWorkspaceProperties() const{ return m_workspaceProperties; }

    /**
     * <p>The WorkSpace properties.</p>
     */
    inline bool WorkspacePropertiesHasBeenSet() const { return m_workspacePropertiesHasBeenSet; }

    /**
     * <p>The WorkSpace properties.</p>
     */
    inline void SetWorkspaceProperties(const WorkspaceProperties& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }

    /**
     * <p>The WorkSpace properties.</p>
     */
    inline void SetWorkspaceProperties(WorkspaceProperties&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = std::move(value); }

    /**
     * <p>The WorkSpace properties.</p>
     */
    inline WorkspaceRequest& WithWorkspaceProperties(const WorkspaceProperties& value) { SetWorkspaceProperties(value); return *this;}

    /**
     * <p>The WorkSpace properties.</p>
     */
    inline WorkspaceRequest& WithWorkspaceProperties(WorkspaceProperties&& value) { SetWorkspaceProperties(std::move(value)); return *this;}


    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline WorkspaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline WorkspaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline WorkspaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the WorkSpace.</p>
     */
    inline WorkspaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
