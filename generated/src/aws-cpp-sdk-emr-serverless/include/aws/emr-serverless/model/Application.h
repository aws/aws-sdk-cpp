/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/ApplicationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-serverless/model/MaximumAllowedResources.h>
#include <aws/core/utils/DateTime.h>
#include <aws/emr-serverless/model/AutoStartConfig.h>
#include <aws/emr-serverless/model/AutoStopConfig.h>
#include <aws/emr-serverless/model/NetworkConfiguration.h>
#include <aws/emr-serverless/model/Architecture.h>
#include <aws/emr-serverless/model/ImageConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/model/MonitoringConfiguration.h>
#include <aws/emr-serverless/model/InteractiveConfiguration.h>
#include <aws/emr-serverless/model/SchedulerConfiguration.h>
#include <aws/emr-serverless/model/IdentityCenterConfiguration.h>
#include <aws/emr-serverless/model/InitialCapacityConfig.h>
#include <aws/emr-serverless/model/WorkerTypeSpecification.h>
#include <aws/emr-serverless/model/Configuration.h>
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
   * <p>Information about an application. Amazon EMR Serverless uses applications to
   * run jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/Application">AWS
   * API Reference</a></p>
   */
  class Application
  {
  public:
    AWS_EMRSERVERLESS_API Application() = default;
    AWS_EMRSERVERLESS_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    Application& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Application& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Application& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    Application& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Application& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the application.</p>
     */
    inline ApplicationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ApplicationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Application& WithState(ApplicationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state details of the application.</p>
     */
    inline const Aws::String& GetStateDetails() const { return m_stateDetails; }
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
    template<typename StateDetailsT = Aws::String>
    void SetStateDetails(StateDetailsT&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::forward<StateDetailsT>(value); }
    template<typename StateDetailsT = Aws::String>
    Application& WithStateDetails(StateDetailsT&& value) { SetStateDetails(std::forward<StateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial capacity of the application.</p>
     */
    inline const Aws::Map<Aws::String, InitialCapacityConfig>& GetInitialCapacity() const { return m_initialCapacity; }
    inline bool InitialCapacityHasBeenSet() const { return m_initialCapacityHasBeenSet; }
    template<typename InitialCapacityT = Aws::Map<Aws::String, InitialCapacityConfig>>
    void SetInitialCapacity(InitialCapacityT&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity = std::forward<InitialCapacityT>(value); }
    template<typename InitialCapacityT = Aws::Map<Aws::String, InitialCapacityConfig>>
    Application& WithInitialCapacity(InitialCapacityT&& value) { SetInitialCapacity(std::forward<InitialCapacityT>(value)); return *this;}
    template<typename InitialCapacityKeyT = Aws::String, typename InitialCapacityValueT = InitialCapacityConfig>
    Application& AddInitialCapacity(InitialCapacityKeyT&& key, InitialCapacityValueT&& value) {
      m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(std::forward<InitialCapacityKeyT>(key), std::forward<InitialCapacityValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The maximum capacity of the application. This is cumulative across all
     * workers at any given point in time during the lifespan of the application is
     * created. No new resources will be created once any one of the defined limits is
     * hit.</p>
     */
    inline const MaximumAllowedResources& GetMaximumCapacity() const { return m_maximumCapacity; }
    inline bool MaximumCapacityHasBeenSet() const { return m_maximumCapacityHasBeenSet; }
    template<typename MaximumCapacityT = MaximumAllowedResources>
    void SetMaximumCapacity(MaximumCapacityT&& value) { m_maximumCapacityHasBeenSet = true; m_maximumCapacity = std::forward<MaximumCapacityT>(value); }
    template<typename MaximumCapacityT = MaximumAllowedResources>
    Application& WithMaximumCapacity(MaximumCapacityT&& value) { SetMaximumCapacity(std::forward<MaximumCapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the application run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Application& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the application run was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Application& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Application& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Application& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    Application& WithAutoStartConfiguration(AutoStartConfigurationT&& value) { SetAutoStartConfiguration(std::forward<AutoStartConfigurationT>(value)); return *this;}
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
    Application& WithAutoStopConfiguration(AutoStopConfigurationT&& value) { SetAutoStopConfiguration(std::forward<AutoStopConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network configuration for customer VPC connectivity for the
     * application.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    Application& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline Architecture GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(Architecture value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline Application& WithArchitecture(Architecture value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image configuration applied to all worker types.</p>
     */
    inline const ImageConfiguration& GetImageConfiguration() const { return m_imageConfiguration; }
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }
    template<typename ImageConfigurationT = ImageConfiguration>
    void SetImageConfiguration(ImageConfigurationT&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::forward<ImageConfigurationT>(value); }
    template<typename ImageConfigurationT = ImageConfiguration>
    Application& WithImageConfiguration(ImageConfigurationT&& value) { SetImageConfiguration(std::forward<ImageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline const Aws::Map<Aws::String, WorkerTypeSpecification>& GetWorkerTypeSpecifications() const { return m_workerTypeSpecifications; }
    inline bool WorkerTypeSpecificationsHasBeenSet() const { return m_workerTypeSpecificationsHasBeenSet; }
    template<typename WorkerTypeSpecificationsT = Aws::Map<Aws::String, WorkerTypeSpecification>>
    void SetWorkerTypeSpecifications(WorkerTypeSpecificationsT&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications = std::forward<WorkerTypeSpecificationsT>(value); }
    template<typename WorkerTypeSpecificationsT = Aws::Map<Aws::String, WorkerTypeSpecification>>
    Application& WithWorkerTypeSpecifications(WorkerTypeSpecificationsT&& value) { SetWorkerTypeSpecifications(std::forward<WorkerTypeSpecificationsT>(value)); return *this;}
    template<typename WorkerTypeSpecificationsKeyT = Aws::String, typename WorkerTypeSpecificationsValueT = WorkerTypeSpecification>
    Application& AddWorkerTypeSpecifications(WorkerTypeSpecificationsKeyT&& key, WorkerTypeSpecificationsValueT&& value) {
      m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(std::forward<WorkerTypeSpecificationsKeyT>(key), std::forward<WorkerTypeSpecificationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline const Aws::Vector<Configuration>& GetRuntimeConfiguration() const { return m_runtimeConfiguration; }
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }
    template<typename RuntimeConfigurationT = Aws::Vector<Configuration>>
    void SetRuntimeConfiguration(RuntimeConfigurationT&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::forward<RuntimeConfigurationT>(value); }
    template<typename RuntimeConfigurationT = Aws::Vector<Configuration>>
    Application& WithRuntimeConfiguration(RuntimeConfigurationT&& value) { SetRuntimeConfiguration(std::forward<RuntimeConfigurationT>(value)); return *this;}
    template<typename RuntimeConfigurationT = Configuration>
    Application& AddRuntimeConfiguration(RuntimeConfigurationT&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration.emplace_back(std::forward<RuntimeConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const MonitoringConfiguration& GetMonitoringConfiguration() const { return m_monitoringConfiguration; }
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }
    template<typename MonitoringConfigurationT = MonitoringConfiguration>
    void SetMonitoringConfiguration(MonitoringConfigurationT&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::forward<MonitoringConfigurationT>(value); }
    template<typename MonitoringConfigurationT = MonitoringConfiguration>
    Application& WithMonitoringConfiguration(MonitoringConfigurationT&& value) { SetMonitoringConfiguration(std::forward<MonitoringConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interactive configuration object that enables the interactive use cases
     * for an application.</p>
     */
    inline const InteractiveConfiguration& GetInteractiveConfiguration() const { return m_interactiveConfiguration; }
    inline bool InteractiveConfigurationHasBeenSet() const { return m_interactiveConfigurationHasBeenSet; }
    template<typename InteractiveConfigurationT = InteractiveConfiguration>
    void SetInteractiveConfiguration(InteractiveConfigurationT&& value) { m_interactiveConfigurationHasBeenSet = true; m_interactiveConfiguration = std::forward<InteractiveConfigurationT>(value); }
    template<typename InteractiveConfigurationT = InteractiveConfiguration>
    Application& WithInteractiveConfiguration(InteractiveConfigurationT&& value) { SetInteractiveConfiguration(std::forward<InteractiveConfigurationT>(value)); return *this;}
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
    Application& WithSchedulerConfiguration(SchedulerConfigurationT&& value) { SetSchedulerConfiguration(std::forward<SchedulerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center configuration applied to enable trusted identity
     * propagation. </p>
     */
    inline const IdentityCenterConfiguration& GetIdentityCenterConfiguration() const { return m_identityCenterConfiguration; }
    inline bool IdentityCenterConfigurationHasBeenSet() const { return m_identityCenterConfigurationHasBeenSet; }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    void SetIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { m_identityCenterConfigurationHasBeenSet = true; m_identityCenterConfiguration = std::forward<IdentityCenterConfigurationT>(value); }
    template<typename IdentityCenterConfigurationT = IdentityCenterConfiguration>
    Application& WithIdentityCenterConfiguration(IdentityCenterConfigurationT&& value) { SetIdentityCenterConfiguration(std::forward<IdentityCenterConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    ApplicationState m_state{ApplicationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::Map<Aws::String, InitialCapacityConfig> m_initialCapacity;
    bool m_initialCapacityHasBeenSet = false;

    MaximumAllowedResources m_maximumCapacity;
    bool m_maximumCapacityHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AutoStartConfig m_autoStartConfiguration;
    bool m_autoStartConfigurationHasBeenSet = false;

    AutoStopConfig m_autoStopConfiguration;
    bool m_autoStopConfigurationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Architecture m_architecture{Architecture::NOT_SET};
    bool m_architectureHasBeenSet = false;

    ImageConfiguration m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, WorkerTypeSpecification> m_workerTypeSpecifications;
    bool m_workerTypeSpecificationsHasBeenSet = false;

    Aws::Vector<Configuration> m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet = false;

    MonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;

    InteractiveConfiguration m_interactiveConfiguration;
    bool m_interactiveConfigurationHasBeenSet = false;

    SchedulerConfiguration m_schedulerConfiguration;
    bool m_schedulerConfigurationHasBeenSet = false;

    IdentityCenterConfiguration m_identityCenterConfiguration;
    bool m_identityCenterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
