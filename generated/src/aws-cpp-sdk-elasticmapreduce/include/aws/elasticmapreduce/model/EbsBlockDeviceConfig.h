/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/VolumeSpecification.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Configuration of requested EBS block device associated with the instance
   * group with count of volumes that are associated to every instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/EbsBlockDeviceConfig">AWS
   * API Reference</a></p>
   */
  class EbsBlockDeviceConfig
  {
  public:
    AWS_EMR_API EbsBlockDeviceConfig() = default;
    AWS_EMR_API EbsBlockDeviceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API EbsBlockDeviceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>EBS volume specifications such as volume type, IOPS, size (GiB) and
     * throughput (MiB/s) that are requested for the EBS volume attached to an Amazon
     * EC2 instance in the cluster.</p>
     */
    inline const VolumeSpecification& GetVolumeSpecification() const { return m_volumeSpecification; }
    inline bool VolumeSpecificationHasBeenSet() const { return m_volumeSpecificationHasBeenSet; }
    template<typename VolumeSpecificationT = VolumeSpecification>
    void SetVolumeSpecification(VolumeSpecificationT&& value) { m_volumeSpecificationHasBeenSet = true; m_volumeSpecification = std::forward<VolumeSpecificationT>(value); }
    template<typename VolumeSpecificationT = VolumeSpecification>
    EbsBlockDeviceConfig& WithVolumeSpecification(VolumeSpecificationT&& value) { SetVolumeSpecification(std::forward<VolumeSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of EBS volumes with a specific volume configuration that are
     * associated with every instance in the instance group</p>
     */
    inline int GetVolumesPerInstance() const { return m_volumesPerInstance; }
    inline bool VolumesPerInstanceHasBeenSet() const { return m_volumesPerInstanceHasBeenSet; }
    inline void SetVolumesPerInstance(int value) { m_volumesPerInstanceHasBeenSet = true; m_volumesPerInstance = value; }
    inline EbsBlockDeviceConfig& WithVolumesPerInstance(int value) { SetVolumesPerInstance(value); return *this;}
    ///@}
  private:

    VolumeSpecification m_volumeSpecification;
    bool m_volumeSpecificationHasBeenSet = false;

    int m_volumesPerInstance{0};
    bool m_volumesPerInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
