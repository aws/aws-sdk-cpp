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
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionInformation() = default;
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API SuiteDefinitionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const { return m_suiteDefinitionId; }
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }
    template<typename SuiteDefinitionIdT = Aws::String>
    void SetSuiteDefinitionId(SuiteDefinitionIdT&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::forward<SuiteDefinitionIdT>(value); }
    template<typename SuiteDefinitionIdT = Aws::String>
    SuiteDefinitionInformation& WithSuiteDefinitionId(SuiteDefinitionIdT&& value) { SetSuiteDefinitionId(std::forward<SuiteDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite name of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const { return m_suiteDefinitionName; }
    inline bool SuiteDefinitionNameHasBeenSet() const { return m_suiteDefinitionNameHasBeenSet; }
    template<typename SuiteDefinitionNameT = Aws::String>
    void SetSuiteDefinitionName(SuiteDefinitionNameT&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::forward<SuiteDefinitionNameT>(value); }
    template<typename SuiteDefinitionNameT = Aws::String>
    SuiteDefinitionInformation& WithSuiteDefinitionName(SuiteDefinitionNameT&& value) { SetSuiteDefinitionName(std::forward<SuiteDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the devices that are under test for the test suite.</p>
     */
    inline const Aws::Vector<DeviceUnderTest>& GetDefaultDevices() const { return m_defaultDevices; }
    inline bool DefaultDevicesHasBeenSet() const { return m_defaultDevicesHasBeenSet; }
    template<typename DefaultDevicesT = Aws::Vector<DeviceUnderTest>>
    void SetDefaultDevices(DefaultDevicesT&& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices = std::forward<DefaultDevicesT>(value); }
    template<typename DefaultDevicesT = Aws::Vector<DeviceUnderTest>>
    SuiteDefinitionInformation& WithDefaultDevices(DefaultDevicesT&& value) { SetDefaultDevices(std::forward<DefaultDevicesT>(value)); return *this;}
    template<typename DefaultDevicesT = DeviceUnderTest>
    SuiteDefinitionInformation& AddDefaultDevices(DefaultDevicesT&& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices.emplace_back(std::forward<DefaultDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if the test suite is intended for qualification.</p>
     */
    inline bool GetIntendedForQualification() const { return m_intendedForQualification; }
    inline bool IntendedForQualificationHasBeenSet() const { return m_intendedForQualificationHasBeenSet; }
    inline void SetIntendedForQualification(bool value) { m_intendedForQualificationHasBeenSet = true; m_intendedForQualification = value; }
    inline SuiteDefinitionInformation& WithIntendedForQualification(bool value) { SetIntendedForQualification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verifies if the test suite is a long duration test.</p>
     */
    inline bool GetIsLongDurationTest() const { return m_isLongDurationTest; }
    inline bool IsLongDurationTestHasBeenSet() const { return m_isLongDurationTestHasBeenSet; }
    inline void SetIsLongDurationTest(bool value) { m_isLongDurationTestHasBeenSet = true; m_isLongDurationTest = value; }
    inline SuiteDefinitionInformation& WithIsLongDurationTest(bool value) { SetIsLongDurationTest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets the MQTT protocol that is configured in the suite definition.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline SuiteDefinitionInformation& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the test suite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SuiteDefinitionInformation& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet = false;

    Aws::Vector<DeviceUnderTest> m_defaultDevices;
    bool m_defaultDevicesHasBeenSet = false;

    bool m_intendedForQualification{false};
    bool m_intendedForQualificationHasBeenSet = false;

    bool m_isLongDurationTest{false};
    bool m_isLongDurationTestHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
