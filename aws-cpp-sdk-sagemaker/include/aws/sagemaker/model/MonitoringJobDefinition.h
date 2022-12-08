/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MonitoringBaselineConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MonitoringOutputConfig.h>
#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/sagemaker/model/MonitoringAppSpecification.h>
#include <aws/sagemaker/model/MonitoringStoppingCondition.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/NetworkConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringInput.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines the monitoring job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringJobDefinition">AWS
   * API Reference</a></p>
   */
  class MonitoringJobDefinition
  {
  public:
    AWS_SAGEMAKER_API MonitoringJobDefinition();
    AWS_SAGEMAKER_API MonitoringJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Baseline configuration used to validate that the data conforms to the
     * specified constraints and statistics</p>
     */
    inline const MonitoringBaselineConfig& GetBaselineConfig() const{ return m_baselineConfig; }

    /**
     * <p>Baseline configuration used to validate that the data conforms to the
     * specified constraints and statistics</p>
     */
    inline bool BaselineConfigHasBeenSet() const { return m_baselineConfigHasBeenSet; }

    /**
     * <p>Baseline configuration used to validate that the data conforms to the
     * specified constraints and statistics</p>
     */
    inline void SetBaselineConfig(const MonitoringBaselineConfig& value) { m_baselineConfigHasBeenSet = true; m_baselineConfig = value; }

    /**
     * <p>Baseline configuration used to validate that the data conforms to the
     * specified constraints and statistics</p>
     */
    inline void SetBaselineConfig(MonitoringBaselineConfig&& value) { m_baselineConfigHasBeenSet = true; m_baselineConfig = std::move(value); }

    /**
     * <p>Baseline configuration used to validate that the data conforms to the
     * specified constraints and statistics</p>
     */
    inline MonitoringJobDefinition& WithBaselineConfig(const MonitoringBaselineConfig& value) { SetBaselineConfig(value); return *this;}

    /**
     * <p>Baseline configuration used to validate that the data conforms to the
     * specified constraints and statistics</p>
     */
    inline MonitoringJobDefinition& WithBaselineConfig(MonitoringBaselineConfig&& value) { SetBaselineConfig(std::move(value)); return *this;}


    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker Endpoint.</p>
     */
    inline const Aws::Vector<MonitoringInput>& GetMonitoringInputs() const{ return m_monitoringInputs; }

    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker Endpoint.</p>
     */
    inline bool MonitoringInputsHasBeenSet() const { return m_monitoringInputsHasBeenSet; }

    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker Endpoint.</p>
     */
    inline void SetMonitoringInputs(const Aws::Vector<MonitoringInput>& value) { m_monitoringInputsHasBeenSet = true; m_monitoringInputs = value; }

    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker Endpoint.</p>
     */
    inline void SetMonitoringInputs(Aws::Vector<MonitoringInput>&& value) { m_monitoringInputsHasBeenSet = true; m_monitoringInputs = std::move(value); }

    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker Endpoint.</p>
     */
    inline MonitoringJobDefinition& WithMonitoringInputs(const Aws::Vector<MonitoringInput>& value) { SetMonitoringInputs(value); return *this;}

    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker Endpoint.</p>
     */
    inline MonitoringJobDefinition& WithMonitoringInputs(Aws::Vector<MonitoringInput>&& value) { SetMonitoringInputs(std::move(value)); return *this;}

    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker Endpoint.</p>
     */
    inline MonitoringJobDefinition& AddMonitoringInputs(const MonitoringInput& value) { m_monitoringInputsHasBeenSet = true; m_monitoringInputs.push_back(value); return *this; }

    /**
     * <p>The array of inputs for the monitoring job. Currently we support monitoring
     * an Amazon SageMaker Endpoint.</p>
     */
    inline MonitoringJobDefinition& AddMonitoringInputs(MonitoringInput&& value) { m_monitoringInputsHasBeenSet = true; m_monitoringInputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of outputs from the monitoring job to be uploaded to Amazon Simple
     * Storage Service (Amazon S3).</p>
     */
    inline const MonitoringOutputConfig& GetMonitoringOutputConfig() const{ return m_monitoringOutputConfig; }

    /**
     * <p>The array of outputs from the monitoring job to be uploaded to Amazon Simple
     * Storage Service (Amazon S3).</p>
     */
    inline bool MonitoringOutputConfigHasBeenSet() const { return m_monitoringOutputConfigHasBeenSet; }

    /**
     * <p>The array of outputs from the monitoring job to be uploaded to Amazon Simple
     * Storage Service (Amazon S3).</p>
     */
    inline void SetMonitoringOutputConfig(const MonitoringOutputConfig& value) { m_monitoringOutputConfigHasBeenSet = true; m_monitoringOutputConfig = value; }

    /**
     * <p>The array of outputs from the monitoring job to be uploaded to Amazon Simple
     * Storage Service (Amazon S3).</p>
     */
    inline void SetMonitoringOutputConfig(MonitoringOutputConfig&& value) { m_monitoringOutputConfigHasBeenSet = true; m_monitoringOutputConfig = std::move(value); }

    /**
     * <p>The array of outputs from the monitoring job to be uploaded to Amazon Simple
     * Storage Service (Amazon S3).</p>
     */
    inline MonitoringJobDefinition& WithMonitoringOutputConfig(const MonitoringOutputConfig& value) { SetMonitoringOutputConfig(value); return *this;}

    /**
     * <p>The array of outputs from the monitoring job to be uploaded to Amazon Simple
     * Storage Service (Amazon S3).</p>
     */
    inline MonitoringJobDefinition& WithMonitoringOutputConfig(MonitoringOutputConfig&& value) { SetMonitoringOutputConfig(std::move(value)); return *this;}


    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a monitoring job. In distributed processing, you specify more than
     * one instance.</p>
     */
    inline const MonitoringResources& GetMonitoringResources() const{ return m_monitoringResources; }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a monitoring job. In distributed processing, you specify more than
     * one instance.</p>
     */
    inline bool MonitoringResourcesHasBeenSet() const { return m_monitoringResourcesHasBeenSet; }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a monitoring job. In distributed processing, you specify more than
     * one instance.</p>
     */
    inline void SetMonitoringResources(const MonitoringResources& value) { m_monitoringResourcesHasBeenSet = true; m_monitoringResources = value; }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a monitoring job. In distributed processing, you specify more than
     * one instance.</p>
     */
    inline void SetMonitoringResources(MonitoringResources&& value) { m_monitoringResourcesHasBeenSet = true; m_monitoringResources = std::move(value); }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a monitoring job. In distributed processing, you specify more than
     * one instance.</p>
     */
    inline MonitoringJobDefinition& WithMonitoringResources(const MonitoringResources& value) { SetMonitoringResources(value); return *this;}

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a monitoring job. In distributed processing, you specify more than
     * one instance.</p>
     */
    inline MonitoringJobDefinition& WithMonitoringResources(MonitoringResources&& value) { SetMonitoringResources(std::move(value)); return *this;}


    /**
     * <p>Configures the monitoring job to run a specified Docker container image.</p>
     */
    inline const MonitoringAppSpecification& GetMonitoringAppSpecification() const{ return m_monitoringAppSpecification; }

    /**
     * <p>Configures the monitoring job to run a specified Docker container image.</p>
     */
    inline bool MonitoringAppSpecificationHasBeenSet() const { return m_monitoringAppSpecificationHasBeenSet; }

    /**
     * <p>Configures the monitoring job to run a specified Docker container image.</p>
     */
    inline void SetMonitoringAppSpecification(const MonitoringAppSpecification& value) { m_monitoringAppSpecificationHasBeenSet = true; m_monitoringAppSpecification = value; }

    /**
     * <p>Configures the monitoring job to run a specified Docker container image.</p>
     */
    inline void SetMonitoringAppSpecification(MonitoringAppSpecification&& value) { m_monitoringAppSpecificationHasBeenSet = true; m_monitoringAppSpecification = std::move(value); }

    /**
     * <p>Configures the monitoring job to run a specified Docker container image.</p>
     */
    inline MonitoringJobDefinition& WithMonitoringAppSpecification(const MonitoringAppSpecification& value) { SetMonitoringAppSpecification(value); return *this;}

    /**
     * <p>Configures the monitoring job to run a specified Docker container image.</p>
     */
    inline MonitoringJobDefinition& WithMonitoringAppSpecification(MonitoringAppSpecification&& value) { SetMonitoringAppSpecification(std::move(value)); return *this;}


    /**
     * <p>Specifies a time limit for how long the monitoring job is allowed to run.</p>
     */
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a time limit for how long the monitoring job is allowed to run.</p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>Specifies a time limit for how long the monitoring job is allowed to run.</p>
     */
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>Specifies a time limit for how long the monitoring job is allowed to run.</p>
     */
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a time limit for how long the monitoring job is allowed to run.</p>
     */
    inline MonitoringJobDefinition& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a time limit for how long the monitoring job is allowed to run.</p>
     */
    inline MonitoringJobDefinition& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline MonitoringJobDefinition& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }


    /**
     * <p>Specifies networking options for an monitoring job.</p>
     */
    inline const NetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>Specifies networking options for an monitoring job.</p>
     */
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }

    /**
     * <p>Specifies networking options for an monitoring job.</p>
     */
    inline void SetNetworkConfig(const NetworkConfig& value) { m_networkConfigHasBeenSet = true; m_networkConfig = value; }

    /**
     * <p>Specifies networking options for an monitoring job.</p>
     */
    inline void SetNetworkConfig(NetworkConfig&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::move(value); }

    /**
     * <p>Specifies networking options for an monitoring job.</p>
     */
    inline MonitoringJobDefinition& WithNetworkConfig(const NetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>Specifies networking options for an monitoring job.</p>
     */
    inline MonitoringJobDefinition& WithNetworkConfig(NetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline MonitoringJobDefinition& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline MonitoringJobDefinition& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline MonitoringJobDefinition& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    MonitoringBaselineConfig m_baselineConfig;
    bool m_baselineConfigHasBeenSet = false;

    Aws::Vector<MonitoringInput> m_monitoringInputs;
    bool m_monitoringInputsHasBeenSet = false;

    MonitoringOutputConfig m_monitoringOutputConfig;
    bool m_monitoringOutputConfigHasBeenSet = false;

    MonitoringResources m_monitoringResources;
    bool m_monitoringResourcesHasBeenSet = false;

    MonitoringAppSpecification m_monitoringAppSpecification;
    bool m_monitoringAppSpecificationHasBeenSet = false;

    MonitoringStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    NetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
