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
    AWS_IOTDEVICEADVISOR_API SuiteRunConfiguration() = default;
    AWS_IOTDEVICEADVISOR_API SuiteRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API SuiteRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets the primary device for the test suite run. This requires a thing ARN or
     * a certificate ARN.</p>
     */
    inline const DeviceUnderTest& GetPrimaryDevice() const { return m_primaryDevice; }
    inline bool PrimaryDeviceHasBeenSet() const { return m_primaryDeviceHasBeenSet; }
    template<typename PrimaryDeviceT = DeviceUnderTest>
    void SetPrimaryDevice(PrimaryDeviceT&& value) { m_primaryDeviceHasBeenSet = true; m_primaryDevice = std::forward<PrimaryDeviceT>(value); }
    template<typename PrimaryDeviceT = DeviceUnderTest>
    SuiteRunConfiguration& WithPrimaryDevice(PrimaryDeviceT&& value) { SetPrimaryDevice(std::forward<PrimaryDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets test case list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedTestList() const { return m_selectedTestList; }
    inline bool SelectedTestListHasBeenSet() const { return m_selectedTestListHasBeenSet; }
    template<typename SelectedTestListT = Aws::Vector<Aws::String>>
    void SetSelectedTestList(SelectedTestListT&& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList = std::forward<SelectedTestListT>(value); }
    template<typename SelectedTestListT = Aws::Vector<Aws::String>>
    SuiteRunConfiguration& WithSelectedTestList(SelectedTestListT&& value) { SetSelectedTestList(std::forward<SelectedTestListT>(value)); return *this;}
    template<typename SelectedTestListT = Aws::String>
    SuiteRunConfiguration& AddSelectedTestList(SelectedTestListT&& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList.emplace_back(std::forward<SelectedTestListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>TRUE if multiple test suites run in parallel.</p>
     */
    inline bool GetParallelRun() const { return m_parallelRun; }
    inline bool ParallelRunHasBeenSet() const { return m_parallelRunHasBeenSet; }
    inline void SetParallelRun(bool value) { m_parallelRunHasBeenSet = true; m_parallelRun = value; }
    inline SuiteRunConfiguration& WithParallelRun(bool value) { SetParallelRun(value); return *this;}
    ///@}
  private:

    DeviceUnderTest m_primaryDevice;
    bool m_primaryDeviceHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedTestList;
    bool m_selectedTestListHasBeenSet = false;

    bool m_parallelRun{false};
    bool m_parallelRunHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
