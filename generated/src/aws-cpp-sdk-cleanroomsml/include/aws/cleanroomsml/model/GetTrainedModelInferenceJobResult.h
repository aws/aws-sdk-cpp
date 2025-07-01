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
    AWS_CLEANROOMSML_API GetTrainedModelInferenceJobResult() = default;
    AWS_CLEANROOMSML_API GetTrainedModelInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetTrainedModelInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the trained model inference job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetTrainedModelInferenceJobResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the trained model inference job was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetTrainedModelInferenceJobResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelInferenceJobArn() const { return m_trainedModelInferenceJobArn; }
    template<typename TrainedModelInferenceJobArnT = Aws::String>
    void SetTrainedModelInferenceJobArn(TrainedModelInferenceJobArnT&& value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn = std::forward<TrainedModelInferenceJobArnT>(value); }
    template<typename TrainedModelInferenceJobArnT = Aws::String>
    GetTrainedModelInferenceJobResult& WithTrainedModelInferenceJobArn(TrainedModelInferenceJobArnT&& value) { SetTrainedModelInferenceJobArn(std::forward<TrainedModelInferenceJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that was used for the trained model inference job.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const { return m_configuredModelAlgorithmAssociationArn; }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    void SetConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::forward<ConfiguredModelAlgorithmAssociationArnT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    GetTrainedModelInferenceJobResult& WithConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { SetConfiguredModelAlgorithmAssociationArn(std::forward<ConfiguredModelAlgorithmAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model inference job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetTrainedModelInferenceJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the trained model inference job.</p>
     */
    inline TrainedModelInferenceJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(TrainedModelInferenceJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetTrainedModelInferenceJobResult& WithStatus(TrainedModelInferenceJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the trained model that was used for the
     * trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    GetTrainedModelInferenceJobResult& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier of the trained model used for this inference job. This
     * identifies the specific version of the trained model that was used to generate
     * the inference results.</p>
     */
    inline const Aws::String& GetTrainedModelVersionIdentifier() const { return m_trainedModelVersionIdentifier; }
    template<typename TrainedModelVersionIdentifierT = Aws::String>
    void SetTrainedModelVersionIdentifier(TrainedModelVersionIdentifierT&& value) { m_trainedModelVersionIdentifierHasBeenSet = true; m_trainedModelVersionIdentifier = std::forward<TrainedModelVersionIdentifierT>(value); }
    template<typename TrainedModelVersionIdentifierT = Aws::String>
    GetTrainedModelInferenceJobResult& WithTrainedModelVersionIdentifier(TrainedModelVersionIdentifierT&& value) { SetTrainedModelVersionIdentifier(std::forward<TrainedModelVersionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource configuration information for the trained model inference
     * job.</p>
     */
    inline const InferenceResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    template<typename ResourceConfigT = InferenceResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = InferenceResourceConfig>
    GetTrainedModelInferenceJobResult& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration information for the trained model inference job.</p>
     */
    inline const InferenceOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
    template<typename OutputConfigurationT = InferenceOutputConfiguration>
    void SetOutputConfiguration(OutputConfigurationT&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::forward<OutputConfigurationT>(value); }
    template<typename OutputConfigurationT = InferenceOutputConfiguration>
    GetTrainedModelInferenceJobResult& WithOutputConfiguration(OutputConfigurationT&& value) { SetOutputConfiguration(std::forward<OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the membership that contains the trained model inference
     * job.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    GetTrainedModelInferenceJobResult& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source that was used for the trained model inference job.</p>
     */
    inline const ModelInferenceDataSource& GetDataSource() const { return m_dataSource; }
    template<typename DataSourceT = ModelInferenceDataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = ModelInferenceDataSource>
    GetTrainedModelInferenceJobResult& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution parameters for the model inference job container.</p>
     */
    inline const InferenceContainerExecutionParameters& GetContainerExecutionParameters() const { return m_containerExecutionParameters; }
    template<typename ContainerExecutionParametersT = InferenceContainerExecutionParameters>
    void SetContainerExecutionParameters(ContainerExecutionParametersT&& value) { m_containerExecutionParametersHasBeenSet = true; m_containerExecutionParameters = std::forward<ContainerExecutionParametersT>(value); }
    template<typename ContainerExecutionParametersT = InferenceContainerExecutionParameters>
    GetTrainedModelInferenceJobResult& WithContainerExecutionParameters(ContainerExecutionParametersT&& value) { SetContainerExecutionParameters(std::forward<ContainerExecutionParametersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StatusDetails& GetStatusDetails() const { return m_statusDetails; }
    template<typename StatusDetailsT = StatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StatusDetails>
    GetTrainedModelInferenceJobResult& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model inference job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetTrainedModelInferenceJobResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the training container image.</p>
     */
    inline const Aws::String& GetInferenceContainerImageDigest() const { return m_inferenceContainerImageDigest; }
    template<typename InferenceContainerImageDigestT = Aws::String>
    void SetInferenceContainerImageDigest(InferenceContainerImageDigestT&& value) { m_inferenceContainerImageDigestHasBeenSet = true; m_inferenceContainerImageDigest = std::forward<InferenceContainerImageDigestT>(value); }
    template<typename InferenceContainerImageDigestT = Aws::String>
    GetTrainedModelInferenceJobResult& WithInferenceContainerImageDigest(InferenceContainerImageDigestT&& value) { SetInferenceContainerImageDigest(std::forward<InferenceContainerImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    GetTrainedModelInferenceJobResult& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    GetTrainedModelInferenceJobResult& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the ML inference job and associated data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetTrainedModelInferenceJobResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics status for the trained model inference job.</p>
     */
    inline MetricsStatus GetMetricsStatus() const { return m_metricsStatus; }
    inline void SetMetricsStatus(MetricsStatus value) { m_metricsStatusHasBeenSet = true; m_metricsStatus = value; }
    inline GetTrainedModelInferenceJobResult& WithMetricsStatus(MetricsStatus value) { SetMetricsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the metrics status for the trained model inference job.</p>
     */
    inline const Aws::String& GetMetricsStatusDetails() const { return m_metricsStatusDetails; }
    template<typename MetricsStatusDetailsT = Aws::String>
    void SetMetricsStatusDetails(MetricsStatusDetailsT&& value) { m_metricsStatusDetailsHasBeenSet = true; m_metricsStatusDetails = std::forward<MetricsStatusDetailsT>(value); }
    template<typename MetricsStatusDetailsT = Aws::String>
    GetTrainedModelInferenceJobResult& WithMetricsStatusDetails(MetricsStatusDetailsT&& value) { SetMetricsStatusDetails(std::forward<MetricsStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logs status for the trained model inference job.</p>
     */
    inline LogsStatus GetLogsStatus() const { return m_logsStatus; }
    inline void SetLogsStatus(LogsStatus value) { m_logsStatusHasBeenSet = true; m_logsStatus = value; }
    inline GetTrainedModelInferenceJobResult& WithLogsStatus(LogsStatus value) { SetLogsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the logs status for the trained model inference job.</p>
     */
    inline const Aws::String& GetLogsStatusDetails() const { return m_logsStatusDetails; }
    template<typename LogsStatusDetailsT = Aws::String>
    void SetLogsStatusDetails(LogsStatusDetailsT&& value) { m_logsStatusDetailsHasBeenSet = true; m_logsStatusDetails = std::forward<LogsStatusDetailsT>(value); }
    template<typename LogsStatusDetailsT = Aws::String>
    GetTrainedModelInferenceJobResult& WithLogsStatusDetails(LogsStatusDetailsT&& value) { SetLogsStatusDetails(std::forward<LogsStatusDetailsT>(value)); return *this;}
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
    GetTrainedModelInferenceJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetTrainedModelInferenceJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTrainedModelInferenceJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_trainedModelInferenceJobArn;
    bool m_trainedModelInferenceJobArnHasBeenSet = false;

    Aws::String m_configuredModelAlgorithmAssociationArn;
    bool m_configuredModelAlgorithmAssociationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TrainedModelInferenceJobStatus m_status{TrainedModelInferenceJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    Aws::String m_trainedModelVersionIdentifier;
    bool m_trainedModelVersionIdentifierHasBeenSet = false;

    InferenceResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    InferenceOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    ModelInferenceDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    InferenceContainerExecutionParameters m_containerExecutionParameters;
    bool m_containerExecutionParametersHasBeenSet = false;

    StatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_inferenceContainerImageDigest;
    bool m_inferenceContainerImageDigestHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    MetricsStatus m_metricsStatus{MetricsStatus::NOT_SET};
    bool m_metricsStatusHasBeenSet = false;

    Aws::String m_metricsStatusDetails;
    bool m_metricsStatusDetailsHasBeenSet = false;

    LogsStatus m_logsStatus{LogsStatus::NOT_SET};
    bool m_logsStatusHasBeenSet = false;

    Aws::String m_logsStatusDetails;
    bool m_logsStatusDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
