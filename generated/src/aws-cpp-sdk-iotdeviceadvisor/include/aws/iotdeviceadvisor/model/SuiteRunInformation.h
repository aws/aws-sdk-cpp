/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotdeviceadvisor/model/SuiteRunStatus.h>
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
   * <p>Information about the suite run.</p> <p>Requires permission to access the <a
   * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SuiteRunInformation</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/SuiteRunInformation">AWS
   * API Reference</a></p>
   */
  class SuiteRunInformation
  {
  public:
    AWS_IOTDEVICEADVISOR_API SuiteRunInformation();
    AWS_IOTDEVICEADVISOR_API SuiteRunInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API SuiteRunInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }

    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }

    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }

    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }

    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline bool SuiteDefinitionVersionHasBeenSet() const { return m_suiteDefinitionVersionHasBeenSet; }

    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = value; }

    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::move(value); }

    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion.assign(value); }

    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}

    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}

    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}


    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const{ return m_suiteDefinitionName; }

    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline bool SuiteDefinitionNameHasBeenSet() const { return m_suiteDefinitionNameHasBeenSet; }

    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline void SetSuiteDefinitionName(const Aws::String& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = value; }

    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline void SetSuiteDefinitionName(Aws::String&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::move(value); }

    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline void SetSuiteDefinitionName(const char* value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName.assign(value); }

    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionName(const Aws::String& value) { SetSuiteDefinitionName(value); return *this;}

    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionName(Aws::String&& value) { SetSuiteDefinitionName(std::move(value)); return *this;}

    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionName(const char* value) { SetSuiteDefinitionName(value); return *this;}


    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline const Aws::String& GetSuiteRunId() const{ return m_suiteRunId; }

    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline bool SuiteRunIdHasBeenSet() const { return m_suiteRunIdHasBeenSet; }

    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline void SetSuiteRunId(const Aws::String& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = value; }

    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline void SetSuiteRunId(Aws::String&& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = std::move(value); }

    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline void SetSuiteRunId(const char* value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId.assign(value); }

    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteRunId(const Aws::String& value) { SetSuiteRunId(value); return *this;}

    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteRunId(Aws::String&& value) { SetSuiteRunId(std::move(value)); return *this;}

    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline SuiteRunInformation& WithSuiteRunId(const char* value) { SetSuiteRunId(value); return *this;}


    /**
     * <p>Date (in Unix epoch time) when the suite run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Date (in Unix epoch time) when the suite run was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Date (in Unix epoch time) when the suite run was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Date (in Unix epoch time) when the suite run was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Date (in Unix epoch time) when the suite run was created.</p>
     */
    inline SuiteRunInformation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Date (in Unix epoch time) when the suite run was created.</p>
     */
    inline SuiteRunInformation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Date (in Unix epoch time) when the suite run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>Date (in Unix epoch time) when the suite run was started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>Date (in Unix epoch time) when the suite run was started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>Date (in Unix epoch time) when the suite run was started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>Date (in Unix epoch time) when the suite run was started.</p>
     */
    inline SuiteRunInformation& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>Date (in Unix epoch time) when the suite run was started.</p>
     */
    inline SuiteRunInformation& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>Date (in Unix epoch time) when the suite run ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndAt() const{ return m_endAt; }

    /**
     * <p>Date (in Unix epoch time) when the suite run ended.</p>
     */
    inline bool EndAtHasBeenSet() const { return m_endAtHasBeenSet; }

    /**
     * <p>Date (in Unix epoch time) when the suite run ended.</p>
     */
    inline void SetEndAt(const Aws::Utils::DateTime& value) { m_endAtHasBeenSet = true; m_endAt = value; }

    /**
     * <p>Date (in Unix epoch time) when the suite run ended.</p>
     */
    inline void SetEndAt(Aws::Utils::DateTime&& value) { m_endAtHasBeenSet = true; m_endAt = std::move(value); }

    /**
     * <p>Date (in Unix epoch time) when the suite run ended.</p>
     */
    inline SuiteRunInformation& WithEndAt(const Aws::Utils::DateTime& value) { SetEndAt(value); return *this;}

    /**
     * <p>Date (in Unix epoch time) when the suite run ended.</p>
     */
    inline SuiteRunInformation& WithEndAt(Aws::Utils::DateTime&& value) { SetEndAt(std::move(value)); return *this;}


    /**
     * <p>Status of the suite run.</p>
     */
    inline const SuiteRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the suite run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the suite run.</p>
     */
    inline void SetStatus(const SuiteRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the suite run.</p>
     */
    inline void SetStatus(SuiteRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the suite run.</p>
     */
    inline SuiteRunInformation& WithStatus(const SuiteRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the suite run.</p>
     */
    inline SuiteRunInformation& WithStatus(SuiteRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Number of test cases that passed in the suite run.</p>
     */
    inline int GetPassed() const{ return m_passed; }

    /**
     * <p>Number of test cases that passed in the suite run.</p>
     */
    inline bool PassedHasBeenSet() const { return m_passedHasBeenSet; }

    /**
     * <p>Number of test cases that passed in the suite run.</p>
     */
    inline void SetPassed(int value) { m_passedHasBeenSet = true; m_passed = value; }

    /**
     * <p>Number of test cases that passed in the suite run.</p>
     */
    inline SuiteRunInformation& WithPassed(int value) { SetPassed(value); return *this;}


    /**
     * <p>Number of test cases that failed in the suite run.</p>
     */
    inline int GetFailed() const{ return m_failed; }

    /**
     * <p>Number of test cases that failed in the suite run.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>Number of test cases that failed in the suite run.</p>
     */
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>Number of test cases that failed in the suite run.</p>
     */
    inline SuiteRunInformation& WithFailed(int value) { SetFailed(value); return *this;}

  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet = false;

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet = false;

    Aws::String m_suiteRunId;
    bool m_suiteRunIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endAt;
    bool m_endAtHasBeenSet = false;

    SuiteRunStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_passed;
    bool m_passedHasBeenSet = false;

    int m_failed;
    bool m_failedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
