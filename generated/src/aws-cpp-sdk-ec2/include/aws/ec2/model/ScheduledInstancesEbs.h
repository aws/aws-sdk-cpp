﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an EBS volume for a Scheduled Instance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstancesEbs">AWS
   * API Reference</a></p>
   */
  class ScheduledInstancesEbs
  {
  public:
    AWS_EC2_API ScheduledInstancesEbs();
    AWS_EC2_API ScheduledInstancesEbs(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ScheduledInstancesEbs& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether the volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline ScheduledInstancesEbs& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume is encrypted. You can attached encrypted volumes
     * only to instances that support them.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ScheduledInstancesEbs& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of I/O operations per second (IOPS) to provision for a
     * <code>gp3</code>, <code>io1</code>, or <code>io2</code> volume.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ScheduledInstancesEbs& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline ScheduledInstancesEbs& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline ScheduledInstancesEbs& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline ScheduledInstancesEbs& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiB.</p> <p>Default: If you're creating the volume
     * from a snapshot and don't specify a volume size, the default is the snapshot
     * size.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline ScheduledInstancesEbs& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type.</p> <p>Default: <code>gp2</code> </p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }
    inline ScheduledInstancesEbs& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}
    inline ScheduledInstancesEbs& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}
    inline ScheduledInstancesEbs& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}
    ///@}
  private:

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
