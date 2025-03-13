/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/PortProtocol.h>
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
   * <p>An object that represents the health check policy for a virtual node's
   * listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HealthCheckPolicy">AWS
   * API Reference</a></p>
   */
  class HealthCheckPolicy
  {
  public:
    AWS_APPMESH_API HealthCheckPolicy() = default;
    AWS_APPMESH_API HealthCheckPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HealthCheckPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring listener healthy.</p>
     */
    inline int GetHealthyThreshold() const { return m_healthyThreshold; }
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }
    inline HealthCheckPolicy& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period in milliseconds between each health check execution.</p>
     */
    inline long long GetIntervalMillis() const { return m_intervalMillis; }
    inline bool IntervalMillisHasBeenSet() const { return m_intervalMillisHasBeenSet; }
    inline void SetIntervalMillis(long long value) { m_intervalMillisHasBeenSet = true; m_intervalMillis = value; }
    inline HealthCheckPolicy& WithIntervalMillis(long long value) { SetIntervalMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination path for the health check request. This value is only used if
     * the specified protocol is HTTP or HTTP/2. For any other protocol, this value is
     * ignored.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    HealthCheckPolicy& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined in the <a>PortMapping</a> for the listener.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline HealthCheckPolicy& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol for the health check request. If you specify <code>grpc</code>,
     * then your service must conform to the <a
     * href="https://github.com/grpc/grpc/blob/master/doc/health-checking.md">GRPC
     * Health Checking Protocol</a>.</p>
     */
    inline PortProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(PortProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline HealthCheckPolicy& WithProtocol(PortProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in milliseconds.</p>
     */
    inline long long GetTimeoutMillis() const { return m_timeoutMillis; }
    inline bool TimeoutMillisHasBeenSet() const { return m_timeoutMillisHasBeenSet; }
    inline void SetTimeoutMillis(long long value) { m_timeoutMillisHasBeenSet = true; m_timeoutMillis = value; }
    inline HealthCheckPolicy& WithTimeoutMillis(long long value) { SetTimeoutMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a virtual node unhealthy. </p>
     */
    inline int GetUnhealthyThreshold() const { return m_unhealthyThreshold; }
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }
    inline HealthCheckPolicy& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}
    ///@}
  private:

    int m_healthyThreshold{0};
    bool m_healthyThresholdHasBeenSet = false;

    long long m_intervalMillis{0};
    bool m_intervalMillisHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    PortProtocol m_protocol{PortProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    long long m_timeoutMillis{0};
    bool m_timeoutMillisHasBeenSet = false;

    int m_unhealthyThreshold{0};
    bool m_unhealthyThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
