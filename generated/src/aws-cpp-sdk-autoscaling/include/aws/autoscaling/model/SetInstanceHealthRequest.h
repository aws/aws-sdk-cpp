/**
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
    AWS_AUTOSCALING_API SetInstanceHealthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetInstanceHealth"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline SetInstanceHealthRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline SetInstanceHealthRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline SetInstanceHealthRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline void SetHealthStatus(Aws::String&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline void SetHealthStatus(const char* value) { m_healthStatusHasBeenSet = true; m_healthStatus.assign(value); }

    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline SetInstanceHealthRequest& WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline SetInstanceHealthRequest& WithHealthStatus(Aws::String&& value) { SetHealthStatus(std::move(value)); return *this;}

    /**
     * <p>The health status of the instance. Set to <code>Healthy</code> to have the
     * instance remain in service. Set to <code>Unhealthy</code> to have the instance
     * be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy
     * instance.</p>
     */
    inline SetInstanceHealthRequest& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}


    /**
     * <p>If the Auto Scaling group of the specified instance has a
     * <code>HealthCheckGracePeriod</code> specified for the group, by default, this
     * call respects the grace period. Set this to <code>False</code>, to have the call
     * not respect the grace period associated with the group.</p> <p>For more
     * information about the health check grace period, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_CreateAutoScalingGroup.html">CreateAutoScalingGroup</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline bool GetShouldRespectGracePeriod() const{ return m_shouldRespectGracePeriod; }

    /**
     * <p>If the Auto Scaling group of the specified instance has a
     * <code>HealthCheckGracePeriod</code> specified for the group, by default, this
     * call respects the grace period. Set this to <code>False</code>, to have the call
     * not respect the grace period associated with the group.</p> <p>For more
     * information about the health check grace period, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_CreateAutoScalingGroup.html">CreateAutoScalingGroup</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline bool ShouldRespectGracePeriodHasBeenSet() const { return m_shouldRespectGracePeriodHasBeenSet; }

    /**
     * <p>If the Auto Scaling group of the specified instance has a
     * <code>HealthCheckGracePeriod</code> specified for the group, by default, this
     * call respects the grace period. Set this to <code>False</code>, to have the call
     * not respect the grace period associated with the group.</p> <p>For more
     * information about the health check grace period, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_CreateAutoScalingGroup.html">CreateAutoScalingGroup</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline void SetShouldRespectGracePeriod(bool value) { m_shouldRespectGracePeriodHasBeenSet = true; m_shouldRespectGracePeriod = value; }

    /**
     * <p>If the Auto Scaling group of the specified instance has a
     * <code>HealthCheckGracePeriod</code> specified for the group, by default, this
     * call respects the grace period. Set this to <code>False</code>, to have the call
     * not respect the grace period associated with the group.</p> <p>For more
     * information about the health check grace period, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_CreateAutoScalingGroup.html">CreateAutoScalingGroup</a>
     * in the <i>Amazon EC2 Auto Scaling API Reference</i>.</p>
     */
    inline SetInstanceHealthRequest& WithShouldRespectGracePeriod(bool value) { SetShouldRespectGracePeriod(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    bool m_shouldRespectGracePeriod;
    bool m_shouldRespectGracePeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
