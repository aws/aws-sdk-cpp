/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FolderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateFolderRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateFolderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFolder"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline CreateFolderRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline CreateFolderRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account where you want to create the
     * folder.</p>
     */
    inline CreateFolderRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }

    /**
     * <p>The ID of the folder.</p>
     */
    inline CreateFolderRequest& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline CreateFolderRequest& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the folder.</p>
     */
    inline CreateFolderRequest& WithFolderId(const char* value) { SetFolderId(value); return *this;}


    /**
     * <p>The name of the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the folder.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the folder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the folder.</p>
     */
    inline CreateFolderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the folder.</p>
     */
    inline CreateFolderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the folder.</p>
     */
    inline CreateFolderRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of folder. By default, <code>folderType</code> is
     * <code>SHARED</code>.</p>
     */
    inline const FolderType& GetFolderType() const{ return m_folderType; }

    /**
     * <p>The type of folder. By default, <code>folderType</code> is
     * <code>SHARED</code>.</p>
     */
    inline bool FolderTypeHasBeenSet() const { return m_folderTypeHasBeenSet; }

    /**
     * <p>The type of folder. By default, <code>folderType</code> is
     * <code>SHARED</code>.</p>
     */
    inline void SetFolderType(const FolderType& value) { m_folderTypeHasBeenSet = true; m_folderType = value; }

    /**
     * <p>The type of folder. By default, <code>folderType</code> is
     * <code>SHARED</code>.</p>
     */
    inline void SetFolderType(FolderType&& value) { m_folderTypeHasBeenSet = true; m_folderType = std::move(value); }

    /**
     * <p>The type of folder. By default, <code>folderType</code> is
     * <code>SHARED</code>.</p>
     */
    inline CreateFolderRequest& WithFolderType(const FolderType& value) { SetFolderType(value); return *this;}

    /**
     * <p>The type of folder. By default, <code>folderType</code> is
     * <code>SHARED</code>.</p>
     */
    inline CreateFolderRequest& WithFolderType(FolderType&& value) { SetFolderType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline const Aws::String& GetParentFolderArn() const{ return m_parentFolderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline bool ParentFolderArnHasBeenSet() const { return m_parentFolderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline void SetParentFolderArn(const Aws::String& value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline void SetParentFolderArn(Aws::String&& value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline void SetParentFolderArn(const char* value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline CreateFolderRequest& WithParentFolderArn(const Aws::String& value) { SetParentFolderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline CreateFolderRequest& WithParentFolderArn(Aws::String&& value) { SetParentFolderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the parent folder.</p> <p>
     * <code>ParentFolderArn</code> can be null. An empty <code>parentFolderArn</code>
     * creates a root-level folder.</p>
     */
    inline CreateFolderRequest& WithParentFolderArn(const char* value) { SetParentFolderArn(value); return *this;}


    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline CreateFolderRequest& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline CreateFolderRequest& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline CreateFolderRequest& AddPermissions(const ResourcePermission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>A structure that describes the principals and the resource-level permissions
     * of a folder.</p> <p>To specify no permissions, omit
     * <code>Permissions</code>.</p>
     */
    inline CreateFolderRequest& AddPermissions(ResourcePermission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>Tags for the folder.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags for the folder.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags for the folder.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags for the folder.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags for the folder.</p>
     */
    inline CreateFolderRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags for the folder.</p>
     */
    inline CreateFolderRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the folder.</p>
     */
    inline CreateFolderRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags for the folder.</p>
     */
    inline CreateFolderRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FolderType m_folderType;
    bool m_folderTypeHasBeenSet = false;

    Aws::String m_parentFolderArn;
    bool m_parentFolderArnHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
