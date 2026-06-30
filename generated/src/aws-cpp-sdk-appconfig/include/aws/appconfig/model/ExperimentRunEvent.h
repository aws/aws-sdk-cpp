/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ExperimentRunEventType.h>
#include <aws/appconfig/model/TreatmentOverrides.h>
#include <aws/appconfig/model/TriggeredBy.h>
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
 * <p>Describes an event that occurred during an experiment run.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ExperimentRunEvent">AWS
 * API Reference</a></p>
 */
class ExperimentRunEvent {
 public:
  AWS_APPCONFIG_API ExperimentRunEvent() = default;
  AWS_APPCONFIG_API ExperimentRunEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API ExperimentRunEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the event.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ExperimentRunEvent& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the deployment associated with this
   * event.</p>
   */
  inline const Aws::String& GetAssociatedDeployment() const { return m_associatedDeployment; }
  inline bool AssociatedDeploymentHasBeenSet() const { return m_associatedDeploymentHasBeenSet; }
  template <typename AssociatedDeploymentT = Aws::String>
  void SetAssociatedDeployment(AssociatedDeploymentT&& value) {
    m_associatedDeploymentHasBeenSet = true;
    m_associatedDeployment = std::forward<AssociatedDeploymentT>(value);
  }
  template <typename AssociatedDeploymentT = Aws::String>
  ExperimentRunEvent& WithAssociatedDeployment(AssociatedDeploymentT&& value) {
    SetAssociatedDeployment(std::forward<AssociatedDeploymentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of event. Valid values: <code>RUN_STARTED</code>,
   * <code>EXPOSURE_UPDATED</code>, <code>OVERRIDES_UPDATED</code>,
   * <code>RUN_STOPPED</code>.</p>
   */
  inline ExperimentRunEventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(ExperimentRunEventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline ExperimentRunEvent& WithEventType(ExperimentRunEventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the event occurred, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetOccurredAt() const { return m_occurredAt; }
  inline bool OccurredAtHasBeenSet() const { return m_occurredAtHasBeenSet; }
  template <typename OccurredAtT = Aws::Utils::DateTime>
  void SetOccurredAt(OccurredAtT&& value) {
    m_occurredAtHasBeenSet = true;
    m_occurredAt = std::forward<OccurredAtT>(value);
  }
  template <typename OccurredAtT = Aws::Utils::DateTime>
  ExperimentRunEvent& WithOccurredAt(OccurredAtT&& value) {
    SetOccurredAt(std::forward<OccurredAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal that triggered the event.</p>
   */
  inline TriggeredBy GetTriggeredBy() const { return m_triggeredBy; }
  inline bool TriggeredByHasBeenSet() const { return m_triggeredByHasBeenSet; }
  inline void SetTriggeredBy(TriggeredBy value) {
    m_triggeredByHasBeenSet = true;
    m_triggeredBy = value;
  }
  inline ExperimentRunEvent& WithTriggeredBy(TriggeredBy value) {
    SetTriggeredBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exposure percentage at the time of the event.</p>
   */
  inline double GetExposurePercentage() const { return m_exposurePercentage; }
  inline bool ExposurePercentageHasBeenSet() const { return m_exposurePercentageHasBeenSet; }
  inline void SetExposurePercentage(double value) {
    m_exposurePercentageHasBeenSet = true;
    m_exposurePercentage = value;
  }
  inline ExperimentRunEvent& WithExposurePercentage(double value) {
    SetExposurePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The treatment overrides at the time of the event.</p>
   */
  inline const TreatmentOverrides& GetTreatmentOverrides() const { return m_treatmentOverrides; }
  inline bool TreatmentOverridesHasBeenSet() const { return m_treatmentOverridesHasBeenSet; }
  template <typename TreatmentOverridesT = TreatmentOverrides>
  void SetTreatmentOverrides(TreatmentOverridesT&& value) {
    m_treatmentOverridesHasBeenSet = true;
    m_treatmentOverrides = std::forward<TreatmentOverridesT>(value);
  }
  template <typename TreatmentOverridesT = TreatmentOverrides>
  ExperimentRunEvent& WithTreatmentOverrides(TreatmentOverridesT&& value) {
    SetTreatmentOverrides(std::forward<TreatmentOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_associatedDeployment;

  ExperimentRunEventType m_eventType{ExperimentRunEventType::NOT_SET};

  Aws::Utils::DateTime m_occurredAt{};

  TriggeredBy m_triggeredBy{TriggeredBy::NOT_SET};

  double m_exposurePercentage{0.0};

  TreatmentOverrides m_treatmentOverrides;
  bool m_descriptionHasBeenSet = false;
  bool m_associatedDeploymentHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_occurredAtHasBeenSet = false;
  bool m_triggeredByHasBeenSet = false;
  bool m_exposurePercentageHasBeenSet = false;
  bool m_treatmentOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
