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
  class GetAnomalyGroupRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API GetAnomalyGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAnomalyGroup"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const{ return m_anomalyGroupId; }
    inline bool AnomalyGroupIdHasBeenSet() const { return m_anomalyGroupIdHasBeenSet; }
    inline void SetAnomalyGroupId(const Aws::String& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = value; }
    inline void SetAnomalyGroupId(Aws::String&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::move(value); }
    inline void SetAnomalyGroupId(const char* value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId.assign(value); }
    inline GetAnomalyGroupRequest& WithAnomalyGroupId(const Aws::String& value) { SetAnomalyGroupId(value); return *this;}
    inline GetAnomalyGroupRequest& WithAnomalyGroupId(Aws::String&& value) { SetAnomalyGroupId(std::move(value)); return *this;}
    inline GetAnomalyGroupRequest& WithAnomalyGroupId(const char* value) { SetAnomalyGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline GetAnomalyGroupRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline GetAnomalyGroupRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline GetAnomalyGroupRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
