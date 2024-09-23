/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-serverless/model/MaximumAllowedResources.h>
#include <aws/emr-serverless/model/AutoStartConfig.h>
#include <aws/emr-serverless/model/AutoStopConfig.h>
#include <aws/emr-serverless/model/NetworkConfiguration.h>
#include <aws/emr-serverless/model/Architecture.h>
#include <aws/emr-serverless/model/ImageConfigurationInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/model/MonitoringConfiguration.h>
#include <aws/emr-serverless/model/InteractiveConfiguration.h>
#include <aws/emr-serverless/model/SchedulerConfiguration.h>
#include <aws/emr-serverless/model/InitialCapacityConfig.h>
#include <aws/emr-serverless/model/WorkerTypeSpecificationInput.h>
#include <aws/emr-serverless/model/Configuration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }
    inline CreateApplicationRequest& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}
    inline CreateApplicationRequest& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of application you want to start, such as Spark or Hive.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline CreateApplicationRequest& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline CreateApplicationRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client idempotency token of the application to create. Its value must be
     * unique for each request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity to initialize when the application is created.</p>
     */
    inline const Aws::Map<Aws::String, InitialCapacityConfig>& GetInitialCapacity() const{ return m_initialCapacity; }
    inline bool InitialCapacityHasBeenSet() const { return m_initialCapacityHasBeenSet; }
    inline void SetInitialCapacity(const Aws::Map<Aws::String, InitialCapacityConfig>& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity = value; }
    inline void SetInitialCapacity(Aws::Map<Aws::String, InitialCapacityConfig>&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity = std::move(value); }
    inline CreateApplicationRequest& WithInitialCapacity(const Aws::Map<Aws::String, InitialCapacityConfig>& value) { SetInitialCapacity(value); return *this;}
    inline CreateApplicationRequest& WithInitialCapacity(Aws::Map<Aws::String, InitialCapacityConfig>&& value) { SetInitialCapacity(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddInitialCapacity(const Aws::String& key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, value); return *this; }
    inline CreateApplicationRequest& AddInitialCapacity(Aws::String&& key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(std::move(key), value); return *this; }
    inline CreateApplicationRequest& AddInitialCapacity(const Aws::String& key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddInitialCapacity(Aws::String&& key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateApplicationRequest& AddInitialCapacity(const char* key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddInitialCapacity(const char* key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum capacity to allocate when the application is created. This is
     * cumulative across all workers at any given point in time, not just when an
     * application is created. No new resources will be created once any one of the
     * defined limits is hit.</p>
     */
    inline const MaximumAllowedResources& GetMaximumCapacity() const{ return m_maximumCapacity; }
    inline bool MaximumCapacityHasBeenSet() const { return m_maximumCapacityHasBeenSet; }
    inline void SetMaximumCapacity(const MaximumAllowedResources& value) { m_maximumCapacityHasBeenSet = true; m_maximumCapacity = value; }
    inline void SetMaximumCapacity(MaximumAllowedResources&& value) { m_maximumCapacityHasBeenSet = true; m_maximumCapacity = std::move(value); }
    inline CreateApplicationRequest& WithMaximumCapacity(const MaximumAllowedResources& value) { SetMaximumCapacity(value); return *this;}
    inline CreateApplicationRequest& WithMaximumCapacity(MaximumAllowedResources&& value) { SetMaximumCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline const AutoStartConfig& GetAutoStartConfiguration() const{ return m_autoStartConfiguration; }
    inline bool AutoStartConfigurationHasBeenSet() const { return m_autoStartConfigurationHasBeenSet; }
    inline void SetAutoStartConfiguration(const AutoStartConfig& value) { m_autoStartConfigurationHasBeenSet = true; m_autoStartConfiguration = value; }
    inline void SetAutoStartConfiguration(AutoStartConfig&& value) { m_autoStartConfigurationHasBeenSet = true; m_autoStartConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithAutoStartConfiguration(const AutoStartConfig& value) { SetAutoStartConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithAutoStartConfiguration(AutoStartConfig&& value) { SetAutoStartConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline const AutoStopConfig& GetAutoStopConfiguration() const{ return m_autoStopConfiguration; }
    inline bool AutoStopConfigurationHasBeenSet() const { return m_autoStopConfigurationHasBeenSet; }
    inline void SetAutoStopConfiguration(const AutoStopConfig& value) { m_autoStopConfigurationHasBeenSet = true; m_autoStopConfiguration = value; }
    inline void SetAutoStopConfiguration(AutoStopConfig&& value) { m_autoStopConfigurationHasBeenSet = true; m_autoStopConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithAutoStopConfiguration(const AutoStopConfig& value) { SetAutoStopConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithAutoStopConfiguration(AutoStopConfig&& value) { SetAutoStopConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network configuration for customer VPC connectivity.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline CreateApplicationRequest& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}
    inline CreateApplicationRequest& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image configuration for all worker types. You can either set this
     * parameter or <code>imageConfiguration</code> for each worker type in
     * <code>workerTypeSpecifications</code>.</p>
     */
    inline const ImageConfigurationInput& GetImageConfiguration() const{ return m_imageConfiguration; }
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }
    inline void SetImageConfiguration(const ImageConfigurationInput& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = value; }
    inline void SetImageConfiguration(ImageConfigurationInput&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithImageConfiguration(const ImageConfigurationInput& value) { SetImageConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithImageConfiguration(ImageConfigurationInput&& value) { SetImageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline const Aws::Map<Aws::String, WorkerTypeSpecificationInput>& GetWorkerTypeSpecifications() const{ return m_workerTypeSpecifications; }
    inline bool WorkerTypeSpecificationsHasBeenSet() const { return m_workerTypeSpecificationsHasBeenSet; }
    inline void SetWorkerTypeSpecifications(const Aws::Map<Aws::String, WorkerTypeSpecificationInput>& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications = value; }
    inline void SetWorkerTypeSpecifications(Aws::Map<Aws::String, WorkerTypeSpecificationInput>&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications = std::move(value); }
    inline CreateApplicationRequest& WithWorkerTypeSpecifications(const Aws::Map<Aws::String, WorkerTypeSpecificationInput>& value) { SetWorkerTypeSpecifications(value); return *this;}
    inline CreateApplicationRequest& WithWorkerTypeSpecifications(Aws::Map<Aws::String, WorkerTypeSpecificationInput>&& value) { SetWorkerTypeSpecifications(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddWorkerTypeSpecifications(const Aws::String& key, const WorkerTypeSpecificationInput& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, value); return *this; }
    inline CreateApplicationRequest& AddWorkerTypeSpecifications(Aws::String&& key, const WorkerTypeSpecificationInput& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(std::move(key), value); return *this; }
    inline CreateApplicationRequest& AddWorkerTypeSpecifications(const Aws::String& key, WorkerTypeSpecificationInput&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddWorkerTypeSpecifications(Aws::String&& key, WorkerTypeSpecificationInput&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateApplicationRequest& AddWorkerTypeSpecifications(const char* key, WorkerTypeSpecificationInput&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, std::move(value)); return *this; }
    inline CreateApplicationRequest& AddWorkerTypeSpecifications(const char* key, const WorkerTypeSpecificationInput& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when creating an application. Each configuration consists
     * of a classification and properties. This configuration is applied to all the job
     * runs submitted under the application.</p>
     */
    inline const Aws::Vector<Configuration>& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }
    inline void SetRuntimeConfiguration(const Aws::Vector<Configuration>& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }
    inline void SetRuntimeConfiguration(Aws::Vector<Configuration>&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithRuntimeConfiguration(const Aws::Vector<Configuration>& value) { SetRuntimeConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithRuntimeConfiguration(Aws::Vector<Configuration>&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddRuntimeConfiguration(const Configuration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration.push_back(value); return *this; }
    inline CreateApplicationRequest& AddRuntimeConfiguration(Configuration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration setting for monitoring.</p>
     */
    inline const MonitoringConfiguration& GetMonitoringConfiguration() const{ return m_monitoringConfiguration; }
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
    inline void SetMonitoringConfiguration(const MonitoringConfiguration& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = value; }
    inline void SetMonitoringConfiguration(MonitoringConfiguration&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithMonitoringConfiguration(const MonitoringConfiguration& value) { SetMonitoringConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithMonitoringConfiguration(MonitoringConfiguration&& value) { SetMonitoringConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interactive configuration object that enables the interactive use cases
     * to use when running an application.</p>
     */
    inline const InteractiveConfiguration& GetInteractiveConfiguration() const{ return m_interactiveConfiguration; }
    inline bool InteractiveConfigurationHasBeenSet() const { return m_interactiveConfigurationHasBeenSet; }
    inline void SetInteractiveConfiguration(const InteractiveConfiguration& value) { m_interactiveConfigurationHasBeenSet = true; m_interactiveConfiguration = value; }
    inline void SetInteractiveConfiguration(InteractiveConfiguration&& value) { m_interactiveConfigurationHasBeenSet = true; m_interactiveConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithInteractiveConfiguration(const InteractiveConfiguration& value) { SetInteractiveConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithInteractiveConfiguration(InteractiveConfiguration&& value) { SetInteractiveConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduler configuration for batch and streaming jobs running on this
     * application. Supported with release labels emr-7.0.0 and above.</p>
     */
    inline const SchedulerConfiguration& GetSchedulerConfiguration() const{ return m_schedulerConfiguration; }
    inline bool SchedulerConfigurationHasBeenSet() const { return m_schedulerConfigurationHasBeenSet; }
    inline void SetSchedulerConfiguration(const SchedulerConfiguration& value) { m_schedulerConfigurationHasBeenSet = true; m_schedulerConfiguration = value; }
    inline void SetSchedulerConfiguration(SchedulerConfiguration&& value) { m_schedulerConfigurationHasBeenSet = true; m_schedulerConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithSchedulerConfiguration(const SchedulerConfiguration& value) { SetSchedulerConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithSchedulerConfiguration(SchedulerConfiguration&& value) { SetSchedulerConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, InitialCapacityConfig> m_initialCapacity;
    bool m_initialCapacityHasBeenSet = false;

    MaximumAllowedResources m_maximumCapacity;
    bool m_maximumCapacityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AutoStartConfig m_autoStartConfiguration;
    bool m_autoStartConfigurationHasBeenSet = false;

    AutoStopConfig m_autoStopConfiguration;
    bool m_autoStopConfigurationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Architecture m_architecture;
    bool m_architectureHasBeenSet = false;

    ImageConfigurationInput m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, WorkerTypeSpecificationInput> m_workerTypeSpecifications;
    bool m_workerTypeSpecificationsHasBeenSet = false;

    Aws::Vector<Configuration> m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet = false;

    MonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;

    InteractiveConfiguration m_interactiveConfiguration;
    bool m_interactiveConfigurationHasBeenSet = false;

    SchedulerConfiguration m_schedulerConfiguration;
    bool m_schedulerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
