﻿/**
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
    AWS_LOOKOUTMETRICS_API UpdateAlertRequest();

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
    inline const Aws::String& GetAlertArn() const{ return m_alertArn; }
    inline bool AlertArnHasBeenSet() const { return m_alertArnHasBeenSet; }
    inline void SetAlertArn(const Aws::String& value) { m_alertArnHasBeenSet = true; m_alertArn = value; }
    inline void SetAlertArn(Aws::String&& value) { m_alertArnHasBeenSet = true; m_alertArn = std::move(value); }
    inline void SetAlertArn(const char* value) { m_alertArnHasBeenSet = true; m_alertArn.assign(value); }
    inline UpdateAlertRequest& WithAlertArn(const Aws::String& value) { SetAlertArn(value); return *this;}
    inline UpdateAlertRequest& WithAlertArn(Aws::String&& value) { SetAlertArn(std::move(value)); return *this;}
    inline UpdateAlertRequest& WithAlertArn(const char* value) { SetAlertArn(value); return *this;}
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
    inline UpdateAlertRequest& WithAlertDescription(const Aws::String& value) { SetAlertDescription(value); return *this;}
    inline UpdateAlertRequest& WithAlertDescription(Aws::String&& value) { SetAlertDescription(std::move(value)); return *this;}
    inline UpdateAlertRequest& WithAlertDescription(const char* value) { SetAlertDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer from 0 to 100 specifying the alert sensitivity threshold.</p>
     */
    inline int GetAlertSensitivityThreshold() const{ return m_alertSensitivityThreshold; }
    inline bool AlertSensitivityThresholdHasBeenSet() const { return m_alertSensitivityThresholdHasBeenSet; }
    inline void SetAlertSensitivityThreshold(int value) { m_alertSensitivityThresholdHasBeenSet = true; m_alertSensitivityThreshold = value; }
    inline UpdateAlertRequest& WithAlertSensitivityThreshold(int value) { SetAlertSensitivityThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Action that will be triggered when there is an alert.</p>
     */
    inline const Action& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline UpdateAlertRequest& WithAction(const Action& value) { SetAction(value); return *this;}
    inline UpdateAlertRequest& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the alert filters, containing MetricList and
     * DimensionFilterList.</p>
     */
    inline const AlertFilters& GetAlertFilters() const{ return m_alertFilters; }
    inline bool AlertFiltersHasBeenSet() const { return m_alertFiltersHasBeenSet; }
    inline void SetAlertFilters(const AlertFilters& value) { m_alertFiltersHasBeenSet = true; m_alertFilters = value; }
    inline void SetAlertFilters(AlertFilters&& value) { m_alertFiltersHasBeenSet = true; m_alertFilters = std::move(value); }
    inline UpdateAlertRequest& WithAlertFilters(const AlertFilters& value) { SetAlertFilters(value); return *this;}
    inline UpdateAlertRequest& WithAlertFilters(AlertFilters&& value) { SetAlertFilters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_alertArn;
    bool m_alertArnHasBeenSet = false;

    Aws::String m_alertDescription;
    bool m_alertDescriptionHasBeenSet = false;

    int m_alertSensitivityThreshold;
    bool m_alertSensitivityThresholdHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;

    AlertFilters m_alertFilters;
    bool m_alertFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
