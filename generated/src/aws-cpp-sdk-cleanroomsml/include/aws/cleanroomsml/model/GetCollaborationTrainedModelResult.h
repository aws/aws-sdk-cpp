/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/TrainedModelStatus.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
#include <aws/cleanroomsml/model/ResourceConfig.h>
#include <aws/cleanroomsml/model/StoppingCondition.h>
#include <aws/cleanroomsml/model/MetricsStatus.h>
#include <aws/cleanroomsml/model/LogsStatus.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_CLEANROOMSML_API GetCollaborationTrainedModelResult();
    AWS_CLEANROOMSML_API GetCollaborationTrainedModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetCollaborationTrainedModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The membership ID of the member that created the trained model.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifier.assign(value); }
    inline GetCollaborationTrainedModelResult& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the trained
     * model.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifier = value; }
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifier = std::move(value); }
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifier.assign(value); }
    inline GetCollaborationTrainedModelResult& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const{ return m_trainedModelArn; }
    inline void SetTrainedModelArn(const Aws::String& value) { m_trainedModelArn = value; }
    inline void SetTrainedModelArn(Aws::String&& value) { m_trainedModelArn = std::move(value); }
    inline void SetTrainedModelArn(const char* value) { m_trainedModelArn.assign(value); }
    inline GetCollaborationTrainedModelResult& WithTrainedModelArn(const Aws::String& value) { SetTrainedModelArn(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithTrainedModelArn(Aws::String&& value) { SetTrainedModelArn(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithTrainedModelArn(const char* value) { SetTrainedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetCollaborationTrainedModelResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetCollaborationTrainedModelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model.</p>
     */
    inline const TrainedModelStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TrainedModelStatus& value) { m_status = value; }
    inline void SetStatus(TrainedModelStatus&& value) { m_status = std::move(value); }
    inline GetCollaborationTrainedModelResult& WithStatus(const TrainedModelStatus& value) { SetStatus(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithStatus(TrainedModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const{ return m_statusDetails; }
    inline void SetStatusDetails(const StatusDetails& value) { m_statusDetails = value; }
    inline void SetStatusDetails(StatusDetails&& value) { m_statusDetails = std::move(value); }
    inline GetCollaborationTrainedModelResult& WithStatusDetails(const StatusDetails& value) { SetStatusDetails(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithStatusDetails(StatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that was used to create this trained model.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const{ return m_configuredModelAlgorithmAssociationArn; }
    inline void SetConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { m_configuredModelAlgorithmAssociationArn = value; }
    inline void SetConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { m_configuredModelAlgorithmAssociationArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmAssociationArn(const char* value) { m_configuredModelAlgorithmAssociationArn.assign(value); }
    inline GetCollaborationTrainedModelResult& WithConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { SetConfiguredModelAlgorithmAssociationArn(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithConfiguredModelAlgorithmAssociationArn(const char* value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 resource configuration that was used to train this model.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfig = value; }
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfig = std::move(value); }
    inline GetCollaborationTrainedModelResult& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stopping condition that determined when model training ended.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingCondition = value; }
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingCondition = std::move(value); }
    inline GetCollaborationTrainedModelResult& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model metrics.</p>
     */
    inline const MetricsStatus& GetMetricsStatus() const{ return m_metricsStatus; }
    inline void SetMetricsStatus(const MetricsStatus& value) { m_metricsStatus = value; }
    inline void SetMetricsStatus(MetricsStatus&& value) { m_metricsStatus = std::move(value); }
    inline GetCollaborationTrainedModelResult& WithMetricsStatus(const MetricsStatus& value) { SetMetricsStatus(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithMetricsStatus(MetricsStatus&& value) { SetMetricsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status information for the model metrics.</p>
     */
    inline const Aws::String& GetMetricsStatusDetails() const{ return m_metricsStatusDetails; }
    inline void SetMetricsStatusDetails(const Aws::String& value) { m_metricsStatusDetails = value; }
    inline void SetMetricsStatusDetails(Aws::String&& value) { m_metricsStatusDetails = std::move(value); }
    inline void SetMetricsStatusDetails(const char* value) { m_metricsStatusDetails.assign(value); }
    inline GetCollaborationTrainedModelResult& WithMetricsStatusDetails(const Aws::String& value) { SetMetricsStatusDetails(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithMetricsStatusDetails(Aws::String&& value) { SetMetricsStatusDetails(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithMetricsStatusDetails(const char* value) { SetMetricsStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status information for the logs.</p>
     */
    inline const LogsStatus& GetLogsStatus() const{ return m_logsStatus; }
    inline void SetLogsStatus(const LogsStatus& value) { m_logsStatus = value; }
    inline void SetLogsStatus(LogsStatus&& value) { m_logsStatus = std::move(value); }
    inline GetCollaborationTrainedModelResult& WithLogsStatus(const LogsStatus& value) { SetLogsStatus(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithLogsStatus(LogsStatus&& value) { SetLogsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status information for the logs.</p>
     */
    inline const Aws::String& GetLogsStatusDetails() const{ return m_logsStatusDetails; }
    inline void SetLogsStatusDetails(const Aws::String& value) { m_logsStatusDetails = value; }
    inline void SetLogsStatusDetails(Aws::String&& value) { m_logsStatusDetails = std::move(value); }
    inline void SetLogsStatusDetails(const char* value) { m_logsStatusDetails.assign(value); }
    inline GetCollaborationTrainedModelResult& WithLogsStatusDetails(const Aws::String& value) { SetLogsStatusDetails(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithLogsStatusDetails(Aws::String&& value) { SetLogsStatusDetails(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithLogsStatusDetails(const char* value) { SetLogsStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the training container image.</p>
     */
    inline const Aws::String& GetTrainingContainerImageDigest() const{ return m_trainingContainerImageDigest; }
    inline void SetTrainingContainerImageDigest(const Aws::String& value) { m_trainingContainerImageDigest = value; }
    inline void SetTrainingContainerImageDigest(Aws::String&& value) { m_trainingContainerImageDigest = std::move(value); }
    inline void SetTrainingContainerImageDigest(const char* value) { m_trainingContainerImageDigest.assign(value); }
    inline GetCollaborationTrainedModelResult& WithTrainingContainerImageDigest(const Aws::String& value) { SetTrainingContainerImageDigest(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithTrainingContainerImageDigest(Aws::String&& value) { SetTrainingContainerImageDigest(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithTrainingContainerImageDigest(const char* value) { SetTrainingContainerImageDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the trained model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetCollaborationTrainedModelResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetCollaborationTrainedModelResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the member that created the trained model.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountId = value; }
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountId = std::move(value); }
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountId.assign(value); }
    inline GetCollaborationTrainedModelResult& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCollaborationTrainedModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCollaborationTrainedModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCollaborationTrainedModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;

    Aws::String m_collaborationIdentifier;

    Aws::String m_trainedModelArn;

    Aws::String m_name;

    Aws::String m_description;

    TrainedModelStatus m_status;

    StatusDetails m_statusDetails;

    Aws::String m_configuredModelAlgorithmAssociationArn;

    ResourceConfig m_resourceConfig;

    StoppingCondition m_stoppingCondition;

    MetricsStatus m_metricsStatus;

    Aws::String m_metricsStatusDetails;

    LogsStatus m_logsStatus;

    Aws::String m_logsStatusDetails;

    Aws::String m_trainingContainerImageDigest;

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_creatorAccountId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
