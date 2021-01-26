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
   * <p>Get suite run information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotdeviceadvisor-2020-09-18/SuiteRunInformation">AWS
   * API Reference</a></p>
   */
  class AWS_IOTDEVICEADVISOR_API SuiteRunInformation
  {
  public:
    SuiteRunInformation();
    SuiteRunInformation(Aws::Utils::Json::JsonView jsonValue);
    SuiteRunInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Get suite run information based on suite definition Id.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Get suite run information based on suite definition Id.</p>
     */
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }

    /**
     * <p>Get suite run information based on suite definition Id.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }

    /**
     * <p>Get suite run information based on suite definition Id.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Get suite run information based on suite definition Id.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }

    /**
     * <p>Get suite run information based on suite definition Id.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Get suite run information based on suite definition Id.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Get suite run information based on suite definition Id.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Get suite run information based on suite definition version.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }

    /**
     * <p>Get suite run information based on suite definition version.</p>
     */
    inline bool SuiteDefinitionVersionHasBeenSet() const { return m_suiteDefinitionVersionHasBeenSet; }

    /**
     * <p>Get suite run information based on suite definition version.</p>
     */
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = value; }

    /**
     * <p>Get suite run information based on suite definition version.</p>
     */
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::move(value); }

    /**
     * <p>Get suite run information based on suite definition version.</p>
     */
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion.assign(value); }

    /**
     * <p>Get suite run information based on suite definition version.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}

    /**
     * <p>Get suite run information based on suite definition version.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}

    /**
     * <p>Get suite run information based on suite definition version.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}


    /**
     * <p>Get suite run information based on suite definition name.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const{ return m_suiteDefinitionName; }

    /**
     * <p>Get suite run information based on suite definition name.</p>
     */
    inline bool SuiteDefinitionNameHasBeenSet() const { return m_suiteDefinitionNameHasBeenSet; }

    /**
     * <p>Get suite run information based on suite definition name.</p>
     */
    inline void SetSuiteDefinitionName(const Aws::String& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = value; }

    /**
     * <p>Get suite run information based on suite definition name.</p>
     */
    inline void SetSuiteDefinitionName(Aws::String&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::move(value); }

    /**
     * <p>Get suite run information based on suite definition name.</p>
     */
    inline void SetSuiteDefinitionName(const char* value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName.assign(value); }

    /**
     * <p>Get suite run information based on suite definition name.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionName(const Aws::String& value) { SetSuiteDefinitionName(value); return *this;}

    /**
     * <p>Get suite run information based on suite definition name.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionName(Aws::String&& value) { SetSuiteDefinitionName(std::move(value)); return *this;}

    /**
     * <p>Get suite run information based on suite definition name.</p>
     */
    inline SuiteRunInformation& WithSuiteDefinitionName(const char* value) { SetSuiteDefinitionName(value); return *this;}


    /**
     * <p>Get suite run information based on suite run Id.</p>
     */
    inline const Aws::String& GetSuiteRunId() const{ return m_suiteRunId; }

    /**
     * <p>Get suite run information based on suite run Id.</p>
     */
    inline bool SuiteRunIdHasBeenSet() const { return m_suiteRunIdHasBeenSet; }

    /**
     * <p>Get suite run information based on suite run Id.</p>
     */
    inline void SetSuiteRunId(const Aws::String& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = value; }

    /**
     * <p>Get suite run information based on suite run Id.</p>
     */
    inline void SetSuiteRunId(Aws::String&& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = std::move(value); }

    /**
     * <p>Get suite run information based on suite run Id.</p>
     */
    inline void SetSuiteRunId(const char* value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId.assign(value); }

    /**
     * <p>Get suite run information based on suite run Id.</p>
     */
    inline SuiteRunInformation& WithSuiteRunId(const Aws::String& value) { SetSuiteRunId(value); return *this;}

    /**
     * <p>Get suite run information based on suite run Id.</p>
     */
    inline SuiteRunInformation& WithSuiteRunId(Aws::String&& value) { SetSuiteRunId(std::move(value)); return *this;}

    /**
     * <p>Get suite run information based on suite run Id.</p>
     */
    inline SuiteRunInformation& WithSuiteRunId(const char* value) { SetSuiteRunId(value); return *this;}


    /**
     * <p>Get suite run information based on time suite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Get suite run information based on time suite was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Get suite run information based on time suite was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Get suite run information based on time suite was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Get suite run information based on time suite was created.</p>
     */
    inline SuiteRunInformation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Get suite run information based on time suite was created.</p>
     */
    inline SuiteRunInformation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Get suite run information based on start time of the run.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>Get suite run information based on start time of the run.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>Get suite run information based on start time of the run.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>Get suite run information based on start time of the run.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>Get suite run information based on start time of the run.</p>
     */
    inline SuiteRunInformation& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>Get suite run information based on start time of the run.</p>
     */
    inline SuiteRunInformation& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>Get suite run information based on end time of the run.</p>
     */
    inline const Aws::Utils::DateTime& GetEndAt() const{ return m_endAt; }

    /**
     * <p>Get suite run information based on end time of the run.</p>
     */
    inline bool EndAtHasBeenSet() const { return m_endAtHasBeenSet; }

    /**
     * <p>Get suite run information based on end time of the run.</p>
     */
    inline void SetEndAt(const Aws::Utils::DateTime& value) { m_endAtHasBeenSet = true; m_endAt = value; }

    /**
     * <p>Get suite run information based on end time of the run.</p>
     */
    inline void SetEndAt(Aws::Utils::DateTime&& value) { m_endAtHasBeenSet = true; m_endAt = std::move(value); }

    /**
     * <p>Get suite run information based on end time of the run.</p>
     */
    inline SuiteRunInformation& WithEndAt(const Aws::Utils::DateTime& value) { SetEndAt(value); return *this;}

    /**
     * <p>Get suite run information based on end time of the run.</p>
     */
    inline SuiteRunInformation& WithEndAt(Aws::Utils::DateTime&& value) { SetEndAt(std::move(value)); return *this;}


    /**
     * <p>Get suite run information based on test run status.</p>
     */
    inline const SuiteRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Get suite run information based on test run status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Get suite run information based on test run status.</p>
     */
    inline void SetStatus(const SuiteRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Get suite run information based on test run status.</p>
     */
    inline void SetStatus(SuiteRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Get suite run information based on test run status.</p>
     */
    inline SuiteRunInformation& WithStatus(const SuiteRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Get suite run information based on test run status.</p>
     */
    inline SuiteRunInformation& WithStatus(SuiteRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Get suite run information based on result of the test suite run.</p>
     */
    inline int GetPassed() const{ return m_passed; }

    /**
     * <p>Get suite run information based on result of the test suite run.</p>
     */
    inline bool PassedHasBeenSet() const { return m_passedHasBeenSet; }

    /**
     * <p>Get suite run information based on result of the test suite run.</p>
     */
    inline void SetPassed(int value) { m_passedHasBeenSet = true; m_passed = value; }

    /**
     * <p>Get suite run information based on result of the test suite run.</p>
     */
    inline SuiteRunInformation& WithPassed(int value) { SetPassed(value); return *this;}


    /**
     * <p>Get suite run information based on result of the test suite run.</p>
     */
    inline int GetFailed() const{ return m_failed; }

    /**
     * <p>Get suite run information based on result of the test suite run.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>Get suite run information based on result of the test suite run.</p>
     */
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>Get suite run information based on result of the test suite run.</p>
     */
    inline SuiteRunInformation& WithFailed(int value) { SetFailed(value); return *this;}

  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet;

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet;

    Aws::String m_suiteRunId;
    bool m_suiteRunIdHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;

    Aws::Utils::DateTime m_endAt;
    bool m_endAtHasBeenSet;

    SuiteRunStatus m_status;
    bool m_statusHasBeenSet;

    int m_passed;
    bool m_passedHasBeenSet;

    int m_failed;
    bool m_failedHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
