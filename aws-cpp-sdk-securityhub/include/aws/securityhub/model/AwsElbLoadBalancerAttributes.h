/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsElbLoadBalancerAccessLog.h>
#include <aws/securityhub/model/AwsElbLoadBalancerConnectionDraining.h>
#include <aws/securityhub/model/AwsElbLoadBalancerConnectionSettings.h>
#include <aws/securityhub/model/AwsElbLoadBalancerCrossZoneLoadBalancing.h>
#include <utility>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains attributes for the load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsElbLoadBalancerAttributes
  {
  public:
    AwsElbLoadBalancerAttributes();
    AwsElbLoadBalancerAttributes(Aws::Utils::Json::JsonView jsonValue);
    AwsElbLoadBalancerAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the access log configuration for the load balancer.</p>
     * <p>If the access log is enabled, the load balancer captures detailed information
     * about all requests. It delivers the information to a specified S3 bucket.</p>
     */
    inline const AwsElbLoadBalancerAccessLog& GetAccessLog() const{ return m_accessLog; }

    /**
     * <p>Information about the access log configuration for the load balancer.</p>
     * <p>If the access log is enabled, the load balancer captures detailed information
     * about all requests. It delivers the information to a specified S3 bucket.</p>
     */
    inline bool AccessLogHasBeenSet() const { return m_accessLogHasBeenSet; }

    /**
     * <p>Information about the access log configuration for the load balancer.</p>
     * <p>If the access log is enabled, the load balancer captures detailed information
     * about all requests. It delivers the information to a specified S3 bucket.</p>
     */
    inline void SetAccessLog(const AwsElbLoadBalancerAccessLog& value) { m_accessLogHasBeenSet = true; m_accessLog = value; }

    /**
     * <p>Information about the access log configuration for the load balancer.</p>
     * <p>If the access log is enabled, the load balancer captures detailed information
     * about all requests. It delivers the information to a specified S3 bucket.</p>
     */
    inline void SetAccessLog(AwsElbLoadBalancerAccessLog&& value) { m_accessLogHasBeenSet = true; m_accessLog = std::move(value); }

    /**
     * <p>Information about the access log configuration for the load balancer.</p>
     * <p>If the access log is enabled, the load balancer captures detailed information
     * about all requests. It delivers the information to a specified S3 bucket.</p>
     */
    inline AwsElbLoadBalancerAttributes& WithAccessLog(const AwsElbLoadBalancerAccessLog& value) { SetAccessLog(value); return *this;}

    /**
     * <p>Information about the access log configuration for the load balancer.</p>
     * <p>If the access log is enabled, the load balancer captures detailed information
     * about all requests. It delivers the information to a specified S3 bucket.</p>
     */
    inline AwsElbLoadBalancerAttributes& WithAccessLog(AwsElbLoadBalancerAccessLog&& value) { SetAccessLog(std::move(value)); return *this;}


    /**
     * <p>Information about the connection draining configuration for the load
     * balancer.</p> <p>If connection draining is enabled, the load balancer allows
     * existing requests to complete before it shifts traffic away from a deregistered
     * or unhealthy instance.</p>
     */
    inline const AwsElbLoadBalancerConnectionDraining& GetConnectionDraining() const{ return m_connectionDraining; }

    /**
     * <p>Information about the connection draining configuration for the load
     * balancer.</p> <p>If connection draining is enabled, the load balancer allows
     * existing requests to complete before it shifts traffic away from a deregistered
     * or unhealthy instance.</p>
     */
    inline bool ConnectionDrainingHasBeenSet() const { return m_connectionDrainingHasBeenSet; }

    /**
     * <p>Information about the connection draining configuration for the load
     * balancer.</p> <p>If connection draining is enabled, the load balancer allows
     * existing requests to complete before it shifts traffic away from a deregistered
     * or unhealthy instance.</p>
     */
    inline void SetConnectionDraining(const AwsElbLoadBalancerConnectionDraining& value) { m_connectionDrainingHasBeenSet = true; m_connectionDraining = value; }

    /**
     * <p>Information about the connection draining configuration for the load
     * balancer.</p> <p>If connection draining is enabled, the load balancer allows
     * existing requests to complete before it shifts traffic away from a deregistered
     * or unhealthy instance.</p>
     */
    inline void SetConnectionDraining(AwsElbLoadBalancerConnectionDraining&& value) { m_connectionDrainingHasBeenSet = true; m_connectionDraining = std::move(value); }

    /**
     * <p>Information about the connection draining configuration for the load
     * balancer.</p> <p>If connection draining is enabled, the load balancer allows
     * existing requests to complete before it shifts traffic away from a deregistered
     * or unhealthy instance.</p>
     */
    inline AwsElbLoadBalancerAttributes& WithConnectionDraining(const AwsElbLoadBalancerConnectionDraining& value) { SetConnectionDraining(value); return *this;}

    /**
     * <p>Information about the connection draining configuration for the load
     * balancer.</p> <p>If connection draining is enabled, the load balancer allows
     * existing requests to complete before it shifts traffic away from a deregistered
     * or unhealthy instance.</p>
     */
    inline AwsElbLoadBalancerAttributes& WithConnectionDraining(AwsElbLoadBalancerConnectionDraining&& value) { SetConnectionDraining(std::move(value)); return *this;}


    /**
     * <p>Connection settings for the load balancer.</p> <p>If an idle timeout is
     * configured, the load balancer allows connections to remain idle for the
     * specified duration. When a connection is idle, no data is sent over the
     * connection.</p>
     */
    inline const AwsElbLoadBalancerConnectionSettings& GetConnectionSettings() const{ return m_connectionSettings; }

    /**
     * <p>Connection settings for the load balancer.</p> <p>If an idle timeout is
     * configured, the load balancer allows connections to remain idle for the
     * specified duration. When a connection is idle, no data is sent over the
     * connection.</p>
     */
    inline bool ConnectionSettingsHasBeenSet() const { return m_connectionSettingsHasBeenSet; }

    /**
     * <p>Connection settings for the load balancer.</p> <p>If an idle timeout is
     * configured, the load balancer allows connections to remain idle for the
     * specified duration. When a connection is idle, no data is sent over the
     * connection.</p>
     */
    inline void SetConnectionSettings(const AwsElbLoadBalancerConnectionSettings& value) { m_connectionSettingsHasBeenSet = true; m_connectionSettings = value; }

    /**
     * <p>Connection settings for the load balancer.</p> <p>If an idle timeout is
     * configured, the load balancer allows connections to remain idle for the
     * specified duration. When a connection is idle, no data is sent over the
     * connection.</p>
     */
    inline void SetConnectionSettings(AwsElbLoadBalancerConnectionSettings&& value) { m_connectionSettingsHasBeenSet = true; m_connectionSettings = std::move(value); }

    /**
     * <p>Connection settings for the load balancer.</p> <p>If an idle timeout is
     * configured, the load balancer allows connections to remain idle for the
     * specified duration. When a connection is idle, no data is sent over the
     * connection.</p>
     */
    inline AwsElbLoadBalancerAttributes& WithConnectionSettings(const AwsElbLoadBalancerConnectionSettings& value) { SetConnectionSettings(value); return *this;}

    /**
     * <p>Connection settings for the load balancer.</p> <p>If an idle timeout is
     * configured, the load balancer allows connections to remain idle for the
     * specified duration. When a connection is idle, no data is sent over the
     * connection.</p>
     */
    inline AwsElbLoadBalancerAttributes& WithConnectionSettings(AwsElbLoadBalancerConnectionSettings&& value) { SetConnectionSettings(std::move(value)); return *this;}


    /**
     * <p>Cross-zone load balancing settings for the load balancer.</p> <p>If
     * cross-zone load balancing is enabled, the load balancer routes the request
     * traffic evenly across all instances regardless of the Availability Zones.</p>
     */
    inline const AwsElbLoadBalancerCrossZoneLoadBalancing& GetCrossZoneLoadBalancing() const{ return m_crossZoneLoadBalancing; }

    /**
     * <p>Cross-zone load balancing settings for the load balancer.</p> <p>If
     * cross-zone load balancing is enabled, the load balancer routes the request
     * traffic evenly across all instances regardless of the Availability Zones.</p>
     */
    inline bool CrossZoneLoadBalancingHasBeenSet() const { return m_crossZoneLoadBalancingHasBeenSet; }

    /**
     * <p>Cross-zone load balancing settings for the load balancer.</p> <p>If
     * cross-zone load balancing is enabled, the load balancer routes the request
     * traffic evenly across all instances regardless of the Availability Zones.</p>
     */
    inline void SetCrossZoneLoadBalancing(const AwsElbLoadBalancerCrossZoneLoadBalancing& value) { m_crossZoneLoadBalancingHasBeenSet = true; m_crossZoneLoadBalancing = value; }

    /**
     * <p>Cross-zone load balancing settings for the load balancer.</p> <p>If
     * cross-zone load balancing is enabled, the load balancer routes the request
     * traffic evenly across all instances regardless of the Availability Zones.</p>
     */
    inline void SetCrossZoneLoadBalancing(AwsElbLoadBalancerCrossZoneLoadBalancing&& value) { m_crossZoneLoadBalancingHasBeenSet = true; m_crossZoneLoadBalancing = std::move(value); }

    /**
     * <p>Cross-zone load balancing settings for the load balancer.</p> <p>If
     * cross-zone load balancing is enabled, the load balancer routes the request
     * traffic evenly across all instances regardless of the Availability Zones.</p>
     */
    inline AwsElbLoadBalancerAttributes& WithCrossZoneLoadBalancing(const AwsElbLoadBalancerCrossZoneLoadBalancing& value) { SetCrossZoneLoadBalancing(value); return *this;}

    /**
     * <p>Cross-zone load balancing settings for the load balancer.</p> <p>If
     * cross-zone load balancing is enabled, the load balancer routes the request
     * traffic evenly across all instances regardless of the Availability Zones.</p>
     */
    inline AwsElbLoadBalancerAttributes& WithCrossZoneLoadBalancing(AwsElbLoadBalancerCrossZoneLoadBalancing&& value) { SetCrossZoneLoadBalancing(std::move(value)); return *this;}

  private:

    AwsElbLoadBalancerAccessLog m_accessLog;
    bool m_accessLogHasBeenSet;

    AwsElbLoadBalancerConnectionDraining m_connectionDraining;
    bool m_connectionDrainingHasBeenSet;

    AwsElbLoadBalancerConnectionSettings m_connectionSettings;
    bool m_connectionSettingsHasBeenSet;

    AwsElbLoadBalancerCrossZoneLoadBalancing m_crossZoneLoadBalancing;
    bool m_crossZoneLoadBalancingHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
