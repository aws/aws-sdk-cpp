/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/braket/model/AlgorithmSpecification.h>
#include <aws/braket/model/JobCheckpointConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/DeviceConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/braket/model/InstanceConfig.h>
#include <aws/braket/model/JobOutputDataConfig.h>
#include <aws/braket/model/JobStoppingCondition.h>
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


    /**
     * <p>Definition of the Amazon Braket job to be created. Specifies the container
     * image the job uses and information about the Python scripts used for entry and
     * training.</p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const{ return m_algorithmSpecification; }

    /**
     * <p>Definition of the Amazon Braket job to be created. Specifies the container
     * image the job uses and information about the Python scripts used for entry and
     * training.</p>
     */
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }

    /**
     * <p>Definition of the Amazon Braket job to be created. Specifies the container
     * image the job uses and information about the Python scripts used for entry and
     * training.</p>
     */
    inline void SetAlgorithmSpecification(const AlgorithmSpecification& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = value; }

    /**
     * <p>Definition of the Amazon Braket job to be created. Specifies the container
     * image the job uses and information about the Python scripts used for entry and
     * training.</p>
     */
    inline void SetAlgorithmSpecification(AlgorithmSpecification&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::move(value); }

    /**
     * <p>Definition of the Amazon Braket job to be created. Specifies the container
     * image the job uses and information about the Python scripts used for entry and
     * training.</p>
     */
    inline CreateJobRequest& WithAlgorithmSpecification(const AlgorithmSpecification& value) { SetAlgorithmSpecification(value); return *this;}

    /**
     * <p>Definition of the Amazon Braket job to be created. Specifies the container
     * image the job uses and information about the Python scripts used for entry and
     * training.</p>
     */
    inline CreateJobRequest& WithAlgorithmSpecification(AlgorithmSpecification&& value) { SetAlgorithmSpecification(std::move(value)); return *this;}


    /**
     * <p>Information about the output locations for job checkpoint data.</p>
     */
    inline const JobCheckpointConfig& GetCheckpointConfig() const{ return m_checkpointConfig; }

    /**
     * <p>Information about the output locations for job checkpoint data.</p>
     */
    inline bool CheckpointConfigHasBeenSet() const { return m_checkpointConfigHasBeenSet; }

    /**
     * <p>Information about the output locations for job checkpoint data.</p>
     */
    inline void SetCheckpointConfig(const JobCheckpointConfig& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = value; }

    /**
     * <p>Information about the output locations for job checkpoint data.</p>
     */
    inline void SetCheckpointConfig(JobCheckpointConfig&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::move(value); }

    /**
     * <p>Information about the output locations for job checkpoint data.</p>
     */
    inline CreateJobRequest& WithCheckpointConfig(const JobCheckpointConfig& value) { SetCheckpointConfig(value); return *this;}

    /**
     * <p>Information about the output locations for job checkpoint data.</p>
     */
    inline CreateJobRequest& WithCheckpointConfig(JobCheckpointConfig&& value) { SetCheckpointConfig(std::move(value)); return *this;}


    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline CreateJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline CreateJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline CreateJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The quantum processing unit (QPU) or simulator used to create an Amazon
     * Braket job.</p>
     */
    inline const DeviceConfig& GetDeviceConfig() const{ return m_deviceConfig; }

    /**
     * <p>The quantum processing unit (QPU) or simulator used to create an Amazon
     * Braket job.</p>
     */
    inline bool DeviceConfigHasBeenSet() const { return m_deviceConfigHasBeenSet; }

    /**
     * <p>The quantum processing unit (QPU) or simulator used to create an Amazon
     * Braket job.</p>
     */
    inline void SetDeviceConfig(const DeviceConfig& value) { m_deviceConfigHasBeenSet = true; m_deviceConfig = value; }

    /**
     * <p>The quantum processing unit (QPU) or simulator used to create an Amazon
     * Braket job.</p>
     */
    inline void SetDeviceConfig(DeviceConfig&& value) { m_deviceConfigHasBeenSet = true; m_deviceConfig = std::move(value); }

    /**
     * <p>The quantum processing unit (QPU) or simulator used to create an Amazon
     * Braket job.</p>
     */
    inline CreateJobRequest& WithDeviceConfig(const DeviceConfig& value) { SetDeviceConfig(value); return *this;}

    /**
     * <p>The quantum processing unit (QPU) or simulator used to create an Amazon
     * Braket job.</p>
     */
    inline CreateJobRequest& WithDeviceConfig(DeviceConfig&& value) { SetDeviceConfig(std::move(value)); return *this;}


    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = value; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::move(value); }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters used by an Amazon Braket job that influence the
     * quality of the training job. The values are set with a string of JSON key:value
     * pairs, where the key is the name of the hyperparameter and the value is the
     * value of th hyperparameter.</p>
     */
    inline CreateJobRequest& AddHyperParameters(const char* key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }


    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline const Aws::Vector<InputFileConfig>& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline void SetInputDataConfig(const Aws::Vector<InputFileConfig>& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline void SetInputDataConfig(Aws::Vector<InputFileConfig>&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline CreateJobRequest& WithInputDataConfig(const Aws::Vector<InputFileConfig>& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline CreateJobRequest& WithInputDataConfig(Aws::Vector<InputFileConfig>&& value) { SetInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline CreateJobRequest& AddInputDataConfig(const InputFileConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(value); return *this; }

    /**
     * <p>A list of parameters that specify the name and type of input data and where
     * it is located.</p>
     */
    inline CreateJobRequest& AddInputDataConfig(InputFileConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration of the resource instances to use while running the hybrid job
     * on Amazon Braket.</p>
     */
    inline const InstanceConfig& GetInstanceConfig() const{ return m_instanceConfig; }

    /**
     * <p>Configuration of the resource instances to use while running the hybrid job
     * on Amazon Braket.</p>
     */
    inline bool InstanceConfigHasBeenSet() const { return m_instanceConfigHasBeenSet; }

    /**
     * <p>Configuration of the resource instances to use while running the hybrid job
     * on Amazon Braket.</p>
     */
    inline void SetInstanceConfig(const InstanceConfig& value) { m_instanceConfigHasBeenSet = true; m_instanceConfig = value; }

    /**
     * <p>Configuration of the resource instances to use while running the hybrid job
     * on Amazon Braket.</p>
     */
    inline void SetInstanceConfig(InstanceConfig&& value) { m_instanceConfigHasBeenSet = true; m_instanceConfig = std::move(value); }

    /**
     * <p>Configuration of the resource instances to use while running the hybrid job
     * on Amazon Braket.</p>
     */
    inline CreateJobRequest& WithInstanceConfig(const InstanceConfig& value) { SetInstanceConfig(value); return *this;}

    /**
     * <p>Configuration of the resource instances to use while running the hybrid job
     * on Amazon Braket.</p>
     */
    inline CreateJobRequest& WithInstanceConfig(InstanceConfig&& value) { SetInstanceConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline CreateJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline CreateJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Braket job.</p>
     */
    inline CreateJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The path to the S3 location where you want to store job artifacts and the
     * encryption key used to store them.</p>
     */
    inline const JobOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The path to the S3 location where you want to store job artifacts and the
     * encryption key used to store them.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>The path to the S3 location where you want to store job artifacts and the
     * encryption key used to store them.</p>
     */
    inline void SetOutputDataConfig(const JobOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>The path to the S3 location where you want to store job artifacts and the
     * encryption key used to store them.</p>
     */
    inline void SetOutputDataConfig(JobOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>The path to the S3 location where you want to store job artifacts and the
     * encryption key used to store them.</p>
     */
    inline CreateJobRequest& WithOutputDataConfig(const JobOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The path to the S3 location where you want to store job artifacts and the
     * encryption key used to store them.</p>
     */
    inline CreateJobRequest& WithOutputDataConfig(JobOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline CreateJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline CreateJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon Braket can assume
     * to perform tasks on behalf of a user. It can access user resources, run an
     * Amazon Braket job container on behalf of user, and output resources to the
     * users' s3 buckets.</p>
     */
    inline CreateJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> The user-defined criteria that specifies when a job stops running.</p>
     */
    inline const JobStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p> The user-defined criteria that specifies when a job stops running.</p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p> The user-defined criteria that specifies when a job stops running.</p>
     */
    inline void SetStoppingCondition(const JobStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p> The user-defined criteria that specifies when a job stops running.</p>
     */
    inline void SetStoppingCondition(JobStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p> The user-defined criteria that specifies when a job stops running.</p>
     */
    inline CreateJobRequest& WithStoppingCondition(const JobStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p> The user-defined criteria that specifies when a job stops running.</p>
     */
    inline CreateJobRequest& WithStoppingCondition(JobStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag object that consists of a key and an optional value, used to manage
     * metadata for Amazon Braket resources.</p>
     */
    inline CreateJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet = false;

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
