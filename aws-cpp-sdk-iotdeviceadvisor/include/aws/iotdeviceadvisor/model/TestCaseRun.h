/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/Status.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides test case run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/TestCaseRun">AWS
   * API Reference</a></p>
   */
  class AWS_IOTDEVICEADVISOR_API TestCaseRun
  {
  public:
    TestCaseRun();
    TestCaseRun(Aws::Utils::Json::JsonView jsonValue);
    TestCaseRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides test case run Id.</p>
     */
    inline const Aws::String& GetTestCaseRunId() const{ return m_testCaseRunId; }

    /**
     * <p>Provides test case run Id.</p>
     */
    inline bool TestCaseRunIdHasBeenSet() const { return m_testCaseRunIdHasBeenSet; }

    /**
     * <p>Provides test case run Id.</p>
     */
    inline void SetTestCaseRunId(const Aws::String& value) { m_testCaseRunIdHasBeenSet = true; m_testCaseRunId = value; }

    /**
     * <p>Provides test case run Id.</p>
     */
    inline void SetTestCaseRunId(Aws::String&& value) { m_testCaseRunIdHasBeenSet = true; m_testCaseRunId = std::move(value); }

    /**
     * <p>Provides test case run Id.</p>
     */
    inline void SetTestCaseRunId(const char* value) { m_testCaseRunIdHasBeenSet = true; m_testCaseRunId.assign(value); }

    /**
     * <p>Provides test case run Id.</p>
     */
    inline TestCaseRun& WithTestCaseRunId(const Aws::String& value) { SetTestCaseRunId(value); return *this;}

    /**
     * <p>Provides test case run Id.</p>
     */
    inline TestCaseRun& WithTestCaseRunId(Aws::String&& value) { SetTestCaseRunId(std::move(value)); return *this;}

    /**
     * <p>Provides test case run Id.</p>
     */
    inline TestCaseRun& WithTestCaseRunId(const char* value) { SetTestCaseRunId(value); return *this;}


    /**
     * <p>Provides test case run definition Id.</p>
     */
    inline const Aws::String& GetTestCaseDefinitionId() const{ return m_testCaseDefinitionId; }

    /**
     * <p>Provides test case run definition Id.</p>
     */
    inline bool TestCaseDefinitionIdHasBeenSet() const { return m_testCaseDefinitionIdHasBeenSet; }

    /**
     * <p>Provides test case run definition Id.</p>
     */
    inline void SetTestCaseDefinitionId(const Aws::String& value) { m_testCaseDefinitionIdHasBeenSet = true; m_testCaseDefinitionId = value; }

    /**
     * <p>Provides test case run definition Id.</p>
     */
    inline void SetTestCaseDefinitionId(Aws::String&& value) { m_testCaseDefinitionIdHasBeenSet = true; m_testCaseDefinitionId = std::move(value); }

    /**
     * <p>Provides test case run definition Id.</p>
     */
    inline void SetTestCaseDefinitionId(const char* value) { m_testCaseDefinitionIdHasBeenSet = true; m_testCaseDefinitionId.assign(value); }

    /**
     * <p>Provides test case run definition Id.</p>
     */
    inline TestCaseRun& WithTestCaseDefinitionId(const Aws::String& value) { SetTestCaseDefinitionId(value); return *this;}

    /**
     * <p>Provides test case run definition Id.</p>
     */
    inline TestCaseRun& WithTestCaseDefinitionId(Aws::String&& value) { SetTestCaseDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Provides test case run definition Id.</p>
     */
    inline TestCaseRun& WithTestCaseDefinitionId(const char* value) { SetTestCaseDefinitionId(value); return *this;}


    /**
     * <p>Provides test case run definition Name.</p>
     */
    inline const Aws::String& GetTestCaseDefinitionName() const{ return m_testCaseDefinitionName; }

    /**
     * <p>Provides test case run definition Name.</p>
     */
    inline bool TestCaseDefinitionNameHasBeenSet() const { return m_testCaseDefinitionNameHasBeenSet; }

    /**
     * <p>Provides test case run definition Name.</p>
     */
    inline void SetTestCaseDefinitionName(const Aws::String& value) { m_testCaseDefinitionNameHasBeenSet = true; m_testCaseDefinitionName = value; }

    /**
     * <p>Provides test case run definition Name.</p>
     */
    inline void SetTestCaseDefinitionName(Aws::String&& value) { m_testCaseDefinitionNameHasBeenSet = true; m_testCaseDefinitionName = std::move(value); }

    /**
     * <p>Provides test case run definition Name.</p>
     */
    inline void SetTestCaseDefinitionName(const char* value) { m_testCaseDefinitionNameHasBeenSet = true; m_testCaseDefinitionName.assign(value); }

    /**
     * <p>Provides test case run definition Name.</p>
     */
    inline TestCaseRun& WithTestCaseDefinitionName(const Aws::String& value) { SetTestCaseDefinitionName(value); return *this;}

    /**
     * <p>Provides test case run definition Name.</p>
     */
    inline TestCaseRun& WithTestCaseDefinitionName(Aws::String&& value) { SetTestCaseDefinitionName(std::move(value)); return *this;}

    /**
     * <p>Provides test case run definition Name.</p>
     */
    inline TestCaseRun& WithTestCaseDefinitionName(const char* value) { SetTestCaseDefinitionName(value); return *this;}


    /**
     * <p>Provides test case run status.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Provides test case run status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Provides test case run status.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Provides test case run status.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Provides test case run status.</p>
     */
    inline TestCaseRun& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Provides test case run status.</p>
     */
    inline TestCaseRun& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Provides test case run start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Provides test case run start time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Provides test case run start time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Provides test case run start time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Provides test case run start time.</p>
     */
    inline TestCaseRun& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Provides test case run start time.</p>
     */
    inline TestCaseRun& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Provides test case run end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Provides test case run end time.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Provides test case run end time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Provides test case run end time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Provides test case run end time.</p>
     */
    inline TestCaseRun& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Provides test case run end time.</p>
     */
    inline TestCaseRun& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Provides test case run log Url.</p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }

    /**
     * <p>Provides test case run log Url.</p>
     */
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }

    /**
     * <p>Provides test case run log Url.</p>
     */
    inline void SetLogUrl(const Aws::String& value) { m_logUrlHasBeenSet = true; m_logUrl = value; }

    /**
     * <p>Provides test case run log Url.</p>
     */
    inline void SetLogUrl(Aws::String&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::move(value); }

    /**
     * <p>Provides test case run log Url.</p>
     */
    inline void SetLogUrl(const char* value) { m_logUrlHasBeenSet = true; m_logUrl.assign(value); }

    /**
     * <p>Provides test case run log Url.</p>
     */
    inline TestCaseRun& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}

    /**
     * <p>Provides test case run log Url.</p>
     */
    inline TestCaseRun& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}

    /**
     * <p>Provides test case run log Url.</p>
     */
    inline TestCaseRun& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}


    /**
     * <p>Provides test case run warnings.</p>
     */
    inline const Aws::String& GetWarnings() const{ return m_warnings; }

    /**
     * <p>Provides test case run warnings.</p>
     */
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }

    /**
     * <p>Provides test case run warnings.</p>
     */
    inline void SetWarnings(const Aws::String& value) { m_warningsHasBeenSet = true; m_warnings = value; }

    /**
     * <p>Provides test case run warnings.</p>
     */
    inline void SetWarnings(Aws::String&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }

    /**
     * <p>Provides test case run warnings.</p>
     */
    inline void SetWarnings(const char* value) { m_warningsHasBeenSet = true; m_warnings.assign(value); }

    /**
     * <p>Provides test case run warnings.</p>
     */
    inline TestCaseRun& WithWarnings(const Aws::String& value) { SetWarnings(value); return *this;}

    /**
     * <p>Provides test case run warnings.</p>
     */
    inline TestCaseRun& WithWarnings(Aws::String&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>Provides test case run warnings.</p>
     */
    inline TestCaseRun& WithWarnings(const char* value) { SetWarnings(value); return *this;}


    /**
     * <p>Provides test case run failure result.</p>
     */
    inline const Aws::String& GetFailure() const{ return m_failure; }

    /**
     * <p>Provides test case run failure result.</p>
     */
    inline bool FailureHasBeenSet() const { return m_failureHasBeenSet; }

    /**
     * <p>Provides test case run failure result.</p>
     */
    inline void SetFailure(const Aws::String& value) { m_failureHasBeenSet = true; m_failure = value; }

    /**
     * <p>Provides test case run failure result.</p>
     */
    inline void SetFailure(Aws::String&& value) { m_failureHasBeenSet = true; m_failure = std::move(value); }

    /**
     * <p>Provides test case run failure result.</p>
     */
    inline void SetFailure(const char* value) { m_failureHasBeenSet = true; m_failure.assign(value); }

    /**
     * <p>Provides test case run failure result.</p>
     */
    inline TestCaseRun& WithFailure(const Aws::String& value) { SetFailure(value); return *this;}

    /**
     * <p>Provides test case run failure result.</p>
     */
    inline TestCaseRun& WithFailure(Aws::String&& value) { SetFailure(std::move(value)); return *this;}

    /**
     * <p>Provides test case run failure result.</p>
     */
    inline TestCaseRun& WithFailure(const char* value) { SetFailure(value); return *this;}

  private:

    Aws::String m_testCaseRunId;
    bool m_testCaseRunIdHasBeenSet;

    Aws::String m_testCaseDefinitionId;
    bool m_testCaseDefinitionIdHasBeenSet;

    Aws::String m_testCaseDefinitionName;
    bool m_testCaseDefinitionNameHasBeenSet;

    Status m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet;

    Aws::String m_warnings;
    bool m_warningsHasBeenSet;

    Aws::String m_failure;
    bool m_failureHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
