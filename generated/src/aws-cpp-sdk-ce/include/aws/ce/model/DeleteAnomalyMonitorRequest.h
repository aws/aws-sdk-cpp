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
  class DeleteAnomalyMonitorRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API DeleteAnomalyMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAnomalyMonitor"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the cost anomaly monitor that you want to delete.
     * </p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The unique identifier of the cost anomaly monitor that you want to delete.
     * </p>
     */
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }

    /**
     * <p>The unique identifier of the cost anomaly monitor that you want to delete.
     * </p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }

    /**
     * <p>The unique identifier of the cost anomaly monitor that you want to delete.
     * </p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }

    /**
     * <p>The unique identifier of the cost anomaly monitor that you want to delete.
     * </p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }

    /**
     * <p>The unique identifier of the cost anomaly monitor that you want to delete.
     * </p>
     */
    inline DeleteAnomalyMonitorRequest& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The unique identifier of the cost anomaly monitor that you want to delete.
     * </p>
     */
    inline DeleteAnomalyMonitorRequest& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cost anomaly monitor that you want to delete.
     * </p>
     */
    inline DeleteAnomalyMonitorRequest& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}

  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
