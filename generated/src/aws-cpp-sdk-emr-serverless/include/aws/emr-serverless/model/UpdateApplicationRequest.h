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
#include <aws/emr-serverless/model/InteractiveConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/model/MonitoringConfiguration.h>
#include <aws/emr-serverless/model/SchedulerConfiguration.h>
#include <aws/emr-serverless/model/IdentityCenterConfigurationInput.h>
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
  class UpdateApplicationRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API UpdateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the application to update.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateApplicationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateApplicationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline const Aws::Map<Aws::String, InitialCapacityConfig>& GetInitialCapacity() const { return m_initialCapacity; }
    inline bool InitialCapacityHasBeenSet() const { return m_initialCapacityHasBeenSet; }
    template<typename InitialCapacityT = Aws::Map<Aws::String, InitialCapacityConfig>>
    void SetInitialCapacity(InitialCapacityT&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity = std::forward<InitialCapacityT>(value); }
    template<typename InitialCapacityT = Aws::Map<Aws::String, InitialCapacityConfig>>
    UpdateApplicationRequest& WithInitialCapacity(InitialCapacityT&& value) { SetInitialCapacity(std::forward<InitialCapacityT>(value)); return *this;}
    template<typename InitialCapacityKeyT = Aws::String, typename InitialCapacityValueT = InitialCapacityConfig>
    UpdateApplicationRequest& AddInitialCapacity(InitialCapacityKeyT&& key, InitialCapacityValueT&& value) {
      m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(std::forward<InitialCapacityKeyT>(key), std::forward<InitialCapacityValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The maximum capacity to allocate when the application is updated. This is
     * cumulative across all workers at any given point in time during the lifespan of
     * the application. No new resources will be created once any one of the defined
     * limits is hit.</p>
     */
    inline const MaximumAllowedResources& GetMaximumCapacity() const { return m_maximumCapacity; }
    inline bool MaximumCapacityHasBeenSet() const { return m_maximumCapacityHasBeenSet; }
    template<typename MaximumCapacityT = MaximumAllowedResources>
    void SetMaximumCapacity(MaximumCapacityT&& value) { m_maximumCapacityHasBeenSet = true; m_maximumCapacity = std::forward<MaximumCapacityT>(value); }
    template<typename MaximumCapacityT = MaximumAllowedResources>
    UpdateApplicationRequest& WithMaximumCapacity(MaximumCapacityT&& value) { SetMaximumCapacity(std::forward<MaximumCapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline const AutoStartConfig& GetAutoStartConfiguration() const { return m_autoStartConfiguration; }
    inline bool AutoStartConfigurationHasBeenSet() const { return m_autoStartConfigurationHasBeenSet; }
    template<typename AutoStartConfigurationT = AutoStartConfig>
    void SetAutoStartConfiguration(AutoStartConfigurationT&& value) { m_autoStartConfigurationHasBeenSet = true; m_autoStartConfiguration = std::forward<AutoStartConfigurationT>(value); }
    template<typename AutoStartConfigurationT = AutoStartConfig>
    UpdateApplicationRequest& WithAutoStartConfiguration(AutoStartConfigurationT&& value) { SetAutoStartConfiguration(std::forward<AutoStartConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline const AutoStopConfig& GetAutoStopConfiguration() const { return m_autoStopConfiguration; }
    inline bool AutoStopConfigurationHasBeenSet() const { return m_autoStopConfigurationHasBeenSet; }
    template<typename AutoStopConfigurationT = AutoStopConfig>
    void SetAutoStopConfiguration(AutoStopConfigurationT&& value) { m_autoStopConfigurationHasBeenSet = true; m_autoStopConfiguration = std::forward<AutoStopConfigurationT>(value); }
    template<typename AutoStopConfigurationT = AutoStopConfig>
    UpdateApplicationRequest& WithAutoStopConfiguration(AutoStopConfigurationT&& value) { SetAutoStopConfiguration(std::forward<AutoStopConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    UpdateApplicationRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline Architecture GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(Architecture value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline UpdateApplicationRequest& WithArchitecture(Architecture value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image configuration to be used for all worker types. You can either set
     * this parameter or <code>imageConfiguration</code> for each worker type in
     * <code>WorkerTypeSpecificationInput</code>.</p>
     */
    inline const ImageConfigurationInput& GetImageConfiguration() const { return m_imageConfiguration; }
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }
    template<typename ImageConfigurationT = ImageConfigurationInput>
    void SetImageConfiguration(ImageConfigurationT&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::forward<ImageConfigurationT>(value); }
    template<typename ImageConfigurationT = ImageConfigurationInput>
    UpdateApplicationRequest& WithImageConfiguration(ImageConfigurationT&& value) { SetImageConfiguration(std::forward<ImageConfigurationT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, WorkerTypeSpecificationInput>& GetWorkerTypeSpecifications() const { return m_workerTypeSpecifications; }
    inline bool WorkerTypeSpecificationsHasBeenSet() const { return m_workerTypeSpecificationsHasBeenSet; }
    template<typename WorkerTypeSpecificationsT = Aws::Map<Aws::String, WorkerTypeSpecificationInput>>
    void SetWorkerTypeSpecifications(WorkerTypeSpecificationsT&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications = std::forward<WorkerTypeSpecificationsT>(value); }
    template<typename WorkerTypeSpecificationsT = Aws::Map<Aws::String, WorkerTypeSpecificationInput>>
    UpdateApplicationRequest& WithWorkerTypeSpecifications(WorkerTypeSpecificationsT&& value) { SetWorkerTypeSpecifications(std::forward<WorkerTypeSpecificationsT>(value)); return *this;}
    template<typename WorkerTypeSpecificationsKeyT = Aws::String, typename WorkerTypeSpecificationsValueT = WorkerTypeSpecificationInput>
    UpdateApplicationRequest& AddWorkerTypeSpecifications(WorkerTypeSpecificationsKeyT&& key, WorkerTypeSpecificationsValueT&& value) {
      m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(std::forward<WorkerTypeSpecificationsKeyT>(key), std::forward<WorkerTypeSpecificationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The interactive configuration object that contains new interactive use cases
     * when the application is updated.</p>
     */
    inline const InteractiveConfiguration& GetInteractiveConfiguration() const { return m_interactiveConfiguration; }
    inline bool InteractiveConfigurationHasBeenSet() const { return m_interactiveConfigurationHasBeenSet; }
    template<typename InteractiveConfigurationT = InteractiveConfiguration>
    void SetInteractiveConfiguration(InteractiveConfigurationT&& value) { m_interactiveConfigurationHasBeenSet = true; m_interactiveConfiguration = std::forward<InteractiveConfigurationT>(value); }
    template<typename InteractiveConfigurationT = InteractiveConfiguration>
    UpdateApplicationRequest& WithInteractiveConfiguration(InteractiveConfigurationT&& value) { SetInteractiveConfiguration(std::forward<InteractiveConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    UpdateApplicationRequest& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline const Aws::Vector<Configuration>& GetRuntimeConfiguration() const { return m_runtimeConfiguration; }
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }
    template<typename RuntimeConfigurationT = Aws::Vector<Configuration>>
    void SetRuntimeConfiguration(RuntimeConfigurationT&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::forward<RuntimeConfigurationT>(value); }
    template<typename RuntimeConfigurationT = Aws::Vector<Configuration>>
    UpdateApplicationRequest& WithRuntimeConfiguration(RuntimeConfigurationT&& value) { SetRuntimeConfiguration(std::forward<RuntimeConfigurationT>(value)); return *this;}
    template<typename RuntimeConfigurationT = Configuration>
    UpdateApplicationRequest& AddRuntimeConfiguration(RuntimeConfigurationT&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration.emplace_back(std::forward<RuntimeConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration setting for monitoring.</p>
     */
    inline const MonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
    template<typename MonitoringConfigurationT = MonitoringConfiguration>
    void SetMonitoringConfiguration(MonitoringConfigurationT&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value); }
    template<typename MonitoringConfigurationT = MonitoringConfiguration>
    UpdateApplicationRequest& WithMonitoringConfiguration(MonitoringConfigurationT&& value) { SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduler configuration for batch and streaming jobs running on this
     * application. Supported with release labels emr-7.0.0 and above.</p>
     */
    inline const SchedulerConfiguration& GetSchedulerConfiguration() const { return m_schedulerConfiguration; }
    inline bool SchedulerConfigurationHasBeenSet() const { return m_schedulerConfigurationHasBeenSet; }
    template<typename SchedulerConfigurationT = SchedulerConfiguration>
    void SetSchedulerConfiguration(SchedulerConfigurationT&& value) { m_schedulerConfigurationHasBeenSet = true; m_schedulerConfiguration = std::forward<SchedulerConfigurationT>(value); }
    template<typename SchedulerConfigurationT = SchedulerConfiguration>
    UpdateApplicationRequest& WithSchedulerConfiguration(SchedulerConfigurationT&& value) { SetSchedulerConfiguration(std::forward<SchedulerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM Identity Center configuration used to enable or disable
     * trusted identity propagation. When provided, this configuration determines how
     * the application interacts with IAM Identity Center for user authentication and
     * access control.</p>
     */
    inline const IdentityCenterConfigurationInput& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
    inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfigurationInput>
    void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value); }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfigurationInput>
    UpdateApplicationRequest& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, InitialCapacityConfig> m_initialCapacity;
    bool m_initialCapacityHasBeenSet = false;

    MaximumAllowedResources m_maximumCapacity;
    bool m_maximumCapacityHasBeenSet = false;

    AutoStartConfig m_autoStartConfiguration;
    bool m_autoStartConfigurationHasBeenSet = false;

    AutoStopConfig m_autoStopConfiguration;
    bool m_autoStopConfigurationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Architecture m_architecture{Architecture::NOT_SET};
    bool m_architectureHasBeenSet = false;

    ImageConfigurationInput m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, WorkerTypeSpecificationInput> m_workerTypeSpecifications;
    bool m_workerTypeSpecificationsHasBeenSet = false;

    InteractiveConfiguration m_interactiveConfiguration;
    bool m_interactiveConfigurationHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::Vector<Configuration> m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet = false;

    MonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;

    SchedulerConfiguration m_schedulerConfiguration;
    bool m_schedulerConfigurationHasBeenSet = false;

    IdentityCenterConfigurationInput m_identityCenterConfiguration;
    bool m_identityCenterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
