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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_CLEANROOMSML_API GetTrainedModelResult();
    AWS_CLEANROOMSML_API GetTrainedModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetTrainedModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The membership ID of the member that created the trained model.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifier.assign(value); }
    inline GetTrainedModelResult& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline GetTrainedModelResult& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
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
    inline GetTrainedModelResult& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}
    inline GetTrainedModelResult& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const{ return m_trainedModelArn; }
    inline void SetTrainedModelArn(const Aws::String& value) { m_trainedModelArn = value; }
    inline void SetTrainedModelArn(Aws::String&& value) { m_trainedModelArn = std::move(value); }
    inline void SetTrainedModelArn(const char* value) { m_trainedModelArn.assign(value); }
    inline GetTrainedModelResult& WithTrainedModelArn(const Aws::String& value) { SetTrainedModelArn(value); return *this;}
    inline GetTrainedModelResult& WithTrainedModelArn(Aws::String&& value) { SetTrainedModelArn(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithTrainedModelArn(const char* value) { SetTrainedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTrainedModelResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTrainedModelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTrainedModelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTrainedModelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model.</p>
     */
    inline const TrainedModelStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TrainedModelStatus& value) { m_status = value; }
    inline void SetStatus(TrainedModelStatus&& value) { m_status = std::move(value); }
    inline GetTrainedModelResult& WithStatus(const TrainedModelStatus& value) { SetStatus(value); return *this;}
    inline GetTrainedModelResult& WithStatus(TrainedModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const{ return m_statusDetails; }
    inline void SetStatusDetails(const StatusDetails& value) { m_statusDetails = value; }
    inline void SetStatusDetails(StatusDetails&& value) { m_statusDetails = std::move(value); }
    inline GetTrainedModelResult& WithStatusDetails(const StatusDetails& value) { SetStatusDetails(value); return *this;}
    inline GetTrainedModelResult& WithStatusDetails(StatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that was used to create the trained model.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const{ return m_configuredModelAlgorithmAssociationArn; }
    inline void SetConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { m_configuredModelAlgorithmAssociationArn = value; }
    inline void SetConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { m_configuredModelAlgorithmAssociationArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmAssociationArn(const char* value) { m_configuredModelAlgorithmAssociationArn.assign(value); }
    inline GetTrainedModelResult& WithConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    inline GetTrainedModelResult& WithConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { SetConfiguredModelAlgorithmAssociationArn(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithConfiguredModelAlgorithmAssociationArn(const char* value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 resource configuration that was used to create the trained model.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfig = value; }
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfig = std::move(value); }
    inline GetTrainedModelResult& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}
    inline GetTrainedModelResult& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stopping condition that was used to terminate model training.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingCondition = value; }
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingCondition = std::move(value); }
    inline GetTrainedModelResult& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline GetTrainedModelResult& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model metrics.</p>
     */
    inline const MetricsStatus& GetMetricsStatus() const{ return m_metricsStatus; }
    inline void SetMetricsStatus(const MetricsStatus& value) { m_metricsStatus = value; }
    inline void SetMetricsStatus(MetricsStatus&& value) { m_metricsStatus = std::move(value); }
    inline GetTrainedModelResult& WithMetricsStatus(const MetricsStatus& value) { SetMetricsStatus(value); return *this;}
    inline GetTrainedModelResult& WithMetricsStatus(MetricsStatus&& value) { SetMetricsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the metrics status for the trained model.</p>
     */
    inline const Aws::String& GetMetricsStatusDetails() const{ return m_metricsStatusDetails; }
    inline void SetMetricsStatusDetails(const Aws::String& value) { m_metricsStatusDetails = value; }
    inline void SetMetricsStatusDetails(Aws::String&& value) { m_metricsStatusDetails = std::move(value); }
    inline void SetMetricsStatusDetails(const char* value) { m_metricsStatusDetails.assign(value); }
    inline GetTrainedModelResult& WithMetricsStatusDetails(const Aws::String& value) { SetMetricsStatusDetails(value); return *this;}
    inline GetTrainedModelResult& WithMetricsStatusDetails(Aws::String&& value) { SetMetricsStatusDetails(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithMetricsStatusDetails(const char* value) { SetMetricsStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logs status for the trained model.</p>
     */
    inline const LogsStatus& GetLogsStatus() const{ return m_logsStatus; }
    inline void SetLogsStatus(const LogsStatus& value) { m_logsStatus = value; }
    inline void SetLogsStatus(LogsStatus&& value) { m_logsStatus = std::move(value); }
    inline GetTrainedModelResult& WithLogsStatus(const LogsStatus& value) { SetLogsStatus(value); return *this;}
    inline GetTrainedModelResult& WithLogsStatus(LogsStatus&& value) { SetLogsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the logs status for the trained model.</p>
     */
    inline const Aws::String& GetLogsStatusDetails() const{ return m_logsStatusDetails; }
    inline void SetLogsStatusDetails(const Aws::String& value) { m_logsStatusDetails = value; }
    inline void SetLogsStatusDetails(Aws::String&& value) { m_logsStatusDetails = std::move(value); }
    inline void SetLogsStatusDetails(const char* value) { m_logsStatusDetails.assign(value); }
    inline GetTrainedModelResult& WithLogsStatusDetails(const Aws::String& value) { SetLogsStatusDetails(value); return *this;}
    inline GetTrainedModelResult& WithLogsStatusDetails(Aws::String&& value) { SetLogsStatusDetails(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithLogsStatusDetails(const char* value) { SetLogsStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the training image container.</p>
     */
    inline const Aws::String& GetTrainingContainerImageDigest() const{ return m_trainingContainerImageDigest; }
    inline void SetTrainingContainerImageDigest(const Aws::String& value) { m_trainingContainerImageDigest = value; }
    inline void SetTrainingContainerImageDigest(Aws::String&& value) { m_trainingContainerImageDigest = std::move(value); }
    inline void SetTrainingContainerImageDigest(const char* value) { m_trainingContainerImageDigest.assign(value); }
    inline GetTrainedModelResult& WithTrainingContainerImageDigest(const Aws::String& value) { SetTrainingContainerImageDigest(value); return *this;}
    inline GetTrainedModelResult& WithTrainingContainerImageDigest(Aws::String&& value) { SetTrainingContainerImageDigest(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithTrainingContainerImageDigest(const char* value) { SetTrainingContainerImageDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the trained model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetTrainedModelResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetTrainedModelResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetTrainedModelResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetTrainedModelResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters that were used to create the trained model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperparameters() const{ return m_hyperparameters; }
    inline void SetHyperparameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperparameters = value; }
    inline void SetHyperparameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperparameters = std::move(value); }
    inline GetTrainedModelResult& WithHyperparameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperparameters(value); return *this;}
    inline GetTrainedModelResult& WithHyperparameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperparameters(std::move(value)); return *this;}
    inline GetTrainedModelResult& AddHyperparameters(const Aws::String& key, const Aws::String& value) { m_hyperparameters.emplace(key, value); return *this; }
    inline GetTrainedModelResult& AddHyperparameters(Aws::String&& key, const Aws::String& value) { m_hyperparameters.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelResult& AddHyperparameters(const Aws::String& key, Aws::String&& value) { m_hyperparameters.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelResult& AddHyperparameters(Aws::String&& key, Aws::String&& value) { m_hyperparameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTrainedModelResult& AddHyperparameters(const char* key, Aws::String&& value) { m_hyperparameters.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelResult& AddHyperparameters(Aws::String&& key, const char* value) { m_hyperparameters.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelResult& AddHyperparameters(const char* key, const char* value) { m_hyperparameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The EC2 environment that was used to create the trained model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environment = std::move(value); }
    inline GetTrainedModelResult& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline GetTrainedModelResult& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline GetTrainedModelResult& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environment.emplace(key, value); return *this; }
    inline GetTrainedModelResult& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environment.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelResult& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelResult& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTrainedModelResult& AddEnvironment(const char* key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelResult& AddEnvironment(Aws::String&& key, const char* value) { m_environment.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelResult& AddEnvironment(const char* key, const char* value) { m_environment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and associated data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetTrainedModelResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetTrainedModelResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetTrainedModelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetTrainedModelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetTrainedModelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetTrainedModelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTrainedModelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data channels that were used for the trained model.</p>
     */
    inline const Aws::Vector<ModelTrainingDataChannel>& GetDataChannels() const{ return m_dataChannels; }
    inline void SetDataChannels(const Aws::Vector<ModelTrainingDataChannel>& value) { m_dataChannels = value; }
    inline void SetDataChannels(Aws::Vector<ModelTrainingDataChannel>&& value) { m_dataChannels = std::move(value); }
    inline GetTrainedModelResult& WithDataChannels(const Aws::Vector<ModelTrainingDataChannel>& value) { SetDataChannels(value); return *this;}
    inline GetTrainedModelResult& WithDataChannels(Aws::Vector<ModelTrainingDataChannel>&& value) { SetDataChannels(std::move(value)); return *this;}
    inline GetTrainedModelResult& AddDataChannels(const ModelTrainingDataChannel& value) { m_dataChannels.push_back(value); return *this; }
    inline GetTrainedModelResult& AddDataChannels(ModelTrainingDataChannel&& value) { m_dataChannels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTrainedModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTrainedModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTrainedModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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

    Aws::Map<Aws::String, Aws::String> m_hyperparameters;

    Aws::Map<Aws::String, Aws::String> m_environment;

    Aws::String m_kmsKeyArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<ModelTrainingDataChannel> m_dataChannels;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
