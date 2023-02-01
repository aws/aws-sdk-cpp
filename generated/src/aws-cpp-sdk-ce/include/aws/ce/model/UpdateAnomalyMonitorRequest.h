/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class UpdateAnomalyMonitorRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API UpdateAnomalyMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnomalyMonitor"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Cost anomaly monitor Amazon Resource Names (ARNs). </p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>Cost anomaly monitor Amazon Resource Names (ARNs). </p>
     */
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }

    /**
     * <p>Cost anomaly monitor Amazon Resource Names (ARNs). </p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }

    /**
     * <p>Cost anomaly monitor Amazon Resource Names (ARNs). </p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }

    /**
     * <p>Cost anomaly monitor Amazon Resource Names (ARNs). </p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }

    /**
     * <p>Cost anomaly monitor Amazon Resource Names (ARNs). </p>
     */
    inline UpdateAnomalyMonitorRequest& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>Cost anomaly monitor Amazon Resource Names (ARNs). </p>
     */
    inline UpdateAnomalyMonitorRequest& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>Cost anomaly monitor Amazon Resource Names (ARNs). </p>
     */
    inline UpdateAnomalyMonitorRequest& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}


    /**
     * <p>The new name for the cost anomaly monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The new name for the cost anomaly monitor. </p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The new name for the cost anomaly monitor. </p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The new name for the cost anomaly monitor. </p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The new name for the cost anomaly monitor. </p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The new name for the cost anomaly monitor. </p>
     */
    inline UpdateAnomalyMonitorRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The new name for the cost anomaly monitor. </p>
     */
    inline UpdateAnomalyMonitorRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The new name for the cost anomaly monitor. </p>
     */
    inline UpdateAnomalyMonitorRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}

  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
