/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * circumstances:</p> <ul> <li> <p>You can't use a health check that's defined by
   * <code>HealthCheckConfig</code> because the resource isn't available over the
   * internet. For example, you can use a custom health check when the instance is in
   * an Amazon VPC. (To check the health of resources in a VPC, the health checker
   * must also be in the VPC.)</p> </li> <li> <p>You want to use a third-party health
   * checker regardless of where your resources are located.</p> </li> </ul>
   *  <p>If you specify a health check configuration, you can specify
   * either <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code>
   * but not both.</p>  <p>To change the status of a custom health check,
   * submit an <code>UpdateInstanceCustomHealthStatus</code> request. Cloud Map
   * doesn't monitor the status of the resource, it just keeps a record of the status
   * specified in the most recent <code>UpdateInstanceCustomHealthStatus</code>
   * request.</p> <p>Here's how custom health checks work:</p> <ol> <li> <p>You
   * create a service.</p> </li> <li> <p>You register an instance.</p> </li> <li>
   * <p>You configure a third-party health checker to monitor the resource that's
   * associated with the new instance. </p>  <p>Cloud Map doesn't check the
   * health of the resource directly. </p>  </li> <li> <p>The third-party
   * health-checker determines that the resource is unhealthy and notifies your
   * application.</p> </li> <li> <p>Your application submits an
   * <code>UpdateInstanceCustomHealthStatus</code> request.</p> </li> <li> <p>Cloud
   * Map waits for 30 seconds.</p> </li> <li> <p>If another
   * <code>UpdateInstanceCustomHealthStatus</code> request doesn't arrive during that
   * time to change the status back to healthy, Cloud Map stops routing traffic to
   * the resource.</p> </li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/HealthCheckCustomConfig">AWS
   * API Reference</a></p>
   */
  class HealthCheckCustomConfig
  {
  public:
    AWS_SERVICEDISCOVERY_API HealthCheckCustomConfig();
    AWS_SERVICEDISCOVERY_API HealthCheckCustomConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API HealthCheckCustomConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
