/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotdeviceadvisor/model/Protocol.h>
#include <aws/iotdeviceadvisor/model/DeviceUnderTest.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   * <p>Gets the suite definition configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/SuiteDefinitionConfiguration">AWS
   * API Reference</a></p>
   */
  class SuiteDefinitionConfiguration
  {
  public:
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionConfiguration() = default;
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Gets the suite definition name. This is a required parameter.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const { return m_suiteDefinitionName; }
    inline bool SuiteDefinitionNameHasBeenSet() const { return m_suiteDefinitionNameHasBeenSet; }
    template<typename SuiteDefinitionNameT = Aws::String>
    void SetSuiteDefinitionName(SuiteDefinitionNameT&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::forward<SuiteDefinitionNameT>(value); }
    template<typename SuiteDefinitionNameT = Aws::String>
    SuiteDefinitionConfiguration& WithSuiteDefinitionName(SuiteDefinitionNameT&& value) { SetSuiteDefinitionName(std::forward<SuiteDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets the devices configured.</p>
     */
    inline const Aws::Vector<DeviceUnderTest>& GetDevices() const { return m_devices; }
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }
    template<typename DevicesT = Aws::Vector<DeviceUnderTest>>
    void SetDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices = std::forward<DevicesT>(value); }
    template<typename DevicesT = Aws::Vector<DeviceUnderTest>>
    SuiteDefinitionConfiguration& WithDevices(DevicesT&& value) { SetDevices(std::forward<DevicesT>(value)); return *this;}
    template<typename DevicesT = DeviceUnderTest>
    SuiteDefinitionConfiguration& AddDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices.emplace_back(std::forward<DevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Gets the tests intended for qualification in a suite.</p>
     */
    inline bool GetIntendedForQualification() const { return m_intendedForQualification; }
    inline bool IntendedForQualificationHasBeenSet() const { return m_intendedForQualificationHasBeenSet; }
    inline void SetIntendedForQualification(bool value) { m_intendedForQualificationHasBeenSet = true; m_intendedForQualification = value; }
    inline SuiteDefinitionConfiguration& WithIntendedForQualification(bool value) { SetIntendedForQualification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verifies if the test suite is a long duration test.</p>
     */
    inline bool GetIsLongDurationTest() const { return m_isLongDurationTest; }
    inline bool IsLongDurationTestHasBeenSet() const { return m_isLongDurationTestHasBeenSet; }
    inline void SetIsLongDurationTest(bool value) { m_isLongDurationTestHasBeenSet = true; m_isLongDurationTest = value; }
    inline SuiteDefinitionConfiguration& WithIsLongDurationTest(bool value) { SetIsLongDurationTest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets the test suite root group. This is a required parameter. For updating or
     * creating the latest qualification suite, if
     * <code>intendedForQualification</code> is set to true, <code>rootGroup</code> can
     * be an empty string. If <code>intendedForQualification</code> is false,
     * <code>rootGroup</code> cannot be an empty string. If <code>rootGroup</code> is
     * empty, and <code>intendedForQualification</code> is set to true, all the
     * qualification tests are included, and the configuration is default.</p> <p> For
     * a qualification suite, the minimum length is 0, and the maximum is 2048. For a
     * non-qualification suite, the minimum length is 1, and the maximum is 2048. </p>
     */
    inline const Aws::String& GetRootGroup() const { return m_rootGroup; }
    inline bool RootGroupHasBeenSet() const { return m_rootGroupHasBeenSet; }
    template<typename RootGroupT = Aws::String>
    void SetRootGroup(RootGroupT&& value) { m_rootGroupHasBeenSet = true; m_rootGroup = std::forward<RootGroupT>(value); }
    template<typename RootGroupT = Aws::String>
    SuiteDefinitionConfiguration& WithRootGroup(RootGroupT&& value) { SetRootGroup(std::forward<RootGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets the device permission ARN. This is a required parameter.</p>
     */
    inline const Aws::String& GetDevicePermissionRoleArn() const { return m_devicePermissionRoleArn; }
    inline bool DevicePermissionRoleArnHasBeenSet() const { return m_devicePermissionRoleArnHasBeenSet; }
    template<typename DevicePermissionRoleArnT = Aws::String>
    void SetDevicePermissionRoleArn(DevicePermissionRoleArnT&& value) { m_devicePermissionRoleArnHasBeenSet = true; m_devicePermissionRoleArn = std::forward<DevicePermissionRoleArnT>(value); }
    template<typename DevicePermissionRoleArnT = Aws::String>
    SuiteDefinitionConfiguration& WithDevicePermissionRoleArn(DevicePermissionRoleArnT&& value) { SetDevicePermissionRoleArn(std::forward<DevicePermissionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline SuiteDefinitionConfiguration& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet = false;

    Aws::Vector<DeviceUnderTest> m_devices;
    bool m_devicesHasBeenSet = false;

    bool m_intendedForQualification{false};
    bool m_intendedForQualificationHasBeenSet = false;

    bool m_isLongDurationTest{false};
    bool m_isLongDurationTestHasBeenSet = false;

    Aws::String m_rootGroup;
    bool m_rootGroupHasBeenSet = false;

    Aws::String m_devicePermissionRoleArn;
    bool m_devicePermissionRoleArnHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
