/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/InstanceStatus.h>
#include <aws/devicefarm/model/InstanceProfile.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the device instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeviceInstance">AWS
   * API Reference</a></p>
   */
  class DeviceInstance
  {
  public:
    AWS_DEVICEFARM_API DeviceInstance();
    AWS_DEVICEFARM_API DeviceInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API DeviceInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline DeviceInstance& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline DeviceInstance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline DeviceInstance& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeviceInstance& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeviceInstance& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeviceInstance& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline DeviceInstance& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline DeviceInstance& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline DeviceInstance& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline DeviceInstance& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline DeviceInstance& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p>The status of the device instance. Valid values are listed here.</p>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the device instance. Valid values are listed here.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the device instance. Valid values are listed here.</p>
     */
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the device instance. Valid values are listed here.</p>
     */
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the device instance. Valid values are listed here.</p>
     */
    inline DeviceInstance& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the device instance. Valid values are listed here.</p>
     */
    inline DeviceInstance& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline const Aws::String& GetUdid() const{ return m_udid; }

    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline bool UdidHasBeenSet() const { return m_udidHasBeenSet; }

    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline void SetUdid(const Aws::String& value) { m_udidHasBeenSet = true; m_udid = value; }

    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline void SetUdid(Aws::String&& value) { m_udidHasBeenSet = true; m_udid = std::move(value); }

    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline void SetUdid(const char* value) { m_udidHasBeenSet = true; m_udid.assign(value); }

    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline DeviceInstance& WithUdid(const Aws::String& value) { SetUdid(value); return *this;}

    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline DeviceInstance& WithUdid(Aws::String&& value) { SetUdid(std::move(value)); return *this;}

    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline DeviceInstance& WithUdid(const char* value) { SetUdid(value); return *this;}


    /**
     * <p>A object that contains information about the instance profile.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const{ return m_instanceProfile; }

    /**
     * <p>A object that contains information about the instance profile.</p>
     */
    inline bool InstanceProfileHasBeenSet() const { return m_instanceProfileHasBeenSet; }

    /**
     * <p>A object that contains information about the instance profile.</p>
     */
    inline void SetInstanceProfile(const InstanceProfile& value) { m_instanceProfileHasBeenSet = true; m_instanceProfile = value; }

    /**
     * <p>A object that contains information about the instance profile.</p>
     */
    inline void SetInstanceProfile(InstanceProfile&& value) { m_instanceProfileHasBeenSet = true; m_instanceProfile = std::move(value); }

    /**
     * <p>A object that contains information about the instance profile.</p>
     */
    inline DeviceInstance& WithInstanceProfile(const InstanceProfile& value) { SetInstanceProfile(value); return *this;}

    /**
     * <p>A object that contains information about the instance profile.</p>
     */
    inline DeviceInstance& WithInstanceProfile(InstanceProfile&& value) { SetInstanceProfile(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    InstanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_udid;
    bool m_udidHasBeenSet = false;

    InstanceProfile m_instanceProfile;
    bool m_instanceProfileHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
