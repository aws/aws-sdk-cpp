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
#include <aws/lambda/model/VpcConfig.h>
#include <aws/lambda/model/Environment.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/DeadLetterConfig.h>
#include <aws/lambda/model/TracingConfig.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API UpdateFunctionConfigurationRequest : public LambdaRequest
  {
  public:
    UpdateFunctionConfigurationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFunctionConfiguration"; }

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
    inline UpdateFunctionConfigurationRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

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
    inline UpdateFunctionConfigurationRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

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
    inline UpdateFunctionConfigurationRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when
     * it executes your function.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when
     * it executes your function.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when
     * it executes your function.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when
     * it executes your function.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when
     * it executes your function.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when
     * it executes your function.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when
     * it executes your function.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The function that Lambda calls to begin executing your function. For Node.js,
     * it is the <code>module-name.export</code> value in your function. </p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The function that Lambda calls to begin executing your function. For Node.js,
     * it is the <code>module-name.export</code> value in your function. </p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The function that Lambda calls to begin executing your function. For Node.js,
     * it is the <code>module-name.export</code> value in your function. </p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }

    /**
     * <p>The function that Lambda calls to begin executing your function. For Node.js,
     * it is the <code>module-name.export</code> value in your function. </p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The function that Lambda calls to begin executing your function. For Node.js,
     * it is the <code>module-name.export</code> value in your function. </p>
     */
    inline UpdateFunctionConfigurationRequest& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The function that Lambda calls to begin executing your function. For Node.js,
     * it is the <code>module-name.export</code> value in your function. </p>
     */
    inline UpdateFunctionConfigurationRequest& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The function that Lambda calls to begin executing your function. For Node.js,
     * it is the <code>module-name.export</code> value in your function. </p>
     */
    inline UpdateFunctionConfigurationRequest& WithHandler(const char* value) { SetHandler(value); return *this;}


    /**
     * <p>A short user-defined function description. AWS Lambda does not use this
     * value. Assign a meaningful description as you see fit.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short user-defined function description. AWS Lambda does not use this
     * value. Assign a meaningful description as you see fit.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short user-defined function description. AWS Lambda does not use this
     * value. Assign a meaningful description as you see fit.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A short user-defined function description. AWS Lambda does not use this
     * value. Assign a meaningful description as you see fit.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short user-defined function description. AWS Lambda does not use this
     * value. Assign a meaningful description as you see fit.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short user-defined function description. AWS Lambda does not use this
     * value. Assign a meaningful description as you see fit.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A short user-defined function description. AWS Lambda does not use this
     * value. Assign a meaningful description as you see fit.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateFunctionConfigurationRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The amount of memory, in MB, your Lambda function is given. AWS Lambda uses
     * this memory size to infer the amount of CPU allocated to your function. Your
     * function use-case determines your CPU and memory requirements. For example, a
     * database operation might need less memory compared to an image processing
     * function. The default value is 128 MB. The value must be a multiple of 64
     * MB.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The amount of memory, in MB, your Lambda function is given. AWS Lambda uses
     * this memory size to infer the amount of CPU allocated to your function. Your
     * function use-case determines your CPU and memory requirements. For example, a
     * database operation might need less memory compared to an image processing
     * function. The default value is 128 MB. The value must be a multiple of 64
     * MB.</p>
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * <p>The amount of memory, in MB, your Lambda function is given. AWS Lambda uses
     * this memory size to infer the amount of CPU allocated to your function. Your
     * function use-case determines your CPU and memory requirements. For example, a
     * database operation might need less memory compared to an image processing
     * function. The default value is 128 MB. The value must be a multiple of 64
     * MB.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * <p>Specify security groups and subnets in a VPC to which your Lambda function
     * needs access.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>Specify security groups and subnets in a VPC to which your Lambda function
     * needs access.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>Specify security groups and subnets in a VPC to which your Lambda function
     * needs access.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>Specify security groups and subnets in a VPC to which your Lambda function
     * needs access.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>Specify security groups and subnets in a VPC to which your Lambda function
     * needs access.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The parent object that contains your environment's configuration
     * settings.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The parent object that contains your environment's configuration
     * settings.</p>
     */
    inline void SetEnvironment(const Environment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The parent object that contains your environment's configuration
     * settings.</p>
     */
    inline void SetEnvironment(Environment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The parent object that contains your environment's configuration
     * settings.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The parent object that contains your environment's configuration
     * settings.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}


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
    inline UpdateFunctionConfigurationRequest& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime version for the function.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>.</p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>.</p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }

    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>A dead letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/dlq.html">Dead Letter
     * Queues</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If you elect to use the AWS Lambda default service key,
     * pass in an empty string ("") for this parameter.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If you elect to use the AWS Lambda default service key,
     * pass in an empty string ("") for this parameter.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If you elect to use the AWS Lambda default service key,
     * pass in an empty string ("") for this parameter.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If you elect to use the AWS Lambda default service key,
     * pass in an empty string ("") for this parameter.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If you elect to use the AWS Lambda default service key,
     * pass in an empty string ("") for this parameter.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If you elect to use the AWS Lambda default service key,
     * pass in an empty string ("") for this parameter.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If you elect to use the AWS Lambda default service key,
     * pass in an empty string ("") for this parameter.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}


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
    inline UpdateFunctionConfigurationRequest& WithTracingConfig(const TracingConfig& value) { SetTracingConfig(value); return *this;}

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with AWS X-Ray.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithTracingConfig(TracingConfig&& value) { SetTracingConfig(std::move(value)); return *this;}


    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>An optional value you can use to ensure you are updating the latest update of
     * the function version or alias. If the <code>RevisionID</code> you pass doesn't
     * match the latest <code>RevisionId</code> of the function or alias, it will fail
     * with an error message, advising you to retrieve the latest function version or
     * alias <code>RevisionID</code> using either <a>GetFunction</a> or
     * <a>GetAlias</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_handler;
    bool m_handlerHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;

    int m_memorySize;
    bool m_memorySizeHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    Environment m_environment;
    bool m_environmentHasBeenSet;

    Runtime m_runtime;
    bool m_runtimeHasBeenSet;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet;

    TracingConfig m_tracingConfig;
    bool m_tracingConfigHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
