/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/TrainedModelStatus.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
#include <aws/cleanroomsml/model/ResourceConfig.h>
#include <aws/cleanroomsml/model/TrainingInputMode.h>
#include <aws/cleanroomsml/model/StoppingCondition.h>
#include <aws/cleanroomsml/model/MetricsStatus.h>
#include <aws/cleanroomsml/model/LogsStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanroomsml/model/IncrementalTrainingDataChannelOutput.h>
#include <aws/cleanroomsml/model/ModelTrainingDataChannel.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CleanRoomsML
{
namespace Model
{
  class GetTrainedModelResult
  {
  public:
    AWS_CLEANROOMSML_API GetTrainedModelResult() = default;
    AWS_CLEANROOMSML_API GetTrainedModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetTrainedModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The membership ID of the member that created the trained model.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    GetTrainedModelResult& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the trained
     * model.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    GetTrainedModelResult& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    GetTrainedModelResult& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier of the trained model. This unique identifier
     * distinguishes this version from other versions of the same trained model.</p>
     */
    inline const Aws::String& GetVersionIdentifier() const { return m_versionIdentifier; }
    template<typename VersionIdentifierT = Aws::String>
    void SetVersionIdentifier(VersionIdentifierT&& value) { m_versionIdentifierHasBeenSet = true; m_versionIdentifier = std::forward<VersionIdentifierT>(value); }
    template<typename VersionIdentifierT = Aws::String>
    GetTrainedModelResult& WithVersionIdentifier(VersionIdentifierT&& value) { SetVersionIdentifier(std::forward<VersionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the incremental training data channels used to create this
     * version of the trained model. This includes details about the base model that
     * was used for incremental training and the channel configuration.</p>
     */
    inline const Aws::Vector<IncrementalTrainingDataChannelOutput>& GetIncrementalTrainingDataChannels() const { return m_incrementalTrainingDataChannels; }
    template<typename IncrementalTrainingDataChannelsT = Aws::Vector<IncrementalTrainingDataChannelOutput>>
    void SetIncrementalTrainingDataChannels(IncrementalTrainingDataChannelsT&& value) { m_incrementalTrainingDataChannelsHasBeenSet = true; m_incrementalTrainingDataChannels = std::forward<IncrementalTrainingDataChannelsT>(value); }
    template<typename IncrementalTrainingDataChannelsT = Aws::Vector<IncrementalTrainingDataChannelOutput>>
    GetTrainedModelResult& WithIncrementalTrainingDataChannels(IncrementalTrainingDataChannelsT&& value) { SetIncrementalTrainingDataChannels(std::forward<IncrementalTrainingDataChannelsT>(value)); return *this;}
    template<typename IncrementalTrainingDataChannelsT = IncrementalTrainingDataChannelOutput>
    GetTrainedModelResult& AddIncrementalTrainingDataChannels(IncrementalTrainingDataChannelsT&& value) { m_incrementalTrainingDataChannelsHasBeenSet = true; m_incrementalTrainingDataChannels.emplace_back(std::forward<IncrementalTrainingDataChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the trained model.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetTrainedModelResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetTrainedModelResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model.</p>
     */
    inline TrainedModelStatus GetStatus() const { return m_status; }
    inline void SetStatus(TrainedModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetTrainedModelResult& WithStatus(TrainedModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = StatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StatusDetails>
    GetTrainedModelResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that was used to create the trained model.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const { return m_configuredModelAlgorithmAssociationArn; }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    void SetConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::forward<ConfiguredModelAlgorithmAssociationArnT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    GetTrainedModelResult& WithConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { SetConfiguredModelAlgorithmAssociationArn(std::forward<ConfiguredModelAlgorithmAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 resource configuration that was used to create the trained model.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    GetTrainedModelResult& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input mode that was used for accessing the training data when this
     * trained model was created. This indicates how the training data was made
     * available to the training algorithm.</p>
     */
    inline TrainingInputMode GetTrainingInputMode() const { return m_trainingInputMode; }
    inline void SetTrainingInputMode(TrainingInputMode value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }
    inline GetTrainedModelResult& WithTrainingInputMode(TrainingInputMode value) { SetTrainingInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stopping condition that was used to terminate model training.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    GetTrainedModelResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model metrics.</p>
     */
    inline MetricsStatus GetMetricsStatus() const { return m_metricsStatus; }
    inline void SetMetricsStatus(MetricsStatus value) { m_metricsStatusHasBeenSet = true; m_metricsStatus = value; }
    inline GetTrainedModelResult& WithMetricsStatus(MetricsStatus value) { SetMetricsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the metrics status for the trained model.</p>
     */
    inline const Aws::String& GetMetricsStatusDetails() const { return m_metricsStatusDetails; }
    template<typename MetricsStatusDetailsT = Aws::String>
    void SetMetricsStatusDetails(MetricsStatusDetailsT&& value) { m_metricsStatusDetailsHasBeenSet = true; m_metricsStatusDetails = std::forward<MetricsStatusDetailsT>(value); }
    template<typename MetricsStatusDetailsT = Aws::String>
    GetTrainedModelResult& WithMetricsStatusDetails(MetricsStatusDetailsT&& value) { SetMetricsStatusDetails(std::forward<MetricsStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logs status for the trained model.</p>
     */
    inline LogsStatus GetLogsStatus() const { return m_logsStatus; }
    inline void SetLogsStatus(LogsStatus value) { m_logsStatusHasBeenSet = true; m_logsStatus = value; }
    inline GetTrainedModelResult& WithLogsStatus(LogsStatus value) { SetLogsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the logs status for the trained model.</p>
     */
    inline const Aws::String& GetLogsStatusDetails() const { return m_logsStatusDetails; }
    template<typename LogsStatusDetailsT = Aws::String>
    void SetLogsStatusDetails(LogsStatusDetailsT&& value) { m_logsStatusDetailsHasBeenSet = true; m_logsStatusDetails = std::forward<LogsStatusDetailsT>(value); }
    template<typename LogsStatusDetailsT = Aws::String>
    GetTrainedModelResult& WithLogsStatusDetails(LogsStatusDetailsT&& value) { SetLogsStatusDetails(std::forward<LogsStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the training image container.</p>
     */
    inline const Aws::String& GetTrainingContainerImageDigest() const { return m_trainingContainerImageDigest; }
    template<typename TrainingContainerImageDigestT = Aws::String>
    void SetTrainingContainerImageDigest(TrainingContainerImageDigestT&& value) { m_trainingContainerImageDigestHasBeenSet = true; m_trainingContainerImageDigest = std::forward<TrainingContainerImageDigestT>(value); }
    template<typename TrainingContainerImageDigestT = Aws::String>
    GetTrainedModelResult& WithTrainingContainerImageDigest(TrainingContainerImageDigestT&& value) { SetTrainingContainerImageDigest(std::forward<TrainingContainerImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the trained model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetTrainedModelResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetTrainedModelResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters that were used to create the trained model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperparameters() const { return m_hyperparameters; }
    template<typename HyperparametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperparameters(HyperparametersT&& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters = std::forward<HyperparametersT>(value); }
    template<typename HyperparametersT = Aws::Map<Aws::String, Aws::String>>
    GetTrainedModelResult& WithHyperparameters(HyperparametersT&& value) { SetHyperparameters(std::forward<HyperparametersT>(value)); return *this;}
    template<typename HyperparametersKeyT = Aws::String, typename HyperparametersValueT = Aws::String>
    GetTrainedModelResult& AddHyperparameters(HyperparametersKeyT&& key, HyperparametersValueT&& value) {
      m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(std::forward<HyperparametersKeyT>(key), std::forward<HyperparametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The EC2 environment that was used to create the trained model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    GetTrainedModelResult& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    GetTrainedModelResult& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and associated data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetTrainedModelResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata that you applied to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Clean Rooms ML considers it to be a user tag and will
     * count against the limit of 50 tags. Tags with only the key prefix of aws do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetTrainedModelResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetTrainedModelResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The data channels that were used for the trained model.</p>
     */
    inline const Aws::Vector<ModelTrainingDataChannel>& GetDataChannels() const { return m_dataChannels; }
    template<typename DataChannelsT = Aws::Vector<ModelTrainingDataChannel>>
    void SetDataChannels(DataChannelsT&& value) { m_dataChannelsHasBeenSet = true; m_dataChannels = std::forward<DataChannelsT>(value); }
    template<typename DataChannelsT = Aws::Vector<ModelTrainingDataChannel>>
    GetTrainedModelResult& WithDataChannels(DataChannelsT&& value) { SetDataChannels(std::forward<DataChannelsT>(value)); return *this;}
    template<typename DataChannelsT = ModelTrainingDataChannel>
    GetTrainedModelResult& AddDataChannels(DataChannelsT&& value) { m_dataChannelsHasBeenSet = true; m_dataChannels.emplace_back(std::forward<DataChannelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTrainedModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    Aws::String m_versionIdentifier;
    bool m_versionIdentifierHasBeenSet = false;

    Aws::Vector<IncrementalTrainingDataChannelOutput> m_incrementalTrainingDataChannels;
    bool m_incrementalTrainingDataChannelsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TrainedModelStatus m_status{TrainedModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_configuredModelAlgorithmAssociationArn;
    bool m_configuredModelAlgorithmAssociationArnHasBeenSet = false;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    TrainingInputMode m_trainingInputMode{TrainingInputMode::NOT_SET};
    bool m_trainingInputModeHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    MetricsStatus m_metricsStatus{MetricsStatus::NOT_SET};
    bool m_metricsStatusHasBeenSet = false;

    Aws::String m_metricsStatusDetails;
    bool m_metricsStatusDetailsHasBeenSet = false;

    LogsStatus m_logsStatus{LogsStatus::NOT_SET};
    bool m_logsStatusHasBeenSet = false;

    Aws::String m_logsStatusDetails;
    bool m_logsStatusDetailsHasBeenSet = false;

    Aws::String m_trainingContainerImageDigest;
    bool m_trainingContainerImageDigestHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperparameters;
    bool m_hyperparametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ModelTrainingDataChannel> m_dataChannels;
    bool m_dataChannelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
