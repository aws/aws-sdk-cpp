/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteServerPersistRoutesAction.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyRouteServerRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyRouteServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyRouteServer"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the route server to modify.</p>
     */
    inline const Aws::String& GetRouteServerId() const { return m_routeServerId; }
    inline bool RouteServerIdHasBeenSet() const { return m_routeServerIdHasBeenSet; }
    template<typename RouteServerIdT = Aws::String>
    void SetRouteServerId(RouteServerIdT&& value) { m_routeServerIdHasBeenSet = true; m_routeServerId = std::forward<RouteServerIdT>(value); }
    template<typename RouteServerIdT = Aws::String>
    ModifyRouteServerRequest& WithRouteServerId(RouteServerIdT&& value) { SetRouteServerId(std::forward<RouteServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to persist routes after all BGP sessions are
     * terminated.</p> <ul> <li> <p>enable: Routes will be persisted in FIB and RIB
     * after all BGP sessions are terminated.</p> </li> <li> <p>disable: Routes will
     * not be persisted in FIB and RIB after all BGP sessions are terminated.</p> </li>
     * <li> <p>reset: If a route server has persisted routes due to all BGP sessions
     * having ended, reset will withdraw all routes and reset route server to an empty
     * FIB and RIB.</p> </li> </ul>
     */
    inline RouteServerPersistRoutesAction GetPersistRoutes() const { return m_persistRoutes; }
    inline bool PersistRoutesHasBeenSet() const { return m_persistRoutesHasBeenSet; }
    inline void SetPersistRoutes(RouteServerPersistRoutesAction value) { m_persistRoutesHasBeenSet = true; m_persistRoutes = value; }
    inline ModifyRouteServerRequest& WithPersistRoutes(RouteServerPersistRoutesAction value) { SetPersistRoutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes a route server will wait after BGP is re-established to
     * unpersist the routes in the FIB and RIB. Value must be in the range of 1-5.
     * Required if PersistRoutes is <code>enabled</code>.</p> <p>If you set the
     * duration to 1 minute, then when your network appliance re-establishes BGP with
     * route server, it has 1 minute to relearn it's adjacent network and advertise
     * those routes to route server before route server resumes normal functionality.
     * In most cases, 1 minute is probably sufficient. If, however, you have concerns
     * that your BGP network may not be capable of fully re-establishing and
     * re-learning everything in 1 minute, you can increase the duration up to 5
     * minutes.</p>
     */
    inline long long GetPersistRoutesDuration() const { return m_persistRoutesDuration; }
    inline bool PersistRoutesDurationHasBeenSet() const { return m_persistRoutesDurationHasBeenSet; }
    inline void SetPersistRoutesDuration(long long value) { m_persistRoutesDurationHasBeenSet = true; m_persistRoutesDuration = value; }
    inline ModifyRouteServerRequest& WithPersistRoutesDuration(long long value) { SetPersistRoutesDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable SNS notifications for route server events.
     * Enabling SNS notifications persists BGP status changes to an SNS topic
     * provisioned by Amazon Web Services.</p>
     */
    inline bool GetSnsNotificationsEnabled() const { return m_snsNotificationsEnabled; }
    inline bool SnsNotificationsEnabledHasBeenSet() const { return m_snsNotificationsEnabledHasBeenSet; }
    inline void SetSnsNotificationsEnabled(bool value) { m_snsNotificationsEnabledHasBeenSet = true; m_snsNotificationsEnabled = value; }
    inline ModifyRouteServerRequest& WithSnsNotificationsEnabled(bool value) { SetSnsNotificationsEnabled(value); return *this;}
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
    inline ModifyRouteServerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_routeServerId;
    bool m_routeServerIdHasBeenSet = false;

    RouteServerPersistRoutesAction m_persistRoutes{RouteServerPersistRoutesAction::NOT_SET};
    bool m_persistRoutesHasBeenSet = false;

    long long m_persistRoutesDuration{0};
    bool m_persistRoutesDurationHasBeenSet = false;

    bool m_snsNotificationsEnabled{false};
    bool m_snsNotificationsEnabledHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
