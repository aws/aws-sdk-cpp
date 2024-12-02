/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/InputTransformer.h>
#include <aws/eventbridge/model/KinesisParameters.h>
#include <aws/eventbridge/model/RunCommandParameters.h>
#include <aws/eventbridge/model/EcsParameters.h>
#include <aws/eventbridge/model/BatchParameters.h>
#include <aws/eventbridge/model/SqsParameters.h>
#include <aws/eventbridge/model/HttpParameters.h>
#include <aws/eventbridge/model/RedshiftDataParameters.h>
#include <aws/eventbridge/model/SageMakerPipelineParameters.h>
#include <aws/eventbridge/model/DeadLetterConfig.h>
#include <aws/eventbridge/model/RetryPolicy.h>
#include <aws/eventbridge/model/AppSyncParameters.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Targets are the resources to be invoked when a rule is triggered. For a
   * complete list of services and resources that can be set as a target, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutTargets.html">PutTargets</a>.</p>
   * <p>If you are setting the event bus of another account as the target, and that
   * account granted permission to your account through an organization instead of
   * directly by the account ID, then you must specify a <code>RoleArn</code> with
   * proper permissions in the <code>Target</code> structure. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
   * and Receiving Events Between Amazon Web Services Accounts</a> in the <i>Amazon
   * EventBridge User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_EVENTBRIDGE_API Target();
    AWS_EVENTBRIDGE_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the target within the specified rule. Use this ID to reference the
     * target when updating the rule. We recommend using a memorable and unique
     * string.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Target& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Target& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Target& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Target& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Target& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Target& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Target& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Target& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Target& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline Target& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline Target& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline Target& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You may use JSON dot notation or bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::move(value); }
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }
    inline Target& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}
    inline Target& WithInputPath(Aws::String&& value) { SetInputPath(std::move(value)); return *this;}
    inline Target& WithInputPath(const char* value) { SetInputPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to enable you to provide custom input to a target based on certain
     * event data. You can extract one or more key-value pairs from the event and then
     * use that data to send customized input to the target.</p>
     */
    inline const InputTransformer& GetInputTransformer() const{ return m_inputTransformer; }
    inline bool InputTransformerHasBeenSet() const { return m_inputTransformerHasBeenSet; }
    inline void SetInputTransformer(const InputTransformer& value) { m_inputTransformerHasBeenSet = true; m_inputTransformer = value; }
    inline void SetInputTransformer(InputTransformer&& value) { m_inputTransformerHasBeenSet = true; m_inputTransformer = std::move(value); }
    inline Target& WithInputTransformer(const InputTransformer& value) { SetInputTransformer(value); return *this;}
    inline Target& WithInputTransformer(InputTransformer&& value) { SetInputTransformer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom parameter you can use to control the shard assignment, when the
     * target is a Kinesis data stream. If you do not include this parameter, the
     * default is to use the <code>eventId</code> as the partition key.</p>
     */
    inline const KinesisParameters& GetKinesisParameters() const{ return m_kinesisParameters; }
    inline bool KinesisParametersHasBeenSet() const { return m_kinesisParametersHasBeenSet; }
    inline void SetKinesisParameters(const KinesisParameters& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = value; }
    inline void SetKinesisParameters(KinesisParameters&& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = std::move(value); }
    inline Target& WithKinesisParameters(const KinesisParameters& value) { SetKinesisParameters(value); return *this;}
    inline Target& WithKinesisParameters(KinesisParameters&& value) { SetKinesisParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters used when you are using the rule to invoke Amazon EC2 Run
     * Command.</p>
     */
    inline const RunCommandParameters& GetRunCommandParameters() const{ return m_runCommandParameters; }
    inline bool RunCommandParametersHasBeenSet() const { return m_runCommandParametersHasBeenSet; }
    inline void SetRunCommandParameters(const RunCommandParameters& value) { m_runCommandParametersHasBeenSet = true; m_runCommandParameters = value; }
    inline void SetRunCommandParameters(RunCommandParameters&& value) { m_runCommandParametersHasBeenSet = true; m_runCommandParameters = std::move(value); }
    inline Target& WithRunCommandParameters(const RunCommandParameters& value) { SetRunCommandParameters(value); return *this;}
    inline Target& WithRunCommandParameters(RunCommandParameters&& value) { SetRunCommandParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the Amazon ECS task definition and task count to be used, if the
     * event target is an Amazon ECS task. For more information about Amazon ECS tasks,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline const EcsParameters& GetEcsParameters() const{ return m_ecsParameters; }
    inline bool EcsParametersHasBeenSet() const { return m_ecsParametersHasBeenSet; }
    inline void SetEcsParameters(const EcsParameters& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = value; }
    inline void SetEcsParameters(EcsParameters&& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = std::move(value); }
    inline Target& WithEcsParameters(const EcsParameters& value) { SetEcsParameters(value); return *this;}
    inline Target& WithEcsParameters(EcsParameters&& value) { SetEcsParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event target is an Batch job, this contains the job definition, job
     * name, and other parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/jobs.html">Jobs</a> in
     * the <i>Batch User Guide</i>.</p>
     */
    inline const BatchParameters& GetBatchParameters() const{ return m_batchParameters; }
    inline bool BatchParametersHasBeenSet() const { return m_batchParametersHasBeenSet; }
    inline void SetBatchParameters(const BatchParameters& value) { m_batchParametersHasBeenSet = true; m_batchParameters = value; }
    inline void SetBatchParameters(BatchParameters&& value) { m_batchParametersHasBeenSet = true; m_batchParameters = std::move(value); }
    inline Target& WithBatchParameters(const BatchParameters& value) { SetBatchParameters(value); return *this;}
    inline Target& WithBatchParameters(BatchParameters&& value) { SetBatchParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the message group ID to use when the target is a FIFO queue.</p>
     * <p>If you specify an SQS FIFO queue as a target, the queue must have
     * content-based deduplication enabled.</p>
     */
    inline const SqsParameters& GetSqsParameters() const{ return m_sqsParameters; }
    inline bool SqsParametersHasBeenSet() const { return m_sqsParametersHasBeenSet; }
    inline void SetSqsParameters(const SqsParameters& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = value; }
    inline void SetSqsParameters(SqsParameters&& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = std::move(value); }
    inline Target& WithSqsParameters(const SqsParameters& value) { SetSqsParameters(value); return *this;}
    inline Target& WithSqsParameters(SqsParameters&& value) { SetSqsParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the HTTP parameters to use when the target is a API Gateway endpoint
     * or EventBridge ApiDestination.</p> <p>If you specify an API Gateway API or
     * EventBridge ApiDestination as a target, you can use this parameter to specify
     * headers, path parameters, and query string keys/values as part of your target
     * invoking request. If you're using ApiDestinations, the corresponding Connection
     * can also have these values configured. In case of any conflicting keys, values
     * from the Connection take precedence.</p>
     */
    inline const HttpParameters& GetHttpParameters() const{ return m_httpParameters; }
    inline bool HttpParametersHasBeenSet() const { return m_httpParametersHasBeenSet; }
    inline void SetHttpParameters(const HttpParameters& value) { m_httpParametersHasBeenSet = true; m_httpParameters = value; }
    inline void SetHttpParameters(HttpParameters&& value) { m_httpParametersHasBeenSet = true; m_httpParameters = std::move(value); }
    inline Target& WithHttpParameters(const HttpParameters& value) { SetHttpParameters(value); return *this;}
    inline Target& WithHttpParameters(HttpParameters&& value) { SetHttpParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the Amazon Redshift Data API parameters to use when the target is a
     * Amazon Redshift cluster.</p> <p>If you specify a Amazon Redshift Cluster as a
     * Target, you can use this to specify parameters to invoke the Amazon Redshift
     * Data API ExecuteStatement based on EventBridge events.</p>
     */
    inline const RedshiftDataParameters& GetRedshiftDataParameters() const{ return m_redshiftDataParameters; }
    inline bool RedshiftDataParametersHasBeenSet() const { return m_redshiftDataParametersHasBeenSet; }
    inline void SetRedshiftDataParameters(const RedshiftDataParameters& value) { m_redshiftDataParametersHasBeenSet = true; m_redshiftDataParameters = value; }
    inline void SetRedshiftDataParameters(RedshiftDataParameters&& value) { m_redshiftDataParametersHasBeenSet = true; m_redshiftDataParameters = std::move(value); }
    inline Target& WithRedshiftDataParameters(const RedshiftDataParameters& value) { SetRedshiftDataParameters(value); return *this;}
    inline Target& WithRedshiftDataParameters(RedshiftDataParameters&& value) { SetRedshiftDataParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the SageMaker Model Building Pipeline parameters to start execution
     * of a SageMaker Model Building Pipeline.</p> <p>If you specify a SageMaker Model
     * Building Pipeline as a target, you can use this to specify parameters to start a
     * pipeline execution based on EventBridge events.</p>
     */
    inline const SageMakerPipelineParameters& GetSageMakerPipelineParameters() const{ return m_sageMakerPipelineParameters; }
    inline bool SageMakerPipelineParametersHasBeenSet() const { return m_sageMakerPipelineParametersHasBeenSet; }
    inline void SetSageMakerPipelineParameters(const SageMakerPipelineParameters& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = value; }
    inline void SetSageMakerPipelineParameters(SageMakerPipelineParameters&& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = std::move(value); }
    inline Target& WithSageMakerPipelineParameters(const SageMakerPipelineParameters& value) { SetSageMakerPipelineParameters(value); return *this;}
    inline Target& WithSageMakerPipelineParameters(SageMakerPipelineParameters&& value) { SetSageMakerPipelineParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DeadLetterConfig</code> that defines the target queue to send
     * dead-letter queue events to.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }
    inline Target& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}
    inline Target& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry policy configuration to use for the dead-letter queue.</p>
     */
    inline const RetryPolicy& GetRetryPolicy() const{ return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    inline void SetRetryPolicy(const RetryPolicy& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = value; }
    inline void SetRetryPolicy(RetryPolicy&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::move(value); }
    inline Target& WithRetryPolicy(const RetryPolicy& value) { SetRetryPolicy(value); return *this;}
    inline Target& WithRetryPolicy(RetryPolicy&& value) { SetRetryPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the GraphQL operation to be parsed and executed, if the event target
     * is an AppSync API.</p>
     */
    inline const AppSyncParameters& GetAppSyncParameters() const{ return m_appSyncParameters; }
    inline bool AppSyncParametersHasBeenSet() const { return m_appSyncParametersHasBeenSet; }
    inline void SetAppSyncParameters(const AppSyncParameters& value) { m_appSyncParametersHasBeenSet = true; m_appSyncParameters = value; }
    inline void SetAppSyncParameters(AppSyncParameters&& value) { m_appSyncParametersHasBeenSet = true; m_appSyncParameters = std::move(value); }
    inline Target& WithAppSyncParameters(const AppSyncParameters& value) { SetAppSyncParameters(value); return *this;}
    inline Target& WithAppSyncParameters(AppSyncParameters&& value) { SetAppSyncParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_inputPath;
    bool m_inputPathHasBeenSet = false;

    InputTransformer m_inputTransformer;
    bool m_inputTransformerHasBeenSet = false;

    KinesisParameters m_kinesisParameters;
    bool m_kinesisParametersHasBeenSet = false;

    RunCommandParameters m_runCommandParameters;
    bool m_runCommandParametersHasBeenSet = false;

    EcsParameters m_ecsParameters;
    bool m_ecsParametersHasBeenSet = false;

    BatchParameters m_batchParameters;
    bool m_batchParametersHasBeenSet = false;

    SqsParameters m_sqsParameters;
    bool m_sqsParametersHasBeenSet = false;

    HttpParameters m_httpParameters;
    bool m_httpParametersHasBeenSet = false;

    RedshiftDataParameters m_redshiftDataParameters;
    bool m_redshiftDataParametersHasBeenSet = false;

    SageMakerPipelineParameters m_sageMakerPipelineParameters;
    bool m_sageMakerPipelineParametersHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    RetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet = false;

    AppSyncParameters m_appSyncParameters;
    bool m_appSyncParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
