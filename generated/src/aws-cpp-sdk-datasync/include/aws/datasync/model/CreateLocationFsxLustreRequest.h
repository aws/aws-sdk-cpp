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


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the FSx for Lustre file
     * system.</p>
     */
    inline const Aws::String& GetFsxFilesystemArn() const{ return m_fsxFilesystemArn; }
    inline bool FsxFilesystemArnHasBeenSet() const { return m_fsxFilesystemArnHasBeenSet; }
    inline void SetFsxFilesystemArn(const Aws::String& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = value; }
    inline void SetFsxFilesystemArn(Aws::String&& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = std::move(value); }
    inline void SetFsxFilesystemArn(const char* value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn.assign(value); }
    inline CreateLocationFsxLustreRequest& WithFsxFilesystemArn(const Aws::String& value) { SetFsxFilesystemArn(value); return *this;}
    inline CreateLocationFsxLustreRequest& WithFsxFilesystemArn(Aws::String&& value) { SetFsxFilesystemArn(std::move(value)); return *this;}
    inline CreateLocationFsxLustreRequest& WithFsxFilesystemArn(const char* value) { SetFsxFilesystemArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of up to five security groups that
     * provide access to your FSx for Lustre file system.</p> <p>The security groups
     * must be able to access the file system's ports. The file system must also allow
     * access from the security groups. For information about file system access, see
     * the <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/limit-access-security-groups.html">
     * <i>Amazon FSx for Lustre User Guide</i> </a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }
    inline CreateLocationFsxLustreRequest& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}
    inline CreateLocationFsxLustreRequest& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}
    inline CreateLocationFsxLustreRequest& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }
    inline CreateLocationFsxLustreRequest& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }
    inline CreateLocationFsxLustreRequest& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a mount path for your FSx for Lustre file system. The path can
     * include subdirectories.</p> <p>When the location is used as a source, DataSync
     * reads data from the mount path. When the location is used as a destination,
     * DataSync writes data to the mount path. If you don't include this parameter,
     * DataSync uses the file system's root directory (<code>/</code>).</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline CreateLocationFsxLustreRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline CreateLocationFsxLustreRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline CreateLocationFsxLustreRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLocationFsxLustreRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}
    inline CreateLocationFsxLustreRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLocationFsxLustreRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateLocationFsxLustreRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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
