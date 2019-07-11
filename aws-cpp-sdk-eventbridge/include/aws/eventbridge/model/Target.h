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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/InputTransformer.h>
#include <aws/eventbridge/model/KinesisParameters.h>
#include <aws/eventbridge/model/RunCommandParameters.h>
#include <aws/eventbridge/model/EcsParameters.h>
#include <aws/eventbridge/model/BatchParameters.h>
#include <aws/eventbridge/model/SqsParameters.h>
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
   * complete list of services and resources that can be set as a target, see
   * <a>PutTargets</a>.</p> <p>If you're setting the event bus of another account as
   * the target and that account granted permission to your account through an
   * organization instead of directly by the account ID, you must specify a
   * <code>RoleArn</code> with proper permissions in the <code>Target</code>
   * structure. For more information, see <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
   * and Receiving Events Between AWS Accounts</a> in the <i>Amazon EventBridge User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/Target">AWS
   * API Reference</a></p>
   */
  class AWS_EVENTBRIDGE_API Target
  {
  public:
    Target();
    Target(Aws::Utils::Json::JsonView jsonValue);
    Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the target.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the target.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the target.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the target.</p>
     */
    inline Target& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the target.</p>
     */
    inline Target& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target.</p>
     */
    inline Target& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline Target& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline Target& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline Target& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline Target& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline Target& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p>
     */
    inline Target& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline Target& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline Target& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>Valid JSON text passed to the target. In this case, nothing from the event
     * itself is passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p>
     */
    inline Target& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline bool InputPathHasBeenSet() const { return m_inputPathHasBeenSet; }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = std::move(value); }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline Target& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline Target& WithInputPath(Aws::String&& value) { SetInputPath(std::move(value)); return *this;}

    /**
     * <p>The value of the JSONPath that is used for extracting part of the matched
     * event when passing it to the target. You must use JSON dot notation, not bracket
     * notation. For more information about JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p>
     */
    inline Target& WithInputPath(const char* value) { SetInputPath(value); return *this;}


    /**
     * <p>Settings to enable you to provide custom input to a target based on certain
     * event data. You can extract one or more key-value pairs from the event and then
     * use that data to send customized input to the target.</p>
     */
    inline const InputTransformer& GetInputTransformer() const{ return m_inputTransformer; }

    /**
     * <p>Settings to enable you to provide custom input to a target based on certain
     * event data. You can extract one or more key-value pairs from the event and then
     * use that data to send customized input to the target.</p>
     */
    inline bool InputTransformerHasBeenSet() const { return m_inputTransformerHasBeenSet; }

    /**
     * <p>Settings to enable you to provide custom input to a target based on certain
     * event data. You can extract one or more key-value pairs from the event and then
     * use that data to send customized input to the target.</p>
     */
    inline void SetInputTransformer(const InputTransformer& value) { m_inputTransformerHasBeenSet = true; m_inputTransformer = value; }

    /**
     * <p>Settings to enable you to provide custom input to a target based on certain
     * event data. You can extract one or more key-value pairs from the event and then
     * use that data to send customized input to the target.</p>
     */
    inline void SetInputTransformer(InputTransformer&& value) { m_inputTransformerHasBeenSet = true; m_inputTransformer = std::move(value); }

    /**
     * <p>Settings to enable you to provide custom input to a target based on certain
     * event data. You can extract one or more key-value pairs from the event and then
     * use that data to send customized input to the target.</p>
     */
    inline Target& WithInputTransformer(const InputTransformer& value) { SetInputTransformer(value); return *this;}

    /**
     * <p>Settings to enable you to provide custom input to a target based on certain
     * event data. You can extract one or more key-value pairs from the event and then
     * use that data to send customized input to the target.</p>
     */
    inline Target& WithInputTransformer(InputTransformer&& value) { SetInputTransformer(std::move(value)); return *this;}


    /**
     * <p>The custom parameter that you can use to control the shard assignment when
     * the target is a Kinesis data stream. If you don't include this parameter, the
     * default is to use the <code>eventId</code> as the partition key.</p>
     */
    inline const KinesisParameters& GetKinesisParameters() const{ return m_kinesisParameters; }

    /**
     * <p>The custom parameter that you can use to control the shard assignment when
     * the target is a Kinesis data stream. If you don't include this parameter, the
     * default is to use the <code>eventId</code> as the partition key.</p>
     */
    inline bool KinesisParametersHasBeenSet() const { return m_kinesisParametersHasBeenSet; }

    /**
     * <p>The custom parameter that you can use to control the shard assignment when
     * the target is a Kinesis data stream. If you don't include this parameter, the
     * default is to use the <code>eventId</code> as the partition key.</p>
     */
    inline void SetKinesisParameters(const KinesisParameters& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = value; }

    /**
     * <p>The custom parameter that you can use to control the shard assignment when
     * the target is a Kinesis data stream. If you don't include this parameter, the
     * default is to use the <code>eventId</code> as the partition key.</p>
     */
    inline void SetKinesisParameters(KinesisParameters&& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = std::move(value); }

    /**
     * <p>The custom parameter that you can use to control the shard assignment when
     * the target is a Kinesis data stream. If you don't include this parameter, the
     * default is to use the <code>eventId</code> as the partition key.</p>
     */
    inline Target& WithKinesisParameters(const KinesisParameters& value) { SetKinesisParameters(value); return *this;}

    /**
     * <p>The custom parameter that you can use to control the shard assignment when
     * the target is a Kinesis data stream. If you don't include this parameter, the
     * default is to use the <code>eventId</code> as the partition key.</p>
     */
    inline Target& WithKinesisParameters(KinesisParameters&& value) { SetKinesisParameters(std::move(value)); return *this;}


    /**
     * <p>Parameters used when you are using the rule to invoke Amazon EC2 Run
     * Command.</p>
     */
    inline const RunCommandParameters& GetRunCommandParameters() const{ return m_runCommandParameters; }

    /**
     * <p>Parameters used when you are using the rule to invoke Amazon EC2 Run
     * Command.</p>
     */
    inline bool RunCommandParametersHasBeenSet() const { return m_runCommandParametersHasBeenSet; }

    /**
     * <p>Parameters used when you are using the rule to invoke Amazon EC2 Run
     * Command.</p>
     */
    inline void SetRunCommandParameters(const RunCommandParameters& value) { m_runCommandParametersHasBeenSet = true; m_runCommandParameters = value; }

    /**
     * <p>Parameters used when you are using the rule to invoke Amazon EC2 Run
     * Command.</p>
     */
    inline void SetRunCommandParameters(RunCommandParameters&& value) { m_runCommandParametersHasBeenSet = true; m_runCommandParameters = std::move(value); }

    /**
     * <p>Parameters used when you are using the rule to invoke Amazon EC2 Run
     * Command.</p>
     */
    inline Target& WithRunCommandParameters(const RunCommandParameters& value) { SetRunCommandParameters(value); return *this;}

    /**
     * <p>Parameters used when you are using the rule to invoke Amazon EC2 Run
     * Command.</p>
     */
    inline Target& WithRunCommandParameters(RunCommandParameters&& value) { SetRunCommandParameters(std::move(value)); return *this;}


    /**
     * <p>Contains the Amazon ECS task definition and task count to be used if the
     * event target is an Amazon ECS task. For more information about Amazon ECS tasks,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline const EcsParameters& GetEcsParameters() const{ return m_ecsParameters; }

    /**
     * <p>Contains the Amazon ECS task definition and task count to be used if the
     * event target is an Amazon ECS task. For more information about Amazon ECS tasks,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline bool EcsParametersHasBeenSet() const { return m_ecsParametersHasBeenSet; }

    /**
     * <p>Contains the Amazon ECS task definition and task count to be used if the
     * event target is an Amazon ECS task. For more information about Amazon ECS tasks,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline void SetEcsParameters(const EcsParameters& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = value; }

    /**
     * <p>Contains the Amazon ECS task definition and task count to be used if the
     * event target is an Amazon ECS task. For more information about Amazon ECS tasks,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline void SetEcsParameters(EcsParameters&& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = std::move(value); }

    /**
     * <p>Contains the Amazon ECS task definition and task count to be used if the
     * event target is an Amazon ECS task. For more information about Amazon ECS tasks,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline Target& WithEcsParameters(const EcsParameters& value) { SetEcsParameters(value); return *this;}

    /**
     * <p>Contains the Amazon ECS task definition and task count to be used if the
     * event target is an Amazon ECS task. For more information about Amazon ECS tasks,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline Target& WithEcsParameters(EcsParameters&& value) { SetEcsParameters(std::move(value)); return *this;}


    /**
     * <p>If the event target is an AWS Batch job, this contains the job definition,
     * job name, and other parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/jobs.html">Jobs</a> in
     * the <i>AWS Batch User Guide</i>.</p>
     */
    inline const BatchParameters& GetBatchParameters() const{ return m_batchParameters; }

    /**
     * <p>If the event target is an AWS Batch job, this contains the job definition,
     * job name, and other parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/jobs.html">Jobs</a> in
     * the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool BatchParametersHasBeenSet() const { return m_batchParametersHasBeenSet; }

    /**
     * <p>If the event target is an AWS Batch job, this contains the job definition,
     * job name, and other parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/jobs.html">Jobs</a> in
     * the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetBatchParameters(const BatchParameters& value) { m_batchParametersHasBeenSet = true; m_batchParameters = value; }

    /**
     * <p>If the event target is an AWS Batch job, this contains the job definition,
     * job name, and other parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/jobs.html">Jobs</a> in
     * the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetBatchParameters(BatchParameters&& value) { m_batchParametersHasBeenSet = true; m_batchParameters = std::move(value); }

    /**
     * <p>If the event target is an AWS Batch job, this contains the job definition,
     * job name, and other parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/jobs.html">Jobs</a> in
     * the <i>AWS Batch User Guide</i>.</p>
     */
    inline Target& WithBatchParameters(const BatchParameters& value) { SetBatchParameters(value); return *this;}

    /**
     * <p>If the event target is an AWS Batch job, this contains the job definition,
     * job name, and other parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/jobs.html">Jobs</a> in
     * the <i>AWS Batch User Guide</i>.</p>
     */
    inline Target& WithBatchParameters(BatchParameters&& value) { SetBatchParameters(std::move(value)); return *this;}


    /**
     * <p>Contains the message group ID to use when the target is a FIFO queue.</p>
     * <p>If you specify an SQS FIFO queue as a target, the queue must have
     * content-based deduplication enabled.</p>
     */
    inline const SqsParameters& GetSqsParameters() const{ return m_sqsParameters; }

    /**
     * <p>Contains the message group ID to use when the target is a FIFO queue.</p>
     * <p>If you specify an SQS FIFO queue as a target, the queue must have
     * content-based deduplication enabled.</p>
     */
    inline bool SqsParametersHasBeenSet() const { return m_sqsParametersHasBeenSet; }

    /**
     * <p>Contains the message group ID to use when the target is a FIFO queue.</p>
     * <p>If you specify an SQS FIFO queue as a target, the queue must have
     * content-based deduplication enabled.</p>
     */
    inline void SetSqsParameters(const SqsParameters& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = value; }

    /**
     * <p>Contains the message group ID to use when the target is a FIFO queue.</p>
     * <p>If you specify an SQS FIFO queue as a target, the queue must have
     * content-based deduplication enabled.</p>
     */
    inline void SetSqsParameters(SqsParameters&& value) { m_sqsParametersHasBeenSet = true; m_sqsParameters = std::move(value); }

    /**
     * <p>Contains the message group ID to use when the target is a FIFO queue.</p>
     * <p>If you specify an SQS FIFO queue as a target, the queue must have
     * content-based deduplication enabled.</p>
     */
    inline Target& WithSqsParameters(const SqsParameters& value) { SetSqsParameters(value); return *this;}

    /**
     * <p>Contains the message group ID to use when the target is a FIFO queue.</p>
     * <p>If you specify an SQS FIFO queue as a target, the queue must have
     * content-based deduplication enabled.</p>
     */
    inline Target& WithSqsParameters(SqsParameters&& value) { SetSqsParameters(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_input;
    bool m_inputHasBeenSet;

    Aws::String m_inputPath;
    bool m_inputPathHasBeenSet;

    InputTransformer m_inputTransformer;
    bool m_inputTransformerHasBeenSet;

    KinesisParameters m_kinesisParameters;
    bool m_kinesisParametersHasBeenSet;

    RunCommandParameters m_runCommandParameters;
    bool m_runCommandParametersHasBeenSet;

    EcsParameters m_ecsParameters;
    bool m_ecsParametersHasBeenSet;

    BatchParameters m_batchParameters;
    bool m_batchParametersHasBeenSet;

    SqsParameters m_sqsParameters;
    bool m_sqsParametersHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
