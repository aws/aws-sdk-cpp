﻿/**
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
  class AWS_IOTDEVICEADVISOR_API SuiteRunConfiguration
  {
  public:
    SuiteRunConfiguration();
    SuiteRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SuiteRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Gets the primary device for suite run.</p>
     */
    inline const DeviceUnderTest& GetPrimaryDevice() const{ return m_primaryDevice; }

    /**
     * <p>Gets the primary device for suite run.</p>
     */
    inline bool PrimaryDeviceHasBeenSet() const { return m_primaryDeviceHasBeenSet; }

    /**
     * <p>Gets the primary device for suite run.</p>
     */
    inline void SetPrimaryDevice(const DeviceUnderTest& value) { m_primaryDeviceHasBeenSet = true; m_primaryDevice = value; }

    /**
     * <p>Gets the primary device for suite run.</p>
     */
    inline void SetPrimaryDevice(DeviceUnderTest&& value) { m_primaryDeviceHasBeenSet = true; m_primaryDevice = std::move(value); }

    /**
     * <p>Gets the primary device for suite run.</p>
     */
    inline SuiteRunConfiguration& WithPrimaryDevice(const DeviceUnderTest& value) { SetPrimaryDevice(value); return *this;}

    /**
     * <p>Gets the primary device for suite run.</p>
     */
    inline SuiteRunConfiguration& WithPrimaryDevice(DeviceUnderTest&& value) { SetPrimaryDevice(std::move(value)); return *this;}


    /**
     * <p>Gets test case list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedTestList() const{ return m_selectedTestList; }

    /**
     * <p>Gets test case list.</p>
     */
    inline bool SelectedTestListHasBeenSet() const { return m_selectedTestListHasBeenSet; }

    /**
     * <p>Gets test case list.</p>
     */
    inline void SetSelectedTestList(const Aws::Vector<Aws::String>& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList = value; }

    /**
     * <p>Gets test case list.</p>
     */
    inline void SetSelectedTestList(Aws::Vector<Aws::String>&& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList = std::move(value); }

    /**
     * <p>Gets test case list.</p>
     */
    inline SuiteRunConfiguration& WithSelectedTestList(const Aws::Vector<Aws::String>& value) { SetSelectedTestList(value); return *this;}

    /**
     * <p>Gets test case list.</p>
     */
    inline SuiteRunConfiguration& WithSelectedTestList(Aws::Vector<Aws::String>&& value) { SetSelectedTestList(std::move(value)); return *this;}

    /**
     * <p>Gets test case list.</p>
     */
    inline SuiteRunConfiguration& AddSelectedTestList(const Aws::String& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList.push_back(value); return *this; }

    /**
     * <p>Gets test case list.</p>
     */
    inline SuiteRunConfiguration& AddSelectedTestList(Aws::String&& value) { m_selectedTestListHasBeenSet = true; m_selectedTestList.push_back(std::move(value)); return *this; }

    /**
     * <p>Gets test case list.</p>
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
    bool m_primaryDeviceHasBeenSet;

    Aws::Vector<Aws::String> m_selectedTestList;
    bool m_selectedTestListHasBeenSet;

    bool m_parallelRun;
    bool m_parallelRunHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
