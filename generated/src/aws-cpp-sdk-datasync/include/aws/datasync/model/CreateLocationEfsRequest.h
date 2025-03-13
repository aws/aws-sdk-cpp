/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Ec2Config.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/EfsInTransitEncryption.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateLocationEfsRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationEfsRequest">AWS
   * API Reference</a></p>
   */
  class CreateLocationEfsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationEfsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationEfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data on your file system (depending on if this is a
     * source or destination location).</p> <p>By default, DataSync uses the root
     * directory (or <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">access
     * point</a> if you provide one by using <code>AccessPointArn</code>). You can also
     * include subdirectories using forward slashes (for example,
     * <code>/path/to/folder</code>).</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    CreateLocationEfsRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN for your Amazon EFS file system.</p>
     */
    inline const Aws::String& GetEfsFilesystemArn() const { return m_efsFilesystemArn; }
    inline bool EfsFilesystemArnHasBeenSet() const { return m_efsFilesystemArnHasBeenSet; }
    template<typename EfsFilesystemArnT = Aws::String>
    void SetEfsFilesystemArn(EfsFilesystemArnT&& value) { m_efsFilesystemArnHasBeenSet = true; m_efsFilesystemArn = std::forward<EfsFilesystemArnT>(value); }
    template<typename EfsFilesystemArnT = Aws::String>
    CreateLocationEfsRequest& WithEfsFilesystemArn(EfsFilesystemArnT&& value) { SetEfsFilesystemArn(std::forward<EfsFilesystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the subnet and security groups DataSync uses to connect to one of
     * your Amazon EFS file system's <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/accessing-fs.html">mount
     * targets</a>.</p>
     */
    inline const Ec2Config& GetEc2Config() const { return m_ec2Config; }
    inline bool Ec2ConfigHasBeenSet() const { return m_ec2ConfigHasBeenSet; }
    template<typename Ec2ConfigT = Ec2Config>
    void SetEc2Config(Ec2ConfigT&& value) { m_ec2ConfigHasBeenSet = true; m_ec2Config = std::forward<Ec2ConfigT>(value); }
    template<typename Ec2ConfigT = Ec2Config>
    CreateLocationEfsRequest& WithEc2Config(Ec2ConfigT&& value) { SetEc2Config(std::forward<Ec2ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateLocationEfsRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateLocationEfsRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to mount your Amazon EFS file system.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-efs-location.html#create-efs-location-iam">Accessing
     * restricted file systems</a>.</p>
     */
    inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
    template<typename AccessPointArnT = Aws::String>
    void SetAccessPointArn(AccessPointArnT&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::forward<AccessPointArnT>(value); }
    template<typename AccessPointArnT = Aws::String>
    CreateLocationEfsRequest& WithAccessPointArn(AccessPointArnT&& value) { SetAccessPointArn(std::forward<AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Identity and Access Management (IAM) role that allows DataSync
     * to access your Amazon EFS file system.</p> <p>For information on creating this
     * role, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-efs-location.html#create-efs-location-iam-role">Creating
     * a DataSync IAM role for file system access</a>.</p>
     */
    inline const Aws::String& GetFileSystemAccessRoleArn() const { return m_fileSystemAccessRoleArn; }
    inline bool FileSystemAccessRoleArnHasBeenSet() const { return m_fileSystemAccessRoleArnHasBeenSet; }
    template<typename FileSystemAccessRoleArnT = Aws::String>
    void SetFileSystemAccessRoleArn(FileSystemAccessRoleArnT&& value) { m_fileSystemAccessRoleArnHasBeenSet = true; m_fileSystemAccessRoleArn = std::forward<FileSystemAccessRoleArnT>(value); }
    template<typename FileSystemAccessRoleArnT = Aws::String>
    CreateLocationEfsRequest& WithFileSystemAccessRoleArn(FileSystemAccessRoleArnT&& value) { SetFileSystemAccessRoleArn(std::forward<FileSystemAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want DataSync to use Transport Layer Security (TLS) 1.2
     * encryption when it transfers data to or from your Amazon EFS file system.</p>
     * <p>If you specify an access point using <code>AccessPointArn</code> or an IAM
     * role using <code>FileSystemAccessRoleArn</code>, you must set this parameter to
     * <code>TLS1_2</code>.</p>
     */
    inline EfsInTransitEncryption GetInTransitEncryption() const { return m_inTransitEncryption; }
    inline bool InTransitEncryptionHasBeenSet() const { return m_inTransitEncryptionHasBeenSet; }
    inline void SetInTransitEncryption(EfsInTransitEncryption value) { m_inTransitEncryptionHasBeenSet = true; m_inTransitEncryption = value; }
    inline CreateLocationEfsRequest& WithInTransitEncryption(EfsInTransitEncryption value) { SetInTransitEncryption(value); return *this;}
    ///@}
  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_efsFilesystemArn;
    bool m_efsFilesystemArnHasBeenSet = false;

    Ec2Config m_ec2Config;
    bool m_ec2ConfigHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet = false;

    Aws::String m_fileSystemAccessRoleArn;
    bool m_fileSystemAccessRoleArnHasBeenSet = false;

    EfsInTransitEncryption m_inTransitEncryption{EfsInTransitEncryption::NOT_SET};
    bool m_inTransitEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
