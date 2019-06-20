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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/VolumeType.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Amazon EBS volume. This data type maps directly to the Amazon
   * EC2 <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>
   * data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/EbsBlockDevice">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API EbsBlockDevice
  {
  public:
    EbsBlockDevice();
    EbsBlockDevice(Aws::Utils::Json::JsonView jsonValue);
    EbsBlockDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The snapshot ID.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot ID.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot ID.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot ID.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot ID.</p>
     */
    inline EbsBlockDevice& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID.</p>
     */
    inline EbsBlockDevice& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot ID.</p>
     */
    inline EbsBlockDevice& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline EbsBlockDevice& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The volume size, in GiB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The volume size, in GiB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The volume size, in GiB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The volume size, in GiB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline EbsBlockDevice& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes,
     * <code>io1</code> for Provisioned IOPS (SSD) volumes, <code>st1</code> for
     * Throughput Optimized hard disk drives (HDD), <code>sc1</code> for Cold HDD,and
     * <code>standard</code> for Magnetic volumes.</p> <p>If you specify the
     * <code>io1</code> volume type, you must also specify a value for the
     * <code>Iops</code> attribute. The maximum ratio of provisioned IOPS to requested
     * volume size (in GiB) is 50:1. AWS uses the default volume size (in GiB)
     * specified in the AMI attributes to set IOPS to 50 x (volume size).</p>
     */
    inline const VolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes,
     * <code>io1</code> for Provisioned IOPS (SSD) volumes, <code>st1</code> for
     * Throughput Optimized hard disk drives (HDD), <code>sc1</code> for Cold HDD,and
     * <code>standard</code> for Magnetic volumes.</p> <p>If you specify the
     * <code>io1</code> volume type, you must also specify a value for the
     * <code>Iops</code> attribute. The maximum ratio of provisioned IOPS to requested
     * volume size (in GiB) is 50:1. AWS uses the default volume size (in GiB)
     * specified in the AMI attributes to set IOPS to 50 x (volume size).</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes,
     * <code>io1</code> for Provisioned IOPS (SSD) volumes, <code>st1</code> for
     * Throughput Optimized hard disk drives (HDD), <code>sc1</code> for Cold HDD,and
     * <code>standard</code> for Magnetic volumes.</p> <p>If you specify the
     * <code>io1</code> volume type, you must also specify a value for the
     * <code>Iops</code> attribute. The maximum ratio of provisioned IOPS to requested
     * volume size (in GiB) is 50:1. AWS uses the default volume size (in GiB)
     * specified in the AMI attributes to set IOPS to 50 x (volume size).</p>
     */
    inline void SetVolumeType(const VolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes,
     * <code>io1</code> for Provisioned IOPS (SSD) volumes, <code>st1</code> for
     * Throughput Optimized hard disk drives (HDD), <code>sc1</code> for Cold HDD,and
     * <code>standard</code> for Magnetic volumes.</p> <p>If you specify the
     * <code>io1</code> volume type, you must also specify a value for the
     * <code>Iops</code> attribute. The maximum ratio of provisioned IOPS to requested
     * volume size (in GiB) is 50:1. AWS uses the default volume size (in GiB)
     * specified in the AMI attributes to set IOPS to 50 x (volume size).</p>
     */
    inline void SetVolumeType(VolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes,
     * <code>io1</code> for Provisioned IOPS (SSD) volumes, <code>st1</code> for
     * Throughput Optimized hard disk drives (HDD), <code>sc1</code> for Cold HDD,and
     * <code>standard</code> for Magnetic volumes.</p> <p>If you specify the
     * <code>io1</code> volume type, you must also specify a value for the
     * <code>Iops</code> attribute. The maximum ratio of provisioned IOPS to requested
     * volume size (in GiB) is 50:1. AWS uses the default volume size (in GiB)
     * specified in the AMI attributes to set IOPS to 50 x (volume size).</p>
     */
    inline EbsBlockDevice& WithVolumeType(const VolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes,
     * <code>io1</code> for Provisioned IOPS (SSD) volumes, <code>st1</code> for
     * Throughput Optimized hard disk drives (HDD), <code>sc1</code> for Cold HDD,and
     * <code>standard</code> for Magnetic volumes.</p> <p>If you specify the
     * <code>io1</code> volume type, you must also specify a value for the
     * <code>Iops</code> attribute. The maximum ratio of provisioned IOPS to requested
     * volume size (in GiB) is 50:1. AWS uses the default volume size (in GiB)
     * specified in the AMI attributes to set IOPS to 50 x (volume size).</p>
     */
    inline EbsBlockDevice& WithVolumeType(VolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p>Whether the volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Whether the volume is deleted on instance termination.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Whether the volume is deleted on instance termination.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Whether the volume is deleted on instance termination.</p>
     */
    inline EbsBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet;

    VolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
