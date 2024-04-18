/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The monitoring configuration object you can configure to send metrics to
   * Amazon Managed Service for Prometheus for a job run.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/PrometheusMonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class PrometheusMonitoringConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API PrometheusMonitoringConfiguration();
    AWS_EMRSERVERLESS_API PrometheusMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API PrometheusMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The remote write URL in the Amazon Managed Service for Prometheus workspace
     * to send metrics to.</p>
     */
    inline const Aws::String& GetRemoteWriteUrl() const{ return m_remoteWriteUrl; }

    /**
     * <p>The remote write URL in the Amazon Managed Service for Prometheus workspace
     * to send metrics to.</p>
     */
    inline bool RemoteWriteUrlHasBeenSet() const { return m_remoteWriteUrlHasBeenSet; }

    /**
     * <p>The remote write URL in the Amazon Managed Service for Prometheus workspace
     * to send metrics to.</p>
     */
    inline void SetRemoteWriteUrl(const Aws::String& value) { m_remoteWriteUrlHasBeenSet = true; m_remoteWriteUrl = value; }

    /**
     * <p>The remote write URL in the Amazon Managed Service for Prometheus workspace
     * to send metrics to.</p>
     */
    inline void SetRemoteWriteUrl(Aws::String&& value) { m_remoteWriteUrlHasBeenSet = true; m_remoteWriteUrl = std::move(value); }

    /**
     * <p>The remote write URL in the Amazon Managed Service for Prometheus workspace
     * to send metrics to.</p>
     */
    inline void SetRemoteWriteUrl(const char* value) { m_remoteWriteUrlHasBeenSet = true; m_remoteWriteUrl.assign(value); }

    /**
     * <p>The remote write URL in the Amazon Managed Service for Prometheus workspace
     * to send metrics to.</p>
     */
    inline PrometheusMonitoringConfiguration& WithRemoteWriteUrl(const Aws::String& value) { SetRemoteWriteUrl(value); return *this;}

    /**
     * <p>The remote write URL in the Amazon Managed Service for Prometheus workspace
     * to send metrics to.</p>
     */
    inline PrometheusMonitoringConfiguration& WithRemoteWriteUrl(Aws::String&& value) { SetRemoteWriteUrl(std::move(value)); return *this;}

    /**
     * <p>The remote write URL in the Amazon Managed Service for Prometheus workspace
     * to send metrics to.</p>
     */
    inline PrometheusMonitoringConfiguration& WithRemoteWriteUrl(const char* value) { SetRemoteWriteUrl(value); return *this;}

  private:

    Aws::String m_remoteWriteUrl;
    bool m_remoteWriteUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
