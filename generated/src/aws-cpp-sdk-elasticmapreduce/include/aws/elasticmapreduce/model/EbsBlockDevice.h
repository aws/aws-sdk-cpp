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
    AWS_EMR_API EbsBlockDevice();
    AWS_EMR_API EbsBlockDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API EbsBlockDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>EBS volume specifications such as volume type, IOPS, size (GiB) and
     * throughput (MiB/s) that are requested for the EBS volume attached to an EC2
     * instance in the cluster.</p>
     */
    inline const VolumeSpecification& GetVolumeSpecification() const{ return m_volumeSpecification; }

    /**
     * <p>EBS volume specifications such as volume type, IOPS, size (GiB) and
     * throughput (MiB/s) that are requested for the EBS volume attached to an EC2
     * instance in the cluster.</p>
     */
    inline bool VolumeSpecificationHasBeenSet() const { return m_volumeSpecificationHasBeenSet; }

    /**
     * <p>EBS volume specifications such as volume type, IOPS, size (GiB) and
     * throughput (MiB/s) that are requested for the EBS volume attached to an EC2
     * instance in the cluster.</p>
     */
    inline void SetVolumeSpecification(const VolumeSpecification& value) { m_volumeSpecificationHasBeenSet = true; m_volumeSpecification = value; }

    /**
     * <p>EBS volume specifications such as volume type, IOPS, size (GiB) and
     * throughput (MiB/s) that are requested for the EBS volume attached to an EC2
     * instance in the cluster.</p>
     */
    inline void SetVolumeSpecification(VolumeSpecification&& value) { m_volumeSpecificationHasBeenSet = true; m_volumeSpecification = std::move(value); }

    /**
     * <p>EBS volume specifications such as volume type, IOPS, size (GiB) and
     * throughput (MiB/s) that are requested for the EBS volume attached to an EC2
     * instance in the cluster.</p>
     */
    inline EbsBlockDevice& WithVolumeSpecification(const VolumeSpecification& value) { SetVolumeSpecification(value); return *this;}

    /**
     * <p>EBS volume specifications such as volume type, IOPS, size (GiB) and
     * throughput (MiB/s) that are requested for the EBS volume attached to an EC2
     * instance in the cluster.</p>
     */
    inline EbsBlockDevice& WithVolumeSpecification(VolumeSpecification&& value) { SetVolumeSpecification(std::move(value)); return *this;}


    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline EbsBlockDevice& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline EbsBlockDevice& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline EbsBlockDevice& WithDevice(const char* value) { SetDevice(value); return *this;}

  private:

    VolumeSpecification m_volumeSpecification;
    bool m_volumeSpecificationHasBeenSet = false;

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
