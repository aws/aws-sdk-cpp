/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DisableRouteServerPropagationRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisableRouteServerPropagationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableRouteServerPropagation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the route server for which to disable propagation.</p>
     */
    inline const Aws::String& GetRouteServerId() const { return m_routeServerId; }
    inline bool RouteServerIdHasBeenSet() const { return m_routeServerIdHasBeenSet; }
    template<typename RouteServerIdT = Aws::String>
    void SetRouteServerId(RouteServerIdT&& value) { m_routeServerIdHasBeenSet = true; m_routeServerId = std::forward<RouteServerIdT>(value); }
    template<typename RouteServerIdT = Aws::String>
    DisableRouteServerPropagationRequest& WithRouteServerId(RouteServerIdT&& value) { SetRouteServerId(std::forward<RouteServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route table for which to disable route server propagation.</p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    DisableRouteServerPropagationRequest& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DisableRouteServerPropagationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_routeServerId;
    bool m_routeServerIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
