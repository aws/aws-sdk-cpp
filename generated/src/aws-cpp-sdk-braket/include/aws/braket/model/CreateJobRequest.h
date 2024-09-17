/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/braket/model/AlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/JobCheckpointConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/DeviceConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/braket/model/InstanceConfig.h>
#include <aws/braket/model/JobOutputDataConfig.h>
#include <aws/braket/model/JobStoppingCondition.h>
#include <aws/braket/model/Association.h>
#include <aws/braket/model/InputFileConfig.h>
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
    AWS_BRAKET_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Definition of the Amazon Braket job to be created. Specifies the container
     * image the job uses and information about the Python scripts used for entry and
     * training.</p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const{ return m_algorithmSpecification; }
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }
    inline void SetAlgorithmSpecification(const AlgorithmSpecification& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = value; }
    inline void SetAlgorithmSpecification(AlgorithmSpecification&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::move(value); }
    inline CreateJobRequest& WithAlgorithmSpecification(const AlgorithmSpecification& value) { SetAlgorithmSpecification(value); return *this;}
    inline CreateJobRequest& WithAlgorithmSpecification(AlgorithmSpecification&& value) { SetAlgorithmSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Braket resources associated with the hybrid job.</p>
     */
    inline const Aws::Vector<Association>& GetAssociations() const{ return m_associations; }
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
    inline void SetAssociations(const Aws::Vector<Association>& value) { m_associationsHasBeenSet = true; m_associations = value; }
    inline void SetAssociations(Aws::Vector<Association>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }
    inline CreateJobRequest& WithAssociations(const Aws::Vector<Association>& value) { SetAssociations(value); return *this;}
    inline CreateJobRequest& WithAssociations(Aws::Vector<Association>&& value) { SetAssociations(std::move(value)); return *this;}
    inline CreateJobRequest& AddAssociations(const Association& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }
    inline CreateJobRequest& AddAssociations(Association&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the output locations for job checkpoint data.</p>
     */
    inline const JobCheckpointConfig& GetCheckpointConfig() const{ return m_checkpointConfig; }
    inline bool CheckpointConfigHasBeenSet() const { return m_checkpointConfigHasBeenSet; }
    inline void SetCheckpointConfig(const JobCheckpointConfig& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = value; }
    inline void SetCheckpointConfig(JobCheckpointConfig&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::move(value); }
    inline CreateJobRequest& WithCheckpointConfig(const JobCheckpointConfig& value) { SetCheckpointConfig(value); return *this;}
    inline CreateJobRequest& WithCheckpointConfig(JobCheckpointConfig&& value) { SetCheckpointConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantum processing unit (QPU) or simulator used to create an Amazon
     * Braket job.</p>
     */
    inline const DeviceConfig& GetDeviceConfig() const{ return m_deviceConfig; }
    inline bool DeviceConfigHasBeenSet() const { return m_deviceConfigHasBeenSet; }
    inline void SetDeviceConfig(const DeviceConfig& value) { m_deviceConfigHasBeenSet = true; m_deviceConfig = value; }
    inline void SetDeviceConfig(DeviceConfig&& value) { m_deviceConfigHasBeenSet = true; m_deviceConfig = std::move(value); }
    inline CreateJobRequest& WithDeviceConfig(const DeviceConfig& value) { SetDeviceConfig(value); return *this;}
    inline CreateJobRequest& WithDeviceConfig(DeviceConfig&& value) { SetDeviceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = value; }
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::move(value); }
    inline CreateJobRequest& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}
    inline CreateJobRequest& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}
    inline CreateJobRequest& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }
    inline CreateJobRequest& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }
    inline CreateJobRequest& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }
    inline CreateJobRequest& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateJobRequest& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }
    inline CreateJobRequest& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }
    inline CreateJobRequest& AddHyperParameters(const char* key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline const Aws::Vector<InputFileConfig>& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const Aws::Vector<InputFileConfig>& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(Aws::Vector<InputFileConfig>&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline CreateJobRequest& WithInputDataConfig(const Aws::Vector<InputFileConfig>& value) { SetInputDataConfig(value); return *this;}
    inline CreateJobRequest& WithInputDataConfig(Aws::Vector<InputFileConfig>&& value) { SetInputDataConfig(std::move(value)); return *this;}
    inline CreateJobRequest& AddInputDataConfig(const InputFileConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(value); return *this; }
    inline CreateJobRequest& AddInputDataConfig(InputFileConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration of the resource instances to use while running the hybrid job
     * on Amazon Braket.</p>
     */
    inline const InstanceConfig& GetInstanceConfig() const{ return m_instanceConfig; }
    inline bool InstanceConfigHasBeenSet() const { return m_instanceConfigHasBeenSet; }
    inline void SetInstanceConfig(const InstanceConfig& value) { m_instanceConfigHasBeenSet = true; m_instanceConfig = value; }
    inline void SetInstanceConfig(InstanceConfig&& value) { m_instanceConfigHasBeenSet = true; m_instanceConfig = std::move(value); }
    inline CreateJobRequest& WithInstanceConfig(const InstanceConfig& value) { SetInstanceConfig(value); return *this;}
    inline CreateJobRequest& WithInstanceConfig(InstanceConfig&& value) { SetInstanceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline CreateJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline CreateJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline CreateJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the S3 location where you want to store job artifacts and the
     * encryption key used to store them.</p>
     */
    inline const JobOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const JobOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(JobOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline CreateJobRequest& WithOutputDataConfig(const JobOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline CreateJobRequest& WithOutputDataConfig(JobOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user-defined criteria that specifies when a job stops running.</p>
     */
    inline const JobStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    inline void SetStoppingCondition(const JobStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }
    inline void SetStoppingCondition(JobStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }
    inline CreateJobRequest& WithStoppingCondition(const JobStoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline CreateJobRequest& WithStoppingCondition(JobStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    AlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet = false;

    Aws::Vector<Association> m_associations;
    bool m_associationsHasBeenSet = false;

    JobCheckpointConfig m_checkpointConfig;
    bool m_checkpointConfigHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DeviceConfig m_deviceConfig;
    bool m_deviceConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet = false;

    Aws::Vector<InputFileConfig> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    InstanceConfig m_instanceConfig;
    bool m_instanceConfigHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    JobStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
