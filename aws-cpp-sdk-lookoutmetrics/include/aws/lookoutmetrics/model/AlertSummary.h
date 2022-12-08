/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AlertType.h>
#include <aws/lookoutmetrics/model/AlertStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Provides a summary of an alert's configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AlertSummary">AWS
   * API Reference</a></p>
   */
  class AlertSummary
  {
  public:
    AWS_LOOKOUTMETRICS_API AlertSummary();
    AWS_LOOKOUTMETRICS_API AlertSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AlertSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the alert.</p>
     */
    inline const Aws::String& GetAlertArn() const{ return m_alertArn; }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline bool AlertArnHasBeenSet() const { return m_alertArnHasBeenSet; }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline void SetAlertArn(const Aws::String& value) { m_alertArnHasBeenSet = true; m_alertArn = value; }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline void SetAlertArn(Aws::String&& value) { m_alertArnHasBeenSet = true; m_alertArn = std::move(value); }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline void SetAlertArn(const char* value) { m_alertArnHasBeenSet = true; m_alertArn.assign(value); }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline AlertSummary& WithAlertArn(const Aws::String& value) { SetAlertArn(value); return *this;}

    /**
     * <p>The ARN of the alert.</p>
     */
    inline AlertSummary& WithAlertArn(Aws::String&& value) { SetAlertArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the alert.</p>
     */
    inline AlertSummary& WithAlertArn(const char* value) { SetAlertArn(value); return *this;}


    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline AlertSummary& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline AlertSummary& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline AlertSummary& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>The name of the alert.</p>
     */
    inline const Aws::String& GetAlertName() const{ return m_alertName; }

    /**
     * <p>The name of the alert.</p>
     */
    inline bool AlertNameHasBeenSet() const { return m_alertNameHasBeenSet; }

    /**
     * <p>The name of the alert.</p>
     */
    inline void SetAlertName(const Aws::String& value) { m_alertNameHasBeenSet = true; m_alertName = value; }

    /**
     * <p>The name of the alert.</p>
     */
    inline void SetAlertName(Aws::String&& value) { m_alertNameHasBeenSet = true; m_alertName = std::move(value); }

    /**
     * <p>The name of the alert.</p>
     */
    inline void SetAlertName(const char* value) { m_alertNameHasBeenSet = true; m_alertName.assign(value); }

    /**
     * <p>The name of the alert.</p>
     */
    inline AlertSummary& WithAlertName(const Aws::String& value) { SetAlertName(value); return *this;}

    /**
     * <p>The name of the alert.</p>
     */
    inline AlertSummary& WithAlertName(Aws::String&& value) { SetAlertName(std::move(value)); return *this;}

    /**
     * <p>The name of the alert.</p>
     */
    inline AlertSummary& WithAlertName(const char* value) { SetAlertName(value); return *this;}


    /**
     * <p>The minimum severity for an anomaly to trigger the alert.</p>
     */
    inline int GetAlertSensitivityThreshold() const{ return m_alertSensitivityThreshold; }

    /**
     * <p>The minimum severity for an anomaly to trigger the alert.</p>
     */
    inline bool AlertSensitivityThresholdHasBeenSet() const { return m_alertSensitivityThresholdHasBeenSet; }

    /**
     * <p>The minimum severity for an anomaly to trigger the alert.</p>
     */
    inline void SetAlertSensitivityThreshold(int value) { m_alertSensitivityThresholdHasBeenSet = true; m_alertSensitivityThreshold = value; }

    /**
     * <p>The minimum severity for an anomaly to trigger the alert.</p>
     */
    inline AlertSummary& WithAlertSensitivityThreshold(int value) { SetAlertSensitivityThreshold(value); return *this;}


    /**
     * <p>The type of the alert.</p>
     */
    inline const AlertType& GetAlertType() const{ return m_alertType; }

    /**
     * <p>The type of the alert.</p>
     */
    inline bool AlertTypeHasBeenSet() const { return m_alertTypeHasBeenSet; }

    /**
     * <p>The type of the alert.</p>
     */
    inline void SetAlertType(const AlertType& value) { m_alertTypeHasBeenSet = true; m_alertType = value; }

    /**
     * <p>The type of the alert.</p>
     */
    inline void SetAlertType(AlertType&& value) { m_alertTypeHasBeenSet = true; m_alertType = std::move(value); }

    /**
     * <p>The type of the alert.</p>
     */
    inline AlertSummary& WithAlertType(const AlertType& value) { SetAlertType(value); return *this;}

    /**
     * <p>The type of the alert.</p>
     */
    inline AlertSummary& WithAlertType(AlertType&& value) { SetAlertType(std::move(value)); return *this;}


    /**
     * <p>The status of the alert.</p>
     */
    inline const AlertStatus& GetAlertStatus() const{ return m_alertStatus; }

    /**
     * <p>The status of the alert.</p>
     */
    inline bool AlertStatusHasBeenSet() const { return m_alertStatusHasBeenSet; }

    /**
     * <p>The status of the alert.</p>
     */
    inline void SetAlertStatus(const AlertStatus& value) { m_alertStatusHasBeenSet = true; m_alertStatus = value; }

    /**
     * <p>The status of the alert.</p>
     */
    inline void SetAlertStatus(AlertStatus&& value) { m_alertStatusHasBeenSet = true; m_alertStatus = std::move(value); }

    /**
     * <p>The status of the alert.</p>
     */
    inline AlertSummary& WithAlertStatus(const AlertStatus& value) { SetAlertStatus(value); return *this;}

    /**
     * <p>The status of the alert.</p>
     */
    inline AlertSummary& WithAlertStatus(AlertStatus&& value) { SetAlertStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the alert was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The time at which the alert was last modified.</p>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>The time at which the alert was last modified.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>The time at which the alert was last modified.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>The time at which the alert was last modified.</p>
     */
    inline AlertSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The time at which the alert was last modified.</p>
     */
    inline AlertSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the alert was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the alert was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time at which the alert was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the alert was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time at which the alert was created.</p>
     */
    inline AlertSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the alert was created.</p>
     */
    inline AlertSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The alert's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline AlertSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
