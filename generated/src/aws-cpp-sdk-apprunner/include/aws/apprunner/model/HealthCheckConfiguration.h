/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/HealthCheckProtocol.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes the settings for the health check that App Runner performs to
   * monitor the health of a service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/HealthCheckConfiguration">AWS
   * API Reference</a></p>
   */
  class HealthCheckConfiguration
  {
  public:
    AWS_APPRUNNER_API HealthCheckConfiguration() = default;
    AWS_APPRUNNER_API HealthCheckConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API HealthCheckConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP protocol that App Runner uses to perform health checks for your
     * service.</p> <p>If you set <code>Protocol</code> to <code>HTTP</code>, App
     * Runner sends health check requests to the HTTP path specified by
     * <code>Path</code>.</p> <p>Default: <code>TCP</code> </p>
     */
    inline HealthCheckProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(HealthCheckProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline HealthCheckConfiguration& WithProtocol(HealthCheckProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    HealthCheckConfiguration& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time interval, in seconds, between health checks.</p> <p>Default:
     * <code>5</code> </p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline HealthCheckConfiguration& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds, to wait for a health check response before deciding it
     * failed.</p> <p>Default: <code>2</code> </p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline HealthCheckConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive checks that must succeed before App Runner decides
     * that the service is healthy.</p> <p>Default: <code>1</code> </p>
     */
    inline int GetHealthyThreshold() const { return m_healthyThreshold; }
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }
    inline HealthCheckConfiguration& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive checks that must fail before App Runner decides
     * that the service is unhealthy.</p> <p>Default: <code>5</code> </p>
     */
    inline int GetUnhealthyThreshold() const { return m_unhealthyThreshold; }
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }
    inline HealthCheckConfiguration& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}
    ///@}
  private:

    HealthCheckProtocol m_protocol{HealthCheckProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    int m_healthyThreshold{0};
    bool m_healthyThresholdHasBeenSet = false;

    int m_unhealthyThreshold{0};
    bool m_unhealthyThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
