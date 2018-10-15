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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/FunctionCode.h>
#include <aws/lambda/model/VpcConfig.h>
#include <aws/lambda/model/DeadLetterConfig.h>
#include <aws/lambda/model/Environment.h>
#include <aws/lambda/model/TracingConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API CreateFunctionRequest : public LambdaRequest
  {
  public:
    CreateFunctionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFunction"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline CreateFunctionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline CreateFunctionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline CreateFunctionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The runtime version for the function.</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime version for the function.</p>
     */
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtime version for the function.</p>
     */
    inline void SetRuntime(Runtime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>The runtime version for the function.</p>
     */
    inline CreateFunctionRequest& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime version for the function.</p>
     */
    inline CreateFunctionRequest& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
     * role</a>.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
     * role</a>.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
     * role</a>.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
     * role</a>.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
     * role</a>.</p>
     */
    inline CreateFunctionRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
     * role</a>.</p>
     */
    inline CreateFunctionRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
     * role</a>.</p>
     */
    inline CreateFunctionRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The name of the method within your code that Lambda calls to execute your
     * function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model-v2.html">Programming
     * Model</a>.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The name of the method within your code that Lambda calls to execute your
     * function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model-v2.html">Programming
     * Model</a>.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The name of the method within your code that Lambda calls to execute your
     * function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model-v2.html">Programming
     * Model</a>.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }

    /**
     * <p>The name of the method within your code that Lambda calls to execute your
     * function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model-v2.html">Programming
     * Model</a>.</p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The name of the method within your code that Lambda calls to execute your
     * function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model-v2.html">Programming
     * Model</a>.</p>
     */
    inline CreateFunctionRequest& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The name of the method within your code that Lambda calls to execute your
     * function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model-v2.html">Programming
     * Model</a>.</p>
     */
    inline CreateFunctionRequest& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The name of the method within your code that Lambda calls to execute your
     * function. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/programming-model-v2.html">Programming
     * Model</a>.</p>
     */
    inline CreateFunctionRequest& WithHandler(const char* value) { SetHandler(value); return *this;}


    /**
     * <p>The code for the function.</p>
     */
    inline const FunctionCode& GetCode() const{ return m_code; }

    /**
     * <p>The code for the function.</p>
     */
    inline void SetCode(const FunctionCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code for the function.</p>
     */
    inline void SetCode(FunctionCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code for the function.</p>
     */
    inline CreateFunctionRequest& WithCode(const FunctionCode& value) { SetCode(value); return *this;}

    /**
     * <p>The code for the function.</p>
     */
    inline CreateFunctionRequest& WithCode(FunctionCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A description of the function.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the function.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the function.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the function.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the function.</p>
     */
    inline CreateFunctionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the function.</p>
     */
    inline CreateFunctionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the function.</p>
     */
    inline CreateFunctionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The amount of time that Lambda allows a function to run before terminating
     * it. The default is 3 seconds. The maximum allowed value is 900 seconds.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time that Lambda allows a function to run before terminating
     * it. The default is 3 seconds. The maximum allowed value is 900 seconds.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The amount of time that Lambda allows a function to run before terminating
     * it. The default is 3 seconds. The maximum allowed value is 900 seconds.</p>
     */
    inline CreateFunctionRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The amount of memory that your function has access to. Increasing the
     * function's memory also increases it's CPU allocation. The default value is 128
     * MB. The value must be a multiple of 64 MB.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The amount of memory that your function has access to. Increasing the
     * function's memory also increases it's CPU allocation. The default value is 128
     * MB. The value must be a multiple of 64 MB.</p>
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * <p>The amount of memory that your function has access to. Increasing the
     * function's memory also increases it's CPU allocation. The default value is 128
     * MB. The value must be a multiple of 64 MB.</p>
     */
    inline CreateFunctionRequest& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * <p>Set to true to publish the first version of the function during creation.</p>
     */
    inline bool GetPublish() const{ return m_publish; }

    /**
     * <p>Set to true to publish the first version of the function during creation.</p>
     */
    inline void SetPublish(bool value) { m_publishHasBeenSet = true; m_publish = value; }

    /**
     * <p>Set to true to publish the first version of the function during creation.</p>
     */
    inline CreateFunctionRequest& WithPublish(bool value) { SetPublish(value); return *this;}


    /**
     * <p>If your Lambda function accesses resources in a VPC, you provide this
     * parameter identifying the list of security group IDs and subnet IDs. These must
     * belong to the same VPC. You must provide at least one security group and one
     * subnet ID.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>If your Lambda function accesses resources in a VPC, you provide this
     * parameter identifying the list of security group IDs and subnet IDs. These must
     * belong to the same VPC. You must provide at least one security group and one
     * subnet ID.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>If your Lambda function accesses resources in a VPC, you provide this
     * parameter identifying the list of security group IDs and subnet IDs. These must
     * belong to the same VPC. You must provide at least one security group and one
     * subnet ID.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>If your Lambda function accesses resources in a VPC, you provide this
     * parameter identifying the list of security group IDs and subnet IDs. These must
     * belong to the same VPC. You must provide at least one security group and one
     * subnet ID.</p>
     */
    inline CreateFunctionRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>If your Lambda function accesses resources in a VPC, you provide this
     * parameter identifying the list of security group IDs and subnet IDs. These must
     * belong to the same VPC. You must provide at least one security group and one
     * subnet ID.</p>
     */
    inline CreateFunctionRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>. </p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>. </p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>. </p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }

    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>. </p>
     */
    inline CreateFunctionRequest& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>. </p>
     */
    inline CreateFunctionRequest& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline void SetEnvironment(const Environment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline void SetEnvironment(Environment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline CreateFunctionRequest& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline CreateFunctionRequest& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The ARN of the KMS key used to encrypt your function's environment variables.
     * If not provided, AWS Lambda will use a default service key.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The ARN of the KMS key used to encrypt your function's environment variables.
     * If not provided, AWS Lambda will use a default service key.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The ARN of the KMS key used to encrypt your function's environment variables.
     * If not provided, AWS Lambda will use a default service key.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key used to encrypt your function's environment variables.
     * If not provided, AWS Lambda will use a default service key.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key used to encrypt your function's environment variables.
     * If not provided, AWS Lambda will use a default service key.</p>
     */
    inline CreateFunctionRequest& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key used to encrypt your function's environment variables.
     * If not provided, AWS Lambda will use a default service key.</p>
     */
    inline CreateFunctionRequest& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key used to encrypt your function's environment variables.
     * If not provided, AWS Lambda will use a default service key.</p>
     */
    inline CreateFunctionRequest& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}


    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with AWS X-Ray.</p>
     */
    inline const TracingConfig& GetTracingConfig() const{ return m_tracingConfig; }

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with AWS X-Ray.</p>
     */
    inline void SetTracingConfig(const TracingConfig& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = value; }

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with AWS X-Ray.</p>
     */
    inline void SetTracingConfig(TracingConfig&& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = std::move(value); }

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with AWS X-Ray.</p>
     */
    inline CreateFunctionRequest& WithTracingConfig(const TracingConfig& value) { SetTracingConfig(value); return *this;}

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with AWS X-Ray.</p>
     */
    inline CreateFunctionRequest& WithTracingConfig(TracingConfig&& value) { SetTracingConfig(std::move(value)); return *this;}


    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags (key-value pairs) assigned to the new function. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
     * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p>
     */
    inline CreateFunctionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Runtime m_runtime;
    bool m_runtimeHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_handler;
    bool m_handlerHasBeenSet;

    FunctionCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;

    int m_memorySize;
    bool m_memorySizeHasBeenSet;

    bool m_publish;
    bool m_publishHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet;

    Environment m_environment;
    bool m_environmentHasBeenSet;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet;

    TracingConfig m_tracingConfig;
    bool m_tracingConfigHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
