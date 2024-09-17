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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DeviceInstance& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeviceInstance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeviceInstance& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }
    inline DeviceInstance& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}
    inline DeviceInstance& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}
    inline DeviceInstance& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline DeviceInstance& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}
    inline DeviceInstance& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}
    inline DeviceInstance& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    inline DeviceInstance& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }
    inline DeviceInstance& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the device instance. Valid values are listed here.</p>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DeviceInstance& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}
    inline DeviceInstance& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline const Aws::String& GetUdid() const{ return m_udid; }
    inline bool UdidHasBeenSet() const { return m_udidHasBeenSet; }
    inline void SetUdid(const Aws::String& value) { m_udidHasBeenSet = true; m_udid = value; }
    inline void SetUdid(Aws::String&& value) { m_udidHasBeenSet = true; m_udid = std::move(value); }
    inline void SetUdid(const char* value) { m_udidHasBeenSet = true; m_udid.assign(value); }
    inline DeviceInstance& WithUdid(const Aws::String& value) { SetUdid(value); return *this;}
    inline DeviceInstance& WithUdid(Aws::String&& value) { SetUdid(std::move(value)); return *this;}
    inline DeviceInstance& WithUdid(const char* value) { SetUdid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A object that contains information about the instance profile.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const{ return m_instanceProfile; }
    inline bool InstanceProfileHasBeenSet() const { return m_instanceProfileHasBeenSet; }
    inline void SetInstanceProfile(const InstanceProfile& value) { m_instanceProfileHasBeenSet = true; m_instanceProfile = value; }
    inline void SetInstanceProfile(InstanceProfile&& value) { m_instanceProfileHasBeenSet = true; m_instanceProfile = std::move(value); }
    inline DeviceInstance& WithInstanceProfile(const InstanceProfile& value) { SetInstanceProfile(value); return *this;}
    inline DeviceInstance& WithInstanceProfile(InstanceProfile&& value) { SetInstanceProfile(std::move(value)); return *this;}
    ///@}
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
