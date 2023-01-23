/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/VirtualGatewayPortProtocol.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the health check policy for a virtual gateway's
   * listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayHealthCheckPolicy">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayHealthCheckPolicy
  {
  public:
    AWS_APPMESH_API VirtualGatewayHealthCheckPolicy();
    AWS_APPMESH_API VirtualGatewayHealthCheckPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayHealthCheckPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring the listener healthy.</p>
     */
    inline int GetHealthyThreshold() const{ return m_healthyThreshold; }

    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring the listener healthy.</p>
     */
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring the listener healthy.</p>
     */
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }

    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring the listener healthy.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}


    /**
     * <p>The time period in milliseconds between each health check execution.</p>
     */
    inline long long GetIntervalMillis() const{ return m_intervalMillis; }

    /**
     * <p>The time period in milliseconds between each health check execution.</p>
     */
    inline bool IntervalMillisHasBeenSet() const { return m_intervalMillisHasBeenSet; }

    /**
     * <p>The time period in milliseconds between each health check execution.</p>
     */
    inline void SetIntervalMillis(long long value) { m_intervalMillisHasBeenSet = true; m_intervalMillis = value; }

    /**
     * <p>The time period in milliseconds between each health check execution.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithIntervalMillis(long long value) { SetIntervalMillis(value); return *this;}


    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined in the <a>PortMapping</a> for the listener.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined in the <a>PortMapping</a> for the listener.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined in the <a>PortMapping</a> for the listener.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined in the <a>PortMapping</a> for the listener.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The protocol for the health check request. If you specify <code>grpc</code>,
     * then your service must conform to the <a
     * href="https://github.com/grpc/grpc/blob/master/doc/health-checking.md">GRPC
     * Health Checking Protocol</a>.</p>
     */
    inline const VirtualGatewayPortProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol for the health check request. If you specify <code>grpc</code>,
     * then your service must conform to the <a
     * href="https://github.com/grpc/grpc/blob/master/doc/health-checking.md">GRPC
     * Health Checking Protocol</a>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol for the health check request. If you specify <code>grpc</code>,
     * then your service must conform to the <a
     * href="https://github.com/grpc/grpc/blob/master/doc/health-checking.md">GRPC
     * Health Checking Protocol</a>.</p>
     */
    inline void SetProtocol(const VirtualGatewayPortProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol for the health check request. If you specify <code>grpc</code>,
     * then your service must conform to the <a
     * href="https://github.com/grpc/grpc/blob/master/doc/health-checking.md">GRPC
     * Health Checking Protocol</a>.</p>
     */
    inline void SetProtocol(VirtualGatewayPortProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol for the health check request. If you specify <code>grpc</code>,
     * then your service must conform to the <a
     * href="https://github.com/grpc/grpc/blob/master/doc/health-checking.md">GRPC
     * Health Checking Protocol</a>.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithProtocol(const VirtualGatewayPortProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol for the health check request. If you specify <code>grpc</code>,
     * then your service must conform to the <a
     * href="https://github.com/grpc/grpc/blob/master/doc/health-checking.md">GRPC
     * Health Checking Protocol</a>.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithProtocol(VirtualGatewayPortProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in milliseconds.</p>
     */
    inline long long GetTimeoutMillis() const{ return m_timeoutMillis; }

    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in milliseconds.</p>
     */
    inline bool TimeoutMillisHasBeenSet() const { return m_timeoutMillisHasBeenSet; }

    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in milliseconds.</p>
     */
    inline void SetTimeoutMillis(long long value) { m_timeoutMillisHasBeenSet = true; m_timeoutMillis = value; }

    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in milliseconds.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithTimeoutMillis(long long value) { SetTimeoutMillis(value); return *this;}


    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a virtual gateway unhealthy.</p>
     */
    inline int GetUnhealthyThreshold() const{ return m_unhealthyThreshold; }

    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a virtual gateway unhealthy.</p>
     */
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a virtual gateway unhealthy.</p>
     */
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }

    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a virtual gateway unhealthy.</p>
     */
    inline VirtualGatewayHealthCheckPolicy& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}

  private:

    int m_healthyThreshold;
    bool m_healthyThresholdHasBeenSet = false;

    long long m_intervalMillis;
    bool m_intervalMillisHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    VirtualGatewayPortProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    long long m_timeoutMillis;
    bool m_timeoutMillisHasBeenSet = false;

    int m_unhealthyThreshold;
    bool m_unhealthyThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
