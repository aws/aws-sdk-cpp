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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/VpcConfig.h>
#include <aws/lambda/model/Environment.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/DeadLetterConfig.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API UpdateFunctionConfigurationRequest : public LambdaRequest
  {
  public:
    UpdateFunctionConfigurationRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Lambda function.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline UpdateFunctionConfigurationRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
     */
    inline UpdateFunctionConfigurationRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p> You can specify a function name (for
     * example, <code>Thumbnail</code>) or you can specify Amazon Resource Name (ARN)
     * of the function (for example,
     * <code>arn:aws:lambda:us-west-2:account-id:function:ThumbNail</code>). AWS Lambda
     * also allows you to specify a partial ARN (for example,
     * <code>account-id:Thumbnail</code>). Note that the length constraint applies only
     * to the ARN. If you specify only the function name, it is limited to 64 character
     * in length. </p>
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
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = value; }

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
    inline UpdateFunctionConfigurationRequest& WithRole(Aws::String&& value) { SetRole(value); return *this;}

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
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = value; }

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
    inline UpdateFunctionConfigurationRequest& WithHandler(Aws::String&& value) { SetHandler(value); return *this;}

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
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline UpdateFunctionConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A short user-defined function description. AWS Lambda does not use this
     * value. Assign a meaningful description as you see fit.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The function execution time at which AWS Lambda should terminate the
     * function. Because the execution time has cost implications, we recommend you set
     * this value based on your expected execution time. The default is 3 seconds.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The function execution time at which AWS Lambda should terminate the
     * function. Because the execution time has cost implications, we recommend you set
     * this value based on your expected execution time. The default is 3 seconds.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The function execution time at which AWS Lambda should terminate the
     * function. Because the execution time has cost implications, we recommend you set
     * this value based on your expected execution time. The default is 3 seconds.</p>
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

    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline UpdateFunctionConfigurationRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    
    inline UpdateFunctionConfigurationRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(value); return *this;}

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
    inline void SetEnvironment(Environment&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The parent object that contains your environment's configuration
     * settings.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The parent object that contains your environment's configuration
     * settings.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithEnvironment(Environment&& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p> <note> <p>You can no longer downgrade to the
     * v0.10.42 runtime version. This version will no longer be supported as of early
     * 2017.</p> </note>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p> <note> <p>You can no longer downgrade to the
     * v0.10.42 runtime version. This version will no longer be supported as of early
     * 2017.</p> </note>
     */
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p> <note> <p>You can no longer downgrade to the
     * v0.10.42 runtime version. This version will no longer be supported as of early
     * 2017.</p> </note>
     */
    inline void SetRuntime(Runtime&& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p> <note> <p>You can no longer downgrade to the
     * v0.10.42 runtime version. This version will no longer be supported as of early
     * 2017.</p> </note>
     */
    inline UpdateFunctionConfigurationRequest& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p> <note> <p>You can no longer downgrade to the
     * v0.10.42 runtime version. This version will no longer be supported as of early
     * 2017.</p> </note>
     */
    inline UpdateFunctionConfigurationRequest& WithRuntime(Runtime&& value) { SetRuntime(value); return *this;}

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic.</p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic.</p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(value); return *this;}

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
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

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
    inline UpdateFunctionConfigurationRequest& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If you elect to use the AWS Lambda default service key,
     * pass in an empty string ("") for this parameter.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}

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
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
