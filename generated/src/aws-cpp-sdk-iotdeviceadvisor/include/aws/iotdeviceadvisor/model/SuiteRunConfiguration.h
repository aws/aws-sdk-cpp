/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/model/DeviceUnderTest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   * <p>Gets suite run configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/SuiteRunConfiguration">AWS
   * API Reference</a></p>
   */
  class SuiteRunConfiguration
  {
  public:
    AWS_IOTDEVICEADVISOR_API SuiteRunConfiguration();
    AWS_IOTDEVICEADVISOR_API SuiteRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API SuiteRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets the primary device for the test suite run. This requires a thing ARN or
     * a certificate ARN.</p>
     */
    inline const DeviceUnderTest& GetPrimaryDevice() const{ return m_primaryDevice; }

    /**
     * <p>Sets the primary device for the test suite run. This requires a thing ARN or
     * a certificate ARN.</p>
     */
    inline bool PrimaryDeviceHasBeenSet() const { return m_primaryDeviceHasBeenSet; }

    /**
     * <p>Sets the primary device for the test suite run. This requires a thing ARN or
     * a certificate ARN.</p>
     */
    inline void SetPrimaryDevice(const DeviceUnderTest& value) { m_primaryDeviceHasBeenSet = true; m_primaryDevice = value; }

    /**
     * <p>Sets the primary device for the test suite run. This requires a thing ARN or
     * a certificate ARN.</p>
     */
    inline void SetPrimaryDevice(DeviceUnderTest&& value) { m_primaryDeviceHasBeenSet = true; m_primaryDevice = std::move(value); }

    /**
     * <p>Sets the primary device for the test suite run. This requires a thing ARN or
     * a certificate ARN.</p>
     */
    inline SuiteRunConfiguration& WithPrimaryDevice(const DeviceUnderTest& value) { SetPrimaryDevice(value); return *this;}

    /**
     * <p>Sets the primary device for the test suite run. This requires a thing ARN or
     * a certificate ARN.</p>
     */
    inline SuiteRunConfiguration& WithPrimaryDevice(DeviceUnderTest&& value) { SetPrimaryDevice(std::move(value)); return *this;}


    /**
     * <p>Sets test case list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedTestList() const{ return m_selectedTestList; }

    /**
     * <p>Sets test case list.</p>
     */
    inline bool SelectedTestListHasBeenSet() const { return m_selectedTestListHasBeenSet; }

    /**
     * <p>Sets test case list.</p>
     */
    inline void SetSelectedTestList(const Aws::Vector<Aws::String>& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList = value; }

    /**
     * <p>Sets test case list.</p>
     */
    inline void SetSelectedTestList(Aws::Vector<Aws::String>&& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList = std::move(value); }

    /**
     * <p>Sets test case list.</p>
     */
    inline SuiteRunConfiguration& WithSelectedTestList(const Aws::Vector<Aws::String>& value) { SetSelectedTestList(value); return *this;}

    /**
     * <p>Sets test case list.</p>
     */
    inline SuiteRunConfiguration& WithSelectedTestList(Aws::Vector<Aws::String>&& value) { SetSelectedTestList(std::move(value)); return *this;}

    /**
     * <p>Sets test case list.</p>
     */
    inline SuiteRunConfiguration& AddSelectedTestList(const Aws::String& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList.push_back(value); return *this; }

    /**
     * <p>Sets test case list.</p>
     */
    inline SuiteRunConfiguration& AddSelectedTestList(Aws::String&& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList.push_back(std::move(value)); return *this; }

    /**
     * <p>Sets test case list.</p>
     */
    inline SuiteRunConfiguration& AddSelectedTestList(const char* value) { m_selectedTestListHasBeenSet = true; m_selectedTestList.push_back(value); return *this; }


    /**
     * <p>TRUE if multiple test suites run in parallel.</p>
     */
    inline bool GetParallelRun() const{ return m_parallelRun; }

    /**
     * <p>TRUE if multiple test suites run in parallel.</p>
     */
    inline bool ParallelRunHasBeenSet() const { return m_parallelRunHasBeenSet; }

    /**
     * <p>TRUE if multiple test suites run in parallel.</p>
     */
    inline void SetParallelRun(bool value) { m_parallelRunHasBeenSet = true; m_parallelRun = value; }

    /**
     * <p>TRUE if multiple test suites run in parallel.</p>
     */
    inline SuiteRunConfiguration& WithParallelRun(bool value) { SetParallelRun(value); return *this;}

  private:

    DeviceUnderTest m_primaryDevice;
    bool m_primaryDeviceHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedTestList;
    bool m_selectedTestListHasBeenSet = false;

    bool m_parallelRun;
    bool m_parallelRunHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
