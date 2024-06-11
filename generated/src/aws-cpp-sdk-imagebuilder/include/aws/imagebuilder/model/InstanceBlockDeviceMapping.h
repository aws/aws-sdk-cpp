/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/EbsInstanceBlockDeviceSpecification.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Defines block device mappings for the instance used to configure your
   * image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/InstanceBlockDeviceMapping">AWS
   * API Reference</a></p>
   */
  class InstanceBlockDeviceMapping
  {
  public:
    AWS_IMAGEBUILDER_API InstanceBlockDeviceMapping();
    AWS_IMAGEBUILDER_API InstanceBlockDeviceMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API InstanceBlockDeviceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device to which these mappings apply.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline InstanceBlockDeviceMapping& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline InstanceBlockDeviceMapping& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline InstanceBlockDeviceMapping& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to manage Amazon EBS-specific configuration for this mapping.</p>
     */
    inline const EbsInstanceBlockDeviceSpecification& GetEbs() const{ return m_ebs; }
    inline bool EbsHasBeenSet() const { return m_ebsHasBeenSet; }
    inline void SetEbs(const EbsInstanceBlockDeviceSpecification& value) { m_ebsHasBeenSet = true; m_ebs = value; }
    inline void SetEbs(EbsInstanceBlockDeviceSpecification&& value) { m_ebsHasBeenSet = true; m_ebs = std::move(value); }
    inline InstanceBlockDeviceMapping& WithEbs(const EbsInstanceBlockDeviceSpecification& value) { SetEbs(value); return *this;}
    inline InstanceBlockDeviceMapping& WithEbs(EbsInstanceBlockDeviceSpecification&& value) { SetEbs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to manage instance ephemeral devices.</p>
     */
    inline const Aws::String& GetVirtualName() const{ return m_virtualName; }
    inline bool VirtualNameHasBeenSet() const { return m_virtualNameHasBeenSet; }
    inline void SetVirtualName(const Aws::String& value) { m_virtualNameHasBeenSet = true; m_virtualName = value; }
    inline void SetVirtualName(Aws::String&& value) { m_virtualNameHasBeenSet = true; m_virtualName = std::move(value); }
    inline void SetVirtualName(const char* value) { m_virtualNameHasBeenSet = true; m_virtualName.assign(value); }
    inline InstanceBlockDeviceMapping& WithVirtualName(const Aws::String& value) { SetVirtualName(value); return *this;}
    inline InstanceBlockDeviceMapping& WithVirtualName(Aws::String&& value) { SetVirtualName(std::move(value)); return *this;}
    inline InstanceBlockDeviceMapping& WithVirtualName(const char* value) { SetVirtualName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to remove a mapping from the base image.</p>
     */
    inline const Aws::String& GetNoDevice() const{ return m_noDevice; }
    inline bool NoDeviceHasBeenSet() const { return m_noDeviceHasBeenSet; }
    inline void SetNoDevice(const Aws::String& value) { m_noDeviceHasBeenSet = true; m_noDevice = value; }
    inline void SetNoDevice(Aws::String&& value) { m_noDeviceHasBeenSet = true; m_noDevice = std::move(value); }
    inline void SetNoDevice(const char* value) { m_noDeviceHasBeenSet = true; m_noDevice.assign(value); }
    inline InstanceBlockDeviceMapping& WithNoDevice(const Aws::String& value) { SetNoDevice(value); return *this;}
    inline InstanceBlockDeviceMapping& WithNoDevice(Aws::String&& value) { SetNoDevice(std::move(value)); return *this;}
    inline InstanceBlockDeviceMapping& WithNoDevice(const char* value) { SetNoDevice(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    EbsInstanceBlockDeviceSpecification m_ebs;
    bool m_ebsHasBeenSet = false;

    Aws::String m_virtualName;
    bool m_virtualNameHasBeenSet = false;

    Aws::String m_noDevice;
    bool m_noDeviceHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
