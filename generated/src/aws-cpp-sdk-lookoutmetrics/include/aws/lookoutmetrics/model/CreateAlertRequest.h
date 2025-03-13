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
    AWS_LOOKOUTMETRICS_API CreateAlertRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlert"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the alert.</p>
     */
    inline const Aws::String& GetAlertName() const { return m_alertName; }
    inline bool AlertNameHasBeenSet() const { return m_alertNameHasBeenSet; }
    template<typename AlertNameT = Aws::String>
    void SetAlertName(AlertNameT&& value) { m_alertNameHasBeenSet = true; m_alertName = std::forward<AlertNameT>(value); }
    template<typename AlertNameT = Aws::String>
    CreateAlertRequest& WithAlertName(AlertNameT&& value) { SetAlertName(std::forward<AlertNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer from 0 to 100 specifying the alert sensitivity threshold.</p>
     */
    inline int GetAlertSensitivityThreshold() const { return m_alertSensitivityThreshold; }
    inline bool AlertSensitivityThresholdHasBeenSet() const { return m_alertSensitivityThresholdHasBeenSet; }
    inline void SetAlertSensitivityThreshold(int value) { m_alertSensitivityThresholdHasBeenSet = true; m_alertSensitivityThreshold = value; }
    inline CreateAlertRequest& WithAlertSensitivityThreshold(int value) { SetAlertSensitivityThreshold(value); return *this;}
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
    CreateAlertRequest& WithAlertDescription(AlertDescriptionT&& value) { SetAlertDescription(std::forward<AlertDescriptionT>(value)); return *this;}
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
    CreateAlertRequest& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline const Action& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Action>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Action>
    CreateAlertRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the alert.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAlertRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAlertRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilterList.</p>
     */
    inline const AlertFilters& GetAlertFilters() const { return m_alertFilters; }
    inline bool AlertFiltersHasBeenSet() const { return m_alertFiltersHasBeenSet; }
    template<typename AlertFiltersT = AlertFilters>
    void SetAlertFilters(AlertFiltersT&& value) { m_alertFiltersHasBeenSet = true; m_alertFilters = std::forward<AlertFiltersT>(value); }
    template<typename AlertFiltersT = AlertFilters>
    CreateAlertRequest& WithAlertFilters(AlertFiltersT&& value) { SetAlertFilters(std::forward<AlertFiltersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alertName;
    bool m_alertNameHasBeenSet = false;

    int m_alertSensitivityThreshold{0};
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
