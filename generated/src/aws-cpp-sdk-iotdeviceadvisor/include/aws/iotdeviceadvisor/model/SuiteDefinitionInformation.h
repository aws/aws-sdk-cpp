/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotdeviceadvisor/model/Protocol.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about the suite definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/SuiteDefinitionInformation">AWS
   * API Reference</a></p>
   */
  class SuiteDefinitionInformation
  {
  public:
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionInformation();
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }
    inline SuiteDefinitionInformation& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}
    inline SuiteDefinitionInformation& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}
    inline SuiteDefinitionInformation& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite name of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const{ return m_suiteDefinitionName; }
    inline bool SuiteDefinitionNameHasBeenSet() const { return m_suiteDefinitionNameHasBeenSet; }
    inline void SetSuiteDefinitionName(const Aws::String& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = value; }
    inline void SetSuiteDefinitionName(Aws::String&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::move(value); }
    inline void SetSuiteDefinitionName(const char* value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName.assign(value); }
    inline SuiteDefinitionInformation& WithSuiteDefinitionName(const Aws::String& value) { SetSuiteDefinitionName(value); return *this;}
    inline SuiteDefinitionInformation& WithSuiteDefinitionName(Aws::String&& value) { SetSuiteDefinitionName(std::move(value)); return *this;}
    inline SuiteDefinitionInformation& WithSuiteDefinitionName(const char* value) { SetSuiteDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the devices that are under test for the test suite.</p>
     */
    inline const Aws::Vector<DeviceUnderTest>& GetDefaultDevices() const{ return m_defaultDevices; }
    inline bool DefaultDevicesHasBeenSet() const { return m_defaultDevicesHasBeenSet; }
    inline void SetDefaultDevices(const Aws::Vector<DeviceUnderTest>& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices = value; }
    inline void SetDefaultDevices(Aws::Vector<DeviceUnderTest>&& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices = std::move(value); }
    inline SuiteDefinitionInformation& WithDefaultDevices(const Aws::Vector<DeviceUnderTest>& value) { SetDefaultDevices(value); return *this;}
    inline SuiteDefinitionInformation& WithDefaultDevices(Aws::Vector<DeviceUnderTest>&& value) { SetDefaultDevices(std::move(value)); return *this;}
    inline SuiteDefinitionInformation& AddDefaultDevices(const DeviceUnderTest& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices.push_back(value); return *this; }
    inline SuiteDefinitionInformation& AddDefaultDevices(DeviceUnderTest&& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if the test suite is intended for qualification.</p>
     */
    inline bool GetIntendedForQualification() const{ return m_intendedForQualification; }
    inline bool IntendedForQualificationHasBeenSet() const { return m_intendedForQualificationHasBeenSet; }
    inline void SetIntendedForQualification(bool value) { m_intendedForQualificationHasBeenSet = true; m_intendedForQualification = value; }
    inline SuiteDefinitionInformation& WithIntendedForQualification(bool value) { SetIntendedForQualification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verifies if the test suite is a long duration test.</p>
     */
    inline bool GetIsLongDurationTest() const{ return m_isLongDurationTest; }
    inline bool IsLongDurationTestHasBeenSet() const { return m_isLongDurationTestHasBeenSet; }
    inline void SetIsLongDurationTest(bool value) { m_isLongDurationTestHasBeenSet = true; m_isLongDurationTest = value; }
    inline SuiteDefinitionInformation& WithIsLongDurationTest(bool value) { SetIsLongDurationTest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline SuiteDefinitionInformation& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline SuiteDefinitionInformation& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the test suite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline SuiteDefinitionInformation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline SuiteDefinitionInformation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet = false;

    Aws::Vector<DeviceUnderTest> m_defaultDevices;
    bool m_defaultDevicesHasBeenSet = false;

    bool m_intendedForQualification;
    bool m_intendedForQualificationHasBeenSet = false;

    bool m_isLongDurationTest;
    bool m_isLongDurationTestHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
