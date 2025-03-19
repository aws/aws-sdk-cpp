/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/ManagedLogs.h>
#include <aws/emr-containers/model/PersistentAppUI.h>
#include <aws/emr-containers/model/CloudWatchMonitoringConfiguration.h>
#include <aws/emr-containers/model/S3MonitoringConfiguration.h>
#include <aws/emr-containers/model/ContainerLogRotationConfiguration.h>
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
    AWS_EMRCONTAINERS_API MonitoringConfiguration() = default;
    AWS_EMRCONTAINERS_API MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity that controls configuration for managed logs.</p>
     */
    inline const ManagedLogs& GetManagedLogs() const { return m_managedLogs; }
    inline bool ManagedLogsHasBeenSet() const { return m_managedLogsHasBeenSet; }
    template<typename ManagedLogsT = ManagedLogs>
    void SetManagedLogs(ManagedLogsT&& value) { m_managedLogsHasBeenSet = true; m_managedLogs = std::forward<ManagedLogsT>(value); }
    template<typename ManagedLogsT = ManagedLogs>
    MonitoringConfiguration& WithManagedLogs(ManagedLogsT&& value) { SetManagedLogs(std::forward<ManagedLogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Monitoring configurations for the persistent application UI. </p>
     */
    inline PersistentAppUI GetPersistentAppUI() const { return m_persistentAppUI; }
    inline bool PersistentAppUIHasBeenSet() const { return m_persistentAppUIHasBeenSet; }
    inline void SetPersistentAppUI(PersistentAppUI value) { m_persistentAppUIHasBeenSet = true; m_persistentAppUI = value; }
    inline MonitoringConfiguration& WithPersistentAppUI(PersistentAppUI value) { SetPersistentAppUI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Monitoring configurations for CloudWatch.</p>
     */
    inline const CloudWatchMonitoringConfiguration& GetCloudWatchMonitoringConfiguration() const { return m_cloudWatchMonitoringConfiguration; }
    inline bool CloudWatchMonitoringConfigurationHasBeenSet() const { return m_cloudWatchMonitoringConfigurationHasBeenSet; }
    template<typename CloudWatchMonitoringConfigurationT = CloudWatchMonitoringConfiguration>
    void SetCloudWatchMonitoringConfiguration(CloudWatchMonitoringConfigurationT&& value) { m_cloudWatchMonitoringConfigurationHasBeenSet = true; m_cloudWatchMonitoringConfiguration = std::forward<CloudWatchMonitoringConfigurationT>(value); }
    template<typename CloudWatchMonitoringConfigurationT = CloudWatchMonitoringConfiguration>
    MonitoringConfiguration& WithCloudWatchMonitoringConfiguration(CloudWatchMonitoringConfigurationT&& value) { SetCloudWatchMonitoringConfiguration(std::forward<CloudWatchMonitoringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 configuration for monitoring log publishing.</p>
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
     * <p>Enable or disable container log rotation.</p>
     */
    inline const ContainerLogRotationConfiguration& GetContainerLogRotationConfiguration() const { return m_containerLogRotationConfiguration; }
    inline bool ContainerLogRotationConfigurationHasBeenSet() const { return m_containerLogRotationConfigurationHasBeenSet; }
    template<typename ContainerLogRotationConfigurationT = ContainerLogRotationConfiguration>
    void SetContainerLogRotationConfiguration(ContainerLogRotationConfigurationT&& value) { m_containerLogRotationConfigurationHasBeenSet = true; m_containerLogRotationConfiguration = std::forward<ContainerLogRotationConfigurationT>(value); }
    template<typename ContainerLogRotationConfigurationT = ContainerLogRotationConfiguration>
    MonitoringConfiguration& WithContainerLogRotationConfiguration(ContainerLogRotationConfigurationT&& value) { SetContainerLogRotationConfiguration(std::forward<ContainerLogRotationConfigurationT>(value)); return *this;}
    ///@}
  private:

    ManagedLogs m_managedLogs;
    bool m_managedLogsHasBeenSet = false;

    PersistentAppUI m_persistentAppUI{PersistentAppUI::NOT_SET};
    bool m_persistentAppUIHasBeenSet = false;

    CloudWatchMonitoringConfiguration m_cloudWatchMonitoringConfiguration;
    bool m_cloudWatchMonitoringConfigurationHasBeenSet = false;

    S3MonitoringConfiguration m_s3MonitoringConfiguration;
    bool m_s3MonitoringConfigurationHasBeenSet = false;

    ContainerLogRotationConfiguration m_containerLogRotationConfiguration;
    bool m_containerLogRotationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
