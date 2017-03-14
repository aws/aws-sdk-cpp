/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/InputTransformer.h>
#include <aws/events/model/KinesisParameters.h>
#include <aws/events/model/RunCommandParameters.h>
#include <aws/events/model/EcsParameters.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <zonbook> <simpara>Targets are the resources to be invoked when a rule is
   * triggered. Target types include EC2 instances, AWS Lambda functions, Amazon
   * Kinesis streams, Amazon ECS tasks, AWS Step Functions state machines, Run
   * Command, and built-in targets.</simpara> </zonbook> <xhtml> <p>Targets are the
   * resources to be invoked when a rule is triggered. Target types include EC2
   * instances, AWS Lambda functions, Amazon Kinesis streams, Amazon ECS tasks, AWS
   * Step Functions state machines, Run Command, and built-in targets.</p> </xhtml>
   */
  class AWS_CLOUDWATCHEVENTS_API Target
  {
  public:
    Target();
    Target(const Aws::Utils::Json::JsonValue& jsonValue);
    Target& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline Target& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline Target& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <zonbook> <simpara>The ID of the target.</simpara> </zonbook> <xhtml> <p>The ID
     * of the target.</p> </xhtml>
     */
    inline Target& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the target.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the target.</p> </xhtml>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the target.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the target.</p> </xhtml>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the target.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the target.</p> </xhtml>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the target.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the target.</p> </xhtml>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the target.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the target.</p> </xhtml>
     */
    inline Target& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the target.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the target.</p> </xhtml>
     */
    inline Target& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the target.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the target.</p> </xhtml>
     */
    inline Target& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role to be used for
     * this target when the rule is triggered. If one rule triggers multiple targets,
     * you can use a different IAM role for each target.</simpara> </zonbook> <xhtml>
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p> </xhtml>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role to be used for
     * this target when the rule is triggered. If one rule triggers multiple targets,
     * you can use a different IAM role for each target.</simpara> </zonbook> <xhtml>
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p> </xhtml>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role to be used for
     * this target when the rule is triggered. If one rule triggers multiple targets,
     * you can use a different IAM role for each target.</simpara> </zonbook> <xhtml>
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p> </xhtml>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role to be used for
     * this target when the rule is triggered. If one rule triggers multiple targets,
     * you can use a different IAM role for each target.</simpara> </zonbook> <xhtml>
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p> </xhtml>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role to be used for
     * this target when the rule is triggered. If one rule triggers multiple targets,
     * you can use a different IAM role for each target.</simpara> </zonbook> <xhtml>
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p> </xhtml>
     */
    inline Target& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role to be used for
     * this target when the rule is triggered. If one rule triggers multiple targets,
     * you can use a different IAM role for each target.</simpara> </zonbook> <xhtml>
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p> </xhtml>
     */
    inline Target& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the IAM role to be used for
     * this target when the rule is triggered. If one rule triggers multiple targets,
     * you can use a different IAM role for each target.</simpara> </zonbook> <xhtml>
     * <p>The Amazon Resource Name (ARN) of the IAM role to be used for this target
     * when the rule is triggered. If one rule triggers multiple targets, you can use a
     * different IAM role for each target.</p> </xhtml>
     */
    inline Target& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <zonbook> <simpara>Valid JSON text passed to the target. In this case, nothing
     * from the event itself is passed to the target. For more information, see <ulink
     * url="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</ulink>.</simpara> </zonbook> <xhtml> <p>Valid
     * JSON text passed to the target. In this case, nothing from the event itself is
     * passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p> </xhtml>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <zonbook> <simpara>Valid JSON text passed to the target. In this case, nothing
     * from the event itself is passed to the target. For more information, see <ulink
     * url="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</ulink>.</simpara> </zonbook> <xhtml> <p>Valid
     * JSON text passed to the target. In this case, nothing from the event itself is
     * passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p> </xhtml>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <zonbook> <simpara>Valid JSON text passed to the target. In this case, nothing
     * from the event itself is passed to the target. For more information, see <ulink
     * url="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</ulink>.</simpara> </zonbook> <xhtml> <p>Valid
     * JSON text passed to the target. In this case, nothing from the event itself is
     * passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p> </xhtml>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <zonbook> <simpara>Valid JSON text passed to the target. In this case, nothing
     * from the event itself is passed to the target. For more information, see <ulink
     * url="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</ulink>.</simpara> </zonbook> <xhtml> <p>Valid
     * JSON text passed to the target. In this case, nothing from the event itself is
     * passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p> </xhtml>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <zonbook> <simpara>Valid JSON text passed to the target. In this case, nothing
     * from the event itself is passed to the target. For more information, see <ulink
     * url="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</ulink>.</simpara> </zonbook> <xhtml> <p>Valid
     * JSON text passed to the target. In this case, nothing from the event itself is
     * passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p> </xhtml>
     */
    inline Target& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <zonbook> <simpara>Valid JSON text passed to the target. In this case, nothing
     * from the event itself is passed to the target. For more information, see <ulink
     * url="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</ulink>.</simpara> </zonbook> <xhtml> <p>Valid
     * JSON text passed to the target. In this case, nothing from the event itself is
     * passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p> </xhtml>
     */
    inline Target& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <zonbook> <simpara>Valid JSON text passed to the target. In this case, nothing
     * from the event itself is passed to the target. For more information, see <ulink
     * url="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</ulink>.</simpara> </zonbook> <xhtml> <p>Valid
     * JSON text passed to the target. In this case, nothing from the event itself is
     * passed to the target. For more information, see <a
     * href="http://www.rfc-editor.org/rfc/rfc7159.txt">The JavaScript Object Notation
     * (JSON) Data Interchange Format</a>.</p> </xhtml>
     */
    inline Target& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <zonbook> <simpara>The value of the JSONPath that is used for extracting part of
     * the matched event when passing it to the target. For more information about JSON
     * paths, see <ulink
     * url="http://goessner.net/articles/JsonPath/">JSONPath</ulink>.</simpara>
     * </zonbook> <xhtml> <p>The value of the JSONPath that is used for extracting part
     * of the matched event when passing it to the target. For more information about
     * JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p> </xhtml>
     */
    inline const Aws::String& GetInputPath() const{ return m_inputPath; }

    /**
     * <zonbook> <simpara>The value of the JSONPath that is used for extracting part of
     * the matched event when passing it to the target. For more information about JSON
     * paths, see <ulink
     * url="http://goessner.net/articles/JsonPath/">JSONPath</ulink>.</simpara>
     * </zonbook> <xhtml> <p>The value of the JSONPath that is used for extracting part
     * of the matched event when passing it to the target. For more information about
     * JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p> </xhtml>
     */
    inline void SetInputPath(const Aws::String& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }

    /**
     * <zonbook> <simpara>The value of the JSONPath that is used for extracting part of
     * the matched event when passing it to the target. For more information about JSON
     * paths, see <ulink
     * url="http://goessner.net/articles/JsonPath/">JSONPath</ulink>.</simpara>
     * </zonbook> <xhtml> <p>The value of the JSONPath that is used for extracting part
     * of the matched event when passing it to the target. For more information about
     * JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p> </xhtml>
     */
    inline void SetInputPath(Aws::String&& value) { m_inputPathHasBeenSet = true; m_inputPath = value; }

    /**
     * <zonbook> <simpara>The value of the JSONPath that is used for extracting part of
     * the matched event when passing it to the target. For more information about JSON
     * paths, see <ulink
     * url="http://goessner.net/articles/JsonPath/">JSONPath</ulink>.</simpara>
     * </zonbook> <xhtml> <p>The value of the JSONPath that is used for extracting part
     * of the matched event when passing it to the target. For more information about
     * JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p> </xhtml>
     */
    inline void SetInputPath(const char* value) { m_inputPathHasBeenSet = true; m_inputPath.assign(value); }

    /**
     * <zonbook> <simpara>The value of the JSONPath that is used for extracting part of
     * the matched event when passing it to the target. For more information about JSON
     * paths, see <ulink
     * url="http://goessner.net/articles/JsonPath/">JSONPath</ulink>.</simpara>
     * </zonbook> <xhtml> <p>The value of the JSONPath that is used for extracting part
     * of the matched event when passing it to the target. For more information about
     * JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p> </xhtml>
     */
    inline Target& WithInputPath(const Aws::String& value) { SetInputPath(value); return *this;}

    /**
     * <zonbook> <simpara>The value of the JSONPath that is used for extracting part of
     * the matched event when passing it to the target. For more information about JSON
     * paths, see <ulink
     * url="http://goessner.net/articles/JsonPath/">JSONPath</ulink>.</simpara>
     * </zonbook> <xhtml> <p>The value of the JSONPath that is used for extracting part
     * of the matched event when passing it to the target. For more information about
     * JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p> </xhtml>
     */
    inline Target& WithInputPath(Aws::String&& value) { SetInputPath(value); return *this;}

    /**
     * <zonbook> <simpara>The value of the JSONPath that is used for extracting part of
     * the matched event when passing it to the target. For more information about JSON
     * paths, see <ulink
     * url="http://goessner.net/articles/JsonPath/">JSONPath</ulink>.</simpara>
     * </zonbook> <xhtml> <p>The value of the JSONPath that is used for extracting part
     * of the matched event when passing it to the target. For more information about
     * JSON paths, see <a
     * href="http://goessner.net/articles/JsonPath/">JSONPath</a>.</p> </xhtml>
     */
    inline Target& WithInputPath(const char* value) { SetInputPath(value); return *this;}

    /**
     * <zonbook> <simpara>Settings to enable you to provide custom input to a target
     * based on certain event data. You can extract one or more key-value pairs from
     * the event and then use that data to send customized input to the
     * target.</simpara> </zonbook> <xhtml> <p>Settings to enable you to provide custom
     * input to a target based on certain event data. You can extract one or more
     * key-value pairs from the event and then use that data to send customized input
     * to the target.</p> </xhtml>
     */
    inline const InputTransformer& GetInputTransformer() const{ return m_inputTransformer; }

    /**
     * <zonbook> <simpara>Settings to enable you to provide custom input to a target
     * based on certain event data. You can extract one or more key-value pairs from
     * the event and then use that data to send customized input to the
     * target.</simpara> </zonbook> <xhtml> <p>Settings to enable you to provide custom
     * input to a target based on certain event data. You can extract one or more
     * key-value pairs from the event and then use that data to send customized input
     * to the target.</p> </xhtml>
     */
    inline void SetInputTransformer(const InputTransformer& value) { m_inputTransformerHasBeenSet = true; m_inputTransformer = value; }

    /**
     * <zonbook> <simpara>Settings to enable you to provide custom input to a target
     * based on certain event data. You can extract one or more key-value pairs from
     * the event and then use that data to send customized input to the
     * target.</simpara> </zonbook> <xhtml> <p>Settings to enable you to provide custom
     * input to a target based on certain event data. You can extract one or more
     * key-value pairs from the event and then use that data to send customized input
     * to the target.</p> </xhtml>
     */
    inline void SetInputTransformer(InputTransformer&& value) { m_inputTransformerHasBeenSet = true; m_inputTransformer = value; }

    /**
     * <zonbook> <simpara>Settings to enable you to provide custom input to a target
     * based on certain event data. You can extract one or more key-value pairs from
     * the event and then use that data to send customized input to the
     * target.</simpara> </zonbook> <xhtml> <p>Settings to enable you to provide custom
     * input to a target based on certain event data. You can extract one or more
     * key-value pairs from the event and then use that data to send customized input
     * to the target.</p> </xhtml>
     */
    inline Target& WithInputTransformer(const InputTransformer& value) { SetInputTransformer(value); return *this;}

    /**
     * <zonbook> <simpara>Settings to enable you to provide custom input to a target
     * based on certain event data. You can extract one or more key-value pairs from
     * the event and then use that data to send customized input to the
     * target.</simpara> </zonbook> <xhtml> <p>Settings to enable you to provide custom
     * input to a target based on certain event data. You can extract one or more
     * key-value pairs from the event and then use that data to send customized input
     * to the target.</p> </xhtml>
     */
    inline Target& WithInputTransformer(InputTransformer&& value) { SetInputTransformer(value); return *this;}

    /**
     * <zonbook> <simpara>The custom parameter you can use to control shard assignment,
     * when the target is an Amazon Kinesis stream. If you do not include this
     * parameter, the default is to use the <code>eventId</code> as the partition
     * key.</simpara> </zonbook> <xhtml> <p>The custom parameter you can use to control
     * shard assignment, when the target is an Amazon Kinesis stream. If you do not
     * include this parameter, the default is to use the <code>eventId</code> as the
     * partition key.</p> </xhtml>
     */
    inline const KinesisParameters& GetKinesisParameters() const{ return m_kinesisParameters; }

    /**
     * <zonbook> <simpara>The custom parameter you can use to control shard assignment,
     * when the target is an Amazon Kinesis stream. If you do not include this
     * parameter, the default is to use the <code>eventId</code> as the partition
     * key.</simpara> </zonbook> <xhtml> <p>The custom parameter you can use to control
     * shard assignment, when the target is an Amazon Kinesis stream. If you do not
     * include this parameter, the default is to use the <code>eventId</code> as the
     * partition key.</p> </xhtml>
     */
    inline void SetKinesisParameters(const KinesisParameters& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = value; }

    /**
     * <zonbook> <simpara>The custom parameter you can use to control shard assignment,
     * when the target is an Amazon Kinesis stream. If you do not include this
     * parameter, the default is to use the <code>eventId</code> as the partition
     * key.</simpara> </zonbook> <xhtml> <p>The custom parameter you can use to control
     * shard assignment, when the target is an Amazon Kinesis stream. If you do not
     * include this parameter, the default is to use the <code>eventId</code> as the
     * partition key.</p> </xhtml>
     */
    inline void SetKinesisParameters(KinesisParameters&& value) { m_kinesisParametersHasBeenSet = true; m_kinesisParameters = value; }

    /**
     * <zonbook> <simpara>The custom parameter you can use to control shard assignment,
     * when the target is an Amazon Kinesis stream. If you do not include this
     * parameter, the default is to use the <code>eventId</code> as the partition
     * key.</simpara> </zonbook> <xhtml> <p>The custom parameter you can use to control
     * shard assignment, when the target is an Amazon Kinesis stream. If you do not
     * include this parameter, the default is to use the <code>eventId</code> as the
     * partition key.</p> </xhtml>
     */
    inline Target& WithKinesisParameters(const KinesisParameters& value) { SetKinesisParameters(value); return *this;}

    /**
     * <zonbook> <simpara>The custom parameter you can use to control shard assignment,
     * when the target is an Amazon Kinesis stream. If you do not include this
     * parameter, the default is to use the <code>eventId</code> as the partition
     * key.</simpara> </zonbook> <xhtml> <p>The custom parameter you can use to control
     * shard assignment, when the target is an Amazon Kinesis stream. If you do not
     * include this parameter, the default is to use the <code>eventId</code> as the
     * partition key.</p> </xhtml>
     */
    inline Target& WithKinesisParameters(KinesisParameters&& value) { SetKinesisParameters(value); return *this;}

    /**
     * <zonbook> <simpara>Parameters used when you are using the rule to invoke Amazon
     * EC2 Run Command.</simpara> </zonbook> <xhtml> <p>Parameters used when you are
     * using the rule to invoke Amazon EC2 Run Command.</p> </xhtml>
     */
    inline const RunCommandParameters& GetRunCommandParameters() const{ return m_runCommandParameters; }

    /**
     * <zonbook> <simpara>Parameters used when you are using the rule to invoke Amazon
     * EC2 Run Command.</simpara> </zonbook> <xhtml> <p>Parameters used when you are
     * using the rule to invoke Amazon EC2 Run Command.</p> </xhtml>
     */
    inline void SetRunCommandParameters(const RunCommandParameters& value) { m_runCommandParametersHasBeenSet = true; m_runCommandParameters = value; }

    /**
     * <zonbook> <simpara>Parameters used when you are using the rule to invoke Amazon
     * EC2 Run Command.</simpara> </zonbook> <xhtml> <p>Parameters used when you are
     * using the rule to invoke Amazon EC2 Run Command.</p> </xhtml>
     */
    inline void SetRunCommandParameters(RunCommandParameters&& value) { m_runCommandParametersHasBeenSet = true; m_runCommandParameters = value; }

    /**
     * <zonbook> <simpara>Parameters used when you are using the rule to invoke Amazon
     * EC2 Run Command.</simpara> </zonbook> <xhtml> <p>Parameters used when you are
     * using the rule to invoke Amazon EC2 Run Command.</p> </xhtml>
     */
    inline Target& WithRunCommandParameters(const RunCommandParameters& value) { SetRunCommandParameters(value); return *this;}

    /**
     * <zonbook> <simpara>Parameters used when you are using the rule to invoke Amazon
     * EC2 Run Command.</simpara> </zonbook> <xhtml> <p>Parameters used when you are
     * using the rule to invoke Amazon EC2 Run Command.</p> </xhtml>
     */
    inline Target& WithRunCommandParameters(RunCommandParameters&& value) { SetRunCommandParameters(value); return *this;}

    /**
     * <zonbook> <simpara>Contains the Amazon ECS task definition and task count to be
     * used, if the event target is an Amazon ECS task. For more information about
     * Amazon ECS tasks, see <ulink type="documentation"
     * url="AmazonECS/latest/developerguide/task_defintions.html">Task Definitions
     * </ulink> in the <emphasis>Amazon EC2 Container Service Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>Contains the Amazon ECS task
     * definition and task count to be used, if the event target is an Amazon ECS task.
     * For more information about Amazon ECS tasks, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     * </xhtml>
     */
    inline const EcsParameters& GetEcsParameters() const{ return m_ecsParameters; }

    /**
     * <zonbook> <simpara>Contains the Amazon ECS task definition and task count to be
     * used, if the event target is an Amazon ECS task. For more information about
     * Amazon ECS tasks, see <ulink type="documentation"
     * url="AmazonECS/latest/developerguide/task_defintions.html">Task Definitions
     * </ulink> in the <emphasis>Amazon EC2 Container Service Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>Contains the Amazon ECS task
     * definition and task count to be used, if the event target is an Amazon ECS task.
     * For more information about Amazon ECS tasks, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     * </xhtml>
     */
    inline void SetEcsParameters(const EcsParameters& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = value; }

    /**
     * <zonbook> <simpara>Contains the Amazon ECS task definition and task count to be
     * used, if the event target is an Amazon ECS task. For more information about
     * Amazon ECS tasks, see <ulink type="documentation"
     * url="AmazonECS/latest/developerguide/task_defintions.html">Task Definitions
     * </ulink> in the <emphasis>Amazon EC2 Container Service Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>Contains the Amazon ECS task
     * definition and task count to be used, if the event target is an Amazon ECS task.
     * For more information about Amazon ECS tasks, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     * </xhtml>
     */
    inline void SetEcsParameters(EcsParameters&& value) { m_ecsParametersHasBeenSet = true; m_ecsParameters = value; }

    /**
     * <zonbook> <simpara>Contains the Amazon ECS task definition and task count to be
     * used, if the event target is an Amazon ECS task. For more information about
     * Amazon ECS tasks, see <ulink type="documentation"
     * url="AmazonECS/latest/developerguide/task_defintions.html">Task Definitions
     * </ulink> in the <emphasis>Amazon EC2 Container Service Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>Contains the Amazon ECS task
     * definition and task count to be used, if the event target is an Amazon ECS task.
     * For more information about Amazon ECS tasks, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     * </xhtml>
     */
    inline Target& WithEcsParameters(const EcsParameters& value) { SetEcsParameters(value); return *this;}

    /**
     * <zonbook> <simpara>Contains the Amazon ECS task definition and task count to be
     * used, if the event target is an Amazon ECS task. For more information about
     * Amazon ECS tasks, see <ulink type="documentation"
     * url="AmazonECS/latest/developerguide/task_defintions.html">Task Definitions
     * </ulink> in the <emphasis>Amazon EC2 Container Service Developer
     * Guide</emphasis>.</simpara> </zonbook> <xhtml> <p>Contains the Amazon ECS task
     * definition and task count to be used, if the event target is an Amazon ECS task.
     * For more information about Amazon ECS tasks, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_defintions.html">Task
     * Definitions </a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     * </xhtml>
     */
    inline Target& WithEcsParameters(EcsParameters&& value) { SetEcsParameters(value); return *this;}

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
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
