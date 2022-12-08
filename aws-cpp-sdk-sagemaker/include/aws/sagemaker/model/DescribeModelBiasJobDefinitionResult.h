/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelBiasBaselineConfig.h>
#include <aws/sagemaker/model/ModelBiasAppSpecification.h>
#include <aws/sagemaker/model/ModelBiasJobInput.h>
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
  class DescribeModelBiasJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelBiasJobDefinitionResult();
    AWS_SAGEMAKER_API DescribeModelBiasJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelBiasJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the model bias job.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model bias job.</p>
     */
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model bias job.</p>
     */
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model bias job.</p>
     */
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}


    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionName = value; }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the bias job definition. The name must be unique within an Amazon
     * Web Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The time at which the model bias job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the model bias job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the model bias job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the model bias job was created.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the model bias job was created.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline const ModelBiasBaselineConfig& GetModelBiasBaselineConfig() const{ return m_modelBiasBaselineConfig; }

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline void SetModelBiasBaselineConfig(const ModelBiasBaselineConfig& value) { m_modelBiasBaselineConfig = value; }

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline void SetModelBiasBaselineConfig(ModelBiasBaselineConfig&& value) { m_modelBiasBaselineConfig = std::move(value); }

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithModelBiasBaselineConfig(const ModelBiasBaselineConfig& value) { SetModelBiasBaselineConfig(value); return *this;}

    /**
     * <p>The baseline configuration for a model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithModelBiasBaselineConfig(ModelBiasBaselineConfig&& value) { SetModelBiasBaselineConfig(std::move(value)); return *this;}


    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline const ModelBiasAppSpecification& GetModelBiasAppSpecification() const{ return m_modelBiasAppSpecification; }

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline void SetModelBiasAppSpecification(const ModelBiasAppSpecification& value) { m_modelBiasAppSpecification = value; }

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline void SetModelBiasAppSpecification(ModelBiasAppSpecification&& value) { m_modelBiasAppSpecification = std::move(value); }

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithModelBiasAppSpecification(const ModelBiasAppSpecification& value) { SetModelBiasAppSpecification(value); return *this;}

    /**
     * <p>Configures the model bias job to run a specified Docker container image.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithModelBiasAppSpecification(ModelBiasAppSpecification&& value) { SetModelBiasAppSpecification(std::move(value)); return *this;}


    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline const ModelBiasJobInput& GetModelBiasJobInput() const{ return m_modelBiasJobInput; }

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline void SetModelBiasJobInput(const ModelBiasJobInput& value) { m_modelBiasJobInput = value; }

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline void SetModelBiasJobInput(ModelBiasJobInput&& value) { m_modelBiasJobInput = std::move(value); }

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithModelBiasJobInput(const ModelBiasJobInput& value) { SetModelBiasJobInput(value); return *this;}

    /**
     * <p>Inputs for the model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithModelBiasJobInput(ModelBiasJobInput&& value) { SetModelBiasJobInput(std::move(value)); return *this;}


    
    inline const MonitoringOutputConfig& GetModelBiasJobOutputConfig() const{ return m_modelBiasJobOutputConfig; }

    
    inline void SetModelBiasJobOutputConfig(const MonitoringOutputConfig& value) { m_modelBiasJobOutputConfig = value; }

    
    inline void SetModelBiasJobOutputConfig(MonitoringOutputConfig&& value) { m_modelBiasJobOutputConfig = std::move(value); }

    
    inline DescribeModelBiasJobDefinitionResult& WithModelBiasJobOutputConfig(const MonitoringOutputConfig& value) { SetModelBiasJobOutputConfig(value); return *this;}

    
    inline DescribeModelBiasJobDefinitionResult& WithModelBiasJobOutputConfig(MonitoringOutputConfig&& value) { SetModelBiasJobOutputConfig(std::move(value)); return *this;}


    
    inline const MonitoringResources& GetJobResources() const{ return m_jobResources; }

    
    inline void SetJobResources(const MonitoringResources& value) { m_jobResources = value; }

    
    inline void SetJobResources(MonitoringResources&& value) { m_jobResources = std::move(value); }

    
    inline DescribeModelBiasJobDefinitionResult& WithJobResources(const MonitoringResources& value) { SetJobResources(value); return *this;}

    
    inline DescribeModelBiasJobDefinitionResult& WithJobResources(MonitoringResources&& value) { SetJobResources(std::move(value)); return *this;}


    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline void SetNetworkConfig(const MonitoringNetworkConfig& value) { m_networkConfig = value; }

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline void SetNetworkConfig(MonitoringNetworkConfig&& value) { m_networkConfig = std::move(value); }

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithNetworkConfig(const MonitoringNetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>Networking options for a model bias job.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithNetworkConfig(MonitoringNetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that has read permission to the input data location and
     * write permission to the output data location in Amazon S3.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that has read permission to the input data location and
     * write permission to the output data location in Amazon S3.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that has read permission to the input data location and
     * write permission to the output data location in Amazon S3.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that has read permission to the input data location and
     * write permission to the output data location in Amazon S3.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that has read permission to the input data location and
     * write permission to the output data location in Amazon S3.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that has read permission to the input data location and
     * write permission to the output data location in Amazon S3.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that has read permission to the input data location and
     * write permission to the output data location in Amazon S3.</p>
     */
    inline DescribeModelBiasJobDefinitionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingCondition = value; }

    
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingCondition = std::move(value); }

    
    inline DescribeModelBiasJobDefinitionResult& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    
    inline DescribeModelBiasJobDefinitionResult& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}

  private:

    Aws::String m_jobDefinitionArn;

    Aws::String m_jobDefinitionName;

    Aws::Utils::DateTime m_creationTime;

    ModelBiasBaselineConfig m_modelBiasBaselineConfig;

    ModelBiasAppSpecification m_modelBiasAppSpecification;

    ModelBiasJobInput m_modelBiasJobInput;

    MonitoringOutputConfig m_modelBiasJobOutputConfig;

    MonitoringResources m_jobResources;

    MonitoringNetworkConfig m_networkConfig;

    Aws::String m_roleArn;

    MonitoringStoppingCondition m_stoppingCondition;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
