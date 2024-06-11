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
    AWS_IOTDEVICEADVISOR_API GetSuiteRunResult();
    AWS_IOTDEVICEADVISOR_API GetSuiteRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API GetSuiteRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionId = value; }
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionId = std::move(value); }
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionId.assign(value); }
    inline GetSuiteRunResult& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}
    inline GetSuiteRunResult& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}
    inline GetSuiteRunResult& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersion = value; }
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersion = std::move(value); }
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersion.assign(value); }
    inline GetSuiteRunResult& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}
    inline GetSuiteRunResult& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}
    inline GetSuiteRunResult& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteRunId() const{ return m_suiteRunId; }
    inline void SetSuiteRunId(const Aws::String& value) { m_suiteRunId = value; }
    inline void SetSuiteRunId(Aws::String&& value) { m_suiteRunId = std::move(value); }
    inline void SetSuiteRunId(const char* value) { m_suiteRunId.assign(value); }
    inline GetSuiteRunResult& WithSuiteRunId(const Aws::String& value) { SetSuiteRunId(value); return *this;}
    inline GetSuiteRunResult& WithSuiteRunId(Aws::String&& value) { SetSuiteRunId(std::move(value)); return *this;}
    inline GetSuiteRunResult& WithSuiteRunId(const char* value) { SetSuiteRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the suite run.</p>
     */
    inline const Aws::String& GetSuiteRunArn() const{ return m_suiteRunArn; }
    inline void SetSuiteRunArn(const Aws::String& value) { m_suiteRunArn = value; }
    inline void SetSuiteRunArn(Aws::String&& value) { m_suiteRunArn = std::move(value); }
    inline void SetSuiteRunArn(const char* value) { m_suiteRunArn.assign(value); }
    inline GetSuiteRunResult& WithSuiteRunArn(const Aws::String& value) { SetSuiteRunArn(value); return *this;}
    inline GetSuiteRunResult& WithSuiteRunArn(Aws::String&& value) { SetSuiteRunArn(std::move(value)); return *this;}
    inline GetSuiteRunResult& WithSuiteRunArn(const char* value) { SetSuiteRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite run configuration for the test suite run.</p>
     */
    inline const SuiteRunConfiguration& GetSuiteRunConfiguration() const{ return m_suiteRunConfiguration; }
    inline void SetSuiteRunConfiguration(const SuiteRunConfiguration& value) { m_suiteRunConfiguration = value; }
    inline void SetSuiteRunConfiguration(SuiteRunConfiguration&& value) { m_suiteRunConfiguration = std::move(value); }
    inline GetSuiteRunResult& WithSuiteRunConfiguration(const SuiteRunConfiguration& value) { SetSuiteRunConfiguration(value); return *this;}
    inline GetSuiteRunResult& WithSuiteRunConfiguration(SuiteRunConfiguration&& value) { SetSuiteRunConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Test results for the test suite run.</p>
     */
    inline const TestResult& GetTestResult() const{ return m_testResult; }
    inline void SetTestResult(const TestResult& value) { m_testResult = value; }
    inline void SetTestResult(TestResult&& value) { m_testResult = std::move(value); }
    inline GetSuiteRunResult& WithTestResult(const TestResult& value) { SetTestResult(value); return *this;}
    inline GetSuiteRunResult& WithTestResult(TestResult&& value) { SetTestResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the test suite run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetSuiteRunResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetSuiteRunResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the test suite run ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetSuiteRunResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetSuiteRunResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the test suite run.</p>
     */
    inline const SuiteRunStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SuiteRunStatus& value) { m_status = value; }
    inline void SetStatus(SuiteRunStatus&& value) { m_status = std::move(value); }
    inline GetSuiteRunResult& WithStatus(const SuiteRunStatus& value) { SetStatus(value); return *this;}
    inline GetSuiteRunResult& WithStatus(SuiteRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline const Aws::String& GetErrorReason() const{ return m_errorReason; }
    inline void SetErrorReason(const Aws::String& value) { m_errorReason = value; }
    inline void SetErrorReason(Aws::String&& value) { m_errorReason = std::move(value); }
    inline void SetErrorReason(const char* value) { m_errorReason.assign(value); }
    inline GetSuiteRunResult& WithErrorReason(const Aws::String& value) { SetErrorReason(value); return *this;}
    inline GetSuiteRunResult& WithErrorReason(Aws::String&& value) { SetErrorReason(std::move(value)); return *this;}
    inline GetSuiteRunResult& WithErrorReason(const char* value) { SetErrorReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetSuiteRunResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetSuiteRunResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetSuiteRunResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetSuiteRunResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetSuiteRunResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetSuiteRunResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSuiteRunResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetSuiteRunResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetSuiteRunResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSuiteRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSuiteRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSuiteRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;

    Aws::String m_suiteDefinitionVersion;

    Aws::String m_suiteRunId;

    Aws::String m_suiteRunArn;

    SuiteRunConfiguration m_suiteRunConfiguration;

    TestResult m_testResult;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    SuiteRunStatus m_status;

    Aws::String m_errorReason;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
