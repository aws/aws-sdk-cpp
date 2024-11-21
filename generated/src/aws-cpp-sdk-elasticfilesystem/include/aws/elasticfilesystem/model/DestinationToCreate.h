﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>Describes the new or existing destination file system for the replication
   * configuration.</p> <ul> <li> <p>If you want to replicate to a new file system,
   * do not specify the File System ID for the destination file system. Amazon EFS
   * creates a new, empty file system. For One Zone storage, specify the Availability
   * Zone to create the file system in. To use an Key Management Service key other
   * than the default KMS key, then specify it. For more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/create-replication.html">Configuring
   * replication to new Amazon EFS file system</a> in the <i>Amazon EFS User
   * Guide</i>.</p>  <p>After the file system is created, you cannot change the
   * KMS key or the performance mode.</p>  </li> <li> <p>If you want to
   * replicate to an existing file system that's in the same account as the source
   * file system, then you need to provide the ID or Amazon Resource Name (ARN) of
   * the file system to which to replicate. The file system's replication overwrite
   * protection must be disabled. For more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/efs-replication#replicate-existing-destination">Replicating
   * to an existing file system</a> in the <i>Amazon EFS User Guide</i>.</p> </li>
   * <li> <p>If you are replicating the file system to a file system that's in a
   * different account than the source file system (cross-account replication), you
   * need to provide the ARN for the file system and the IAM role that allows Amazon
   * EFS to perform replication on the destination account. The file system's
   * replication overwrite protection must be disabled. For more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/cross-account-replication.html">Replicating
   * across Amazon Web Services accounts</a> in the <i>Amazon EFS User Guide</i>.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DestinationToCreate">AWS
   * API Reference</a></p>
   */
  class DestinationToCreate
  {
  public:
    AWS_EFS_API DestinationToCreate();
    AWS_EFS_API DestinationToCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API DestinationToCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>To create a file system that uses Regional storage, specify the Amazon Web
     * Services Region in which to create the destination file system. The Region must
     * be enabled for the Amazon Web Services account that owns the source file system.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Managing
     * Amazon Web Services Regions</a> in the <i>Amazon Web Services General Reference
     * Reference Guide</i>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline DestinationToCreate& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline DestinationToCreate& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline DestinationToCreate& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To create a file system that uses One Zone storage, specify the name of the
     * Availability Zone in which to create the destination file system.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const{ return m_availabilityZoneName; }
    inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }
    inline void SetAvailabilityZoneName(const Aws::String& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = value; }
    inline void SetAvailabilityZoneName(Aws::String&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::move(value); }
    inline void SetAvailabilityZoneName(const char* value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName.assign(value); }
    inline DestinationToCreate& WithAvailabilityZoneName(const Aws::String& value) { SetAvailabilityZoneName(value); return *this;}
    inline DestinationToCreate& WithAvailabilityZoneName(Aws::String&& value) { SetAvailabilityZoneName(std::move(value)); return *this;}
    inline DestinationToCreate& WithAvailabilityZoneName(const char* value) { SetAvailabilityZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the Key Management Service (KMS) key that you want to use to encrypt
     * the destination file system. If you do not specify a KMS key, Amazon EFS uses
     * your default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>. This
     * ID can be in one of the following formats:</p> <ul> <li> <p>Key ID - The unique
     * identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - The
     * ARN for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - The
     * ARN for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DestinationToCreate& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DestinationToCreate& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DestinationToCreate& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the file system to use for the destination. For
     * cross-account replication, this must be an ARN. The file system's replication
     * overwrite replication must be disabled. If no ID or ARN is specified, then a new
     * file system is created. </p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline DestinationToCreate& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline DestinationToCreate& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline DestinationToCreate& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the IAM role in the source account that allows
     * Amazon EFS to perform replication on its behalf. This is optional for
     * same-account replication and required for cross-account replication.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline DestinationToCreate& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DestinationToCreate& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DestinationToCreate& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_availabilityZoneName;
    bool m_availabilityZoneNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
