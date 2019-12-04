/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FlowDefinitionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/HumanLoopActivationConfig.h>
#include <aws/sagemaker/model/HumanLoopConfig.h>
#include <aws/sagemaker/model/FlowDefinitionOutputConfig.h>
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
  class AWS_SAGEMAKER_API DescribeFlowDefinitionResult
  {
  public:
    DescribeFlowDefinitionResult();
    DescribeFlowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFlowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline DescribeFlowDefinitionResult& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline DescribeFlowDefinitionResult& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow defintion.</p>
     */
    inline DescribeFlowDefinitionResult& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionName() const{ return m_flowDefinitionName; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionName(const Aws::String& value) { m_flowDefinitionName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionName(Aws::String&& value) { m_flowDefinitionName = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionName(const char* value) { m_flowDefinitionName.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeFlowDefinitionResult& WithFlowDefinitionName(const Aws::String& value) { SetFlowDefinitionName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeFlowDefinitionResult& WithFlowDefinitionName(Aws::String&& value) { SetFlowDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline DescribeFlowDefinitionResult& WithFlowDefinitionName(const char* value) { SetFlowDefinitionName(value); return *this;}


    /**
     * <p>The status of the flow definition. Valid values are listed below.</p>
     */
    inline const FlowDefinitionStatus& GetFlowDefinitionStatus() const{ return m_flowDefinitionStatus; }

    /**
     * <p>The status of the flow definition. Valid values are listed below.</p>
     */
    inline void SetFlowDefinitionStatus(const FlowDefinitionStatus& value) { m_flowDefinitionStatus = value; }

    /**
     * <p>The status of the flow definition. Valid values are listed below.</p>
     */
    inline void SetFlowDefinitionStatus(FlowDefinitionStatus&& value) { m_flowDefinitionStatus = std::move(value); }

    /**
     * <p>The status of the flow definition. Valid values are listed below.</p>
     */
    inline DescribeFlowDefinitionResult& WithFlowDefinitionStatus(const FlowDefinitionStatus& value) { SetFlowDefinitionStatus(value); return *this;}

    /**
     * <p>The status of the flow definition. Valid values are listed below.</p>
     */
    inline DescribeFlowDefinitionResult& WithFlowDefinitionStatus(FlowDefinitionStatus&& value) { SetFlowDefinitionStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the flow definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the flow definition was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp when the flow definition was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the flow definition was created.</p>
     */
    inline DescribeFlowDefinitionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the flow definition was created.</p>
     */
    inline DescribeFlowDefinitionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>An object containing information about what triggers a human review
     * workflow.</p>
     */
    inline const HumanLoopActivationConfig& GetHumanLoopActivationConfig() const{ return m_humanLoopActivationConfig; }

    /**
     * <p>An object containing information about what triggers a human review
     * workflow.</p>
     */
    inline void SetHumanLoopActivationConfig(const HumanLoopActivationConfig& value) { m_humanLoopActivationConfig = value; }

    /**
     * <p>An object containing information about what triggers a human review
     * workflow.</p>
     */
    inline void SetHumanLoopActivationConfig(HumanLoopActivationConfig&& value) { m_humanLoopActivationConfig = std::move(value); }

    /**
     * <p>An object containing information about what triggers a human review
     * workflow.</p>
     */
    inline DescribeFlowDefinitionResult& WithHumanLoopActivationConfig(const HumanLoopActivationConfig& value) { SetHumanLoopActivationConfig(value); return *this;}

    /**
     * <p>An object containing information about what triggers a human review
     * workflow.</p>
     */
    inline DescribeFlowDefinitionResult& WithHumanLoopActivationConfig(HumanLoopActivationConfig&& value) { SetHumanLoopActivationConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about who works on the task, the workforce
     * task price, and other task details.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const{ return m_humanLoopConfig; }

    /**
     * <p>An object containing information about who works on the task, the workforce
     * task price, and other task details.</p>
     */
    inline void SetHumanLoopConfig(const HumanLoopConfig& value) { m_humanLoopConfig = value; }

    /**
     * <p>An object containing information about who works on the task, the workforce
     * task price, and other task details.</p>
     */
    inline void SetHumanLoopConfig(HumanLoopConfig&& value) { m_humanLoopConfig = std::move(value); }

    /**
     * <p>An object containing information about who works on the task, the workforce
     * task price, and other task details.</p>
     */
    inline DescribeFlowDefinitionResult& WithHumanLoopConfig(const HumanLoopConfig& value) { SetHumanLoopConfig(value); return *this;}

    /**
     * <p>An object containing information about who works on the task, the workforce
     * task price, and other task details.</p>
     */
    inline DescribeFlowDefinitionResult& WithHumanLoopConfig(HumanLoopConfig&& value) { SetHumanLoopConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the output file.</p>
     */
    inline const FlowDefinitionOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline void SetOutputConfig(const FlowDefinitionOutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline void SetOutputConfig(FlowDefinitionOutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline DescribeFlowDefinitionResult& WithOutputConfig(const FlowDefinitionOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline DescribeFlowDefinitionResult& WithOutputConfig(FlowDefinitionOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) execution role for the flow definition.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) execution role for the flow definition.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) execution role for the flow definition.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) execution role for the flow definition.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) execution role for the flow definition.</p>
     */
    inline DescribeFlowDefinitionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) execution role for the flow definition.</p>
     */
    inline DescribeFlowDefinitionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) execution role for the flow definition.</p>
     */
    inline DescribeFlowDefinitionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p/>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p/>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p/>
     */
    inline DescribeFlowDefinitionResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeFlowDefinitionResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeFlowDefinitionResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_flowDefinitionArn;

    Aws::String m_flowDefinitionName;

    FlowDefinitionStatus m_flowDefinitionStatus;

    Aws::Utils::DateTime m_creationTime;

    HumanLoopActivationConfig m_humanLoopActivationConfig;

    HumanLoopConfig m_humanLoopConfig;

    FlowDefinitionOutputConfig m_outputConfig;

    Aws::String m_roleArn;

    Aws::String m_failureReason;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
