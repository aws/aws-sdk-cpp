/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class CreateLocationFsxLustreRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationFsxLustreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationFsxLustre"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Lustre file system.</p>
     */
    inline const Aws::String& GetFsxFilesystemArn() const{ return m_fsxFilesystemArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Lustre file system.</p>
     */
    inline bool FsxFilesystemArnHasBeenSet() const { return m_fsxFilesystemArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Lustre file system.</p>
     */
    inline void SetFsxFilesystemArn(const Aws::String& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Lustre file system.</p>
     */
    inline void SetFsxFilesystemArn(Aws::String&& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Lustre file system.</p>
     */
    inline void SetFsxFilesystemArn(const char* value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Lustre file system.</p>
     */
    inline CreateLocationFsxLustreRequest& WithFsxFilesystemArn(const Aws::String& value) { SetFsxFilesystemArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Lustre file system.</p>
     */
    inline CreateLocationFsxLustreRequest& WithFsxFilesystemArn(Aws::String&& value) { SetFsxFilesystemArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Lustre file system.</p>
     */
    inline CreateLocationFsxLustreRequest& WithFsxFilesystemArn(const char* value) { SetFsxFilesystemArn(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline CreateLocationFsxLustreRequest& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline CreateLocationFsxLustreRequest& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline CreateLocationFsxLustreRequest& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline CreateLocationFsxLustreRequest& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are used to
     * configure the FSx for Lustre file system.</p>
     */
    inline CreateLocationFsxLustreRequest& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }


    /**
     * <p>A subdirectory in the location's path. This subdirectory in the FSx for
     * Lustre file system is used to read data from the FSx for Lustre source location
     * or write data to the FSx for Lustre destination.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>A subdirectory in the location's path. This subdirectory in the FSx for
     * Lustre file system is used to read data from the FSx for Lustre source location
     * or write data to the FSx for Lustre destination.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>A subdirectory in the location's path. This subdirectory in the FSx for
     * Lustre file system is used to read data from the FSx for Lustre source location
     * or write data to the FSx for Lustre destination.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>A subdirectory in the location's path. This subdirectory in the FSx for
     * Lustre file system is used to read data from the FSx for Lustre source location
     * or write data to the FSx for Lustre destination.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>A subdirectory in the location's path. This subdirectory in the FSx for
     * Lustre file system is used to read data from the FSx for Lustre source location
     * or write data to the FSx for Lustre destination.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>A subdirectory in the location's path. This subdirectory in the FSx for
     * Lustre file system is used to read data from the FSx for Lustre source location
     * or write data to the FSx for Lustre destination.</p>
     */
    inline CreateLocationFsxLustreRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>A subdirectory in the location's path. This subdirectory in the FSx for
     * Lustre file system is used to read data from the FSx for Lustre source location
     * or write data to the FSx for Lustre destination.</p>
     */
    inline CreateLocationFsxLustreRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>A subdirectory in the location's path. This subdirectory in the FSx for
     * Lustre file system is used to read data from the FSx for Lustre source location
     * or write data to the FSx for Lustre destination.</p>
     */
    inline CreateLocationFsxLustreRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxLustreRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxLustreRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxLustreRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxLustreRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fsxFilesystemArn;
    bool m_fsxFilesystemArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
