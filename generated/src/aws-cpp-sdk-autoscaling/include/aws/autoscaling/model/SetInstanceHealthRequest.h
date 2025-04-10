﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class SetInstanceHealthRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API SetInstanceHealthRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetInstanceHealth"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SetInstanceHealthRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline const Aws::String& GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    template<typename HealthStatusT = Aws::String>
    void SetHealthStatus(HealthStatusT&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::forward<HealthStatusT>(value); }
    template<typename HealthStatusT = Aws::String>
    SetInstanceHealthRequest& WithHealthStatus(HealthStatusT&& value) { SetHealthStatus(std::forward<HealthStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the Auto Scaling group of the specified instance has a
     * <code>HealthCheckGracePeriod</code> specified for the group, by default, this
     * call respects the grace period. Set this to <code>False</code>, to have the call
     * not respect the grace period associated with the group.</p> <p>For more
     * information about the health check grace period, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/health-check-grace-period.html">Set
     * the health check grace period for an Auto Scaling group</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline bool GetShouldRespectGracePeriod() const { return m_shouldRespectGracePeriod; }
    inline bool ShouldRespectGracePeriodHasBeenSet() const { return m_shouldRespectGracePeriodHasBeenSet; }
    inline void SetShouldRespectGracePeriod(bool value) { m_shouldRespectGracePeriodHasBeenSet = true; m_shouldRespectGracePeriod = value; }
    inline SetInstanceHealthRequest& WithShouldRespectGracePeriod(bool value) { SetShouldRespectGracePeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    bool m_shouldRespectGracePeriod{false};
    bool m_shouldRespectGracePeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
