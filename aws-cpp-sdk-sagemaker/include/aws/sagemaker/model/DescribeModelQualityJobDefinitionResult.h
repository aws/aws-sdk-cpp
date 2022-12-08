/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelQualityBaselineConfig.h>
#include <aws/sagemaker/model/ModelQualityAppSpecification.h>
#include <aws/sagemaker/model/ModelQualityJobInput.h>
#include <aws/sagemaker/model/MonitoringOutputConfig.h>
#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/sagemaker/model/MonitoringNetworkConfig.h>
#include <aws/sagemaker/model/MonitoringStoppingCondition.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeModelQualityJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelQualityJobDefinitionResult();
    AWS_SAGEMAKER_API DescribeModelQualityJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelQualityJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the model quality job.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality job.</p>
     */
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality job.</p>
     */
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality job.</p>
     */
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}


    /**
     * <p>The name of the quality job definition. The name must be unique within an
     * Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the quality job definition. The name must be unique within an
     * Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionName = value; }

    /**
     * <p>The name of the quality job definition. The name must be unique within an
     * Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the quality job definition. The name must be unique within an
     * Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the quality job definition. The name must be unique within an
     * Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the quality job definition. The name must be unique within an
     * Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the quality job definition. The name must be unique within an
     * Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The time at which the model quality job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the model quality job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the model quality job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the model quality job was created.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the model quality job was created.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The baseline configuration for a model quality job.</p>
     */
    inline const ModelQualityBaselineConfig& GetModelQualityBaselineConfig() const{ return m_modelQualityBaselineConfig; }

    /**
     * <p>The baseline configuration for a model quality job.</p>
     */
    inline void SetModelQualityBaselineConfig(const ModelQualityBaselineConfig& value) { m_modelQualityBaselineConfig = value; }

    /**
     * <p>The baseline configuration for a model quality job.</p>
     */
    inline void SetModelQualityBaselineConfig(ModelQualityBaselineConfig&& value) { m_modelQualityBaselineConfig = std::move(value); }

    /**
     * <p>The baseline configuration for a model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithModelQualityBaselineConfig(const ModelQualityBaselineConfig& value) { SetModelQualityBaselineConfig(value); return *this;}

    /**
     * <p>The baseline configuration for a model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithModelQualityBaselineConfig(ModelQualityBaselineConfig&& value) { SetModelQualityBaselineConfig(std::move(value)); return *this;}


    /**
     * <p>Configures the model quality job to run a specified Docker container
     * image.</p>
     */
    inline const ModelQualityAppSpecification& GetModelQualityAppSpecification() const{ return m_modelQualityAppSpecification; }

    /**
     * <p>Configures the model quality job to run a specified Docker container
     * image.</p>
     */
    inline void SetModelQualityAppSpecification(const ModelQualityAppSpecification& value) { m_modelQualityAppSpecification = value; }

    /**
     * <p>Configures the model quality job to run a specified Docker container
     * image.</p>
     */
    inline void SetModelQualityAppSpecification(ModelQualityAppSpecification&& value) { m_modelQualityAppSpecification = std::move(value); }

    /**
     * <p>Configures the model quality job to run a specified Docker container
     * image.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithModelQualityAppSpecification(const ModelQualityAppSpecification& value) { SetModelQualityAppSpecification(value); return *this;}

    /**
     * <p>Configures the model quality job to run a specified Docker container
     * image.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithModelQualityAppSpecification(ModelQualityAppSpecification&& value) { SetModelQualityAppSpecification(std::move(value)); return *this;}


    /**
     * <p>Inputs for the model quality job.</p>
     */
    inline const ModelQualityJobInput& GetModelQualityJobInput() const{ return m_modelQualityJobInput; }

    /**
     * <p>Inputs for the model quality job.</p>
     */
    inline void SetModelQualityJobInput(const ModelQualityJobInput& value) { m_modelQualityJobInput = value; }

    /**
     * <p>Inputs for the model quality job.</p>
     */
    inline void SetModelQualityJobInput(ModelQualityJobInput&& value) { m_modelQualityJobInput = std::move(value); }

    /**
     * <p>Inputs for the model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithModelQualityJobInput(const ModelQualityJobInput& value) { SetModelQualityJobInput(value); return *this;}

    /**
     * <p>Inputs for the model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithModelQualityJobInput(ModelQualityJobInput&& value) { SetModelQualityJobInput(std::move(value)); return *this;}


    
    inline const MonitoringOutputConfig& GetModelQualityJobOutputConfig() const{ return m_modelQualityJobOutputConfig; }

    
    inline void SetModelQualityJobOutputConfig(const MonitoringOutputConfig& value) { m_modelQualityJobOutputConfig = value; }

    
    inline void SetModelQualityJobOutputConfig(MonitoringOutputConfig&& value) { m_modelQualityJobOutputConfig = std::move(value); }

    
    inline DescribeModelQualityJobDefinitionResult& WithModelQualityJobOutputConfig(const MonitoringOutputConfig& value) { SetModelQualityJobOutputConfig(value); return *this;}

    
    inline DescribeModelQualityJobDefinitionResult& WithModelQualityJobOutputConfig(MonitoringOutputConfig&& value) { SetModelQualityJobOutputConfig(std::move(value)); return *this;}


    
    inline const MonitoringResources& GetJobResources() const{ return m_jobResources; }

    
    inline void SetJobResources(const MonitoringResources& value) { m_jobResources = value; }

    
    inline void SetJobResources(MonitoringResources&& value) { m_jobResources = std::move(value); }

    
    inline DescribeModelQualityJobDefinitionResult& WithJobResources(const MonitoringResources& value) { SetJobResources(value); return *this;}

    
    inline DescribeModelQualityJobDefinitionResult& WithJobResources(MonitoringResources&& value) { SetJobResources(std::move(value)); return *this;}


    /**
     * <p>Networking options for a model quality job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>Networking options for a model quality job.</p>
     */
    inline void SetNetworkConfig(const MonitoringNetworkConfig& value) { m_networkConfig = value; }

    /**
     * <p>Networking options for a model quality job.</p>
     */
    inline void SetNetworkConfig(MonitoringNetworkConfig&& value) { m_networkConfig = std::move(value); }

    /**
     * <p>Networking options for a model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithNetworkConfig(const MonitoringNetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>Networking options for a model quality job.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithNetworkConfig(MonitoringNetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeModelQualityJobDefinitionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingCondition = value; }

    
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingCondition = std::move(value); }

    
    inline DescribeModelQualityJobDefinitionResult& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    
    inline DescribeModelQualityJobDefinitionResult& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}

  private:

    Aws::String m_jobDefinitionArn;

    Aws::String m_jobDefinitionName;

    Aws::Utils::DateTime m_creationTime;

    ModelQualityBaselineConfig m_modelQualityBaselineConfig;

    ModelQualityAppSpecification m_modelQualityAppSpecification;

    ModelQualityJobInput m_modelQualityJobInput;

    MonitoringOutputConfig m_modelQualityJobOutputConfig;

    MonitoringResources m_jobResources;

    MonitoringNetworkConfig m_networkConfig;

    Aws::String m_roleArn;

    MonitoringStoppingCondition m_stoppingCondition;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
