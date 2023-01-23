/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/Action.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lookoutmetrics/model/AlertFilters.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class CreateAlertRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API CreateAlertRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlert"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


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
    inline CreateAlertRequest& WithAlertName(const Aws::String& value) { SetAlertName(value); return *this;}

    /**
     * <p>The name of the alert.</p>
     */
    inline CreateAlertRequest& WithAlertName(Aws::String&& value) { SetAlertName(std::move(value)); return *this;}

    /**
     * <p>The name of the alert.</p>
     */
    inline CreateAlertRequest& WithAlertName(const char* value) { SetAlertName(value); return *this;}


    /**
     * <p>An integer from 0 to 100 specifying the alert sensitivity threshold.</p>
     */
    inline int GetAlertSensitivityThreshold() const{ return m_alertSensitivityThreshold; }

    /**
     * <p>An integer from 0 to 100 specifying the alert sensitivity threshold.</p>
     */
    inline bool AlertSensitivityThresholdHasBeenSet() const { return m_alertSensitivityThresholdHasBeenSet; }

    /**
     * <p>An integer from 0 to 100 specifying the alert sensitivity threshold.</p>
     */
    inline void SetAlertSensitivityThreshold(int value) { m_alertSensitivityThresholdHasBeenSet = true; m_alertSensitivityThreshold = value; }

    /**
     * <p>An integer from 0 to 100 specifying the alert sensitivity threshold.</p>
     */
    inline CreateAlertRequest& WithAlertSensitivityThreshold(int value) { SetAlertSensitivityThreshold(value); return *this;}


    /**
     * <p>A description of the alert.</p>
     */
    inline const Aws::String& GetAlertDescription() const{ return m_alertDescription; }

    /**
     * <p>A description of the alert.</p>
     */
    inline bool AlertDescriptionHasBeenSet() const { return m_alertDescriptionHasBeenSet; }

    /**
     * <p>A description of the alert.</p>
     */
    inline void SetAlertDescription(const Aws::String& value) { m_alertDescriptionHasBeenSet = true; m_alertDescription = value; }

    /**
     * <p>A description of the alert.</p>
     */
    inline void SetAlertDescription(Aws::String&& value) { m_alertDescriptionHasBeenSet = true; m_alertDescription = std::move(value); }

    /**
     * <p>A description of the alert.</p>
     */
    inline void SetAlertDescription(const char* value) { m_alertDescriptionHasBeenSet = true; m_alertDescription.assign(value); }

    /**
     * <p>A description of the alert.</p>
     */
    inline CreateAlertRequest& WithAlertDescription(const Aws::String& value) { SetAlertDescription(value); return *this;}

    /**
     * <p>A description of the alert.</p>
     */
    inline CreateAlertRequest& WithAlertDescription(Aws::String&& value) { SetAlertDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the alert.</p>
     */
    inline CreateAlertRequest& WithAlertDescription(const char* value) { SetAlertDescription(value); return *this;}


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
    inline CreateAlertRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline CreateAlertRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the detector to which the alert is attached.</p>
     */
    inline CreateAlertRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline CreateAlertRequest& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline CreateAlertRequest& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline CreateAlertRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilterList.</p>
     */
    inline const AlertFilters& GetAlertFilters() const{ return m_alertFilters; }

    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilterList.</p>
     */
    inline bool AlertFiltersHasBeenSet() const { return m_alertFiltersHasBeenSet; }

    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilterList.</p>
     */
    inline void SetAlertFilters(const AlertFilters& value) { m_alertFiltersHasBeenSet = true; m_alertFilters = value; }

    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilterList.</p>
     */
    inline void SetAlertFilters(AlertFilters&& value) { m_alertFiltersHasBeenSet = true; m_alertFilters = std::move(value); }

    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilterList.</p>
     */
    inline CreateAlertRequest& WithAlertFilters(const AlertFilters& value) { SetAlertFilters(value); return *this;}

    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilterList.</p>
     */
    inline CreateAlertRequest& WithAlertFilters(AlertFilters&& value) { SetAlertFilters(std::move(value)); return *this;}

  private:

    Aws::String m_alertName;
    bool m_alertNameHasBeenSet = false;

    int m_alertSensitivityThreshold;
    bool m_alertSensitivityThresholdHasBeenSet = false;

    Aws::String m_alertDescription;
    bool m_alertDescriptionHasBeenSet = false;

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AlertFilters m_alertFilters;
    bool m_alertFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
