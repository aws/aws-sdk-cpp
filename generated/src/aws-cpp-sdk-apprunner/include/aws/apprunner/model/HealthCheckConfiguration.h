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
    AWS_APPRUNNER_API HealthCheckConfiguration();
    AWS_APPRUNNER_API HealthCheckConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API HealthCheckConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP protocol that App Runner uses to perform health checks for your
     * service.</p> <p>If you set <code>Protocol</code> to <code>HTTP</code>, App
     * Runner sends health check requests to the HTTP path specified by
     * <code>Path</code>.</p> <p>Default: <code>TCP</code> </p>
     */
    inline const HealthCheckProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The IP protocol that App Runner uses to perform health checks for your
     * service.</p> <p>If you set <code>Protocol</code> to <code>HTTP</code>, App
     * Runner sends health check requests to the HTTP path specified by
     * <code>Path</code>.</p> <p>Default: <code>TCP</code> </p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The IP protocol that App Runner uses to perform health checks for your
     * service.</p> <p>If you set <code>Protocol</code> to <code>HTTP</code>, App
     * Runner sends health check requests to the HTTP path specified by
     * <code>Path</code>.</p> <p>Default: <code>TCP</code> </p>
     */
    inline void SetProtocol(const HealthCheckProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The IP protocol that App Runner uses to perform health checks for your
     * service.</p> <p>If you set <code>Protocol</code> to <code>HTTP</code>, App
     * Runner sends health check requests to the HTTP path specified by
     * <code>Path</code>.</p> <p>Default: <code>TCP</code> </p>
     */
    inline void SetProtocol(HealthCheckProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The IP protocol that App Runner uses to perform health checks for your
     * service.</p> <p>If you set <code>Protocol</code> to <code>HTTP</code>, App
     * Runner sends health check requests to the HTTP path specified by
     * <code>Path</code>.</p> <p>Default: <code>TCP</code> </p>
     */
    inline HealthCheckConfiguration& WithProtocol(const HealthCheckProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The IP protocol that App Runner uses to perform health checks for your
     * service.</p> <p>If you set <code>Protocol</code> to <code>HTTP</code>, App
     * Runner sends health check requests to the HTTP path specified by
     * <code>Path</code>.</p> <p>Default: <code>TCP</code> </p>
     */
    inline HealthCheckConfiguration& WithProtocol(HealthCheckProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline HealthCheckConfiguration& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline HealthCheckConfiguration& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The URL that health check requests are sent to.</p> <p> <code>Path</code> is
     * only applicable when you set <code>Protocol</code> to <code>HTTP</code>.</p>
     * <p>Default: <code>"/"</code> </p>
     */
    inline HealthCheckConfiguration& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The time interval, in seconds, between health checks.</p> <p>Default:
     * <code>5</code> </p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The time interval, in seconds, between health checks.</p> <p>Default:
     * <code>5</code> </p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The time interval, in seconds, between health checks.</p> <p>Default:
     * <code>5</code> </p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The time interval, in seconds, between health checks.</p> <p>Default:
     * <code>5</code> </p>
     */
    inline HealthCheckConfiguration& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The time, in seconds, to wait for a health check response before deciding it
     * failed.</p> <p>Default: <code>2</code> </p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The time, in seconds, to wait for a health check response before deciding it
     * failed.</p> <p>Default: <code>2</code> </p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The time, in seconds, to wait for a health check response before deciding it
     * failed.</p> <p>Default: <code>2</code> </p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The time, in seconds, to wait for a health check response before deciding it
     * failed.</p> <p>Default: <code>2</code> </p>
     */
    inline HealthCheckConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The number of consecutive checks that must succeed before App Runner decides
     * that the service is healthy.</p> <p>Default: <code>1</code> </p>
     */
    inline int GetHealthyThreshold() const{ return m_healthyThreshold; }

    /**
     * <p>The number of consecutive checks that must succeed before App Runner decides
     * that the service is healthy.</p> <p>Default: <code>1</code> </p>
     */
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive checks that must succeed before App Runner decides
     * that the service is healthy.</p> <p>Default: <code>1</code> </p>
     */
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }

    /**
     * <p>The number of consecutive checks that must succeed before App Runner decides
     * that the service is healthy.</p> <p>Default: <code>1</code> </p>
     */
    inline HealthCheckConfiguration& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}


    /**
     * <p>The number of consecutive checks that must fail before App Runner decides
     * that the service is unhealthy.</p> <p>Default: <code>5</code> </p>
     */
    inline int GetUnhealthyThreshold() const{ return m_unhealthyThreshold; }

    /**
     * <p>The number of consecutive checks that must fail before App Runner decides
     * that the service is unhealthy.</p> <p>Default: <code>5</code> </p>
     */
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive checks that must fail before App Runner decides
     * that the service is unhealthy.</p> <p>Default: <code>5</code> </p>
     */
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }

    /**
     * <p>The number of consecutive checks that must fail before App Runner decides
     * that the service is unhealthy.</p> <p>Default: <code>5</code> </p>
     */
    inline HealthCheckConfiguration& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}

  private:

    HealthCheckProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    int m_healthyThreshold;
    bool m_healthyThresholdHasBeenSet = false;

    int m_unhealthyThreshold;
    bool m_unhealthyThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
