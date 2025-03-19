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
    AWS_DATASYNC_API CreateLocationFsxLustreRequest() = default;

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
    inline const Aws::String& GetFsxFilesystemArn() const { return m_fsxFilesystemArn; }
    inline bool FsxFilesystemArnHasBeenSet() const { return m_fsxFilesystemArnHasBeenSet; }
    template<typename FsxFilesystemArnT = Aws::String>
    void SetFsxFilesystemArn(FsxFilesystemArnT&& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = std::forward<FsxFilesystemArnT>(value); }
    template<typename FsxFilesystemArnT = Aws::String>
    CreateLocationFsxLustreRequest& WithFsxFilesystemArn(FsxFilesystemArnT&& value) { SetFsxFilesystemArn(std::forward<FsxFilesystemArnT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const { return m_securityGroupArns; }
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::forward<SecurityGroupArnsT>(value); }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    CreateLocationFsxLustreRequest& WithSecurityGroupArns(SecurityGroupArnsT&& value) { SetSecurityGroupArns(std::forward<SecurityGroupArnsT>(value)); return *this;}
    template<typename SecurityGroupArnsT = Aws::String>
    CreateLocationFsxLustreRequest& AddSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.emplace_back(std::forward<SecurityGroupArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a mount path for your FSx for Lustre file system. The path can
     * include subdirectories.</p> <p>When the location is used as a source, DataSync
     * reads data from the mount path. When the location is used as a destination,
     * DataSync writes data to the mount path. If you don't include this parameter,
     * DataSync uses the file system's root directory (<code>/</code>).</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    CreateLocationFsxLustreRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateLocationFsxLustreRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateLocationFsxLustreRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
