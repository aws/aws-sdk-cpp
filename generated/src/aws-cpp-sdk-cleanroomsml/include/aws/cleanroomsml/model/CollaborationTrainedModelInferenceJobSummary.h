/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/TrainedModelInferenceJobStatus.h>
#include <aws/cleanroomsml/model/InferenceOutputConfiguration.h>
#include <aws/cleanroomsml/model/MetricsStatus.h>
#include <aws/cleanroomsml/model/LogsStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides summary information about a trained model inference job in a
   * collaboration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CollaborationTrainedModelInferenceJobSummary">AWS
   * API Reference</a></p>
   */
  class CollaborationTrainedModelInferenceJobSummary
  {
  public:
    AWS_CLEANROOMSML_API CollaborationTrainedModelInferenceJobSummary() = default;
    AWS_CLEANROOMSML_API CollaborationTrainedModelInferenceJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API CollaborationTrainedModelInferenceJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelInferenceJobArn() const { return m_trainedModelInferenceJobArn; }
    inline bool TrainedModelInferenceJobArnHasBeenSet() const { return m_trainedModelInferenceJobArnHasBeenSet; }
    template<typename TrainedModelInferenceJobArnT = Aws::String>
    void SetTrainedModelInferenceJobArn(TrainedModelInferenceJobArnT&& value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn = std::forward<TrainedModelInferenceJobArnT>(value); }
    template<typename TrainedModelInferenceJobArnT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithTrainedModelInferenceJobArn(TrainedModelInferenceJobArnT&& value) { SetTrainedModelInferenceJobArn(std::forward<TrainedModelInferenceJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that is used for the trained model inference job.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const { return m_configuredModelAlgorithmAssociationArn; }
    inline bool ConfiguredModelAlgorithmAssociationArnHasBeenSet() const { return m_configuredModelAlgorithmAssociationArnHasBeenSet; }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    void SetConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::forward<ConfiguredModelAlgorithmAssociationArnT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { SetConfiguredModelAlgorithmAssociationArn(std::forward<ConfiguredModelAlgorithmAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the membership that contains the trained model inference
     * job.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model that is used for the
     * trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier of the trained model that was used for inference in
     * this job.</p>
     */
    inline const Aws::String& GetTrainedModelVersionIdentifier() const { return m_trainedModelVersionIdentifier; }
    inline bool TrainedModelVersionIdentifierHasBeenSet() const { return m_trainedModelVersionIdentifierHasBeenSet; }
    template<typename TrainedModelVersionIdentifierT = Aws::String>
    void SetTrainedModelVersionIdentifier(TrainedModelVersionIdentifierT&& value) { m_trainedModelVersionIdentifierHasBeenSet = true; m_trainedModelVersionIdentifier = std::forward<TrainedModelVersionIdentifierT>(value); }
    template<typename TrainedModelVersionIdentifierT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithTrainedModelVersionIdentifier(TrainedModelVersionIdentifierT&& value) { SetTrainedModelVersionIdentifier(std::forward<TrainedModelVersionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the trained model
     * inference job.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model inference job.</p>
     */
    inline TrainedModelInferenceJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TrainedModelInferenceJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CollaborationTrainedModelInferenceJobSummary& WithStatus(TrainedModelInferenceJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns output configuration information for the trained model inference
     * job.</p>
     */
    inline const InferenceOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    template<typename OutputConfigurationT = InferenceOutputConfiguration>
    void SetOutputConfiguration(OutputConfigurationT&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::forward<OutputConfigurationT>(value); }
    template<typename OutputConfigurationT = InferenceOutputConfiguration>
    CollaborationTrainedModelInferenceJobSummary& WithOutputConfiguration(OutputConfigurationT&& value) { SetOutputConfiguration(std::forward<OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model inference job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model inference job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>the trained model inference job metrics status.</p>
     */
    inline MetricsStatus GetMetricsStatus() const { return m_metricsStatus; }
    inline bool MetricsStatusHasBeenSet() const { return m_metricsStatusHasBeenSet; }
    inline void SetMetricsStatus(MetricsStatus value) { m_metricsStatusHasBeenSet = true; m_metricsStatus = value; }
    inline CollaborationTrainedModelInferenceJobSummary& WithMetricsStatus(MetricsStatus value) { SetMetricsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the metrics status for trained model inference job.</p>
     */
    inline const Aws::String& GetMetricsStatusDetails() const { return m_metricsStatusDetails; }
    inline bool MetricsStatusDetailsHasBeenSet() const { return m_metricsStatusDetailsHasBeenSet; }
    template<typename MetricsStatusDetailsT = Aws::String>
    void SetMetricsStatusDetails(MetricsStatusDetailsT&& value) { m_metricsStatusDetailsHasBeenSet = true; m_metricsStatusDetails = std::forward<MetricsStatusDetailsT>(value); }
    template<typename MetricsStatusDetailsT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithMetricsStatusDetails(MetricsStatusDetailsT&& value) { SetMetricsStatusDetails(std::forward<MetricsStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trained model inference job logs status.</p>
     */
    inline LogsStatus GetLogsStatus() const { return m_logsStatus; }
    inline bool LogsStatusHasBeenSet() const { return m_logsStatusHasBeenSet; }
    inline void SetLogsStatus(LogsStatus value) { m_logsStatusHasBeenSet = true; m_logsStatus = value; }
    inline CollaborationTrainedModelInferenceJobSummary& WithLogsStatus(LogsStatus value) { SetLogsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the logs status for the trained model inference job.</p>
     */
    inline const Aws::String& GetLogsStatusDetails() const { return m_logsStatusDetails; }
    inline bool LogsStatusDetailsHasBeenSet() const { return m_logsStatusDetailsHasBeenSet; }
    template<typename LogsStatusDetailsT = Aws::String>
    void SetLogsStatusDetails(LogsStatusDetailsT&& value) { m_logsStatusDetailsHasBeenSet = true; m_logsStatusDetails = std::forward<LogsStatusDetailsT>(value); }
    template<typename LogsStatusDetailsT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithLogsStatusDetails(LogsStatusDetailsT&& value) { SetLogsStatusDetails(std::forward<LogsStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the trained model inference job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CollaborationTrainedModelInferenceJobSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model inference job was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    CollaborationTrainedModelInferenceJobSummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID that created the trained model inference job.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    CollaborationTrainedModelInferenceJobSummary& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainedModelInferenceJobArn;
    bool m_trainedModelInferenceJobArnHasBeenSet = false;

    Aws::String m_configuredModelAlgorithmAssociationArn;
    bool m_configuredModelAlgorithmAssociationArnHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    Aws::String m_trainedModelVersionIdentifier;
    bool m_trainedModelVersionIdentifierHasBeenSet = false;

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    TrainedModelInferenceJobStatus m_status{TrainedModelInferenceJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    InferenceOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MetricsStatus m_metricsStatus{MetricsStatus::NOT_SET};
    bool m_metricsStatusHasBeenSet = false;

    Aws::String m_metricsStatusDetails;
    bool m_metricsStatusDetailsHasBeenSet = false;

    LogsStatus m_logsStatus{LogsStatus::NOT_SET};
    bool m_logsStatusHasBeenSet = false;

    Aws::String m_logsStatusDetails;
    bool m_logsStatusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
