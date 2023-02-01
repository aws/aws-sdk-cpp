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
    AWS_DEVICEFARM_API Problem();
    AWS_DEVICEFARM_API Problem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Problem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the associated run.</p>
     */
    inline const ProblemDetail& GetRun() const{ return m_run; }

    /**
     * <p>Information about the associated run.</p>
     */
    inline bool RunHasBeenSet() const { return m_runHasBeenSet; }

    /**
     * <p>Information about the associated run.</p>
     */
    inline void SetRun(const ProblemDetail& value) { m_runHasBeenSet = true; m_run = value; }

    /**
     * <p>Information about the associated run.</p>
     */
    inline void SetRun(ProblemDetail&& value) { m_runHasBeenSet = true; m_run = std::move(value); }

    /**
     * <p>Information about the associated run.</p>
     */
    inline Problem& WithRun(const ProblemDetail& value) { SetRun(value); return *this;}

    /**
     * <p>Information about the associated run.</p>
     */
    inline Problem& WithRun(ProblemDetail&& value) { SetRun(std::move(value)); return *this;}


    /**
     * <p>Information about the associated job.</p>
     */
    inline const ProblemDetail& GetJob() const{ return m_job; }

    /**
     * <p>Information about the associated job.</p>
     */
    inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }

    /**
     * <p>Information about the associated job.</p>
     */
    inline void SetJob(const ProblemDetail& value) { m_jobHasBeenSet = true; m_job = value; }

    /**
     * <p>Information about the associated job.</p>
     */
    inline void SetJob(ProblemDetail&& value) { m_jobHasBeenSet = true; m_job = std::move(value); }

    /**
     * <p>Information about the associated job.</p>
     */
    inline Problem& WithJob(const ProblemDetail& value) { SetJob(value); return *this;}

    /**
     * <p>Information about the associated job.</p>
     */
    inline Problem& WithJob(ProblemDetail&& value) { SetJob(std::move(value)); return *this;}


    /**
     * <p>Information about the associated suite.</p>
     */
    inline const ProblemDetail& GetSuite() const{ return m_suite; }

    /**
     * <p>Information about the associated suite.</p>
     */
    inline bool SuiteHasBeenSet() const { return m_suiteHasBeenSet; }

    /**
     * <p>Information about the associated suite.</p>
     */
    inline void SetSuite(const ProblemDetail& value) { m_suiteHasBeenSet = true; m_suite = value; }

    /**
     * <p>Information about the associated suite.</p>
     */
    inline void SetSuite(ProblemDetail&& value) { m_suiteHasBeenSet = true; m_suite = std::move(value); }

    /**
     * <p>Information about the associated suite.</p>
     */
    inline Problem& WithSuite(const ProblemDetail& value) { SetSuite(value); return *this;}

    /**
     * <p>Information about the associated suite.</p>
     */
    inline Problem& WithSuite(ProblemDetail&& value) { SetSuite(std::move(value)); return *this;}


    /**
     * <p>Information about the associated test.</p>
     */
    inline const ProblemDetail& GetTest() const{ return m_test; }

    /**
     * <p>Information about the associated test.</p>
     */
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }

    /**
     * <p>Information about the associated test.</p>
     */
    inline void SetTest(const ProblemDetail& value) { m_testHasBeenSet = true; m_test = value; }

    /**
     * <p>Information about the associated test.</p>
     */
    inline void SetTest(ProblemDetail&& value) { m_testHasBeenSet = true; m_test = std::move(value); }

    /**
     * <p>Information about the associated test.</p>
     */
    inline Problem& WithTest(const ProblemDetail& value) { SetTest(value); return *this;}

    /**
     * <p>Information about the associated test.</p>
     */
    inline Problem& WithTest(ProblemDetail&& value) { SetTest(std::move(value)); return *this;}


    /**
     * <p>Information about the associated device.</p>
     */
    inline const Device& GetDevice() const{ return m_device; }

    /**
     * <p>Information about the associated device.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>Information about the associated device.</p>
     */
    inline void SetDevice(const Device& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>Information about the associated device.</p>
     */
    inline void SetDevice(Device&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>Information about the associated device.</p>
     */
    inline Problem& WithDevice(const Device& value) { SetDevice(value); return *this;}

    /**
     * <p>Information about the associated device.</p>
     */
    inline Problem& WithDevice(Device&& value) { SetDevice(std::move(value)); return *this;}


    /**
     * <p>The problem's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline const ExecutionResult& GetResult() const{ return m_result; }

    /**
     * <p>The problem's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The problem's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline void SetResult(const ExecutionResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The problem's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The problem's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline Problem& WithResult(const ExecutionResult& value) { SetResult(value); return *this;}

    /**
     * <p>The problem's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline Problem& WithResult(ExecutionResult&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>A message about the problem's result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the problem's result.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message about the problem's result.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the problem's result.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message about the problem's result.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the problem's result.</p>
     */
    inline Problem& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the problem's result.</p>
     */
    inline Problem& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the problem's result.</p>
     */
    inline Problem& WithMessage(const char* value) { SetMessage(value); return *this;}

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

    ExecutionResult m_result;
    bool m_resultHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
