/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AlertType.h>
#include <aws/lookoutmetrics/model/AlertStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutmetrics/model/AlertFilters.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>A configuration for Amazon SNS-integrated notifications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/Alert">AWS
   * API Reference</a></p>
   */
  class Alert
  {
  public:
    AWS_LOOKOUTMETRICS_API Alert() = default;
    AWS_LOOKOUTMETRICS_API Alert(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Alert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline const Action& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Action>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Action>
    Alert& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the alert.</p>
     */
    inline const Aws::String& GetAlertDescription() const { return m_alertDescription; }
    inline bool AlertDescriptionHasBeenSet() const { return m_alertDescriptionHasBeenSet; }
    template<typename AlertDescriptionT = Aws::String>
    void SetAlertDescription(AlertDescriptionT&& value) { m_alertDescriptionHasBeenSet = true; m_alertDescription = std::forward<AlertDescriptionT>(value); }
    template<typename AlertDescriptionT = Aws::String>
    Alert& WithAlertDescription(AlertDescriptionT&& value) { SetAlertDescription(std::forward<AlertDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the alert.</p>
     */
    inline const Aws::String& GetAlertArn() const { return m_alertArn; }
    inline bool AlertArnHasBeenSet() const { return m_alertArnHasBeenSet; }
    template<typename AlertArnT = Aws::String>
    void SetAlertArn(AlertArnT&& value) { m_alertArnHasBeenSet = true; m_alertArn = std::forward<AlertArnT>(value); }
    template<typename AlertArnT = Aws::String>
    Alert& WithAlertArn(AlertArnT&& value) { SetAlertArn(std::forward<AlertArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    Alert& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alert.</p>
     */
    inline const Aws::String& GetAlertName() const { return m_alertName; }
    inline bool AlertNameHasBeenSet() const { return m_alertNameHasBeenSet; }
    template<typename AlertNameT = Aws::String>
    void SetAlertName(AlertNameT&& value) { m_alertNameHasBeenSet = true; m_alertName = std::forward<AlertNameT>(value); }
    template<typename AlertNameT = Aws::String>
    Alert& WithAlertName(AlertNameT&& value) { SetAlertName(std::forward<AlertNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum severity for an anomaly to trigger the alert.</p>
     */
    inline int GetAlertSensitivityThreshold() const { return m_alertSensitivityThreshold; }
    inline bool AlertSensitivityThresholdHasBeenSet() const { return m_alertSensitivityThresholdHasBeenSet; }
    inline void SetAlertSensitivityThreshold(int value) { m_alertSensitivityThresholdHasBeenSet = true; m_alertSensitivityThreshold = value; }
    inline Alert& WithAlertSensitivityThreshold(int value) { SetAlertSensitivityThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the alert.</p>
     */
    inline AlertType GetAlertType() const { return m_alertType; }
    inline bool AlertTypeHasBeenSet() const { return m_alertTypeHasBeenSet; }
    inline void SetAlertType(AlertType value) { m_alertTypeHasBeenSet = true; m_alertType = value; }
    inline Alert& WithAlertType(AlertType value) { SetAlertType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the alert.</p>
     */
    inline AlertStatus GetAlertStatus() const { return m_alertStatus; }
    inline bool AlertStatusHasBeenSet() const { return m_alertStatusHasBeenSet; }
    inline void SetAlertStatus(AlertStatus value) { m_alertStatusHasBeenSet = true; m_alertStatus = value; }
    inline Alert& WithAlertStatus(AlertStatus value) { SetAlertStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the alert was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    Alert& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the alert was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Alert& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilter.</p>
     */
    inline const AlertFilters& GetAlertFilters() const { return m_alertFilters; }
    inline bool AlertFiltersHasBeenSet() const { return m_alertFiltersHasBeenSet; }
    template<typename AlertFiltersT = AlertFilters>
    void SetAlertFilters(AlertFiltersT&& value) { m_alertFiltersHasBeenSet = true; m_alertFilters = std::forward<AlertFiltersT>(value); }
    template<typename AlertFiltersT = AlertFilters>
    Alert& WithAlertFilters(AlertFiltersT&& value) { SetAlertFilters(std::forward<AlertFiltersT>(value)); return *this;}
    ///@}
  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_alertDescription;
    bool m_alertDescriptionHasBeenSet = false;

    Aws::String m_alertArn;
    bool m_alertArnHasBeenSet = false;

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_alertName;
    bool m_alertNameHasBeenSet = false;

    int m_alertSensitivityThreshold{0};
    bool m_alertSensitivityThresholdHasBeenSet = false;

    AlertType m_alertType{AlertType::NOT_SET};
    bool m_alertTypeHasBeenSet = false;

    AlertStatus m_alertStatus{AlertStatus::NOT_SET};
    bool m_alertStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    AlertFilters m_alertFilters;
    bool m_alertFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
