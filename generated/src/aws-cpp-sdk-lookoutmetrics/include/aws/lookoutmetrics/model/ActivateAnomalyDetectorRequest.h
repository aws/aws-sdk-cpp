/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class ActivateAnomalyDetectorRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API ActivateAnomalyDetectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ActivateAnomalyDetector"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the anomaly detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    ActivateAnomalyDetectorRequest& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
