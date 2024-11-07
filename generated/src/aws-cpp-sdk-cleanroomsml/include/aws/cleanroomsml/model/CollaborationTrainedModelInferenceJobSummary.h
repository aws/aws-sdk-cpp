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
    AWS_CLEANROOMSML_API CollaborationTrainedModelInferenceJobSummary();
    AWS_CLEANROOMSML_API CollaborationTrainedModelInferenceJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API CollaborationTrainedModelInferenceJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelInferenceJobArn() const{ return m_trainedModelInferenceJobArn; }
    inline bool TrainedModelInferenceJobArnHasBeenSet() const { return m_trainedModelInferenceJobArnHasBeenSet; }
    inline void SetTrainedModelInferenceJobArn(const Aws::String& value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn = value; }
    inline void SetTrainedModelInferenceJobArn(Aws::String&& value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn = std::move(value); }
    inline void SetTrainedModelInferenceJobArn(const char* value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithTrainedModelInferenceJobArn(const Aws::String& value) { SetTrainedModelInferenceJobArn(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithTrainedModelInferenceJobArn(Aws::String&& value) { SetTrainedModelInferenceJobArn(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithTrainedModelInferenceJobArn(const char* value) { SetTrainedModelInferenceJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that is used for the trained model inference job.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const{ return m_configuredModelAlgorithmAssociationArn; }
    inline bool ConfiguredModelAlgorithmAssociationArnHasBeenSet() const { return m_configuredModelAlgorithmAssociationArnHasBeenSet; }
    inline void SetConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = value; }
    inline void SetConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmAssociationArn(const char* value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { SetConfiguredModelAlgorithmAssociationArn(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithConfiguredModelAlgorithmAssociationArn(const char* value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the membership that contains the trained model inference
     * job.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model that is used for the
     * trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const{ return m_trainedModelArn; }
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
    inline void SetTrainedModelArn(const Aws::String& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = value; }
    inline void SetTrainedModelArn(Aws::String&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::move(value); }
    inline void SetTrainedModelArn(const char* value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithTrainedModelArn(const Aws::String& value) { SetTrainedModelArn(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithTrainedModelArn(Aws::String&& value) { SetTrainedModelArn(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithTrainedModelArn(const char* value) { SetTrainedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the trained model
     * inference job.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model inference job.</p>
     */
    inline const TrainedModelInferenceJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TrainedModelInferenceJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TrainedModelInferenceJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithStatus(const TrainedModelInferenceJobStatus& value) { SetStatus(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithStatus(TrainedModelInferenceJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns output configuration information for the trained model inference
     * job.</p>
     */
    inline const InferenceOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    inline void SetOutputConfiguration(const InferenceOutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }
    inline void SetOutputConfiguration(InferenceOutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithOutputConfiguration(const InferenceOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithOutputConfiguration(InferenceOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model inference job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model inference job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>the trained model inference job metrics status.</p>
     */
    inline const MetricsStatus& GetMetricsStatus() const{ return m_metricsStatus; }
    inline bool MetricsStatusHasBeenSet() const { return m_metricsStatusHasBeenSet; }
    inline void SetMetricsStatus(const MetricsStatus& value) { m_metricsStatusHasBeenSet = true; m_metricsStatus = value; }
    inline void SetMetricsStatus(MetricsStatus&& value) { m_metricsStatusHasBeenSet = true; m_metricsStatus = std::move(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithMetricsStatus(const MetricsStatus& value) { SetMetricsStatus(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithMetricsStatus(MetricsStatus&& value) { SetMetricsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the metrics status for trained model inference job.</p>
     */
    inline const Aws::String& GetMetricsStatusDetails() const{ return m_metricsStatusDetails; }
    inline bool MetricsStatusDetailsHasBeenSet() const { return m_metricsStatusDetailsHasBeenSet; }
    inline void SetMetricsStatusDetails(const Aws::String& value) { m_metricsStatusDetailsHasBeenSet = true; m_metricsStatusDetails = value; }
    inline void SetMetricsStatusDetails(Aws::String&& value) { m_metricsStatusDetailsHasBeenSet = true; m_metricsStatusDetails = std::move(value); }
    inline void SetMetricsStatusDetails(const char* value) { m_metricsStatusDetailsHasBeenSet = true; m_metricsStatusDetails.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithMetricsStatusDetails(const Aws::String& value) { SetMetricsStatusDetails(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithMetricsStatusDetails(Aws::String&& value) { SetMetricsStatusDetails(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithMetricsStatusDetails(const char* value) { SetMetricsStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trained model inference job logs status.</p>
     */
    inline const LogsStatus& GetLogsStatus() const{ return m_logsStatus; }
    inline bool LogsStatusHasBeenSet() const { return m_logsStatusHasBeenSet; }
    inline void SetLogsStatus(const LogsStatus& value) { m_logsStatusHasBeenSet = true; m_logsStatus = value; }
    inline void SetLogsStatus(LogsStatus&& value) { m_logsStatusHasBeenSet = true; m_logsStatus = std::move(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithLogsStatus(const LogsStatus& value) { SetLogsStatus(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithLogsStatus(LogsStatus&& value) { SetLogsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the logs status for the trained model inference job.</p>
     */
    inline const Aws::String& GetLogsStatusDetails() const{ return m_logsStatusDetails; }
    inline bool LogsStatusDetailsHasBeenSet() const { return m_logsStatusDetailsHasBeenSet; }
    inline void SetLogsStatusDetails(const Aws::String& value) { m_logsStatusDetailsHasBeenSet = true; m_logsStatusDetails = value; }
    inline void SetLogsStatusDetails(Aws::String&& value) { m_logsStatusDetailsHasBeenSet = true; m_logsStatusDetails = std::move(value); }
    inline void SetLogsStatusDetails(const char* value) { m_logsStatusDetailsHasBeenSet = true; m_logsStatusDetails.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithLogsStatusDetails(const Aws::String& value) { SetLogsStatusDetails(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithLogsStatusDetails(Aws::String&& value) { SetLogsStatusDetails(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithLogsStatusDetails(const char* value) { SetLogsStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the trained model inference job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model inference job was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID that created the trained model inference job.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = value; }
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::move(value); }
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId.assign(value); }
    inline CollaborationTrainedModelInferenceJobSummary& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}
    inline CollaborationTrainedModelInferenceJobSummary& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}
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

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    TrainedModelInferenceJobStatus m_status;
    bool m_statusHasBeenSet = false;

    InferenceOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MetricsStatus m_metricsStatus;
    bool m_metricsStatusHasBeenSet = false;

    Aws::String m_metricsStatusDetails;
    bool m_metricsStatusDetailsHasBeenSet = false;

    LogsStatus m_logsStatus;
    bool m_logsStatusHasBeenSet = false;

    Aws::String m_logsStatusDetails;
    bool m_logsStatusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
