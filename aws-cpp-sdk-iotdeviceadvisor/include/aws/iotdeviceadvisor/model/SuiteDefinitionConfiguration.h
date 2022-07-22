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
   * <p>Gets Suite Definition Configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/SuiteDefinitionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTDEVICEADVISOR_API SuiteDefinitionConfiguration
  {
  public:
    SuiteDefinitionConfiguration();
    SuiteDefinitionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SuiteDefinitionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Gets Suite Definition Configuration name.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const{ return m_suiteDefinitionName; }

    /**
     * <p>Gets Suite Definition Configuration name.</p>
     */
    inline bool SuiteDefinitionNameHasBeenSet() const { return m_suiteDefinitionNameHasBeenSet; }

    /**
     * <p>Gets Suite Definition Configuration name.</p>
     */
    inline void SetSuiteDefinitionName(const Aws::String& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = value; }

    /**
     * <p>Gets Suite Definition Configuration name.</p>
     */
    inline void SetSuiteDefinitionName(Aws::String&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::move(value); }

    /**
     * <p>Gets Suite Definition Configuration name.</p>
     */
    inline void SetSuiteDefinitionName(const char* value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName.assign(value); }

    /**
     * <p>Gets Suite Definition Configuration name.</p>
     */
    inline SuiteDefinitionConfiguration& WithSuiteDefinitionName(const Aws::String& value) { SetSuiteDefinitionName(value); return *this;}

    /**
     * <p>Gets Suite Definition Configuration name.</p>
     */
    inline SuiteDefinitionConfiguration& WithSuiteDefinitionName(Aws::String&& value) { SetSuiteDefinitionName(std::move(value)); return *this;}

    /**
     * <p>Gets Suite Definition Configuration name.</p>
     */
    inline SuiteDefinitionConfiguration& WithSuiteDefinitionName(const char* value) { SetSuiteDefinitionName(value); return *this;}


    /**
     * <p>Gets the devices configured.</p>
     */
    inline const Aws::Vector<DeviceUnderTest>& GetDevices() const{ return m_devices; }

    /**
     * <p>Gets the devices configured.</p>
     */
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }

    /**
     * <p>Gets the devices configured.</p>
     */
    inline void SetDevices(const Aws::Vector<DeviceUnderTest>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * <p>Gets the devices configured.</p>
     */
    inline void SetDevices(Aws::Vector<DeviceUnderTest>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * <p>Gets the devices configured.</p>
     */
    inline SuiteDefinitionConfiguration& WithDevices(const Aws::Vector<DeviceUnderTest>& value) { SetDevices(value); return *this;}

    /**
     * <p>Gets the devices configured.</p>
     */
    inline SuiteDefinitionConfiguration& WithDevices(Aws::Vector<DeviceUnderTest>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>Gets the devices configured.</p>
     */
    inline SuiteDefinitionConfiguration& AddDevices(const DeviceUnderTest& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * <p>Gets the devices configured.</p>
     */
    inline SuiteDefinitionConfiguration& AddDevices(DeviceUnderTest&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>Gets the tests intended for qualification in a suite.</p>
     */
    inline bool GetIntendedForQualification() const{ return m_intendedForQualification; }

    /**
     * <p>Gets the tests intended for qualification in a suite.</p>
     */
    inline bool IntendedForQualificationHasBeenSet() const { return m_intendedForQualificationHasBeenSet; }

    /**
     * <p>Gets the tests intended for qualification in a suite.</p>
     */
    inline void SetIntendedForQualification(bool value) { m_intendedForQualificationHasBeenSet = true; m_intendedForQualification = value; }

    /**
     * <p>Gets the tests intended for qualification in a suite.</p>
     */
    inline SuiteDefinitionConfiguration& WithIntendedForQualification(bool value) { SetIntendedForQualification(value); return *this;}


    /**
     * <p> Verifies if the test suite is a long duration test. </p>
     */
    inline bool GetIsLongDurationTest() const{ return m_isLongDurationTest; }

    /**
     * <p> Verifies if the test suite is a long duration test. </p>
     */
    inline bool IsLongDurationTestHasBeenSet() const { return m_isLongDurationTestHasBeenSet; }

    /**
     * <p> Verifies if the test suite is a long duration test. </p>
     */
    inline void SetIsLongDurationTest(bool value) { m_isLongDurationTestHasBeenSet = true; m_isLongDurationTest = value; }

    /**
     * <p> Verifies if the test suite is a long duration test. </p>
     */
    inline SuiteDefinitionConfiguration& WithIsLongDurationTest(bool value) { SetIsLongDurationTest(value); return *this;}


    /**
     * <p>Gets test suite root group.</p>
     */
    inline const Aws::String& GetRootGroup() const{ return m_rootGroup; }

    /**
     * <p>Gets test suite root group.</p>
     */
    inline bool RootGroupHasBeenSet() const { return m_rootGroupHasBeenSet; }

    /**
     * <p>Gets test suite root group.</p>
     */
    inline void SetRootGroup(const Aws::String& value) { m_rootGroupHasBeenSet = true; m_rootGroup = value; }

    /**
     * <p>Gets test suite root group.</p>
     */
    inline void SetRootGroup(Aws::String&& value) { m_rootGroupHasBeenSet = true; m_rootGroup = std::move(value); }

    /**
     * <p>Gets test suite root group.</p>
     */
    inline void SetRootGroup(const char* value) { m_rootGroupHasBeenSet = true; m_rootGroup.assign(value); }

    /**
     * <p>Gets test suite root group.</p>
     */
    inline SuiteDefinitionConfiguration& WithRootGroup(const Aws::String& value) { SetRootGroup(value); return *this;}

    /**
     * <p>Gets test suite root group.</p>
     */
    inline SuiteDefinitionConfiguration& WithRootGroup(Aws::String&& value) { SetRootGroup(std::move(value)); return *this;}

    /**
     * <p>Gets test suite root group.</p>
     */
    inline SuiteDefinitionConfiguration& WithRootGroup(const char* value) { SetRootGroup(value); return *this;}


    /**
     * <p>Gets the device permission ARN.</p>
     */
    inline const Aws::String& GetDevicePermissionRoleArn() const{ return m_devicePermissionRoleArn; }

    /**
     * <p>Gets the device permission ARN.</p>
     */
    inline bool DevicePermissionRoleArnHasBeenSet() const { return m_devicePermissionRoleArnHasBeenSet; }

    /**
     * <p>Gets the device permission ARN.</p>
     */
    inline void SetDevicePermissionRoleArn(const Aws::String& value) { m_devicePermissionRoleArnHasBeenSet = true; m_devicePermissionRoleArn = value; }

    /**
     * <p>Gets the device permission ARN.</p>
     */
    inline void SetDevicePermissionRoleArn(Aws::String&& value) { m_devicePermissionRoleArnHasBeenSet = true; m_devicePermissionRoleArn = std::move(value); }

    /**
     * <p>Gets the device permission ARN.</p>
     */
    inline void SetDevicePermissionRoleArn(const char* value) { m_devicePermissionRoleArnHasBeenSet = true; m_devicePermissionRoleArn.assign(value); }

    /**
     * <p>Gets the device permission ARN.</p>
     */
    inline SuiteDefinitionConfiguration& WithDevicePermissionRoleArn(const Aws::String& value) { SetDevicePermissionRoleArn(value); return *this;}

    /**
     * <p>Gets the device permission ARN.</p>
     */
    inline SuiteDefinitionConfiguration& WithDevicePermissionRoleArn(Aws::String&& value) { SetDevicePermissionRoleArn(std::move(value)); return *this;}

    /**
     * <p>Gets the device permission ARN.</p>
     */
    inline SuiteDefinitionConfiguration& WithDevicePermissionRoleArn(const char* value) { SetDevicePermissionRoleArn(value); return *this;}


    /**
     * <p> Gets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p> Gets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p> Gets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p> Gets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p> Gets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline SuiteDefinitionConfiguration& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * <p> Gets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline SuiteDefinitionConfiguration& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet;

    Aws::Vector<DeviceUnderTest> m_devices;
    bool m_devicesHasBeenSet;

    bool m_intendedForQualification;
    bool m_intendedForQualificationHasBeenSet;

    bool m_isLongDurationTest;
    bool m_isLongDurationTestHasBeenSet;

    Aws::String m_rootGroup;
    bool m_rootGroupHasBeenSet;

    Aws::String m_devicePermissionRoleArn;
    bool m_devicePermissionRoleArnHasBeenSet;

    Protocol m_protocol;
    bool m_protocolHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
