/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/PersistentAppUI.h>
#include <aws/emr-containers/model/CloudWatchMonitoringConfiguration.h>
#include <aws/emr-containers/model/S3MonitoringConfiguration.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>Configuration setting for monitoring.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/MonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class MonitoringConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API MonitoringConfiguration();
    AWS_EMRCONTAINERS_API MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Monitoring configurations for the persistent application UI. </p>
     */
    inline const PersistentAppUI& GetPersistentAppUI() const{ return m_persistentAppUI; }

    /**
     * <p>Monitoring configurations for the persistent application UI. </p>
     */
    inline bool PersistentAppUIHasBeenSet() const { return m_persistentAppUIHasBeenSet; }

    /**
     * <p>Monitoring configurations for the persistent application UI. </p>
     */
    inline void SetPersistentAppUI(const PersistentAppUI& value) { m_persistentAppUIHasBeenSet = true; m_persistentAppUI = value; }

    /**
     * <p>Monitoring configurations for the persistent application UI. </p>
     */
    inline void SetPersistentAppUI(PersistentAppUI&& value) { m_persistentAppUIHasBeenSet = true; m_persistentAppUI = std::move(value); }

    /**
     * <p>Monitoring configurations for the persistent application UI. </p>
     */
    inline MonitoringConfiguration& WithPersistentAppUI(const PersistentAppUI& value) { SetPersistentAppUI(value); return *this;}

    /**
     * <p>Monitoring configurations for the persistent application UI. </p>
     */
    inline MonitoringConfiguration& WithPersistentAppUI(PersistentAppUI&& value) { SetPersistentAppUI(std::move(value)); return *this;}


    /**
     * <p>Monitoring configurations for CloudWatch.</p>
     */
    inline const CloudWatchMonitoringConfiguration& GetCloudWatchMonitoringConfiguration() const{ return m_cloudWatchMonitoringConfiguration; }

    /**
     * <p>Monitoring configurations for CloudWatch.</p>
     */
    inline bool CloudWatchMonitoringConfigurationHasBeenSet() const { return m_cloudWatchMonitoringConfigurationHasBeenSet; }

    /**
     * <p>Monitoring configurations for CloudWatch.</p>
     */
    inline void SetCloudWatchMonitoringConfiguration(const CloudWatchMonitoringConfiguration& value) { m_cloudWatchMonitoringConfigurationHasBeenSet = true; m_cloudWatchMonitoringConfiguration = value; }

    /**
     * <p>Monitoring configurations for CloudWatch.</p>
     */
    inline void SetCloudWatchMonitoringConfiguration(CloudWatchMonitoringConfiguration&& value) { m_cloudWatchMonitoringConfigurationHasBeenSet = true; m_cloudWatchMonitoringConfiguration = std::move(value); }

    /**
     * <p>Monitoring configurations for CloudWatch.</p>
     */
    inline MonitoringConfiguration& WithCloudWatchMonitoringConfiguration(const CloudWatchMonitoringConfiguration& value) { SetCloudWatchMonitoringConfiguration(value); return *this;}

    /**
     * <p>Monitoring configurations for CloudWatch.</p>
     */
    inline MonitoringConfiguration& WithCloudWatchMonitoringConfiguration(CloudWatchMonitoringConfiguration&& value) { SetCloudWatchMonitoringConfiguration(std::move(value)); return *this;}


    /**
     * <p>Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline const S3MonitoringConfiguration& GetS3MonitoringConfiguration() const{ return m_s3MonitoringConfiguration; }

    /**
     * <p>Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline bool S3MonitoringConfigurationHasBeenSet() const { return m_s3MonitoringConfigurationHasBeenSet; }

    /**
     * <p>Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline void SetS3MonitoringConfiguration(const S3MonitoringConfiguration& value) { m_s3MonitoringConfigurationHasBeenSet = true; m_s3MonitoringConfiguration = value; }

    /**
     * <p>Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline void SetS3MonitoringConfiguration(S3MonitoringConfiguration&& value) { m_s3MonitoringConfigurationHasBeenSet = true; m_s3MonitoringConfiguration = std::move(value); }

    /**
     * <p>Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline MonitoringConfiguration& WithS3MonitoringConfiguration(const S3MonitoringConfiguration& value) { SetS3MonitoringConfiguration(value); return *this;}

    /**
     * <p>Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline MonitoringConfiguration& WithS3MonitoringConfiguration(S3MonitoringConfiguration&& value) { SetS3MonitoringConfiguration(std::move(value)); return *this;}

  private:

    PersistentAppUI m_persistentAppUI;
    bool m_persistentAppUIHasBeenSet = false;

    CloudWatchMonitoringConfiguration m_cloudWatchMonitoringConfiguration;
    bool m_cloudWatchMonitoringConfigurationHasBeenSet = false;

    S3MonitoringConfiguration m_s3MonitoringConfiguration;
    bool m_s3MonitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
