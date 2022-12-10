/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/ParametricCloudWatchMonitoringConfiguration.h>
#include <aws/emr-containers/model/ParametricS3MonitoringConfiguration.h>
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
   * <p> Configuration setting for monitoring. This data type allows job template
   * parameters to be specified within.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ParametricMonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class ParametricMonitoringConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API ParametricMonitoringConfiguration();
    AWS_EMRCONTAINERS_API ParametricMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ParametricMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline const Aws::String& GetPersistentAppUI() const{ return m_persistentAppUI; }

    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline bool PersistentAppUIHasBeenSet() const { return m_persistentAppUIHasBeenSet; }

    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline void SetPersistentAppUI(const Aws::String& value) { m_persistentAppUIHasBeenSet = true; m_persistentAppUI = value; }

    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline void SetPersistentAppUI(Aws::String&& value) { m_persistentAppUIHasBeenSet = true; m_persistentAppUI = std::move(value); }

    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline void SetPersistentAppUI(const char* value) { m_persistentAppUIHasBeenSet = true; m_persistentAppUI.assign(value); }

    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline ParametricMonitoringConfiguration& WithPersistentAppUI(const Aws::String& value) { SetPersistentAppUI(value); return *this;}

    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline ParametricMonitoringConfiguration& WithPersistentAppUI(Aws::String&& value) { SetPersistentAppUI(std::move(value)); return *this;}

    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline ParametricMonitoringConfiguration& WithPersistentAppUI(const char* value) { SetPersistentAppUI(value); return *this;}


    /**
     * <p> Monitoring configurations for CloudWatch.</p>
     */
    inline const ParametricCloudWatchMonitoringConfiguration& GetCloudWatchMonitoringConfiguration() const{ return m_cloudWatchMonitoringConfiguration; }

    /**
     * <p> Monitoring configurations for CloudWatch.</p>
     */
    inline bool CloudWatchMonitoringConfigurationHasBeenSet() const { return m_cloudWatchMonitoringConfigurationHasBeenSet; }

    /**
     * <p> Monitoring configurations for CloudWatch.</p>
     */
    inline void SetCloudWatchMonitoringConfiguration(const ParametricCloudWatchMonitoringConfiguration& value) { m_cloudWatchMonitoringConfigurationHasBeenSet = true; m_cloudWatchMonitoringConfiguration = value; }

    /**
     * <p> Monitoring configurations for CloudWatch.</p>
     */
    inline void SetCloudWatchMonitoringConfiguration(ParametricCloudWatchMonitoringConfiguration&& value) { m_cloudWatchMonitoringConfigurationHasBeenSet = true; m_cloudWatchMonitoringConfiguration = std::move(value); }

    /**
     * <p> Monitoring configurations for CloudWatch.</p>
     */
    inline ParametricMonitoringConfiguration& WithCloudWatchMonitoringConfiguration(const ParametricCloudWatchMonitoringConfiguration& value) { SetCloudWatchMonitoringConfiguration(value); return *this;}

    /**
     * <p> Monitoring configurations for CloudWatch.</p>
     */
    inline ParametricMonitoringConfiguration& WithCloudWatchMonitoringConfiguration(ParametricCloudWatchMonitoringConfiguration&& value) { SetCloudWatchMonitoringConfiguration(std::move(value)); return *this;}


    /**
     * <p> Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline const ParametricS3MonitoringConfiguration& GetS3MonitoringConfiguration() const{ return m_s3MonitoringConfiguration; }

    /**
     * <p> Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline bool S3MonitoringConfigurationHasBeenSet() const { return m_s3MonitoringConfigurationHasBeenSet; }

    /**
     * <p> Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline void SetS3MonitoringConfiguration(const ParametricS3MonitoringConfiguration& value) { m_s3MonitoringConfigurationHasBeenSet = true; m_s3MonitoringConfiguration = value; }

    /**
     * <p> Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline void SetS3MonitoringConfiguration(ParametricS3MonitoringConfiguration&& value) { m_s3MonitoringConfigurationHasBeenSet = true; m_s3MonitoringConfiguration = std::move(value); }

    /**
     * <p> Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline ParametricMonitoringConfiguration& WithS3MonitoringConfiguration(const ParametricS3MonitoringConfiguration& value) { SetS3MonitoringConfiguration(value); return *this;}

    /**
     * <p> Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline ParametricMonitoringConfiguration& WithS3MonitoringConfiguration(ParametricS3MonitoringConfiguration&& value) { SetS3MonitoringConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_persistentAppUI;
    bool m_persistentAppUIHasBeenSet = false;

    ParametricCloudWatchMonitoringConfiguration m_cloudWatchMonitoringConfiguration;
    bool m_cloudWatchMonitoringConfigurationHasBeenSet = false;

    ParametricS3MonitoringConfiguration m_s3MonitoringConfiguration;
    bool m_s3MonitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
