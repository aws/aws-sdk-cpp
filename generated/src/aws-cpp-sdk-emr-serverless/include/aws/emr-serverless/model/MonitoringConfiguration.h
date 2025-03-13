/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/S3MonitoringConfiguration.h>
#include <aws/emr-serverless/model/ManagedPersistenceMonitoringConfiguration.h>
#include <aws/emr-serverless/model/CloudWatchLoggingConfiguration.h>
#include <aws/emr-serverless/model/PrometheusMonitoringConfiguration.h>
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
   * <p>The configuration setting for monitoring.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/MonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class MonitoringConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API MonitoringConfiguration() = default;
    AWS_EMRSERVERLESS_API MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline const S3MonitoringConfiguration& GetS3MonitoringConfiguration() const { return m_s3MonitoringConfiguration; }
    inline bool S3MonitoringConfigurationHasBeenSet() const { return m_s3MonitoringConfigurationHasBeenSet; }
    template<typename S3MonitoringConfigurationT = S3MonitoringConfiguration>
    void SetS3MonitoringConfiguration(S3MonitoringConfigurationT&& value) { m_s3MonitoringConfigurationHasBeenSet = true; m_s3MonitoringConfiguration = std::forward<S3MonitoringConfigurationT>(value); }
    template<typename S3MonitoringConfigurationT = S3MonitoringConfiguration>
    MonitoringConfiguration& WithS3MonitoringConfiguration(S3MonitoringConfigurationT&& value) { SetS3MonitoringConfiguration(std::forward<S3MonitoringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed log persistence configuration for a job run.</p>
     */
    inline const ManagedPersistenceMonitoringConfiguration& GetManagedPersistenceMonitoringConfiguration() const { return m_managedPersistenceMonitoringConfiguration; }
    inline bool ManagedPersistenceMonitoringConfigurationHasBeenSet() const { return m_managedPersistenceMonitoringConfigurationHasBeenSet; }
    template<typename ManagedPersistenceMonitoringConfigurationT = ManagedPersistenceMonitoringConfiguration>
    void SetManagedPersistenceMonitoringConfiguration(ManagedPersistenceMonitoringConfigurationT&& value) { m_managedPersistenceMonitoringConfigurationHasBeenSet = true; m_managedPersistenceMonitoringConfiguration = std::forward<ManagedPersistenceMonitoringConfigurationT>(value); }
    template<typename ManagedPersistenceMonitoringConfigurationT = ManagedPersistenceMonitoringConfiguration>
    MonitoringConfiguration& WithManagedPersistenceMonitoringConfiguration(ManagedPersistenceMonitoringConfigurationT&& value) { SetManagedPersistenceMonitoringConfiguration(std::forward<ManagedPersistenceMonitoringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch configuration for monitoring logs. You can configure
     * your jobs to send log information to CloudWatch.</p>
     */
    inline const CloudWatchLoggingConfiguration& GetCloudWatchLoggingConfiguration() const { return m_cloudWatchLoggingConfiguration; }
    inline bool CloudWatchLoggingConfigurationHasBeenSet() const { return m_cloudWatchLoggingConfigurationHasBeenSet; }
    template<typename CloudWatchLoggingConfigurationT = CloudWatchLoggingConfiguration>
    void SetCloudWatchLoggingConfiguration(CloudWatchLoggingConfigurationT&& value) { m_cloudWatchLoggingConfigurationHasBeenSet = true; m_cloudWatchLoggingConfiguration = std::forward<CloudWatchLoggingConfigurationT>(value); }
    template<typename CloudWatchLoggingConfigurationT = CloudWatchLoggingConfiguration>
    MonitoringConfiguration& WithCloudWatchLoggingConfiguration(CloudWatchLoggingConfigurationT&& value) { SetCloudWatchLoggingConfiguration(std::forward<CloudWatchLoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring configuration object you can configure to send metrics to
     * Amazon Managed Service for Prometheus for a job run.</p>
     */
    inline const PrometheusMonitoringConfiguration& GetPrometheusMonitoringConfiguration() const { return m_prometheusMonitoringConfiguration; }
    inline bool PrometheusMonitoringConfigurationHasBeenSet() const { return m_prometheusMonitoringConfigurationHasBeenSet; }
    template<typename PrometheusMonitoringConfigurationT = PrometheusMonitoringConfiguration>
    void SetPrometheusMonitoringConfiguration(PrometheusMonitoringConfigurationT&& value) { m_prometheusMonitoringConfigurationHasBeenSet = true; m_prometheusMonitoringConfiguration = std::forward<PrometheusMonitoringConfigurationT>(value); }
    template<typename PrometheusMonitoringConfigurationT = PrometheusMonitoringConfiguration>
    MonitoringConfiguration& WithPrometheusMonitoringConfiguration(PrometheusMonitoringConfigurationT&& value) { SetPrometheusMonitoringConfiguration(std::forward<PrometheusMonitoringConfigurationT>(value)); return *this;}
    ///@}
  private:

    S3MonitoringConfiguration m_s3MonitoringConfiguration;
    bool m_s3MonitoringConfigurationHasBeenSet = false;

    ManagedPersistenceMonitoringConfiguration m_managedPersistenceMonitoringConfiguration;
    bool m_managedPersistenceMonitoringConfigurationHasBeenSet = false;

    CloudWatchLoggingConfiguration m_cloudWatchLoggingConfiguration;
    bool m_cloudWatchLoggingConfigurationHasBeenSet = false;

    PrometheusMonitoringConfiguration m_prometheusMonitoringConfiguration;
    bool m_prometheusMonitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
