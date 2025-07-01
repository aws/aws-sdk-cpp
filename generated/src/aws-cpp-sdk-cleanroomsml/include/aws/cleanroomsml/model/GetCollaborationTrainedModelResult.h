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
#include <aws/cleanroomsml/model/IncrementalTrainingDataChannelOutput.h>
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
  class GetCollaborationTrainedModelResult
  {
  public:
    AWS_CLEANROOMSML_API GetCollaborationTrainedModelResult() = default;
    AWS_CLEANROOMSML_API GetCollaborationTrainedModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetCollaborationTrainedModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The membership ID of the member that created the trained model.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    GetCollaborationTrainedModelResult& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
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
    GetCollaborationTrainedModelResult& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    GetCollaborationTrainedModelResult& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
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
    GetCollaborationTrainedModelResult& WithVersionIdentifier(VersionIdentifierT&& value) { SetVersionIdentifier(std::forward<VersionIdentifierT>(value)); return *this;}
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
    GetCollaborationTrainedModelResult& WithIncrementalTrainingDataChannels(IncrementalTrainingDataChannelsT&& value) { SetIncrementalTrainingDataChannels(std::forward<IncrementalTrainingDataChannelsT>(value)); return *this;}
    template<typename IncrementalTrainingDataChannelsT = IncrementalTrainingDataChannelOutput>
    GetCollaborationTrainedModelResult& AddIncrementalTrainingDataChannels(IncrementalTrainingDataChannelsT&& value) { m_incrementalTrainingDataChannelsHasBeenSet = true; m_incrementalTrainingDataChannels.emplace_back(std::forward<IncrementalTrainingDataChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the trained model.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCollaborationTrainedModelResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetCollaborationTrainedModelResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model.</p>
     */
    inline TrainedModelStatus GetStatus() const { return m_status; }
    inline void SetStatus(TrainedModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCollaborationTrainedModelResult& WithStatus(TrainedModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = StatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StatusDetails>
    GetCollaborationTrainedModelResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that was used to create this trained model.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const { return m_configuredModelAlgorithmAssociationArn; }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    void SetConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::forward<ConfiguredModelAlgorithmAssociationArnT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    GetCollaborationTrainedModelResult& WithConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { SetConfiguredModelAlgorithmAssociationArn(std::forward<ConfiguredModelAlgorithmAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 resource configuration that was used to train this model.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    GetCollaborationTrainedModelResult& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input mode that was used for accessing the training data when this
     * trained model was created. This indicates how the training data was made
     * available to the training algorithm.</p>
     */
    inline TrainingInputMode GetTrainingInputMode() const { return m_trainingInputMode; }
    inline void SetTrainingInputMode(TrainingInputMode value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }
    inline GetCollaborationTrainedModelResult& WithTrainingInputMode(TrainingInputMode value) { SetTrainingInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stopping condition that determined when model training ended.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    GetCollaborationTrainedModelResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model metrics.</p>
     */
    inline MetricsStatus GetMetricsStatus() const { return m_metricsStatus; }
    inline void SetMetricsStatus(MetricsStatus value) { m_metricsStatusHasBeenSet = true; m_metricsStatus = value; }
    inline GetCollaborationTrainedModelResult& WithMetricsStatus(MetricsStatus value) { SetMetricsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status information for the model metrics.</p>
     */
    inline const Aws::String& GetMetricsStatusDetails() const { return m_metricsStatusDetails; }
    template<typename MetricsStatusDetailsT = Aws::String>
    void SetMetricsStatusDetails(MetricsStatusDetailsT&& value) { m_metricsStatusDetailsHasBeenSet = true; m_metricsStatusDetails = std::forward<MetricsStatusDetailsT>(value); }
    template<typename MetricsStatusDetailsT = Aws::String>
    GetCollaborationTrainedModelResult& WithMetricsStatusDetails(MetricsStatusDetailsT&& value) { SetMetricsStatusDetails(std::forward<MetricsStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status information for the logs.</p>
     */
    inline LogsStatus GetLogsStatus() const { return m_logsStatus; }
    inline void SetLogsStatus(LogsStatus value) { m_logsStatusHasBeenSet = true; m_logsStatus = value; }
    inline GetCollaborationTrainedModelResult& WithLogsStatus(LogsStatus value) { SetLogsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status information for the logs.</p>
     */
    inline const Aws::String& GetLogsStatusDetails() const { return m_logsStatusDetails; }
    template<typename LogsStatusDetailsT = Aws::String>
    void SetLogsStatusDetails(LogsStatusDetailsT&& value) { m_logsStatusDetailsHasBeenSet = true; m_logsStatusDetails = std::forward<LogsStatusDetailsT>(value); }
    template<typename LogsStatusDetailsT = Aws::String>
    GetCollaborationTrainedModelResult& WithLogsStatusDetails(LogsStatusDetailsT&& value) { SetLogsStatusDetails(std::forward<LogsStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the training container image.</p>
     */
    inline const Aws::String& GetTrainingContainerImageDigest() const { return m_trainingContainerImageDigest; }
    template<typename TrainingContainerImageDigestT = Aws::String>
    void SetTrainingContainerImageDigest(TrainingContainerImageDigestT&& value) { m_trainingContainerImageDigestHasBeenSet = true; m_trainingContainerImageDigest = std::forward<TrainingContainerImageDigestT>(value); }
    template<typename TrainingContainerImageDigestT = Aws::String>
    GetCollaborationTrainedModelResult& WithTrainingContainerImageDigest(TrainingContainerImageDigestT&& value) { SetTrainingContainerImageDigest(std::forward<TrainingContainerImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the trained model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetCollaborationTrainedModelResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetCollaborationTrainedModelResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the member that created the trained model.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    GetCollaborationTrainedModelResult& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCollaborationTrainedModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
