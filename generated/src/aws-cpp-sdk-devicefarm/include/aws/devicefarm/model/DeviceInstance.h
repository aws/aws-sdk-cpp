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
    AWS_DEVICEFARM_API DeviceInstance() = default;
    AWS_DEVICEFARM_API DeviceInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API DeviceInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeviceInstance& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const { return m_deviceArn; }
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }
    template<typename DeviceArnT = Aws::String>
    void SetDeviceArn(DeviceArnT&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::forward<DeviceArnT>(value); }
    template<typename DeviceArnT = Aws::String>
    DeviceInstance& WithDeviceArn(DeviceArnT&& value) { SetDeviceArn(std::forward<DeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that describe the device instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    DeviceInstance& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    DeviceInstance& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the device instance. Valid values are listed here.</p>
     */
    inline InstanceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeviceInstance& WithStatus(InstanceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique device identifier for the device instance.</p>
     */
    inline const Aws::String& GetUdid() const { return m_udid; }
    inline bool UdidHasBeenSet() const { return m_udidHasBeenSet; }
    template<typename UdidT = Aws::String>
    void SetUdid(UdidT&& value) { m_udidHasBeenSet = true; m_udid = std::forward<UdidT>(value); }
    template<typename UdidT = Aws::String>
    DeviceInstance& WithUdid(UdidT&& value) { SetUdid(std::forward<UdidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A object that contains information about the instance profile.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const { return m_instanceProfile; }
    inline bool InstanceProfileHasBeenSet() const { return m_instanceProfileHasBeenSet; }
    template<typename InstanceProfileT = InstanceProfile>
    void SetInstanceProfile(InstanceProfileT&& value) { m_instanceProfileHasBeenSet = true; m_instanceProfile = std::forward<InstanceProfileT>(value); }
    template<typename InstanceProfileT = InstanceProfile>
    DeviceInstance& WithInstanceProfile(InstanceProfileT&& value) { SetInstanceProfile(std::forward<InstanceProfileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    InstanceStatus m_status{InstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_udid;
    bool m_udidHasBeenSet = false;

    InstanceProfile m_instanceProfile;
    bool m_instanceProfileHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
