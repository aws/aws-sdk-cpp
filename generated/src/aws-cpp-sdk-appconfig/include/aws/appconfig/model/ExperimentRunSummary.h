/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ExperimentRunStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {

/**
 * <p>Summary information about an experiment run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ExperimentRunSummary">AWS
 * API Reference</a></p>
 */
class ExperimentRunSummary {
 public:
  AWS_APPCONFIG_API ExperimentRunSummary() = default;
  AWS_APPCONFIG_API ExperimentRunSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API ExperimentRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The experiment definition ID.</p>
   */
  inline const Aws::String& GetExperimentDefinitionId() const { return m_experimentDefinitionId; }
  inline bool ExperimentDefinitionIdHasBeenSet() const { return m_experimentDefinitionIdHasBeenSet; }
  template <typename ExperimentDefinitionIdT = Aws::String>
  void SetExperimentDefinitionId(ExperimentDefinitionIdT&& value) {
    m_experimentDefinitionIdHasBeenSet = true;
    m_experimentDefinitionId = std::forward<ExperimentDefinitionIdT>(value);
  }
  template <typename ExperimentDefinitionIdT = Aws::String>
  ExperimentRunSummary& WithExperimentDefinitionId(ExperimentDefinitionIdT&& value) {
    SetExperimentDefinitionId(std::forward<ExperimentDefinitionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The experiment run number.</p>
   */
  inline int GetRun() const { return m_run; }
  inline bool RunHasBeenSet() const { return m_runHasBeenSet; }
  inline void SetRun(int value) {
    m_runHasBeenSet = true;
    m_run = value;
  }
  inline ExperimentRunSummary& WithRun(int value) {
    SetRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the experiment run.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ExperimentRunSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the experiment run.</p>
   */
  inline ExperimentRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExperimentRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExperimentRunSummary& WithStatus(ExperimentRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the experiment run started, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  ExperimentRunSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the experiment run was last updated, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ExperimentRunSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the experiment run ended, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  ExperimentRunSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_experimentDefinitionId;

  int m_run{0};

  Aws::String m_description;

  ExperimentRunStatus m_status{ExperimentRunStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_endedAt{};
  bool m_experimentDefinitionIdHasBeenSet = false;
  bool m_runHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
