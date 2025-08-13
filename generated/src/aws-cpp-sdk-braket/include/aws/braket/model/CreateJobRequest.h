/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/AlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/JobOutputDataConfig.h>
#include <aws/braket/model/JobCheckpointConfig.h>
#include <aws/braket/model/JobStoppingCondition.h>
#include <aws/braket/model/InstanceConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/braket/model/DeviceConfig.h>
#include <aws/braket/model/InputFileConfig.h>
#include <aws/braket/model/Association.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Braket
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API CreateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The client token associated with this request that guarantees that the
     * request is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Definition of the Amazon Braket job to be created. Specifies the container
     * image the job uses and information about the Python scripts used for entry and
     * training.</p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const { return m_algorithmSpecification; }
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    void SetAlgorithmSpecification(AlgorithmSpecificationT&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::forward<AlgorithmSpecificationT>(value); }
    template<typename AlgorithmSpecificationT = AlgorithmSpecification>
    CreateJobRequest& WithAlgorithmSpecification(AlgorithmSpecificationT&& value) { SetAlgorithmSpecification(std::forward<AlgorithmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline const Aws::Vector<InputFileConfig>& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = Aws::Vector<InputFileConfig>>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = Aws::Vector<InputFileConfig>>
    CreateJobRequest& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    template<typename InputDataConfigT = InputFileConfig>
    CreateJobRequest& AddInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.emplace_back(std::forward<InputDataConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The path to the S3 location where you want to store hybrid job artifacts and
     * the encryption key used to store them.</p>
     */
    inline const JobOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = JobOutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = JobOutputDataConfig>
    CreateJobRequest& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the output locations for hybrid job checkpoint data.</p>
     */
    inline const JobCheckpointConfig& GetCheckpointConfig() const { return m_checkpointConfig; }
    inline bool CheckpointConfigHasBeenSet() const { return m_checkpointConfigHasBeenSet; }
    template<typename CheckpointConfigT = JobCheckpointConfig>
    void SetCheckpointConfig(CheckpointConfigT&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::forward<CheckpointConfigT>(value); }
    template<typename CheckpointConfigT = JobCheckpointConfig>
    CreateJobRequest& WithCheckpointConfig(CheckpointConfigT&& value) { SetCheckpointConfig(std::forward<CheckpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Braket hybrid job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    CreateJobRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output results and hybrid job
     * details to the users' s3 buckets.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user-defined criteria that specifies when a hybrid job stops
     * running.</p>
     */
    inline const JobStoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = JobStoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = JobStoppingCondition>
    CreateJobRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the resource instances to use while running the hybrid job
     * on Amazon Braket.</p>
     */
    inline const InstanceConfig& GetInstanceConfig() const { return m_instanceConfig; }
    inline bool InstanceConfigHasBeenSet() const { return m_instanceConfigHasBeenSet; }
    template<typename InstanceConfigT = InstanceConfig>
    void SetInstanceConfig(InstanceConfigT&& value) { m_instanceConfigHasBeenSet = true; m_instanceConfig = std::forward<InstanceConfigT>(value); }
    template<typename InstanceConfigT = InstanceConfig>
    CreateJobRequest& WithInstanceConfig(InstanceConfigT&& value) { SetInstanceConfig(std::forward<InstanceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket hybrid job that
     * influence the quality of the training job. The values are set with a map of JSON
     * key:value pairs, where the key is the name of the hyperparameter and the value
     * is the value of the hyperparameter.</p>  <p>Do not include any
     * security-sensitive information including account access IDs, secrets, or tokens
     * in any hyperparameter fields. As part of the shared responsibility model, you
     * are responsible for any potential exposure, unauthorized access, or compromise
     * of your sensitive data if caused by security-sensitive information included in
     * the request hyperparameter variable or plain text fields.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const { return m_hyperParameters; }
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperParameters(HyperParametersT&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::forward<HyperParametersT>(value); }
    template<typename HyperParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateJobRequest& WithHyperParameters(HyperParametersT&& value) { SetHyperParameters(std::forward<HyperParametersT>(value)); return *this;}
    template<typename HyperParametersKeyT = Aws::String, typename HyperParametersValueT = Aws::String>
    CreateJobRequest& AddHyperParameters(HyperParametersKeyT&& key, HyperParametersValueT&& value) {
      m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::forward<HyperParametersKeyT>(key), std::forward<HyperParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The quantum processing unit (QPU) or simulator used to create an Amazon
     * Braket hybrid job.</p>
     */
    inline const DeviceConfig& GetDeviceConfig() const { return m_deviceConfig; }
    inline bool DeviceConfigHasBeenSet() const { return m_deviceConfigHasBeenSet; }
    template<typename DeviceConfigT = DeviceConfig>
    void SetDeviceConfig(DeviceConfigT&& value) { m_deviceConfigHasBeenSet = true; m_deviceConfig = std::forward<DeviceConfigT>(value); }
    template<typename DeviceConfigT = DeviceConfig>
    CreateJobRequest& WithDeviceConfig(DeviceConfigT&& value) { SetDeviceConfig(std::forward<DeviceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be added to the hybrid job you're creating.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Braket resources associated with the hybrid job.</p>
     */
    inline const Aws::Vector<Association>& GetAssociations() const { return m_associations; }
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
    template<typename AssociationsT = Aws::Vector<Association>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<Association>>
    CreateJobRequest& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = Association>
    CreateJobRequest& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    AlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet = false;

    Aws::Vector<InputFileConfig> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    JobOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    JobCheckpointConfig m_checkpointConfig;
    bool m_checkpointConfigHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    JobStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    InstanceConfig m_instanceConfig;
    bool m_instanceConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet = false;

    DeviceConfig m_deviceConfig;
    bool m_deviceConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Association> m_associations;
    bool m_associationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
