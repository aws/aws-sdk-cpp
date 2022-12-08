/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/PipeTargetBatchJobParameters.h>
#include <aws/pipes/model/PipeTargetCloudWatchLogsParameters.h>
#include <aws/pipes/model/PipeTargetEcsTaskParameters.h>
#include <aws/pipes/model/PipeTargetEventBridgeEventBusParameters.h>
#include <aws/pipes/model/PipeTargetHttpParameters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/PipeTargetKinesisStreamParameters.h>
#include <aws/pipes/model/PipeTargetLambdaFunctionParameters.h>
#include <aws/pipes/model/PipeTargetRedshiftDataParameters.h>
#include <aws/pipes/model/PipeTargetSageMakerPipelineParameters.h>
#include <aws/pipes/model/PipeTargetSqsQueueParameters.h>
#include <aws/pipes/model/PipeTargetStateMachineParameters.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters required to set up a target for your pipe.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetParameters
  {
  public:
    AWS_PIPES_API PipeTargetParameters();
    AWS_PIPES_API PipeTargetParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameters for using an Batch job as a target.</p>
     */
    inline const PipeTargetBatchJobParameters& GetBatchJobParameters() const{ return m_batchJobParameters; }

    /**
     * <p>The parameters for using an Batch job as a target.</p>
     */
    inline bool BatchJobParametersHasBeenSet() const { return m_batchJobParametersHasBeenSet; }

    /**
     * <p>The parameters for using an Batch job as a target.</p>
     */
    inline void SetBatchJobParameters(const PipeTargetBatchJobParameters& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = value; }

    /**
     * <p>The parameters for using an Batch job as a target.</p>
     */
    inline void SetBatchJobParameters(PipeTargetBatchJobParameters&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = std::move(value); }

    /**
     * <p>The parameters for using an Batch job as a target.</p>
     */
    inline PipeTargetParameters& WithBatchJobParameters(const PipeTargetBatchJobParameters& value) { SetBatchJobParameters(value); return *this;}

    /**
     * <p>The parameters for using an Batch job as a target.</p>
     */
    inline PipeTargetParameters& WithBatchJobParameters(PipeTargetBatchJobParameters&& value) { SetBatchJobParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using an CloudWatch Logs log stream as a target.</p>
     */
    inline const PipeTargetCloudWatchLogsParameters& GetCloudWatchLogsParameters() const{ return m_cloudWatchLogsParameters; }

    /**
     * <p>The parameters for using an CloudWatch Logs log stream as a target.</p>
     */
    inline bool CloudWatchLogsParametersHasBeenSet() const { return m_cloudWatchLogsParametersHasBeenSet; }

    /**
     * <p>The parameters for using an CloudWatch Logs log stream as a target.</p>
     */
    inline void SetCloudWatchLogsParameters(const PipeTargetCloudWatchLogsParameters& value) { m_cloudWatchLogsParametersHasBeenSet = true; m_cloudWatchLogsParameters = value; }

    /**
     * <p>The parameters for using an CloudWatch Logs log stream as a target.</p>
     */
    inline void SetCloudWatchLogsParameters(PipeTargetCloudWatchLogsParameters&& value) { m_cloudWatchLogsParametersHasBeenSet = true; m_cloudWatchLogsParameters = std::move(value); }

    /**
     * <p>The parameters for using an CloudWatch Logs log stream as a target.</p>
     */
    inline PipeTargetParameters& WithCloudWatchLogsParameters(const PipeTargetCloudWatchLogsParameters& value) { SetCloudWatchLogsParameters(value); return *this;}

    /**
     * <p>The parameters for using an CloudWatch Logs log stream as a target.</p>
     */
    inline PipeTargetParameters& WithCloudWatchLogsParameters(PipeTargetCloudWatchLogsParameters&& value) { SetCloudWatchLogsParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using an Amazon ECS task as a target.</p>
     */
    inline const PipeTargetEcsTaskParameters& GetEcsTaskParameters() const{ return m_ecsTaskParameters; }

    /**
     * <p>The parameters for using an Amazon ECS task as a target.</p>
     */
    inline bool EcsTaskParametersHasBeenSet() const { return m_ecsTaskParametersHasBeenSet; }

    /**
     * <p>The parameters for using an Amazon ECS task as a target.</p>
     */
    inline void SetEcsTaskParameters(const PipeTargetEcsTaskParameters& value) { m_ecsTaskParametersHasBeenSet = true; m_ecsTaskParameters = value; }

    /**
     * <p>The parameters for using an Amazon ECS task as a target.</p>
     */
    inline void SetEcsTaskParameters(PipeTargetEcsTaskParameters&& value) { m_ecsTaskParametersHasBeenSet = true; m_ecsTaskParameters = std::move(value); }

    /**
     * <p>The parameters for using an Amazon ECS task as a target.</p>
     */
    inline PipeTargetParameters& WithEcsTaskParameters(const PipeTargetEcsTaskParameters& value) { SetEcsTaskParameters(value); return *this;}

    /**
     * <p>The parameters for using an Amazon ECS task as a target.</p>
     */
    inline PipeTargetParameters& WithEcsTaskParameters(PipeTargetEcsTaskParameters&& value) { SetEcsTaskParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using an EventBridge event bus as a target.</p>
     */
    inline const PipeTargetEventBridgeEventBusParameters& GetEventBridgeEventBusParameters() const{ return m_eventBridgeEventBusParameters; }

    /**
     * <p>The parameters for using an EventBridge event bus as a target.</p>
     */
    inline bool EventBridgeEventBusParametersHasBeenSet() const { return m_eventBridgeEventBusParametersHasBeenSet; }

    /**
     * <p>The parameters for using an EventBridge event bus as a target.</p>
     */
    inline void SetEventBridgeEventBusParameters(const PipeTargetEventBridgeEventBusParameters& value) { m_eventBridgeEventBusParametersHasBeenSet = true; m_eventBridgeEventBusParameters = value; }

    /**
     * <p>The parameters for using an EventBridge event bus as a target.</p>
     */
    inline void SetEventBridgeEventBusParameters(PipeTargetEventBridgeEventBusParameters&& value) { m_eventBridgeEventBusParametersHasBeenSet = true; m_eventBridgeEventBusParameters = std::move(value); }

    /**
     * <p>The parameters for using an EventBridge event bus as a target.</p>
     */
    inline PipeTargetParameters& WithEventBridgeEventBusParameters(const PipeTargetEventBridgeEventBusParameters& value) { SetEventBridgeEventBusParameters(value); return *this;}

    /**
     * <p>The parameters for using an EventBridge event bus as a target.</p>
     */
    inline PipeTargetParameters& WithEventBridgeEventBusParameters(PipeTargetEventBridgeEventBusParameters&& value) { SetEventBridgeEventBusParameters(std::move(value)); return *this;}


    /**
     * <p>These are custom parameter to be used when the target is an API Gateway REST
     * APIs or EventBridge ApiDestinations.</p>
     */
    inline const PipeTargetHttpParameters& GetHttpParameters() const{ return m_httpParameters; }

    /**
     * <p>These are custom parameter to be used when the target is an API Gateway REST
     * APIs or EventBridge ApiDestinations.</p>
     */
    inline bool HttpParametersHasBeenSet() const { return m_httpParametersHasBeenSet; }

    /**
     * <p>These are custom parameter to be used when the target is an API Gateway REST
     * APIs or EventBridge ApiDestinations.</p>
     */
    inline void SetHttpParameters(const PipeTargetHttpParameters& value) { m_httpParametersHasBeenSet = true; m_httpParameters = value; }

    /**
     * <p>These are custom parameter to be used when the target is an API Gateway REST
     * APIs or EventBridge ApiDestinations.</p>
     */
    inline void SetHttpParameters(PipeTargetHttpParameters&& value) { m_httpParametersHasBeenSet = true; m_httpParameters = std::move(value); }

    /**
     * <p>These are custom parameter to be used when the target is an API Gateway REST
     * APIs or EventBridge ApiDestinations.</p>
     */
    inline PipeTargetParameters& WithHttpParameters(const PipeTargetHttpParameters& value) { SetHttpParameters(value); return *this;}

    /**
     * <p>These are custom parameter to be used when the target is an API Gateway REST
     * APIs or EventBridge ApiDestinations.</p>
     */
    inline PipeTargetParameters& WithHttpParameters(PipeTargetHttpParameters&& value) { SetHttpParameters(std::move(value)); return *this;}


    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline const Aws::String& GetInputTemplate() const{ return m_inputTemplate; }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline bool InputTemplateHasBeenSet() const { return m_inputTemplateHasBeenSet; }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInputTemplate(const Aws::String& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = value; }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInputTemplate(Aws::String&& value) { m_inputTemplateHasBeenSet = true; m_inputTemplate = std::move(value); }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInputTemplate(const char* value) { m_inputTemplateHasBeenSet = true; m_inputTemplate.assign(value); }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline PipeTargetParameters& WithInputTemplate(const Aws::String& value) { SetInputTemplate(value); return *this;}

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline PipeTargetParameters& WithInputTemplate(Aws::String&& value) { SetInputTemplate(std::move(value)); return *this;}

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline PipeTargetParameters& WithInputTemplate(const char* value) { SetInputTemplate(value); return *this;}


    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline const PipeTargetKinesisStreamParameters& GetKinesisStreamParameters() const{ return m_kinesisStreamParameters; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline bool KinesisStreamParametersHasBeenSet() const { return m_kinesisStreamParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline void SetKinesisStreamParameters(const PipeTargetKinesisStreamParameters& value) { m_kinesisStreamParametersHasBeenSet = true; m_kinesisStreamParameters = value; }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline void SetKinesisStreamParameters(PipeTargetKinesisStreamParameters&& value) { m_kinesisStreamParametersHasBeenSet = true; m_kinesisStreamParameters = std::move(value); }

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline PipeTargetParameters& WithKinesisStreamParameters(const PipeTargetKinesisStreamParameters& value) { SetKinesisStreamParameters(value); return *this;}

    /**
     * <p>The parameters for using a Kinesis stream as a source.</p>
     */
    inline PipeTargetParameters& WithKinesisStreamParameters(PipeTargetKinesisStreamParameters&& value) { SetKinesisStreamParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Lambda function as a target.</p>
     */
    inline const PipeTargetLambdaFunctionParameters& GetLambdaFunctionParameters() const{ return m_lambdaFunctionParameters; }

    /**
     * <p>The parameters for using a Lambda function as a target.</p>
     */
    inline bool LambdaFunctionParametersHasBeenSet() const { return m_lambdaFunctionParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Lambda function as a target.</p>
     */
    inline void SetLambdaFunctionParameters(const PipeTargetLambdaFunctionParameters& value) { m_lambdaFunctionParametersHasBeenSet = true; m_lambdaFunctionParameters = value; }

    /**
     * <p>The parameters for using a Lambda function as a target.</p>
     */
    inline void SetLambdaFunctionParameters(PipeTargetLambdaFunctionParameters&& value) { m_lambdaFunctionParametersHasBeenSet = true; m_lambdaFunctionParameters = std::move(value); }

    /**
     * <p>The parameters for using a Lambda function as a target.</p>
     */
    inline PipeTargetParameters& WithLambdaFunctionParameters(const PipeTargetLambdaFunctionParameters& value) { SetLambdaFunctionParameters(value); return *this;}

    /**
     * <p>The parameters for using a Lambda function as a target.</p>
     */
    inline PipeTargetParameters& WithLambdaFunctionParameters(PipeTargetLambdaFunctionParameters&& value) { SetLambdaFunctionParameters(std::move(value)); return *this;}


    /**
     * <p>These are custom parameters to be used when the target is a Amazon Redshift
     * cluster to invoke the Amazon Redshift Data API ExecuteStatement.</p>
     */
    inline const PipeTargetRedshiftDataParameters& GetRedshiftDataParameters() const{ return m_redshiftDataParameters; }

    /**
     * <p>These are custom parameters to be used when the target is a Amazon Redshift
     * cluster to invoke the Amazon Redshift Data API ExecuteStatement.</p>
     */
    inline bool RedshiftDataParametersHasBeenSet() const { return m_redshiftDataParametersHasBeenSet; }

    /**
     * <p>These are custom parameters to be used when the target is a Amazon Redshift
     * cluster to invoke the Amazon Redshift Data API ExecuteStatement.</p>
     */
    inline void SetRedshiftDataParameters(const PipeTargetRedshiftDataParameters& value) { m_redshiftDataParametersHasBeenSet = true; m_redshiftDataParameters = value; }

    /**
     * <p>These are custom parameters to be used when the target is a Amazon Redshift
     * cluster to invoke the Amazon Redshift Data API ExecuteStatement.</p>
     */
    inline void SetRedshiftDataParameters(PipeTargetRedshiftDataParameters&& value) { m_redshiftDataParametersHasBeenSet = true; m_redshiftDataParameters = std::move(value); }

    /**
     * <p>These are custom parameters to be used when the target is a Amazon Redshift
     * cluster to invoke the Amazon Redshift Data API ExecuteStatement.</p>
     */
    inline PipeTargetParameters& WithRedshiftDataParameters(const PipeTargetRedshiftDataParameters& value) { SetRedshiftDataParameters(value); return *this;}

    /**
     * <p>These are custom parameters to be used when the target is a Amazon Redshift
     * cluster to invoke the Amazon Redshift Data API ExecuteStatement.</p>
     */
    inline PipeTargetParameters& WithRedshiftDataParameters(PipeTargetRedshiftDataParameters&& value) { SetRedshiftDataParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a SageMaker pipeline as a target.</p>
     */
    inline const PipeTargetSageMakerPipelineParameters& GetSageMakerPipelineParameters() const{ return m_sageMakerPipelineParameters; }

    /**
     * <p>The parameters for using a SageMaker pipeline as a target.</p>
     */
    inline bool SageMakerPipelineParametersHasBeenSet() const { return m_sageMakerPipelineParametersHasBeenSet; }

    /**
     * <p>The parameters for using a SageMaker pipeline as a target.</p>
     */
    inline void SetSageMakerPipelineParameters(const PipeTargetSageMakerPipelineParameters& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = value; }

    /**
     * <p>The parameters for using a SageMaker pipeline as a target.</p>
     */
    inline void SetSageMakerPipelineParameters(PipeTargetSageMakerPipelineParameters&& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = std::move(value); }

    /**
     * <p>The parameters for using a SageMaker pipeline as a target.</p>
     */
    inline PipeTargetParameters& WithSageMakerPipelineParameters(const PipeTargetSageMakerPipelineParameters& value) { SetSageMakerPipelineParameters(value); return *this;}

    /**
     * <p>The parameters for using a SageMaker pipeline as a target.</p>
     */
    inline PipeTargetParameters& WithSageMakerPipelineParameters(PipeTargetSageMakerPipelineParameters&& value) { SetSageMakerPipelineParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline const PipeTargetSqsQueueParameters& GetSqsQueueParameters() const{ return m_sqsQueueParameters; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline bool SqsQueueParametersHasBeenSet() const { return m_sqsQueueParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline void SetSqsQueueParameters(const PipeTargetSqsQueueParameters& value) { m_sqsQueueParametersHasBeenSet = true; m_sqsQueueParameters = value; }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline void SetSqsQueueParameters(PipeTargetSqsQueueParameters&& value) { m_sqsQueueParametersHasBeenSet = true; m_sqsQueueParameters = std::move(value); }

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline PipeTargetParameters& WithSqsQueueParameters(const PipeTargetSqsQueueParameters& value) { SetSqsQueueParameters(value); return *this;}

    /**
     * <p>The parameters for using a Amazon SQS stream as a source.</p>
     */
    inline PipeTargetParameters& WithSqsQueueParameters(PipeTargetSqsQueueParameters&& value) { SetSqsQueueParameters(std::move(value)); return *this;}


    /**
     * <p>The parameters for using a Step Functions state machine as a target.</p>
     */
    inline const PipeTargetStateMachineParameters& GetStepFunctionStateMachineParameters() const{ return m_stepFunctionStateMachineParameters; }

    /**
     * <p>The parameters for using a Step Functions state machine as a target.</p>
     */
    inline bool StepFunctionStateMachineParametersHasBeenSet() const { return m_stepFunctionStateMachineParametersHasBeenSet; }

    /**
     * <p>The parameters for using a Step Functions state machine as a target.</p>
     */
    inline void SetStepFunctionStateMachineParameters(const PipeTargetStateMachineParameters& value) { m_stepFunctionStateMachineParametersHasBeenSet = true; m_stepFunctionStateMachineParameters = value; }

    /**
     * <p>The parameters for using a Step Functions state machine as a target.</p>
     */
    inline void SetStepFunctionStateMachineParameters(PipeTargetStateMachineParameters&& value) { m_stepFunctionStateMachineParametersHasBeenSet = true; m_stepFunctionStateMachineParameters = std::move(value); }

    /**
     * <p>The parameters for using a Step Functions state machine as a target.</p>
     */
    inline PipeTargetParameters& WithStepFunctionStateMachineParameters(const PipeTargetStateMachineParameters& value) { SetStepFunctionStateMachineParameters(value); return *this;}

    /**
     * <p>The parameters for using a Step Functions state machine as a target.</p>
     */
    inline PipeTargetParameters& WithStepFunctionStateMachineParameters(PipeTargetStateMachineParameters&& value) { SetStepFunctionStateMachineParameters(std::move(value)); return *this;}

  private:

    PipeTargetBatchJobParameters m_batchJobParameters;
    bool m_batchJobParametersHasBeenSet = false;

    PipeTargetCloudWatchLogsParameters m_cloudWatchLogsParameters;
    bool m_cloudWatchLogsParametersHasBeenSet = false;

    PipeTargetEcsTaskParameters m_ecsTaskParameters;
    bool m_ecsTaskParametersHasBeenSet = false;

    PipeTargetEventBridgeEventBusParameters m_eventBridgeEventBusParameters;
    bool m_eventBridgeEventBusParametersHasBeenSet = false;

    PipeTargetHttpParameters m_httpParameters;
    bool m_httpParametersHasBeenSet = false;

    Aws::String m_inputTemplate;
    bool m_inputTemplateHasBeenSet = false;

    PipeTargetKinesisStreamParameters m_kinesisStreamParameters;
    bool m_kinesisStreamParametersHasBeenSet = false;

    PipeTargetLambdaFunctionParameters m_lambdaFunctionParameters;
    bool m_lambdaFunctionParametersHasBeenSet = false;

    PipeTargetRedshiftDataParameters m_redshiftDataParameters;
    bool m_redshiftDataParametersHasBeenSet = false;

    PipeTargetSageMakerPipelineParameters m_sageMakerPipelineParameters;
    bool m_sageMakerPipelineParametersHasBeenSet = false;

    PipeTargetSqsQueueParameters m_sqsQueueParameters;
    bool m_sqsQueueParametersHasBeenSet = false;

    PipeTargetStateMachineParameters m_stepFunctionStateMachineParameters;
    bool m_stepFunctionStateMachineParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
