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
    AWS_EMRCONTAINERS_API ParametricMonitoringConfiguration() = default;
    AWS_EMRCONTAINERS_API ParametricMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ParametricMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Monitoring configurations for the persistent application UI.</p>
     */
    inline const Aws::String& GetPersistentAppUI() const { return m_persistentAppUI; }
    inline bool PersistentAppUIHasBeenSet() const { return m_persistentAppUIHasBeenSet; }
    template<typename PersistentAppUIT = Aws::String>
    void SetPersistentAppUI(PersistentAppUIT&& value) { m_persistentAppUIHasBeenSet = true; m_persistentAppUI = std::forward<PersistentAppUIT>(value); }
    template<typename PersistentAppUIT = Aws::String>
    ParametricMonitoringConfiguration& WithPersistentAppUI(PersistentAppUIT&& value) { SetPersistentAppUI(std::forward<PersistentAppUIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Monitoring configurations for CloudWatch.</p>
     */
    inline const ParametricCloudWatchMonitoringConfiguration& GetCloudWatchMonitoringConfiguration() const { return m_cloudWatchMonitoringConfiguration; }
    inline bool CloudWatchMonitoringConfigurationHasBeenSet() const { return m_cloudWatchMonitoringConfigurationHasBeenSet; }
    template<typename CloudWatchMonitoringConfigurationT = ParametricCloudWatchMonitoringConfiguration>
    void SetCloudWatchMonitoringConfiguration(CloudWatchMonitoringConfigurationT&& value) { m_cloudWatchMonitoringConfigurationHasBeenSet = true; m_cloudWatchMonitoringConfiguration = std::forward<CloudWatchMonitoringConfigurationT>(value); }
    template<typename CloudWatchMonitoringConfigurationT = ParametricCloudWatchMonitoringConfiguration>
    ParametricMonitoringConfiguration& WithCloudWatchMonitoringConfiguration(CloudWatchMonitoringConfigurationT&& value) { SetCloudWatchMonitoringConfiguration(std::forward<CloudWatchMonitoringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Amazon S3 configuration for monitoring log publishing.</p>
     */
    inline const ParametricS3MonitoringConfiguration& GetS3MonitoringConfiguration() const { return m_s3MonitoringConfiguration; }
    inline bool S3MonitoringConfigurationHasBeenSet() const { return m_s3MonitoringConfigurationHasBeenSet; }
    template<typename S3MonitoringConfigurationT = ParametricS3MonitoringConfiguration>
    void SetS3MonitoringConfiguration(S3MonitoringConfigurationT&& value) { m_s3MonitoringConfigurationHasBeenSet = true; m_s3MonitoringConfiguration = std::forward<S3MonitoringConfigurationT>(value); }
    template<typename S3MonitoringConfigurationT = ParametricS3MonitoringConfiguration>
    ParametricMonitoringConfiguration& WithS3MonitoringConfiguration(S3MonitoringConfigurationT&& value) { SetS3MonitoringConfiguration(std::forward<S3MonitoringConfigurationT>(value)); return *this;}
    ///@}
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
