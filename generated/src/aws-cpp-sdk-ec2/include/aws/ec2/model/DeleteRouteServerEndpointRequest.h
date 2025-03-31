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
  class DeleteRouteServerEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteRouteServerEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRouteServerEndpoint"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the route server endpoint to delete.</p>
     */
    inline const Aws::String& GetRouteServerEndpointId() const { return m_routeServerEndpointId; }
    inline bool RouteServerEndpointIdHasBeenSet() const { return m_routeServerEndpointIdHasBeenSet; }
    template<typename RouteServerEndpointIdT = Aws::String>
    void SetRouteServerEndpointId(RouteServerEndpointIdT&& value) { m_routeServerEndpointIdHasBeenSet = true; m_routeServerEndpointId = std::forward<RouteServerEndpointIdT>(value); }
    template<typename RouteServerEndpointIdT = Aws::String>
    DeleteRouteServerEndpointRequest& WithRouteServerEndpointId(RouteServerEndpointIdT&& value) { SetRouteServerEndpointId(std::forward<RouteServerEndpointIdT>(value)); return *this;}
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
    inline DeleteRouteServerEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_routeServerEndpointId;
    bool m_routeServerEndpointIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
