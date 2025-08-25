/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/InputTransformer.h>
#include <aws/events/model/KinesisParameters.h>
#include <aws/events/model/RunCommandParameters.h>
#include <aws/events/model/EcsParameters.h>
#include <aws/events/model/BatchParameters.h>
#include <aws/events/model/SqsParameters.h>
#include <aws/events/model/HttpParameters.h>
#include <aws/events/model/RedshiftDataParameters.h>
#include <aws/events/model/SageMakerPipelineParameters.h>
#include <aws/events/model/DeadLetterConfig.h>
#include <aws/events/model/RetryPolicy.h>
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
namespace CloudWatchEvents
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/Target">AWS API
   * Reference</a></p>
   */
  class Target
  {
  public:
    AWS_CLOUDWATCHEVENTS_API Target() = default;
    AWS_CLOUDWATCHEVENTS_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the target. We recommend using a memorable and unique string.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Target& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Target& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Target& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    Target& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline const Aws::String& GetInputPath() const { return m_inputPath; }
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }
    template<typename InputPathT = Aws::String>
    void SetInputPath(InputPathT&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::forward<InputPathT>(value); }
    template<typename InputPathT = Aws::String>
    Target& WithInputPath(InputPathT&& value) { SetInputPath(std::forward<InputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings to enable you to provide custom input to a target based on certain
     * event data. You can extract one or more key-value pairs from the event and then
     * use that data to send customized input to the target.</p>
     */
    inline const InputTransformer& GetInputTransformer() const { return m_inputTransformer; }
    inline bool InputTransformerHasBeenSet() const { return m_inputTransformerHasBeenSet; }
    template<typename InputTransformerT = InputTransformer>
    void SetInputTransformer(InputTransformerT&& value) { m_inputTransformerHasBeenSet = true; m_inputTransformer = std::forward<InputTransformerT>(value); }
    template<typename InputTransformerT = InputTransformer>
    Target& WithInputTransformer(InputTransformerT&& value) { SetInputTransformer(std::forward<InputTransformerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom parameter you can use to control the shard assignment, when the
     * target is a Kinesis data stream. If you do not include this parameter, the
     * default is to use the <code>eventId</code> as the partition key.</p>
     */
    inline const KinesisParameters& GetKinesisParameters() const { return m_kinesisParameters; }
    inline bool KinesisParametersHasBeenSet() const { return m_kinesisParametersHasBeenSet; }
    template<typename KinesisParametersT = KinesisParameters>
    void SetKinesisParameters(KinesisParametersT&& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = std::forward<KinesisParametersT>(value); }
    template<typename KinesisParametersT = KinesisParameters>
    Target& WithKinesisParameters(KinesisParametersT&& value) { SetKinesisParameters(std::forward<KinesisParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters used when you are using the rule to invoke Amazon EC2 Run
     * Command.</p>
     */
    inline const RunCommandParameters& GetRunCommandParameters() const { return m_runCommandParameters; }
    inline bool RunCommandParametersHasBeenSet() const { return m_runCommandParametersHasBeenSet; }
    template<typename RunCommandParametersT = RunCommandParameters>
    void SetRunCommandParameters(RunCommandParametersT&& value) { m_runCommandParametersHasBeenSet = true; m_runCommandParameters = std::forward<RunCommandParametersT>(value); }
    template<typename RunCommandParametersT = RunCommandParameters>
    Target& WithRunCommandParameters(RunCommandParametersT&& value) { SetRunCommandParameters(std::forward<RunCommandParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the Amazon ECS task definition and task count to be used, if the
     * event target is an Amazon ECS task. For more information about Amazon ECS tasks,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline const EcsParameters& GetEcsParameters() const { return m_ecsParameters; }
    inline bool EcsParametersHasBeenSet() const { return m_ecsParametersHasBeenSet; }
    template<typename EcsParametersT = EcsParameters>
    void SetEcsParameters(EcsParametersT&& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = std::forward<EcsParametersT>(value); }
    template<typename EcsParametersT = EcsParameters>
    Target& WithEcsParameters(EcsParametersT&& value) { SetEcsParameters(std::forward<EcsParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the event target is an Batch job, this contains the job definition, job
     * name, and other parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/jobs.html">Jobs</a> in
     * the <i>Batch User Guide</i>.</p>
     */
    inline const BatchParameters& GetBatchParameters() const { return m_batchParameters; }
    inline bool BatchParametersHasBeenSet() const { return m_batchParametersHasBeenSet; }
    template<typename BatchParametersT = BatchParameters>
    void SetBatchParameters(BatchParametersT&& value) { m_batchParametersHasBeenSet = true; m_batchParameters = std::forward<BatchParametersT>(value); }
    template<typename BatchParametersT = BatchParameters>
    Target& WithBatchParameters(BatchParametersT&& value) { SetBatchParameters(std::forward<BatchParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the message group ID to use when the target is a FIFO queue.</p>
     * <p>If you specify an SQS FIFO queue as a target, the queue must have
     * content-based deduplication enabled.</p>
     */
    inline const SqsParameters& GetSqsParameters() const { return m_sqsParameters; }
    inline bool SqsParametersHasBeenSet() const { return m_sqsParametersHasBeenSet; }
    template<typename SqsParametersT = SqsParameters>
    void SetSqsParameters(SqsParametersT&& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = std::forward<SqsParametersT>(value); }
    template<typename SqsParametersT = SqsParameters>
    Target& WithSqsParameters(SqsParametersT&& value) { SetSqsParameters(std::forward<SqsParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the HTTP parameters to use when the target is a API Gateway REST
     * endpoint or EventBridge ApiDestination.</p> <p>If you specify an API Gateway
     * REST API or EventBridge ApiDestination as a target, you can use this parameter
     * to specify headers, path parameters, and query string keys/values as part of
     * your target invoking request. If you're using ApiDestinations, the corresponding
     * Connection can also have these values configured. In case of any conflicting
     * keys, values from the Connection take precedence.</p>
     */
    inline const HttpParameters& GetHttpParameters() const { return m_httpParameters; }
    inline bool HttpParametersHasBeenSet() const { return m_httpParametersHasBeenSet; }
    template<typename HttpParametersT = HttpParameters>
    void SetHttpParameters(HttpParametersT&& value) { m_httpParametersHasBeenSet = true; m_httpParameters = std::forward<HttpParametersT>(value); }
    template<typename HttpParametersT = HttpParameters>
    Target& WithHttpParameters(HttpParametersT&& value) { SetHttpParameters(std::forward<HttpParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the Amazon Redshift Data API parameters to use when the target is a
     * Amazon Redshift cluster.</p> <p>If you specify a Amazon Redshift Cluster as a
     * Target, you can use this to specify parameters to invoke the Amazon Redshift
     * Data API ExecuteStatement based on EventBridge events.</p>
     */
    inline const RedshiftDataParameters& GetRedshiftDataParameters() const { return m_redshiftDataParameters; }
    inline bool RedshiftDataParametersHasBeenSet() const { return m_redshiftDataParametersHasBeenSet; }
    template<typename RedshiftDataParametersT = RedshiftDataParameters>
    void SetRedshiftDataParameters(RedshiftDataParametersT&& value) { m_redshiftDataParametersHasBeenSet = true; m_redshiftDataParameters = std::forward<RedshiftDataParametersT>(value); }
    template<typename RedshiftDataParametersT = RedshiftDataParameters>
    Target& WithRedshiftDataParameters(RedshiftDataParametersT&& value) { SetRedshiftDataParameters(std::forward<RedshiftDataParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the SageMaker AI Model Building Pipeline parameters to start
     * execution of a SageMaker AI Model Building Pipeline.</p> <p>If you specify a
     * SageMaker AI Model Building Pipeline as a target, you can use this to specify
     * parameters to start a pipeline execution based on EventBridge events.</p>
     */
    inline const SageMakerPipelineParameters& GetSageMakerPipelineParameters() const { return m_sageMakerPipelineParameters; }
    inline bool SageMakerPipelineParametersHasBeenSet() const { return m_sageMakerPipelineParametersHasBeenSet; }
    template<typename SageMakerPipelineParametersT = SageMakerPipelineParameters>
    void SetSageMakerPipelineParameters(SageMakerPipelineParametersT&& value) { m_sageMakerPipelineParametersHasBeenSet = true; m_sageMakerPipelineParameters = std::forward<SageMakerPipelineParametersT>(value); }
    template<typename SageMakerPipelineParametersT = SageMakerPipelineParameters>
    Target& WithSageMakerPipelineParameters(SageMakerPipelineParametersT&& value) { SetSageMakerPipelineParameters(std::forward<SageMakerPipelineParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DeadLetterConfig</code> that defines the target queue to send
     * dead-letter queue events to.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const { return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    void SetDeadLetterConfig(DeadLetterConfigT&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::forward<DeadLetterConfigT>(value); }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    Target& WithDeadLetterConfig(DeadLetterConfigT&& value) { SetDeadLetterConfig(std::forward<DeadLetterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>RetryPolicy</code> object that contains the retry policy
     * configuration to use for the dead-letter queue.</p>
     */
    inline const RetryPolicy& GetRetryPolicy() const { return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    template<typename RetryPolicyT = RetryPolicy>
    void SetRetryPolicy(RetryPolicyT&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::forward<RetryPolicyT>(value); }
    template<typename RetryPolicyT = RetryPolicy>
    Target& WithRetryPolicy(RetryPolicyT&& value) { SetRetryPolicy(std::forward<RetryPolicyT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
