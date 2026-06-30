/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ExperimentDefinitionSnapshot.h>
#include <aws/appconfig/model/ExperimentRunResult.h>
#include <aws/appconfig/model/ExperimentRunStatus.h>
#include <aws/appconfig/model/TreatmentOverrides.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {
/**
 * <p>Describes an experiment run, including its status, exposure settings, and
 * treatment overrides.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ExperimentRun">AWS
 * API Reference</a></p>
 */
class GetExperimentRunResult {
 public:
  AWS_APPCONFIG_API GetExperimentRunResult() = default;
  AWS_APPCONFIG_API GetExperimentRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPCONFIG_API GetExperimentRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The application ID.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  GetExperimentRunResult& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The experiment definition ID.</p>
   */
  inline const Aws::String& GetExperimentDefinitionId() const { return m_experimentDefinitionId; }
  template <typename ExperimentDefinitionIdT = Aws::String>
  void SetExperimentDefinitionId(ExperimentDefinitionIdT&& value) {
    m_experimentDefinitionIdHasBeenSet = true;
    m_experimentDefinitionId = std::forward<ExperimentDefinitionIdT>(value);
  }
  template <typename ExperimentDefinitionIdT = Aws::String>
  GetExperimentRunResult& WithExperimentDefinitionId(ExperimentDefinitionIdT&& value) {
    SetExperimentDefinitionId(std::forward<ExperimentDefinitionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The experiment run number.</p>
   */
  inline int GetRun() const { return m_run; }
  inline void SetRun(int value) {
    m_runHasBeenSet = true;
    m_run = value;
  }
  inline GetExperimentRunResult& WithRun(int value) {
    SetRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the experiment run.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetExperimentRunResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the experiment run. Valid values: <code>RUNNING</code>,
   * <code>DONE</code>.</p>
   */
  inline ExperimentRunStatus GetStatus() const { return m_status; }
  inline void SetStatus(ExperimentRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetExperimentRunResult& WithStatus(ExperimentRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the target audience exposed to treatments.</p>
   */
  inline double GetExposurePercentage() const { return m_exposurePercentage; }
  inline void SetExposurePercentage(double value) {
    m_exposurePercentageHasBeenSet = true;
    m_exposurePercentage = value;
  }
  inline GetExperimentRunResult& WithExposurePercentage(double value) {
    SetExposurePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Treatment assignment overrides that assign specific entity IDs to
   * treatments.</p>
   */
  inline const TreatmentOverrides& GetTreatmentOverrides() const { return m_treatmentOverrides; }
  template <typename TreatmentOverridesT = TreatmentOverrides>
  void SetTreatmentOverrides(TreatmentOverridesT&& value) {
    m_treatmentOverridesHasBeenSet = true;
    m_treatmentOverrides = std::forward<TreatmentOverridesT>(value);
  }
  template <typename TreatmentOverridesT = TreatmentOverrides>
  GetExperimentRunResult& WithTreatmentOverrides(TreatmentOverridesT&& value) {
    SetTreatmentOverrides(std::forward<TreatmentOverridesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of the experiment run, including the executive summary and launch
   * decision rationale.</p>
   */
  inline const ExperimentRunResult& GetResult() const { return m_result; }
  template <typename ResultT = ExperimentRunResult>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = ExperimentRunResult>
  GetExperimentRunResult& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the experiment run started, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetExperimentRunResult& WithStartedAt(StartedAtT&& value) {
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
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetExperimentRunResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the experiment run ended, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetExperimentRunResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A snapshot of the experiment definition at the time the run was started.</p>
   */
  inline const ExperimentDefinitionSnapshot& GetExperimentDefinitionSnapshot() const { return m_experimentDefinitionSnapshot; }
  template <typename ExperimentDefinitionSnapshotT = ExperimentDefinitionSnapshot>
  void SetExperimentDefinitionSnapshot(ExperimentDefinitionSnapshotT&& value) {
    m_experimentDefinitionSnapshotHasBeenSet = true;
    m_experimentDefinitionSnapshot = std::forward<ExperimentDefinitionSnapshotT>(value);
  }
  template <typename ExperimentDefinitionSnapshotT = ExperimentDefinitionSnapshot>
  GetExperimentRunResult& WithExperimentDefinitionSnapshot(ExperimentDefinitionSnapshotT&& value) {
    SetExperimentDefinitionSnapshot(std::forward<ExperimentDefinitionSnapshotT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetExperimentRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_applicationId;

  Aws::String m_experimentDefinitionId;

  int m_run{0};

  Aws::String m_description;

  ExperimentRunStatus m_status{ExperimentRunStatus::NOT_SET};

  double m_exposurePercentage{0.0};

  TreatmentOverrides m_treatmentOverrides;

  ExperimentRunResult m_result;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_endedAt{};

  ExperimentDefinitionSnapshot m_experimentDefinitionSnapshot;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_applicationIdHasBeenSet = false;
  bool m_experimentDefinitionIdHasBeenSet = false;
  bool m_runHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_exposurePercentageHasBeenSet = false;
  bool m_treatmentOverridesHasBeenSet = false;
  bool m_resultHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_experimentDefinitionSnapshotHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
