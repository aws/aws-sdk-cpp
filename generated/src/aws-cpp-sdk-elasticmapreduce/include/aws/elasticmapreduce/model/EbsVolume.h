/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
   * <p>EBS block device that's attached to an EC2 instance.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/EbsVolume">AWS
   * API Reference</a></p>
   */
  class EbsVolume
  {
  public:
    AWS_EMR_API EbsVolume();
    AWS_EMR_API EbsVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API EbsVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline EbsVolume& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline EbsVolume& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}

    /**
     * <p>The device name that is exposed to the instance, such as /dev/sdh.</p>
     */
    inline EbsVolume& WithDevice(const char* value) { SetDevice(value); return *this;}


    /**
     * <p>The volume identifier of the EBS volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The volume identifier of the EBS volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The volume identifier of the EBS volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The volume identifier of the EBS volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The volume identifier of the EBS volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The volume identifier of the EBS volume.</p>
     */
    inline EbsVolume& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The volume identifier of the EBS volume.</p>
     */
    inline EbsVolume& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The volume identifier of the EBS volume.</p>
     */
    inline EbsVolume& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

  private:

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
