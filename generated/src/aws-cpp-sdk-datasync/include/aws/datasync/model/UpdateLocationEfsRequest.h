/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/EfsInTransitEncryption.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationEfsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationEfsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationEfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon EFS transfer location
     * that you're updating.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }
    inline UpdateLocationEfsRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline UpdateLocationEfsRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline UpdateLocationEfsRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

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
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline UpdateLocationEfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline UpdateLocationEfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline UpdateLocationEfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the access point that DataSync
     * uses to mount your Amazon EFS file system.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-efs-location.html#create-efs-location-iam">Accessing
     * restricted Amazon EFS file systems</a>.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }
    inline UpdateLocationEfsRequest& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}
    inline UpdateLocationEfsRequest& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}
    inline UpdateLocationEfsRequest& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an Identity and Access Management (IAM) role that allows DataSync
     * to access your Amazon EFS file system.</p> <p>For information on creating this
     * role, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-efs-location.html#create-efs-location-iam-role">Creating
     * a DataSync IAM role for Amazon EFS file system access</a>.</p>
     */
    inline const Aws::String& GetFileSystemAccessRoleArn() const{ return m_fileSystemAccessRoleArn; }
    inline bool FileSystemAccessRoleArnHasBeenSet() const { return m_fileSystemAccessRoleArnHasBeenSet; }
    inline void SetFileSystemAccessRoleArn(const Aws::String& value) { m_fileSystemAccessRoleArnHasBeenSet = true; m_fileSystemAccessRoleArn = value; }
    inline void SetFileSystemAccessRoleArn(Aws::String&& value) { m_fileSystemAccessRoleArnHasBeenSet = true; m_fileSystemAccessRoleArn = std::move(value); }
    inline void SetFileSystemAccessRoleArn(const char* value) { m_fileSystemAccessRoleArnHasBeenSet = true; m_fileSystemAccessRoleArn.assign(value); }
    inline UpdateLocationEfsRequest& WithFileSystemAccessRoleArn(const Aws::String& value) { SetFileSystemAccessRoleArn(value); return *this;}
    inline UpdateLocationEfsRequest& WithFileSystemAccessRoleArn(Aws::String&& value) { SetFileSystemAccessRoleArn(std::move(value)); return *this;}
    inline UpdateLocationEfsRequest& WithFileSystemAccessRoleArn(const char* value) { SetFileSystemAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want DataSync to use Transport Layer Security (TLS) 1.2
     * encryption when it transfers data to or from your Amazon EFS file system.</p>
     * <p>If you specify an access point using <code>AccessPointArn</code> or an IAM
     * role using <code>FileSystemAccessRoleArn</code>, you must set this parameter to
     * <code>TLS1_2</code>.</p>
     */
    inline const EfsInTransitEncryption& GetInTransitEncryption() const{ return m_inTransitEncryption; }
    inline bool InTransitEncryptionHasBeenSet() const { return m_inTransitEncryptionHasBeenSet; }
    inline void SetInTransitEncryption(const EfsInTransitEncryption& value) { m_inTransitEncryptionHasBeenSet = true; m_inTransitEncryption = value; }
    inline void SetInTransitEncryption(EfsInTransitEncryption&& value) { m_inTransitEncryptionHasBeenSet = true; m_inTransitEncryption = std::move(value); }
    inline UpdateLocationEfsRequest& WithInTransitEncryption(const EfsInTransitEncryption& value) { SetInTransitEncryption(value); return *this;}
    inline UpdateLocationEfsRequest& WithInTransitEncryption(EfsInTransitEncryption&& value) { SetInTransitEncryption(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

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
