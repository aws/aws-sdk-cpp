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
    AWS_IOTDEVICEADVISOR_API SuiteRunInformation() = default;
    AWS_IOTDEVICEADVISOR_API SuiteRunInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API SuiteRunInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDEVICEADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Suite definition ID of the suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const { return m_suiteDefinitionId; }
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }
    template<typename SuiteDefinitionIdT = Aws::String>
    void SetSuiteDefinitionId(SuiteDefinitionIdT&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::forward<SuiteDefinitionIdT>(value); }
    template<typename SuiteDefinitionIdT = Aws::String>
    SuiteRunInformation& WithSuiteDefinitionId(SuiteDefinitionIdT&& value) { SetSuiteDefinitionId(std::forward<SuiteDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite definition version of the suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const { return m_suiteDefinitionVersion; }
    inline bool SuiteDefinitionVersionHasBeenSet() const { return m_suiteDefinitionVersionHasBeenSet; }
    template<typename SuiteDefinitionVersionT = Aws::String>
    void SetSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::forward<SuiteDefinitionVersionT>(value); }
    template<typename SuiteDefinitionVersionT = Aws::String>
    SuiteRunInformation& WithSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { SetSuiteDefinitionVersion(std::forward<SuiteDefinitionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite definition name of the suite run.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const { return m_suiteDefinitionName; }
    inline bool SuiteDefinitionNameHasBeenSet() const { return m_suiteDefinitionNameHasBeenSet; }
    template<typename SuiteDefinitionNameT = Aws::String>
    void SetSuiteDefinitionName(SuiteDefinitionNameT&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::forward<SuiteDefinitionNameT>(value); }
    template<typename SuiteDefinitionNameT = Aws::String>
    SuiteRunInformation& WithSuiteDefinitionName(SuiteDefinitionNameT&& value) { SetSuiteDefinitionName(std::forward<SuiteDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite run ID of the suite run.</p>
     */
    inline const Aws::String& GetSuiteRunId() const { return m_suiteRunId; }
    inline bool SuiteRunIdHasBeenSet() const { return m_suiteRunIdHasBeenSet; }
    template<typename SuiteRunIdT = Aws::String>
    void SetSuiteRunId(SuiteRunIdT&& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = std::forward<SuiteRunIdT>(value); }
    template<typename SuiteRunIdT = Aws::String>
    SuiteRunInformation& WithSuiteRunId(SuiteRunIdT&& value) { SetSuiteRunId(std::forward<SuiteRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the suite run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SuiteRunInformation& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the suite run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    SuiteRunInformation& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the suite run ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndAt() const { return m_endAt; }
    inline bool EndAtHasBeenSet() const { return m_endAtHasBeenSet; }
    template<typename EndAtT = Aws::Utils::DateTime>
    void SetEndAt(EndAtT&& value) { m_endAtHasBeenSet = true; m_endAt = std::forward<EndAtT>(value); }
    template<typename EndAtT = Aws::Utils::DateTime>
    SuiteRunInformation& WithEndAt(EndAtT&& value) { SetEndAt(std::forward<EndAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the suite run.</p>
     */
    inline SuiteRunStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SuiteRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SuiteRunInformation& WithStatus(SuiteRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of test cases that passed in the suite run.</p>
     */
    inline int GetPassed() const { return m_passed; }
    inline bool PassedHasBeenSet() const { return m_passedHasBeenSet; }
    inline void SetPassed(int value) { m_passedHasBeenSet = true; m_passed = value; }
    inline SuiteRunInformation& WithPassed(int value) { SetPassed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of test cases that failed in the suite run.</p>
     */
    inline int GetFailed() const { return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }
    inline SuiteRunInformation& WithFailed(int value) { SetFailed(value); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet = false;

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet = false;

    Aws::String m_suiteRunId;
    bool m_suiteRunIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endAt{};
    bool m_endAtHasBeenSet = false;

    SuiteRunStatus m_status{SuiteRunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_passed{0};
    bool m_passedHasBeenSet = false;

    int m_failed{0};
    bool m_failedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
