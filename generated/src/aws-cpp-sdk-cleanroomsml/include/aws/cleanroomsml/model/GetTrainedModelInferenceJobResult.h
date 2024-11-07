/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/TrainedModelInferenceJobStatus.h>
#include <aws/cleanroomsml/model/InferenceResourceConfig.h>
#include <aws/cleanroomsml/model/InferenceOutputConfiguration.h>
#include <aws/cleanroomsml/model/ModelInferenceDataSource.h>
#include <aws/cleanroomsml/model/InferenceContainerExecutionParameters.h>
#include <aws/cleanroomsml/model/StatusDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanroomsml/model/MetricsStatus.h>
#include <aws/cleanroomsml/model/LogsStatus.h>
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
  class GetTrainedModelInferenceJobResult
  {
  public:
    AWS_CLEANROOMSML_API GetTrainedModelInferenceJobResult();
    AWS_CLEANROOMSML_API GetTrainedModelInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetTrainedModelInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the trained model inference job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model inference job was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelInferenceJobArn() const{ return m_trainedModelInferenceJobArn; }
    inline void SetTrainedModelInferenceJobArn(const Aws::String& value) { m_trainedModelInferenceJobArn = value; }
    inline void SetTrainedModelInferenceJobArn(Aws::String&& value) { m_trainedModelInferenceJobArn = std::move(value); }
    inline void SetTrainedModelInferenceJobArn(const char* value) { m_trainedModelInferenceJobArn.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithTrainedModelInferenceJobArn(const Aws::String& value) { SetTrainedModelInferenceJobArn(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithTrainedModelInferenceJobArn(Aws::String&& value) { SetTrainedModelInferenceJobArn(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithTrainedModelInferenceJobArn(const char* value) { SetTrainedModelInferenceJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that was used for the trained model inference job.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const{ return m_configuredModelAlgorithmAssociationArn; }
    inline void SetConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { m_configuredModelAlgorithmAssociationArn = value; }
    inline void SetConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { m_configuredModelAlgorithmAssociationArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmAssociationArn(const char* value) { m_configuredModelAlgorithmAssociationArn.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { SetConfiguredModelAlgorithmAssociationArn(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithConfiguredModelAlgorithmAssociationArn(const char* value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model inference job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model inference job.</p>
     */
    inline const TrainedModelInferenceJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TrainedModelInferenceJobStatus& value) { m_status = value; }
    inline void SetStatus(TrainedModelInferenceJobStatus&& value) { m_status = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithStatus(const TrainedModelInferenceJobStatus& value) { SetStatus(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithStatus(TrainedModelInferenceJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the trained model that was used for the
     * trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const{ return m_trainedModelArn; }
    inline void SetTrainedModelArn(const Aws::String& value) { m_trainedModelArn = value; }
    inline void SetTrainedModelArn(Aws::String&& value) { m_trainedModelArn = std::move(value); }
    inline void SetTrainedModelArn(const char* value) { m_trainedModelArn.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithTrainedModelArn(const Aws::String& value) { SetTrainedModelArn(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithTrainedModelArn(Aws::String&& value) { SetTrainedModelArn(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithTrainedModelArn(const char* value) { SetTrainedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource configuration information for the trained model inference
     * job.</p>
     */
    inline const InferenceResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }
    inline void SetResourceConfig(const InferenceResourceConfig& value) { m_resourceConfig = value; }
    inline void SetResourceConfig(InferenceResourceConfig&& value) { m_resourceConfig = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithResourceConfig(const InferenceResourceConfig& value) { SetResourceConfig(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithResourceConfig(InferenceResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration information for the trained model inference job.</p>
     */
    inline const InferenceOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline void SetOutputConfiguration(const InferenceOutputConfiguration& value) { m_outputConfiguration = value; }
    inline void SetOutputConfiguration(InferenceOutputConfiguration&& value) { m_outputConfiguration = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithOutputConfiguration(const InferenceOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithOutputConfiguration(InferenceOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the membership that contains the trained model inference
     * job.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifier.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source that was used for the trained model inference job.</p>
     */
    inline const ModelInferenceDataSource& GetDataSource() const{ return m_dataSource; }
    inline void SetDataSource(const ModelInferenceDataSource& value) { m_dataSource = value; }
    inline void SetDataSource(ModelInferenceDataSource&& value) { m_dataSource = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithDataSource(const ModelInferenceDataSource& value) { SetDataSource(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithDataSource(ModelInferenceDataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution parameters for the model inference job container.</p>
     */
    inline const InferenceContainerExecutionParameters& GetContainerExecutionParameters() const{ return m_containerExecutionParameters; }
    inline void SetContainerExecutionParameters(const InferenceContainerExecutionParameters& value) { m_containerExecutionParameters = value; }
    inline void SetContainerExecutionParameters(InferenceContainerExecutionParameters&& value) { m_containerExecutionParameters = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithContainerExecutionParameters(const InferenceContainerExecutionParameters& value) { SetContainerExecutionParameters(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithContainerExecutionParameters(InferenceContainerExecutionParameters&& value) { SetContainerExecutionParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const{ return m_statusDetails; }
    inline void SetStatusDetails(const StatusDetails& value) { m_statusDetails = value; }
    inline void SetStatusDetails(StatusDetails&& value) { m_statusDetails = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithStatusDetails(const StatusDetails& value) { SetStatusDetails(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithStatusDetails(StatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model inference job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the training container image.</p>
     */
    inline const Aws::String& GetInferenceContainerImageDigest() const{ return m_inferenceContainerImageDigest; }
    inline void SetInferenceContainerImageDigest(const Aws::String& value) { m_inferenceContainerImageDigest = value; }
    inline void SetInferenceContainerImageDigest(Aws::String&& value) { m_inferenceContainerImageDigest = std::move(value); }
    inline void SetInferenceContainerImageDigest(const char* value) { m_inferenceContainerImageDigest.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithInferenceContainerImageDigest(const Aws::String& value) { SetInferenceContainerImageDigest(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithInferenceContainerImageDigest(Aws::String&& value) { SetInferenceContainerImageDigest(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithInferenceContainerImageDigest(const char* value) { SetInferenceContainerImageDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environment = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environment.emplace(key, value); return *this; }
    inline GetTrainedModelInferenceJobResult& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environment.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelInferenceJobResult& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelInferenceJobResult& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTrainedModelInferenceJobResult& AddEnvironment(const char* key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelInferenceJobResult& AddEnvironment(Aws::String&& key, const char* value) { m_environment.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelInferenceJobResult& AddEnvironment(const char* key, const char* value) { m_environment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the ML inference job and associated data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics status for the trained model inference job.</p>
     */
    inline const MetricsStatus& GetMetricsStatus() const{ return m_metricsStatus; }
    inline void SetMetricsStatus(const MetricsStatus& value) { m_metricsStatus = value; }
    inline void SetMetricsStatus(MetricsStatus&& value) { m_metricsStatus = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithMetricsStatus(const MetricsStatus& value) { SetMetricsStatus(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithMetricsStatus(MetricsStatus&& value) { SetMetricsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the metrics status for the trained model inference job.</p>
     */
    inline const Aws::String& GetMetricsStatusDetails() const{ return m_metricsStatusDetails; }
    inline void SetMetricsStatusDetails(const Aws::String& value) { m_metricsStatusDetails = value; }
    inline void SetMetricsStatusDetails(Aws::String&& value) { m_metricsStatusDetails = std::move(value); }
    inline void SetMetricsStatusDetails(const char* value) { m_metricsStatusDetails.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithMetricsStatusDetails(const Aws::String& value) { SetMetricsStatusDetails(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithMetricsStatusDetails(Aws::String&& value) { SetMetricsStatusDetails(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithMetricsStatusDetails(const char* value) { SetMetricsStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logs status for the trained model inference job.</p>
     */
    inline const LogsStatus& GetLogsStatus() const{ return m_logsStatus; }
    inline void SetLogsStatus(const LogsStatus& value) { m_logsStatus = value; }
    inline void SetLogsStatus(LogsStatus&& value) { m_logsStatus = std::move(value); }
    inline GetTrainedModelInferenceJobResult& WithLogsStatus(const LogsStatus& value) { SetLogsStatus(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithLogsStatus(LogsStatus&& value) { SetLogsStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the logs status for the trained model inference job.</p>
     */
    inline const Aws::String& GetLogsStatusDetails() const{ return m_logsStatusDetails; }
    inline void SetLogsStatusDetails(const Aws::String& value) { m_logsStatusDetails = value; }
    inline void SetLogsStatusDetails(Aws::String&& value) { m_logsStatusDetails = std::move(value); }
    inline void SetLogsStatusDetails(const char* value) { m_logsStatusDetails.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithLogsStatusDetails(const Aws::String& value) { SetLogsStatusDetails(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithLogsStatusDetails(Aws::String&& value) { SetLogsStatusDetails(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithLogsStatusDetails(const char* value) { SetLogsStatusDetails(value); return *this;}
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
    inline GetTrainedModelInferenceJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetTrainedModelInferenceJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelInferenceJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelInferenceJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTrainedModelInferenceJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTrainedModelInferenceJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTrainedModelInferenceJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTrainedModelInferenceJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTrainedModelInferenceJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTrainedModelInferenceJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_trainedModelInferenceJobArn;

    Aws::String m_configuredModelAlgorithmAssociationArn;

    Aws::String m_name;

    TrainedModelInferenceJobStatus m_status;

    Aws::String m_trainedModelArn;

    InferenceResourceConfig m_resourceConfig;

    InferenceOutputConfiguration m_outputConfiguration;

    Aws::String m_membershipIdentifier;

    ModelInferenceDataSource m_dataSource;

    InferenceContainerExecutionParameters m_containerExecutionParameters;

    StatusDetails m_statusDetails;

    Aws::String m_description;

    Aws::String m_inferenceContainerImageDigest;

    Aws::Map<Aws::String, Aws::String> m_environment;

    Aws::String m_kmsKeyArn;

    MetricsStatus m_metricsStatus;

    Aws::String m_metricsStatusDetails;

    LogsStatus m_logsStatus;

    Aws::String m_logsStatusDetails;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
