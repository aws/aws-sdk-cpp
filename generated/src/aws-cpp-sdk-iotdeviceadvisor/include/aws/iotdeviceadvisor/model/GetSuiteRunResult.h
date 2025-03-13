/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/SuiteRunConfiguration.h>
#include <aws/iotdeviceadvisor/model/TestResult.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotdeviceadvisor/model/SuiteRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTDeviceAdvisor
{
namespace Model
{
  class GetSuiteRunResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API GetSuiteRunResult() = default;
    AWS_IOTDEVICEADVISOR_API GetSuiteRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API GetSuiteRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const { return m_suiteDefinitionId; }
    template<typename SuiteDefinitionIdT = Aws::String>
    void SetSuiteDefinitionId(SuiteDefinitionIdT&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::forward<SuiteDefinitionIdT>(value); }
    template<typename SuiteDefinitionIdT = Aws::String>
    GetSuiteRunResult& WithSuiteDefinitionId(SuiteDefinitionIdT&& value) { SetSuiteDefinitionId(std::forward<SuiteDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const { return m_suiteDefinitionVersion; }
    template<typename SuiteDefinitionVersionT = Aws::String>
    void SetSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::forward<SuiteDefinitionVersionT>(value); }
    template<typename SuiteDefinitionVersionT = Aws::String>
    GetSuiteRunResult& WithSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { SetSuiteDefinitionVersion(std::forward<SuiteDefinitionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteRunId() const { return m_suiteRunId; }
    template<typename SuiteRunIdT = Aws::String>
    void SetSuiteRunId(SuiteRunIdT&& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = std::forward<SuiteRunIdT>(value); }
    template<typename SuiteRunIdT = Aws::String>
    GetSuiteRunResult& WithSuiteRunId(SuiteRunIdT&& value) { SetSuiteRunId(std::forward<SuiteRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the suite run.</p>
     */
    inline const Aws::String& GetSuiteRunArn() const { return m_suiteRunArn; }
    template<typename SuiteRunArnT = Aws::String>
    void SetSuiteRunArn(SuiteRunArnT&& value) { m_suiteRunArnHasBeenSet = true; m_suiteRunArn = std::forward<SuiteRunArnT>(value); }
    template<typename SuiteRunArnT = Aws::String>
    GetSuiteRunResult& WithSuiteRunArn(SuiteRunArnT&& value) { SetSuiteRunArn(std::forward<SuiteRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite run configuration for the test suite run.</p>
     */
    inline const SuiteRunConfiguration& GetSuiteRunConfiguration() const { return m_suiteRunConfiguration; }
    template<typename SuiteRunConfigurationT = SuiteRunConfiguration>
    void SetSuiteRunConfiguration(SuiteRunConfigurationT&& value) { m_suiteRunConfigurationHasBeenSet = true; m_suiteRunConfiguration = std::forward<SuiteRunConfigurationT>(value); }
    template<typename SuiteRunConfigurationT = SuiteRunConfiguration>
    GetSuiteRunResult& WithSuiteRunConfiguration(SuiteRunConfigurationT&& value) { SetSuiteRunConfiguration(std::forward<SuiteRunConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Test results for the test suite run.</p>
     */
    inline const TestResult& GetTestResult() const { return m_testResult; }
    template<typename TestResultT = TestResult>
    void SetTestResult(TestResultT&& value) { m_testResultHasBeenSet = true; m_testResult = std::forward<TestResultT>(value); }
    template<typename TestResultT = TestResult>
    GetSuiteRunResult& WithTestResult(TestResultT&& value) { SetTestResult(std::forward<TestResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the test suite run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetSuiteRunResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the test suite run ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetSuiteRunResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the test suite run.</p>
     */
    inline SuiteRunStatus GetStatus() const { return m_status; }
    inline void SetStatus(SuiteRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSuiteRunResult& WithStatus(SuiteRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline const Aws::String& GetErrorReason() const { return m_errorReason; }
    template<typename ErrorReasonT = Aws::String>
    void SetErrorReason(ErrorReasonT&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::forward<ErrorReasonT>(value); }
    template<typename ErrorReasonT = Aws::String>
    GetSuiteRunResult& WithErrorReason(ErrorReasonT&& value) { SetErrorReason(std::forward<ErrorReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetSuiteRunResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetSuiteRunResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSuiteRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet = false;

    Aws::String m_suiteRunId;
    bool m_suiteRunIdHasBeenSet = false;

    Aws::String m_suiteRunArn;
    bool m_suiteRunArnHasBeenSet = false;

    SuiteRunConfiguration m_suiteRunConfiguration;
    bool m_suiteRunConfigurationHasBeenSet = false;

    TestResult m_testResult;
    bool m_testResultHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    SuiteRunStatus m_status{SuiteRunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorReason;
    bool m_errorReasonHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
