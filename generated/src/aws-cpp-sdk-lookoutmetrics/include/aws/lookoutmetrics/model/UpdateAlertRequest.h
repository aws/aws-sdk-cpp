/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/Action.h>
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
  class UpdateAlertRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API UpdateAlertRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAlert"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the alert to update.</p>
     */
    inline const Aws::String& GetAlertArn() const { return m_alertArn; }
    inline bool AlertArnHasBeenSet() const { return m_alertArnHasBeenSet; }
    template<typename AlertArnT = Aws::String>
    void SetAlertArn(AlertArnT&& value) { m_alertArnHasBeenSet = true; m_alertArn = std::forward<AlertArnT>(value); }
    template<typename AlertArnT = Aws::String>
    UpdateAlertRequest& WithAlertArn(AlertArnT&& value) { SetAlertArn(std::forward<AlertArnT>(value)); return *this;}
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
    UpdateAlertRequest& WithAlertDescription(AlertDescriptionT&& value) { SetAlertDescription(std::forward<AlertDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer from 0 to 100 specifying the alert sensitivity threshold.</p>
     */
    inline int GetAlertSensitivityThreshold() const { return m_alertSensitivityThreshold; }
    inline bool AlertSensitivityThresholdHasBeenSet() const { return m_alertSensitivityThresholdHasBeenSet; }
    inline void SetAlertSensitivityThreshold(int value) { m_alertSensitivityThresholdHasBeenSet = true; m_alertSensitivityThreshold = value; }
    inline UpdateAlertRequest& WithAlertSensitivityThreshold(int value) { SetAlertSensitivityThreshold(value); return *this;}
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
    UpdateAlertRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
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
    UpdateAlertRequest& WithAlertFilters(AlertFiltersT&& value) { SetAlertFilters(std::forward<AlertFiltersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alertArn;
    bool m_alertArnHasBeenSet = false;

    Aws::String m_alertDescription;
    bool m_alertDescriptionHasBeenSet = false;

    int m_alertSensitivityThreshold{0};
    bool m_alertSensitivityThresholdHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;

    AlertFilters m_alertFilters;
    bool m_alertFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
