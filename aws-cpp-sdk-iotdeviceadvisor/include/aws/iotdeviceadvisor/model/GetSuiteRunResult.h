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


    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionId = value; }

    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionId.assign(value); }

    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Suite definition ID for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }

    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersion = value; }

    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersion = std::move(value); }

    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersion.assign(value); }

    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}

    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}

    /**
     * <p>Suite definition version for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}


    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline const Aws::String& GetSuiteRunId() const{ return m_suiteRunId; }

    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline void SetSuiteRunId(const Aws::String& value) { m_suiteRunId = value; }

    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline void SetSuiteRunId(Aws::String&& value) { m_suiteRunId = std::move(value); }

    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline void SetSuiteRunId(const char* value) { m_suiteRunId.assign(value); }

    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteRunId(const Aws::String& value) { SetSuiteRunId(value); return *this;}

    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteRunId(Aws::String&& value) { SetSuiteRunId(std::move(value)); return *this;}

    /**
     * <p>Suite run ID for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteRunId(const char* value) { SetSuiteRunId(value); return *this;}


    /**
     * <p>The ARN of the suite run.</p>
     */
    inline const Aws::String& GetSuiteRunArn() const{ return m_suiteRunArn; }

    /**
     * <p>The ARN of the suite run.</p>
     */
    inline void SetSuiteRunArn(const Aws::String& value) { m_suiteRunArn = value; }

    /**
     * <p>The ARN of the suite run.</p>
     */
    inline void SetSuiteRunArn(Aws::String&& value) { m_suiteRunArn = std::move(value); }

    /**
     * <p>The ARN of the suite run.</p>
     */
    inline void SetSuiteRunArn(const char* value) { m_suiteRunArn.assign(value); }

    /**
     * <p>The ARN of the suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteRunArn(const Aws::String& value) { SetSuiteRunArn(value); return *this;}

    /**
     * <p>The ARN of the suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteRunArn(Aws::String&& value) { SetSuiteRunArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteRunArn(const char* value) { SetSuiteRunArn(value); return *this;}


    /**
     * <p>Suite run configuration for the test suite run.</p>
     */
    inline const SuiteRunConfiguration& GetSuiteRunConfiguration() const{ return m_suiteRunConfiguration; }

    /**
     * <p>Suite run configuration for the test suite run.</p>
     */
    inline void SetSuiteRunConfiguration(const SuiteRunConfiguration& value) { m_suiteRunConfiguration = value; }

    /**
     * <p>Suite run configuration for the test suite run.</p>
     */
    inline void SetSuiteRunConfiguration(SuiteRunConfiguration&& value) { m_suiteRunConfiguration = std::move(value); }

    /**
     * <p>Suite run configuration for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteRunConfiguration(const SuiteRunConfiguration& value) { SetSuiteRunConfiguration(value); return *this;}

    /**
     * <p>Suite run configuration for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithSuiteRunConfiguration(SuiteRunConfiguration&& value) { SetSuiteRunConfiguration(std::move(value)); return *this;}


    /**
     * <p>Test results for the test suite run.</p>
     */
    inline const TestResult& GetTestResult() const{ return m_testResult; }

    /**
     * <p>Test results for the test suite run.</p>
     */
    inline void SetTestResult(const TestResult& value) { m_testResult = value; }

    /**
     * <p>Test results for the test suite run.</p>
     */
    inline void SetTestResult(TestResult&& value) { m_testResult = std::move(value); }

    /**
     * <p>Test results for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithTestResult(const TestResult& value) { SetTestResult(value); return *this;}

    /**
     * <p>Test results for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithTestResult(TestResult&& value) { SetTestResult(std::move(value)); return *this;}


    /**
     * <p>Date (in Unix epoch time) when the test suite run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Date (in Unix epoch time) when the test suite run started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>Date (in Unix epoch time) when the test suite run started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>Date (in Unix epoch time) when the test suite run started.</p>
     */
    inline GetSuiteRunResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Date (in Unix epoch time) when the test suite run started.</p>
     */
    inline GetSuiteRunResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Date (in Unix epoch time) when the test suite run ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Date (in Unix epoch time) when the test suite run ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>Date (in Unix epoch time) when the test suite run ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>Date (in Unix epoch time) when the test suite run ended.</p>
     */
    inline GetSuiteRunResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Date (in Unix epoch time) when the test suite run ended.</p>
     */
    inline GetSuiteRunResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Status for the test suite run.</p>
     */
    inline const SuiteRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status for the test suite run.</p>
     */
    inline void SetStatus(const SuiteRunStatus& value) { m_status = value; }

    /**
     * <p>Status for the test suite run.</p>
     */
    inline void SetStatus(SuiteRunStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Status for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithStatus(const SuiteRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status for the test suite run.</p>
     */
    inline GetSuiteRunResult& WithStatus(SuiteRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline const Aws::String& GetErrorReason() const{ return m_errorReason; }

    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline void SetErrorReason(const Aws::String& value) { m_errorReason = value; }

    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline void SetErrorReason(Aws::String&& value) { m_errorReason = std::move(value); }

    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline void SetErrorReason(const char* value) { m_errorReason.assign(value); }

    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline GetSuiteRunResult& WithErrorReason(const Aws::String& value) { SetErrorReason(value); return *this;}

    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline GetSuiteRunResult& WithErrorReason(Aws::String&& value) { SetErrorReason(std::move(value)); return *this;}

    /**
     * <p>Error reason for any test suite run failure.</p>
     */
    inline GetSuiteRunResult& WithErrorReason(const char* value) { SetErrorReason(value); return *this;}


    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the suite run.</p>
     */
    inline GetSuiteRunResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
