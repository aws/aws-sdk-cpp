/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the health check configuration of an Amazon Lightsail container
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceHealthCheckConfig">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API ContainerServiceHealthCheckConfig
  {
  public:
    ContainerServiceHealthCheckConfig();
    ContainerServiceHealthCheckConfig(Aws::Utils::Json::JsonView jsonValue);
    ContainerServiceHealthCheckConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of consecutive health checks successes required before moving the
     * container to the <code>Healthy</code> state.</p>
     */
    inline int GetHealthyThreshold() const{ return m_healthyThreshold; }

    /**
     * <p>The number of consecutive health checks successes required before moving the
     * container to the <code>Healthy</code> state.</p>
     */
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive health checks successes required before moving the
     * container to the <code>Healthy</code> state.</p>
     */
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }

    /**
     * <p>The number of consecutive health checks successes required before moving the
     * container to the <code>Healthy</code> state.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}


    /**
     * <p>The number of consecutive health check failures required before moving the
     * container to the <code>Unhealthy</code> state.</p>
     */
    inline int GetUnhealthyThreshold() const{ return m_unhealthyThreshold; }

    /**
     * <p>The number of consecutive health check failures required before moving the
     * container to the <code>Unhealthy</code> state.</p>
     */
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive health check failures required before moving the
     * container to the <code>Unhealthy</code> state.</p>
     */
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }

    /**
     * <p>The number of consecutive health check failures required before moving the
     * container to the <code>Unhealthy</code> state.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}


    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check. You may specify between 2 and 60 seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check. You may specify between 2 and 60 seconds.</p>
     */
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check. You may specify between 2 and 60 seconds.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check. You may specify between 2 and 60 seconds.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}


    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * container. You may specify between 5 and 300 seconds.</p>
     */
    inline int GetIntervalSeconds() const{ return m_intervalSeconds; }

    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * container. You may specify between 5 and 300 seconds.</p>
     */
    inline bool IntervalSecondsHasBeenSet() const { return m_intervalSecondsHasBeenSet; }

    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * container. You may specify between 5 and 300 seconds.</p>
     */
    inline void SetIntervalSeconds(int value) { m_intervalSecondsHasBeenSet = true; m_intervalSeconds = value; }

    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * container. You may specify between 5 and 300 seconds.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithIntervalSeconds(int value) { SetIntervalSeconds(value); return *this;}


    /**
     * <p>The path on the container on which to perform the health check.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path on the container on which to perform the health check.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path on the container on which to perform the health check.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path on the container on which to perform the health check.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path on the container on which to perform the health check.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path on the container on which to perform the health check.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path on the container on which to perform the health check.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path on the container on which to perform the health check.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between 200 and 499.</p>
     */
    inline const Aws::String& GetSuccessCodes() const{ return m_successCodes; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between 200 and 499.</p>
     */
    inline bool SuccessCodesHasBeenSet() const { return m_successCodesHasBeenSet; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between 200 and 499.</p>
     */
    inline void SetSuccessCodes(const Aws::String& value) { m_successCodesHasBeenSet = true; m_successCodes = value; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between 200 and 499.</p>
     */
    inline void SetSuccessCodes(Aws::String&& value) { m_successCodesHasBeenSet = true; m_successCodes = std::move(value); }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between 200 and 499.</p>
     */
    inline void SetSuccessCodes(const char* value) { m_successCodesHasBeenSet = true; m_successCodes.assign(value); }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between 200 and 499.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithSuccessCodes(const Aws::String& value) { SetSuccessCodes(value); return *this;}

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between 200 and 499.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithSuccessCodes(Aws::String&& value) { SetSuccessCodes(std::move(value)); return *this;}

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between 200 and 499.</p>
     */
    inline ContainerServiceHealthCheckConfig& WithSuccessCodes(const char* value) { SetSuccessCodes(value); return *this;}

  private:

    int m_healthyThreshold;
    bool m_healthyThresholdHasBeenSet;

    int m_unhealthyThreshold;
    bool m_unhealthyThresholdHasBeenSet;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet;

    int m_intervalSeconds;
    bool m_intervalSecondsHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_successCodes;
    bool m_successCodesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
