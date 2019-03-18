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
   * <p>An object representing the health check policy for a virtual node's
   * listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HealthCheckPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API HealthCheckPolicy
  {
  public:
    HealthCheckPolicy();
    HealthCheckPolicy(Aws::Utils::Json::JsonView jsonValue);
    HealthCheckPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring
         listener healthy.</p>
     */
    inline int GetHealthyThreshold() const{ return m_healthyThreshold; }

    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring
         listener healthy.</p>
     */
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring
         listener healthy.</p>
     */
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }

    /**
     * <p>The number of consecutive successful health checks that must occur before
     * declaring
         listener healthy.</p>
     */
    inline HealthCheckPolicy& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}


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
    inline HealthCheckPolicy& WithIntervalMillis(long long value) { SetIntervalMillis(value); return *this;}


    /**
     * <p>The destination path for the health check request. This is required only if
     * the
         specified protocol is HTTP. If the protocol is TCP, this parameter
     * is ignored.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The destination path for the health check request. This is required only if
     * the
         specified protocol is HTTP. If the protocol is TCP, this parameter
     * is ignored.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The destination path for the health check request. This is required only if
     * the
         specified protocol is HTTP. If the protocol is TCP, this parameter
     * is ignored.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The destination path for the health check request. This is required only if
     * the
         specified protocol is HTTP. If the protocol is TCP, this parameter
     * is ignored.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The destination path for the health check request. This is required only if
     * the
         specified protocol is HTTP. If the protocol is TCP, this parameter
     * is ignored.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The destination path for the health check request. This is required only if
     * the
         specified protocol is HTTP. If the protocol is TCP, this parameter
     * is ignored.</p>
     */
    inline HealthCheckPolicy& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The destination path for the health check request. This is required only if
     * the
         specified protocol is HTTP. If the protocol is TCP, this parameter
     * is ignored.</p>
     */
    inline HealthCheckPolicy& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The destination path for the health check request. This is required only if
     * the
         specified protocol is HTTP. If the protocol is TCP, this parameter
     * is ignored.</p>
     */
    inline HealthCheckPolicy& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined
         in the <a>PortMapping</a> for the listener.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined
         in the <a>PortMapping</a> for the listener.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined
         in the <a>PortMapping</a> for the listener.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The destination port for the health check request. This port must match the
     * port defined
         in the <a>PortMapping</a> for the listener.</p>
     */
    inline HealthCheckPolicy& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The protocol for the health check request.</p>
     */
    inline const PortProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol for the health check request.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol for the health check request.</p>
     */
    inline void SetProtocol(const PortProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol for the health check request.</p>
     */
    inline void SetProtocol(PortProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol for the health check request.</p>
     */
    inline HealthCheckPolicy& WithProtocol(const PortProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol for the health check request.</p>
     */
    inline HealthCheckPolicy& WithProtocol(PortProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in
         milliseconds.</p>
     */
    inline long long GetTimeoutMillis() const{ return m_timeoutMillis; }

    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in
         milliseconds.</p>
     */
    inline bool TimeoutMillisHasBeenSet() const { return m_timeoutMillisHasBeenSet; }

    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in
         milliseconds.</p>
     */
    inline void SetTimeoutMillis(long long value) { m_timeoutMillisHasBeenSet = true; m_timeoutMillis = value; }

    /**
     * <p>The amount of time to wait when receiving a response from the health check,
     * in
         milliseconds.</p>
     */
    inline HealthCheckPolicy& WithTimeoutMillis(long long value) { SetTimeoutMillis(value); return *this;}


    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a
         virtual node unhealthy. </p>
     */
    inline int GetUnhealthyThreshold() const{ return m_unhealthyThreshold; }

    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a
         virtual node unhealthy. </p>
     */
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a
         virtual node unhealthy. </p>
     */
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }

    /**
     * <p>The number of consecutive failed health checks that must occur before
     * declaring a
         virtual node unhealthy. </p>
     */
    inline HealthCheckPolicy& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}

  private:

    int m_healthyThreshold;
    bool m_healthyThresholdHasBeenSet;

    long long m_intervalMillis;
    bool m_intervalMillisHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    PortProtocol m_protocol;
    bool m_protocolHasBeenSet;

    long long m_timeoutMillis;
    bool m_timeoutMillisHasBeenSet;

    int m_unhealthyThreshold;
    bool m_unhealthyThresholdHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
