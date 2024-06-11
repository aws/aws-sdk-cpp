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
    AWS_LOOKOUTMETRICS_API Alert();
    AWS_LOOKOUTMETRICS_API Alert(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Alert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline const Action& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline Alert& WithAction(const Action& value) { SetAction(value); return *this;}
    inline Alert& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the alert.</p>
     */
    inline const Aws::String& GetAlertDescription() const{ return m_alertDescription; }
    inline bool AlertDescriptionHasBeenSet() const { return m_alertDescriptionHasBeenSet; }
    inline void SetAlertDescription(const Aws::String& value) { m_alertDescriptionHasBeenSet = true; m_alertDescription = value; }
    inline void SetAlertDescription(Aws::String&& value) { m_alertDescriptionHasBeenSet = true; m_alertDescription = std::move(value); }
    inline void SetAlertDescription(const char* value) { m_alertDescriptionHasBeenSet = true; m_alertDescription.assign(value); }
    inline Alert& WithAlertDescription(const Aws::String& value) { SetAlertDescription(value); return *this;}
    inline Alert& WithAlertDescription(Aws::String&& value) { SetAlertDescription(std::move(value)); return *this;}
    inline Alert& WithAlertDescription(const char* value) { SetAlertDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the alert.</p>
     */
    inline const Aws::String& GetAlertArn() const{ return m_alertArn; }
    inline bool AlertArnHasBeenSet() const { return m_alertArnHasBeenSet; }
    inline void SetAlertArn(const Aws::String& value) { m_alertArnHasBeenSet = true; m_alertArn = value; }
    inline void SetAlertArn(Aws::String&& value) { m_alertArnHasBeenSet = true; m_alertArn = std::move(value); }
    inline void SetAlertArn(const char* value) { m_alertArnHasBeenSet = true; m_alertArn.assign(value); }
    inline Alert& WithAlertArn(const Aws::String& value) { SetAlertArn(value); return *this;}
    inline Alert& WithAlertArn(Aws::String&& value) { SetAlertArn(std::move(value)); return *this;}
    inline Alert& WithAlertArn(const char* value) { SetAlertArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline Alert& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline Alert& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline Alert& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alert.</p>
     */
    inline const Aws::String& GetAlertName() const{ return m_alertName; }
    inline bool AlertNameHasBeenSet() const { return m_alertNameHasBeenSet; }
    inline void SetAlertName(const Aws::String& value) { m_alertNameHasBeenSet = true; m_alertName = value; }
    inline void SetAlertName(Aws::String&& value) { m_alertNameHasBeenSet = true; m_alertName = std::move(value); }
    inline void SetAlertName(const char* value) { m_alertNameHasBeenSet = true; m_alertName.assign(value); }
    inline Alert& WithAlertName(const Aws::String& value) { SetAlertName(value); return *this;}
    inline Alert& WithAlertName(Aws::String&& value) { SetAlertName(std::move(value)); return *this;}
    inline Alert& WithAlertName(const char* value) { SetAlertName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum severity for an anomaly to trigger the alert.</p>
     */
    inline int GetAlertSensitivityThreshold() const{ return m_alertSensitivityThreshold; }
    inline bool AlertSensitivityThresholdHasBeenSet() const { return m_alertSensitivityThresholdHasBeenSet; }
    inline void SetAlertSensitivityThreshold(int value) { m_alertSensitivityThresholdHasBeenSet = true; m_alertSensitivityThreshold = value; }
    inline Alert& WithAlertSensitivityThreshold(int value) { SetAlertSensitivityThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the alert.</p>
     */
    inline const AlertType& GetAlertType() const{ return m_alertType; }
    inline bool AlertTypeHasBeenSet() const { return m_alertTypeHasBeenSet; }
    inline void SetAlertType(const AlertType& value) { m_alertTypeHasBeenSet = true; m_alertType = value; }
    inline void SetAlertType(AlertType&& value) { m_alertTypeHasBeenSet = true; m_alertType = std::move(value); }
    inline Alert& WithAlertType(const AlertType& value) { SetAlertType(value); return *this;}
    inline Alert& WithAlertType(AlertType&& value) { SetAlertType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the alert.</p>
     */
    inline const AlertStatus& GetAlertStatus() const{ return m_alertStatus; }
    inline bool AlertStatusHasBeenSet() const { return m_alertStatusHasBeenSet; }
    inline void SetAlertStatus(const AlertStatus& value) { m_alertStatusHasBeenSet = true; m_alertStatus = value; }
    inline void SetAlertStatus(AlertStatus&& value) { m_alertStatusHasBeenSet = true; m_alertStatus = std::move(value); }
    inline Alert& WithAlertStatus(const AlertStatus& value) { SetAlertStatus(value); return *this;}
    inline Alert& WithAlertStatus(AlertStatus&& value) { SetAlertStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the alert was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }
    inline Alert& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline Alert& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the alert was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Alert& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Alert& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilter.</p>
     */
    inline const AlertFilters& GetAlertFilters() const{ return m_alertFilters; }
    inline bool AlertFiltersHasBeenSet() const { return m_alertFiltersHasBeenSet; }
    inline void SetAlertFilters(const AlertFilters& value) { m_alertFiltersHasBeenSet = true; m_alertFilters = value; }
    inline void SetAlertFilters(AlertFilters&& value) { m_alertFiltersHasBeenSet = true; m_alertFilters = std::move(value); }
    inline Alert& WithAlertFilters(const AlertFilters& value) { SetAlertFilters(value); return *this;}
    inline Alert& WithAlertFilters(AlertFilters&& value) { SetAlertFilters(std::move(value)); return *this;}
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

    int m_alertSensitivityThreshold;
    bool m_alertSensitivityThresholdHasBeenSet = false;

    AlertType m_alertType;
    bool m_alertTypeHasBeenSet = false;

    AlertStatus m_alertStatus;
    bool m_alertStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    AlertFilters m_alertFilters;
    bool m_alertFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
