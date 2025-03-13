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
  class ContainerServiceHealthCheckConfig
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceHealthCheckConfig() = default;
    AWS_LIGHTSAIL_API ContainerServiceHealthCheckConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceHealthCheckConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of consecutive health checks successes required before moving the
     * container to the <code>Healthy</code> state. The default value is
     * <code>2</code>.</p>
     */
    inline int GetHealthyThreshold() const { return m_healthyThreshold; }
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }
    inline ContainerServiceHealthCheckConfig& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health check failures required before moving the
     * container to the <code>Unhealthy</code> state. The default value is
     * <code>2</code>.</p>
     */
    inline int GetUnhealthyThreshold() const { return m_unhealthyThreshold; }
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }
    inline ContainerServiceHealthCheckConfig& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check. You can specify between 2 and 60 seconds. The default value is
     * <code>2</code>.</p>
     */
    inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline ContainerServiceHealthCheckConfig& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * container. You can specify between 5 and 300 seconds. The default value is
     * <code>5</code>.</p>
     */
    inline int GetIntervalSeconds() const { return m_intervalSeconds; }
    inline bool IntervalSecondsHasBeenSet() const { return m_intervalSecondsHasBeenSet; }
    inline void SetIntervalSeconds(int value) { m_intervalSecondsHasBeenSet = true; m_intervalSeconds = value; }
    inline ContainerServiceHealthCheckConfig& WithIntervalSeconds(int value) { SetIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path on the container on which to perform the health check. The default
     * value is <code>/</code>.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    ContainerServiceHealthCheckConfig& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * container. You can specify values between <code>200</code> and <code>499</code>.
     * You can specify multiple values (for example, <code>200,202</code>) or a range
     * of values (for example, <code>200-299</code>).</p>
     */
    inline const Aws::String& GetSuccessCodes() const { return m_successCodes; }
    inline bool SuccessCodesHasBeenSet() const { return m_successCodesHasBeenSet; }
    template<typename SuccessCodesT = Aws::String>
    void SetSuccessCodes(SuccessCodesT&& value) { m_successCodesHasBeenSet = true; m_successCodes = std::forward<SuccessCodesT>(value); }
    template<typename SuccessCodesT = Aws::String>
    ContainerServiceHealthCheckConfig& WithSuccessCodes(SuccessCodesT&& value) { SetSuccessCodes(std::forward<SuccessCodesT>(value)); return *this;}
    ///@}
  private:

    int m_healthyThreshold{0};
    bool m_healthyThresholdHasBeenSet = false;

    int m_unhealthyThreshold{0};
    bool m_unhealthyThresholdHasBeenSet = false;

    int m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;

    int m_intervalSeconds{0};
    bool m_intervalSecondsHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_successCodes;
    bool m_successCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
