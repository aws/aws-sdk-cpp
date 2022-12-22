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
    AWS_DATASYNC_API CreateLocationEfsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationEfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data (depending on if this is a source or destination
     * location). By default, DataSync uses the root directory, but you can also
     * include subdirectories.</p>  <p>You must specify a value with forward
     * slashes (for example, <code>/path/to/folder</code>).</p> 
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data (depending on if this is a source or destination
     * location). By default, DataSync uses the root directory, but you can also
     * include subdirectories.</p>  <p>You must specify a value with forward
     * slashes (for example, <code>/path/to/folder</code>).</p> 
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data (depending on if this is a source or destination
     * location). By default, DataSync uses the root directory, but you can also
     * include subdirectories.</p>  <p>You must specify a value with forward
     * slashes (for example, <code>/path/to/folder</code>).</p> 
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data (depending on if this is a source or destination
     * location). By default, DataSync uses the root directory, but you can also
     * include subdirectories.</p>  <p>You must specify a value with forward
     * slashes (for example, <code>/path/to/folder</code>).</p> 
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data (depending on if this is a source or destination
     * location). By default, DataSync uses the root directory, but you can also
     * include subdirectories.</p>  <p>You must specify a value with forward
     * slashes (for example, <code>/path/to/folder</code>).</p> 
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data (depending on if this is a source or destination
     * location). By default, DataSync uses the root directory, but you can also
     * include subdirectories.</p>  <p>You must specify a value with forward
     * slashes (for example, <code>/path/to/folder</code>).</p> 
     */
    inline CreateLocationEfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data (depending on if this is a source or destination
     * location). By default, DataSync uses the root directory, but you can also
     * include subdirectories.</p>  <p>You must specify a value with forward
     * slashes (for example, <code>/path/to/folder</code>).</p> 
     */
    inline CreateLocationEfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies a mount path for your Amazon EFS file system. This is where
     * DataSync reads or writes data (depending on if this is a source or destination
     * location). By default, DataSync uses the root directory, but you can also
     * include subdirectories.</p>  <p>You must specify a value with forward
     * slashes (for example, <code>/path/to/folder</code>).</p> 
     */
    inline CreateLocationEfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Specifies the ARN for the Amazon EFS file system.</p>
     */
    inline const Aws::String& GetEfsFilesystemArn() const{ return m_efsFilesystemArn; }

    /**
     * <p>Specifies the ARN for the Amazon EFS file system.</p>
     */
    inline bool EfsFilesystemArnHasBeenSet() const { return m_efsFilesystemArnHasBeenSet; }

    /**
     * <p>Specifies the ARN for the Amazon EFS file system.</p>
     */
    inline void SetEfsFilesystemArn(const Aws::String& value) { m_efsFilesystemArnHasBeenSet = true; m_efsFilesystemArn = value; }

    /**
     * <p>Specifies the ARN for the Amazon EFS file system.</p>
     */
    inline void SetEfsFilesystemArn(Aws::String&& value) { m_efsFilesystemArnHasBeenSet = true; m_efsFilesystemArn = std::move(value); }

    /**
     * <p>Specifies the ARN for the Amazon EFS file system.</p>
     */
    inline void SetEfsFilesystemArn(const char* value) { m_efsFilesystemArnHasBeenSet = true; m_efsFilesystemArn.assign(value); }

    /**
     * <p>Specifies the ARN for the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithEfsFilesystemArn(const Aws::String& value) { SetEfsFilesystemArn(value); return *this;}

    /**
     * <p>Specifies the ARN for the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithEfsFilesystemArn(Aws::String&& value) { SetEfsFilesystemArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN for the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithEfsFilesystemArn(const char* value) { SetEfsFilesystemArn(value); return *this;}


    /**
     * <p>Specifies the subnet and security groups DataSync uses to access your Amazon
     * EFS file system.</p>
     */
    inline const Ec2Config& GetEc2Config() const{ return m_ec2Config; }

    /**
     * <p>Specifies the subnet and security groups DataSync uses to access your Amazon
     * EFS file system.</p>
     */
    inline bool Ec2ConfigHasBeenSet() const { return m_ec2ConfigHasBeenSet; }

    /**
     * <p>Specifies the subnet and security groups DataSync uses to access your Amazon
     * EFS file system.</p>
     */
    inline void SetEc2Config(const Ec2Config& value) { m_ec2ConfigHasBeenSet = true; m_ec2Config = value; }

    /**
     * <p>Specifies the subnet and security groups DataSync uses to access your Amazon
     * EFS file system.</p>
     */
    inline void SetEc2Config(Ec2Config&& value) { m_ec2ConfigHasBeenSet = true; m_ec2Config = std::move(value); }

    /**
     * <p>Specifies the subnet and security groups DataSync uses to access your Amazon
     * EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithEc2Config(const Ec2Config& value) { SetEc2Config(value); return *this;}

    /**
     * <p>Specifies the subnet and security groups DataSync uses to access your Amazon
     * EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithEc2Config(Ec2Config&& value) { SetEc2Config(std::move(value)); return *this;}


    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline CreateLocationEfsRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline CreateLocationEfsRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline CreateLocationEfsRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the key-value pair that represents a tag that you want to add to
     * the resource. The value can be an empty string. This value helps you manage,
     * filter, and search for your resources. We recommend that you create a name tag
     * for your location.</p>
     */
    inline CreateLocationEfsRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to access the Amazon EFS file system.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to access the Amazon EFS file system.</p>
     */
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to access the Amazon EFS file system.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to access the Amazon EFS file system.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to access the Amazon EFS file system.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to access the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to access the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to access the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}


    /**
     * <p>Specifies an Identity and Access Management (IAM) role that DataSync assumes
     * when mounting the Amazon EFS file system.</p>
     */
    inline const Aws::String& GetFileSystemAccessRoleArn() const{ return m_fileSystemAccessRoleArn; }

    /**
     * <p>Specifies an Identity and Access Management (IAM) role that DataSync assumes
     * when mounting the Amazon EFS file system.</p>
     */
    inline bool FileSystemAccessRoleArnHasBeenSet() const { return m_fileSystemAccessRoleArnHasBeenSet; }

    /**
     * <p>Specifies an Identity and Access Management (IAM) role that DataSync assumes
     * when mounting the Amazon EFS file system.</p>
     */
    inline void SetFileSystemAccessRoleArn(const Aws::String& value) { m_fileSystemAccessRoleArnHasBeenSet = true; m_fileSystemAccessRoleArn = value; }

    /**
     * <p>Specifies an Identity and Access Management (IAM) role that DataSync assumes
     * when mounting the Amazon EFS file system.</p>
     */
    inline void SetFileSystemAccessRoleArn(Aws::String&& value) { m_fileSystemAccessRoleArnHasBeenSet = true; m_fileSystemAccessRoleArn = std::move(value); }

    /**
     * <p>Specifies an Identity and Access Management (IAM) role that DataSync assumes
     * when mounting the Amazon EFS file system.</p>
     */
    inline void SetFileSystemAccessRoleArn(const char* value) { m_fileSystemAccessRoleArnHasBeenSet = true; m_fileSystemAccessRoleArn.assign(value); }

    /**
     * <p>Specifies an Identity and Access Management (IAM) role that DataSync assumes
     * when mounting the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithFileSystemAccessRoleArn(const Aws::String& value) { SetFileSystemAccessRoleArn(value); return *this;}

    /**
     * <p>Specifies an Identity and Access Management (IAM) role that DataSync assumes
     * when mounting the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithFileSystemAccessRoleArn(Aws::String&& value) { SetFileSystemAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies an Identity and Access Management (IAM) role that DataSync assumes
     * when mounting the Amazon EFS file system.</p>
     */
    inline CreateLocationEfsRequest& WithFileSystemAccessRoleArn(const char* value) { SetFileSystemAccessRoleArn(value); return *this;}


    /**
     * <p>Specifies whether you want DataSync to use Transport Layer Security (TLS) 1.2
     * encryption when it copies data to or from the Amazon EFS file system.</p> <p>If
     * you specify an access point using <code>AccessPointArn</code> or an IAM role
     * using <code>FileSystemAccessRoleArn</code>, you must set this parameter to
     * <code>TLS1_2</code>.</p>
     */
    inline const EfsInTransitEncryption& GetInTransitEncryption() const{ return m_inTransitEncryption; }

    /**
     * <p>Specifies whether you want DataSync to use Transport Layer Security (TLS) 1.2
     * encryption when it copies data to or from the Amazon EFS file system.</p> <p>If
     * you specify an access point using <code>AccessPointArn</code> or an IAM role
     * using <code>FileSystemAccessRoleArn</code>, you must set this parameter to
     * <code>TLS1_2</code>.</p>
     */
    inline bool InTransitEncryptionHasBeenSet() const { return m_inTransitEncryptionHasBeenSet; }

    /**
     * <p>Specifies whether you want DataSync to use Transport Layer Security (TLS) 1.2
     * encryption when it copies data to or from the Amazon EFS file system.</p> <p>If
     * you specify an access point using <code>AccessPointArn</code> or an IAM role
     * using <code>FileSystemAccessRoleArn</code>, you must set this parameter to
     * <code>TLS1_2</code>.</p>
     */
    inline void SetInTransitEncryption(const EfsInTransitEncryption& value) { m_inTransitEncryptionHasBeenSet = true; m_inTransitEncryption = value; }

    /**
     * <p>Specifies whether you want DataSync to use Transport Layer Security (TLS) 1.2
     * encryption when it copies data to or from the Amazon EFS file system.</p> <p>If
     * you specify an access point using <code>AccessPointArn</code> or an IAM role
     * using <code>FileSystemAccessRoleArn</code>, you must set this parameter to
     * <code>TLS1_2</code>.</p>
     */
    inline void SetInTransitEncryption(EfsInTransitEncryption&& value) { m_inTransitEncryptionHasBeenSet = true; m_inTransitEncryption = std::move(value); }

    /**
     * <p>Specifies whether you want DataSync to use Transport Layer Security (TLS) 1.2
     * encryption when it copies data to or from the Amazon EFS file system.</p> <p>If
     * you specify an access point using <code>AccessPointArn</code> or an IAM role
     * using <code>FileSystemAccessRoleArn</code>, you must set this parameter to
     * <code>TLS1_2</code>.</p>
     */
    inline CreateLocationEfsRequest& WithInTransitEncryption(const EfsInTransitEncryption& value) { SetInTransitEncryption(value); return *this;}

    /**
     * <p>Specifies whether you want DataSync to use Transport Layer Security (TLS) 1.2
     * encryption when it copies data to or from the Amazon EFS file system.</p> <p>If
     * you specify an access point using <code>AccessPointArn</code> or an IAM role
     * using <code>FileSystemAccessRoleArn</code>, you must set this parameter to
     * <code>TLS1_2</code>.</p>
     */
    inline CreateLocationEfsRequest& WithInTransitEncryption(EfsInTransitEncryption&& value) { SetInTransitEncryption(std::move(value)); return *this;}

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

    EfsInTransitEncryption m_inTransitEncryption;
    bool m_inTransitEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
