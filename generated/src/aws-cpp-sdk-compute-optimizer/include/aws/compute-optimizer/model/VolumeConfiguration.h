/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the configuration of an Amazon Elastic Block Store (Amazon EBS)
   * volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/VolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class VolumeConfiguration
  {
  public:
    AWS_COMPUTEOPTIMIZER_API VolumeConfiguration();
    AWS_COMPUTEOPTIMIZER_API VolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API VolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The volume type.</p> <p>The volume types can be the following:</p> <ul> <li>
     * <p>General Purpose SSD <code>gp2</code> and <code>gp3</code> </p> </li> <li>
     * <p>Provisioned IOPS SSD <code>io1</code>, <code>io2</code>, and <code>io2 Block
     * Express</code> </p> </li> <li> <p>Throughput Optimized HDD <code>st1</code> </p>
     * </li> <li> <p>Cold HDD <code>sc1</code> </p> </li> <li> <p>Magnetic volumes
     * <code>standard</code> </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }
    inline VolumeConfiguration& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}
    inline VolumeConfiguration& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}
    inline VolumeConfiguration& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiB.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline VolumeConfiguration& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline IOPS of the volume.</p>
     */
    inline int GetVolumeBaselineIOPS() const{ return m_volumeBaselineIOPS; }
    inline bool VolumeBaselineIOPSHasBeenSet() const { return m_volumeBaselineIOPSHasBeenSet; }
    inline void SetVolumeBaselineIOPS(int value) { m_volumeBaselineIOPSHasBeenSet = true; m_volumeBaselineIOPS = value; }
    inline VolumeConfiguration& WithVolumeBaselineIOPS(int value) { SetVolumeBaselineIOPS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The burst IOPS of the volume.</p>
     */
    inline int GetVolumeBurstIOPS() const{ return m_volumeBurstIOPS; }
    inline bool VolumeBurstIOPSHasBeenSet() const { return m_volumeBurstIOPSHasBeenSet; }
    inline void SetVolumeBurstIOPS(int value) { m_volumeBurstIOPSHasBeenSet = true; m_volumeBurstIOPS = value; }
    inline VolumeConfiguration& WithVolumeBurstIOPS(int value) { SetVolumeBurstIOPS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline throughput of the volume.</p>
     */
    inline int GetVolumeBaselineThroughput() const{ return m_volumeBaselineThroughput; }
    inline bool VolumeBaselineThroughputHasBeenSet() const { return m_volumeBaselineThroughputHasBeenSet; }
    inline void SetVolumeBaselineThroughput(int value) { m_volumeBaselineThroughputHasBeenSet = true; m_volumeBaselineThroughput = value; }
    inline VolumeConfiguration& WithVolumeBaselineThroughput(int value) { SetVolumeBaselineThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The burst throughput of the volume.</p>
     */
    inline int GetVolumeBurstThroughput() const{ return m_volumeBurstThroughput; }
    inline bool VolumeBurstThroughputHasBeenSet() const { return m_volumeBurstThroughputHasBeenSet; }
    inline void SetVolumeBurstThroughput(int value) { m_volumeBurstThroughputHasBeenSet = true; m_volumeBurstThroughput = value; }
    inline VolumeConfiguration& WithVolumeBurstThroughput(int value) { SetVolumeBurstThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the image used to boot the instance during launch. </p>
     */
    inline bool GetRootVolume() const{ return m_rootVolume; }
    inline bool RootVolumeHasBeenSet() const { return m_rootVolumeHasBeenSet; }
    inline void SetRootVolume(bool value) { m_rootVolumeHasBeenSet = true; m_rootVolume = value; }
    inline VolumeConfiguration& WithRootVolume(bool value) { SetRootVolume(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    int m_volumeBaselineIOPS;
    bool m_volumeBaselineIOPSHasBeenSet = false;

    int m_volumeBurstIOPS;
    bool m_volumeBurstIOPSHasBeenSet = false;

    int m_volumeBaselineThroughput;
    bool m_volumeBaselineThroughputHasBeenSet = false;

    int m_volumeBurstThroughput;
    bool m_volumeBurstThroughputHasBeenSet = false;

    bool m_rootVolume;
    bool m_rootVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
