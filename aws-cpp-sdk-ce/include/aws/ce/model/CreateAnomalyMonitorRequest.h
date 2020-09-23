/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/AnomalyMonitor.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class AWS_COSTEXPLORER_API CreateAnomalyMonitorRequest : public CostExplorerRequest
  {
  public:
    CreateAnomalyMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnomalyMonitor"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The cost anomaly detection monitor object that you want to create.</p>
     */
    inline const AnomalyMonitor& GetAnomalyMonitor() const{ return m_anomalyMonitor; }

    /**
     * <p> The cost anomaly detection monitor object that you want to create.</p>
     */
    inline bool AnomalyMonitorHasBeenSet() const { return m_anomalyMonitorHasBeenSet; }

    /**
     * <p> The cost anomaly detection monitor object that you want to create.</p>
     */
    inline void SetAnomalyMonitor(const AnomalyMonitor& value) { m_anomalyMonitorHasBeenSet = true; m_anomalyMonitor = value; }

    /**
     * <p> The cost anomaly detection monitor object that you want to create.</p>
     */
    inline void SetAnomalyMonitor(AnomalyMonitor&& value) { m_anomalyMonitorHasBeenSet = true; m_anomalyMonitor = std::move(value); }

    /**
     * <p> The cost anomaly detection monitor object that you want to create.</p>
     */
    inline CreateAnomalyMonitorRequest& WithAnomalyMonitor(const AnomalyMonitor& value) { SetAnomalyMonitor(value); return *this;}

    /**
     * <p> The cost anomaly detection monitor object that you want to create.</p>
     */
    inline CreateAnomalyMonitorRequest& WithAnomalyMonitor(AnomalyMonitor&& value) { SetAnomalyMonitor(std::move(value)); return *this;}

  private:

    AnomalyMonitor m_anomalyMonitor;
    bool m_anomalyMonitorHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
