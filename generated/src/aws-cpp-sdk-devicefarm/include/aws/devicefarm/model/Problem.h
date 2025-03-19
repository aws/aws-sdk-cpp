/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/ProblemDetail.h>
#include <aws/devicefarm/model/Device.h>
#include <aws/devicefarm/model/ExecutionResult.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents a specific warning or failure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Problem">AWS
   * API Reference</a></p>
   */
  class Problem
  {
  public:
    AWS_DEVICEFARM_API Problem() = default;
    AWS_DEVICEFARM_API Problem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Problem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the associated run.</p>
     */
    inline const ProblemDetail& GetRun() const { return m_run; }
    inline bool RunHasBeenSet() const { return m_runHasBeenSet; }
    template<typename RunT = ProblemDetail>
    void SetRun(RunT&& value) { m_runHasBeenSet = true; m_run = std::forward<RunT>(value); }
    template<typename RunT = ProblemDetail>
    Problem& WithRun(RunT&& value) { SetRun(std::forward<RunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the associated job.</p>
     */
    inline const ProblemDetail& GetJob() const { return m_job; }
    inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }
    template<typename JobT = ProblemDetail>
    void SetJob(JobT&& value) { m_jobHasBeenSet = true; m_job = std::forward<JobT>(value); }
    template<typename JobT = ProblemDetail>
    Problem& WithJob(JobT&& value) { SetJob(std::forward<JobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the associated suite.</p>
     */
    inline const ProblemDetail& GetSuite() const { return m_suite; }
    inline bool SuiteHasBeenSet() const { return m_suiteHasBeenSet; }
    template<typename SuiteT = ProblemDetail>
    void SetSuite(SuiteT&& value) { m_suiteHasBeenSet = true; m_suite = std::forward<SuiteT>(value); }
    template<typename SuiteT = ProblemDetail>
    Problem& WithSuite(SuiteT&& value) { SetSuite(std::forward<SuiteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the associated test.</p>
     */
    inline const ProblemDetail& GetTest() const { return m_test; }
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }
    template<typename TestT = ProblemDetail>
    void SetTest(TestT&& value) { m_testHasBeenSet = true; m_test = std::forward<TestT>(value); }
    template<typename TestT = ProblemDetail>
    Problem& WithTest(TestT&& value) { SetTest(std::forward<TestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the associated device.</p>
     */
    inline const Device& GetDevice() const { return m_device; }
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }
    template<typename DeviceT = Device>
    void SetDevice(DeviceT&& value) { m_deviceHasBeenSet = true; m_device = std::forward<DeviceT>(value); }
    template<typename DeviceT = Device>
    Problem& WithDevice(DeviceT&& value) { SetDevice(std::forward<DeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The problem's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline ExecutionResult GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(ExecutionResult value) { m_resultHasBeenSet = true; m_result = value; }
    inline Problem& WithResult(ExecutionResult value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the problem's result.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Problem& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    ProblemDetail m_run;
    bool m_runHasBeenSet = false;

    ProblemDetail m_job;
    bool m_jobHasBeenSet = false;

    ProblemDetail m_suite;
    bool m_suiteHasBeenSet = false;

    ProblemDetail m_test;
    bool m_testHasBeenSet = false;

    Device m_device;
    bool m_deviceHasBeenSet = false;

    ExecutionResult m_result{ExecutionResult::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
