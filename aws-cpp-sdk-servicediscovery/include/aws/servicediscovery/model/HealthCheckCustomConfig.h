/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about an optional custom health
   * check. A custom health check, which requires that you use a third-party health
   * checker to evaluate the health of your resources, is useful in the following
   * circumstances:</p> <ul> <li> <p>You can't use a health check that is defined by
   * <code>HealthCheckConfig</code> because the resource isn't available over the
   * internet. For example, you can use a custom health check when the instance is in
   * an Amazon VPC. (To check the health of resources in a VPC, the health checker
   * must also be in the VPC.)</p> </li> <li> <p>You want to use a third-party health
   * checker regardless of where your resources are.</p> </li> </ul> <important>
   * <p>If you specify a health check configuration, you can specify either
   * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
   * both.</p> </important> <p>To change the status of a custom health check, submit
   * an <code>UpdateInstanceCustomHealthStatus</code> request. Cloud Map doesn't
   * monitor the status of the resource, it just keeps a record of the status
   * specified in the most recent <code>UpdateInstanceCustomHealthStatus</code>
   * request.</p> <p>Here's how custom health checks work:</p> <ol> <li> <p>You
   * create a service and specify a value for <code>FailureThreshold</code>. </p>
   * <p>The failure threshold indicates the number of 30-second intervals you want
   * AWS Cloud Map to wait between the time that your application sends an
   * <a>UpdateInstanceCustomHealthStatus</a> request and the time that AWS Cloud Map
   * stops routing internet traffic to the corresponding resource.</p> </li> <li>
   * <p>You register an instance.</p> </li> <li> <p>You configure a third-party
   * health checker to monitor the resource that is associated with the new instance.
   * </p> <note> <p>AWS Cloud Map doesn't check the health of the resource directly.
   * </p> </note> </li> <li> <p>The third-party health-checker determines that the
   * resource is unhealthy and notifies your application.</p> </li> <li> <p>Your
   * application submits an <code>UpdateInstanceCustomHealthStatus</code>
   * request.</p> </li> <li> <p>AWS Cloud Map waits for
   * (<code>FailureThreshold</code> x 30) seconds.</p> </li> <li> <p>If another
   * <code>UpdateInstanceCustomHealthStatus</code> request doesn't arrive during that
   * time to change the status back to healthy, AWS Cloud Map stops routing traffic
   * to the resource.</p> </li> </ol> <p>Note the following about configuring custom
   * health checks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/HealthCheckCustomConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API HealthCheckCustomConfig
  {
  public:
    HealthCheckCustomConfig();
    HealthCheckCustomConfig(Aws::Utils::Json::JsonView jsonValue);
    HealthCheckCustomConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of 30-second intervals that you want Cloud Map to wait after
     * receiving an <code>UpdateInstanceCustomHealthStatus</code> request before it
     * changes the health status of a service instance. For example, suppose you
     * specify a value of <code>2</code> for <code>FailureTheshold</code>, and then
     * your application sends an <code>UpdateInstanceCustomHealthStatus</code> request.
     * Cloud Map waits for approximately 60 seconds (2 x 30) before changing the status
     * of the service instance based on that request.</p> <p>Sending a second or
     * subsequent <code>UpdateInstanceCustomHealthStatus</code> request with the same
     * value before <code>FailureThreshold x 30</code> seconds has passed doesn't
     * accelerate the change. Cloud Map still waits <code>FailureThreshold x 30</code>
     * seconds after the first request to make the change.</p>
     */
    inline int GetFailureThreshold() const{ return m_failureThreshold; }

    /**
     * <p>The number of 30-second intervals that you want Cloud Map to wait after
     * receiving an <code>UpdateInstanceCustomHealthStatus</code> request before it
     * changes the health status of a service instance. For example, suppose you
     * specify a value of <code>2</code> for <code>FailureTheshold</code>, and then
     * your application sends an <code>UpdateInstanceCustomHealthStatus</code> request.
     * Cloud Map waits for approximately 60 seconds (2 x 30) before changing the status
     * of the service instance based on that request.</p> <p>Sending a second or
     * subsequent <code>UpdateInstanceCustomHealthStatus</code> request with the same
     * value before <code>FailureThreshold x 30</code> seconds has passed doesn't
     * accelerate the change. Cloud Map still waits <code>FailureThreshold x 30</code>
     * seconds after the first request to make the change.</p>
     */
    inline bool FailureThresholdHasBeenSet() const { return m_failureThresholdHasBeenSet; }

    /**
     * <p>The number of 30-second intervals that you want Cloud Map to wait after
     * receiving an <code>UpdateInstanceCustomHealthStatus</code> request before it
     * changes the health status of a service instance. For example, suppose you
     * specify a value of <code>2</code> for <code>FailureTheshold</code>, and then
     * your application sends an <code>UpdateInstanceCustomHealthStatus</code> request.
     * Cloud Map waits for approximately 60 seconds (2 x 30) before changing the status
     * of the service instance based on that request.</p> <p>Sending a second or
     * subsequent <code>UpdateInstanceCustomHealthStatus</code> request with the same
     * value before <code>FailureThreshold x 30</code> seconds has passed doesn't
     * accelerate the change. Cloud Map still waits <code>FailureThreshold x 30</code>
     * seconds after the first request to make the change.</p>
     */
    inline void SetFailureThreshold(int value) { m_failureThresholdHasBeenSet = true; m_failureThreshold = value; }

    /**
     * <p>The number of 30-second intervals that you want Cloud Map to wait after
     * receiving an <code>UpdateInstanceCustomHealthStatus</code> request before it
     * changes the health status of a service instance. For example, suppose you
     * specify a value of <code>2</code> for <code>FailureTheshold</code>, and then
     * your application sends an <code>UpdateInstanceCustomHealthStatus</code> request.
     * Cloud Map waits for approximately 60 seconds (2 x 30) before changing the status
     * of the service instance based on that request.</p> <p>Sending a second or
     * subsequent <code>UpdateInstanceCustomHealthStatus</code> request with the same
     * value before <code>FailureThreshold x 30</code> seconds has passed doesn't
     * accelerate the change. Cloud Map still waits <code>FailureThreshold x 30</code>
     * seconds after the first request to make the change.</p>
     */
    inline HealthCheckCustomConfig& WithFailureThreshold(int value) { SetFailureThreshold(value); return *this;}

  private:

    int m_failureThreshold;
    bool m_failureThresholdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
