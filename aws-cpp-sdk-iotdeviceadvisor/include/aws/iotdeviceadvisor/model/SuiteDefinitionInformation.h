/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Get suite definition information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/SuiteDefinitionInformation">AWS
   * API Reference</a></p>
   */
  class AWS_IOTDEVICEADVISOR_API SuiteDefinitionInformation
  {
  public:
    SuiteDefinitionInformation();
    SuiteDefinitionInformation(Aws::Utils::Json::JsonView jsonValue);
    SuiteDefinitionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Get suite definition Id.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Get suite definition Id.</p>
     */
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }

    /**
     * <p>Get suite definition Id.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }

    /**
     * <p>Get suite definition Id.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Get suite definition Id.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }

    /**
     * <p>Get suite definition Id.</p>
     */
    inline SuiteDefinitionInformation& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Get suite definition Id.</p>
     */
    inline SuiteDefinitionInformation& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Get suite definition Id.</p>
     */
    inline SuiteDefinitionInformation& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Get test suite name.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const{ return m_suiteDefinitionName; }

    /**
     * <p>Get test suite name.</p>
     */
    inline bool SuiteDefinitionNameHasBeenSet() const { return m_suiteDefinitionNameHasBeenSet; }

    /**
     * <p>Get test suite name.</p>
     */
    inline void SetSuiteDefinitionName(const Aws::String& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = value; }

    /**
     * <p>Get test suite name.</p>
     */
    inline void SetSuiteDefinitionName(Aws::String&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::move(value); }

    /**
     * <p>Get test suite name.</p>
     */
    inline void SetSuiteDefinitionName(const char* value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName.assign(value); }

    /**
     * <p>Get test suite name.</p>
     */
    inline SuiteDefinitionInformation& WithSuiteDefinitionName(const Aws::String& value) { SetSuiteDefinitionName(value); return *this;}

    /**
     * <p>Get test suite name.</p>
     */
    inline SuiteDefinitionInformation& WithSuiteDefinitionName(Aws::String&& value) { SetSuiteDefinitionName(std::move(value)); return *this;}

    /**
     * <p>Get test suite name.</p>
     */
    inline SuiteDefinitionInformation& WithSuiteDefinitionName(const char* value) { SetSuiteDefinitionName(value); return *this;}


    /**
     * <p>Specifies the devices under test.</p>
     */
    inline const Aws::Vector<DeviceUnderTest>& GetDefaultDevices() const{ return m_defaultDevices; }

    /**
     * <p>Specifies the devices under test.</p>
     */
    inline bool DefaultDevicesHasBeenSet() const { return m_defaultDevicesHasBeenSet; }

    /**
     * <p>Specifies the devices under test.</p>
     */
    inline void SetDefaultDevices(const Aws::Vector<DeviceUnderTest>& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices = value; }

    /**
     * <p>Specifies the devices under test.</p>
     */
    inline void SetDefaultDevices(Aws::Vector<DeviceUnderTest>&& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices = std::move(value); }

    /**
     * <p>Specifies the devices under test.</p>
     */
    inline SuiteDefinitionInformation& WithDefaultDevices(const Aws::Vector<DeviceUnderTest>& value) { SetDefaultDevices(value); return *this;}

    /**
     * <p>Specifies the devices under test.</p>
     */
    inline SuiteDefinitionInformation& WithDefaultDevices(Aws::Vector<DeviceUnderTest>&& value) { SetDefaultDevices(std::move(value)); return *this;}

    /**
     * <p>Specifies the devices under test.</p>
     */
    inline SuiteDefinitionInformation& AddDefaultDevices(const DeviceUnderTest& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices.push_back(value); return *this; }

    /**
     * <p>Specifies the devices under test.</p>
     */
    inline SuiteDefinitionInformation& AddDefaultDevices(DeviceUnderTest&& value) { m_defaultDevicesHasBeenSet = true; m_defaultDevices.push_back(std::move(value)); return *this; }


    /**
     * <p>Gets the test suites which will be used for qualification.</p>
     */
    inline bool GetIntendedForQualification() const{ return m_intendedForQualification; }

    /**
     * <p>Gets the test suites which will be used for qualification.</p>
     */
    inline bool IntendedForQualificationHasBeenSet() const { return m_intendedForQualificationHasBeenSet; }

    /**
     * <p>Gets the test suites which will be used for qualification.</p>
     */
    inline void SetIntendedForQualification(bool value) { m_intendedForQualificationHasBeenSet = true; m_intendedForQualification = value; }

    /**
     * <p>Gets the test suites which will be used for qualification.</p>
     */
    inline SuiteDefinitionInformation& WithIntendedForQualification(bool value) { SetIntendedForQualification(value); return *this;}


    /**
     * <p>Gets the information of when the test suite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Gets the information of when the test suite was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Gets the information of when the test suite was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Gets the information of when the test suite was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Gets the information of when the test suite was created.</p>
     */
    inline SuiteDefinitionInformation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Gets the information of when the test suite was created.</p>
     */
    inline SuiteDefinitionInformation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet;

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet;

    Aws::Vector<DeviceUnderTest> m_defaultDevices;
    bool m_defaultDevicesHasBeenSet;

    bool m_intendedForQualification;
    bool m_intendedForQualificationHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
