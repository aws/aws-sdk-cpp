/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/VolumeSpecification.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Configuration of requested EBS block device associated with the instance
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/EbsBlockDevice">AWS
   * API Reference</a></p>
   */
  class EbsBlockDevice
  {
  public:
    AWS_EMR_API EbsBlockDevice() = default;
    AWS_EMR_API EbsBlockDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API EbsBlockDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    EbsBlockDevice& WithVolumeSpecification(VolumeSpecificationT&& value) { SetVolumeSpecification(std::forward<VolumeSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline const Aws::String& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Aws::String>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Aws::String>
    EbsBlockDevice& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}
  private:

    VolumeSpecification m_volumeSpecification;
    bool m_volumeSpecificationHasBeenSet = false;

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
