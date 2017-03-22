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
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/FunctionCode.h>
#include <aws/lambda/model/VpcConfig.h>
#include <aws/lambda/model/DeadLetterConfig.h>
#include <aws/lambda/model/Environment.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunctionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API CreateFunctionRequest : public LambdaRequest
  {
  public:
    CreateFunctionRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name you want to assign to the function you are uploading. The function
     * names appear in the console and are returned in the <a>ListFunctions</a> API.
     * Function names are used to specify functions to other AWS Lambda API operations,
     * such as <a>Invoke</a>. </p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name you want to assign to the function you are uploading. The function
     * names appear in the console and are returned in the <a>ListFunctions</a> API.
     * Function names are used to specify functions to other AWS Lambda API operations,
     * such as <a>Invoke</a>. </p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name you want to assign to the function you are uploading. The function
     * names appear in the console and are returned in the <a>ListFunctions</a> API.
     * Function names are used to specify functions to other AWS Lambda API operations,
     * such as <a>Invoke</a>. </p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name you want to assign to the function you are uploading. The function
     * names appear in the console and are returned in the <a>ListFunctions</a> API.
     * Function names are used to specify functions to other AWS Lambda API operations,
     * such as <a>Invoke</a>. </p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name you want to assign to the function you are uploading. The function
     * names appear in the console and are returned in the <a>ListFunctions</a> API.
     * Function names are used to specify functions to other AWS Lambda API operations,
     * such as <a>Invoke</a>. </p>
     */
    inline CreateFunctionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name you want to assign to the function you are uploading. The function
     * names appear in the console and are returned in the <a>ListFunctions</a> API.
     * Function names are used to specify functions to other AWS Lambda API operations,
     * such as <a>Invoke</a>. </p>
     */
    inline CreateFunctionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name you want to assign to the function you are uploading. The function
     * names appear in the console and are returned in the <a>ListFunctions</a> API.
     * Function names are used to specify functions to other AWS Lambda API operations,
     * such as <a>Invoke</a>. </p>
     */
    inline CreateFunctionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function you are uploading.</p> <p>To
     * use the Node.js runtime v4.3, set the value to "nodejs4.3". To use earlier
     * runtime (v0.10.42), set the value to "nodejs".</p> <note> <p>You can no longer
     * create functions using the v0.10.42 runtime version as of November, 2016.
     * Existing functions will be supported until early 2017, but we recommend you
     * migrate them to nodejs4.3 runtime version as soon as possible.</p> </note>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime environment for the Lambda function you are uploading.</p> <p>To
     * use the Node.js runtime v4.3, set the value to "nodejs4.3". To use earlier
     * runtime (v0.10.42), set the value to "nodejs".</p> <note> <p>You can no longer
     * create functions using the v0.10.42 runtime version as of November, 2016.
     * Existing functions will be supported until early 2017, but we recommend you
     * migrate them to nodejs4.3 runtime version as soon as possible.</p> </note>
     */
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function you are uploading.</p> <p>To
     * use the Node.js runtime v4.3, set the value to "nodejs4.3". To use earlier
     * runtime (v0.10.42), set the value to "nodejs".</p> <note> <p>You can no longer
     * create functions using the v0.10.42 runtime version as of November, 2016.
     * Existing functions will be supported until early 2017, but we recommend you
     * migrate them to nodejs4.3 runtime version as soon as possible.</p> </note>
     */
    inline void SetRuntime(Runtime&& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function you are uploading.</p> <p>To
     * use the Node.js runtime v4.3, set the value to "nodejs4.3". To use earlier
     * runtime (v0.10.42), set the value to "nodejs".</p> <note> <p>You can no longer
     * create functions using the v0.10.42 runtime version as of November, 2016.
     * Existing functions will be supported until early 2017, but we recommend you
     * migrate them to nodejs4.3 runtime version as soon as possible.</p> </note>
     */
    inline CreateFunctionRequest& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function you are uploading.</p> <p>To
     * use the Node.js runtime v4.3, set the value to "nodejs4.3". To use earlier
     * runtime (v0.10.42), set the value to "nodejs".</p> <note> <p>You can no longer
     * create functions using the v0.10.42 runtime version as of November, 2016.
     * Existing functions will be supported until early 2017, but we recommend you
     * migrate them to nodejs4.3 runtime version as soon as possible.</p> </note>
     */
    inline CreateFunctionRequest& WithRuntime(Runtime&& value) { SetRuntime(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS) resources.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
     * Lambda: How it Works</a>. </p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS) resources.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
     * Lambda: How it Works</a>. </p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS) resources.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
     * Lambda: How it Works</a>. </p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS) resources.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
     * Lambda: How it Works</a>. </p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS) resources.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
     * Lambda: How it Works</a>. </p>
     */
    inline CreateFunctionRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS) resources.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
     * Lambda: How it Works</a>. </p>
     */
    inline CreateFunctionRequest& WithRole(Aws::String&& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS) resources.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
     * Lambda: How it Works</a>. </p>
     */
    inline CreateFunctionRequest& WithRole(const char* value) { SetRole(value); return *this;}

    /**
     * <p>The function within your code that Lambda calls to begin execution. For
     * Node.js, it is the <i>module-name</i>.<i>export</i> value in your function. For
     * Java, it can be <code>package.class-name::handler</code> or
     * <code>package.class-name</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/java-programming-model-handler-types.html">Lambda
     * Function Handler (Java)</a>. </p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The function within your code that Lambda calls to begin execution. For
     * Node.js, it is the <i>module-name</i>.<i>export</i> value in your function. For
     * Java, it can be <code>package.class-name::handler</code> or
     * <code>package.class-name</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/java-programming-model-handler-types.html">Lambda
     * Function Handler (Java)</a>. </p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The function within your code that Lambda calls to begin execution. For
     * Node.js, it is the <i>module-name</i>.<i>export</i> value in your function. For
     * Java, it can be <code>package.class-name::handler</code> or
     * <code>package.class-name</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/java-programming-model-handler-types.html">Lambda
     * Function Handler (Java)</a>. </p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The function within your code that Lambda calls to begin execution. For
     * Node.js, it is the <i>module-name</i>.<i>export</i> value in your function. For
     * Java, it can be <code>package.class-name::handler</code> or
     * <code>package.class-name</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/java-programming-model-handler-types.html">Lambda
     * Function Handler (Java)</a>. </p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The function within your code that Lambda calls to begin execution. For
     * Node.js, it is the <i>module-name</i>.<i>export</i> value in your function. For
     * Java, it can be <code>package.class-name::handler</code> or
     * <code>package.class-name</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/java-programming-model-handler-types.html">Lambda
     * Function Handler (Java)</a>. </p>
     */
    inline CreateFunctionRequest& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The function within your code that Lambda calls to begin execution. For
     * Node.js, it is the <i>module-name</i>.<i>export</i> value in your function. For
     * Java, it can be <code>package.class-name::handler</code> or
     * <code>package.class-name</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/java-programming-model-handler-types.html">Lambda
     * Function Handler (Java)</a>. </p>
     */
    inline CreateFunctionRequest& WithHandler(Aws::String&& value) { SetHandler(value); return *this;}

    /**
     * <p>The function within your code that Lambda calls to begin execution. For
     * Node.js, it is the <i>module-name</i>.<i>export</i> value in your function. For
     * Java, it can be <code>package.class-name::handler</code> or
     * <code>package.class-name</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/java-programming-model-handler-types.html">Lambda
     * Function Handler (Java)</a>. </p>
     */
    inline CreateFunctionRequest& WithHandler(const char* value) { SetHandler(value); return *this;}

    /**
     * <p>The code for the Lambda function.</p>
     */
    inline const FunctionCode& GetCode() const{ return m_code; }

    /**
     * <p>The code for the Lambda function.</p>
     */
    inline void SetCode(const FunctionCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code for the Lambda function.</p>
     */
    inline void SetCode(FunctionCode&& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code for the Lambda function.</p>
     */
    inline CreateFunctionRequest& WithCode(const FunctionCode& value) { SetCode(value); return *this;}

    /**
     * <p>The code for the Lambda function.</p>
     */
    inline CreateFunctionRequest& WithCode(FunctionCode&& value) { SetCode(value); return *this;}

    /**
     * <p>A short, user-defined function description. Lambda does not use this value.
     * Assign a meaningful description as you see fit.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short, user-defined function description. Lambda does not use this value.
     * Assign a meaningful description as you see fit.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short, user-defined function description. Lambda does not use this value.
     * Assign a meaningful description as you see fit.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short, user-defined function description. Lambda does not use this value.
     * Assign a meaningful description as you see fit.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short, user-defined function description. Lambda does not use this value.
     * Assign a meaningful description as you see fit.</p>
     */
    inline CreateFunctionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short, user-defined function description. Lambda does not use this value.
     * Assign a meaningful description as you see fit.</p>
     */
    inline CreateFunctionRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A short, user-defined function description. Lambda does not use this value.
     * Assign a meaningful description as you see fit.</p>
     */
    inline CreateFunctionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The function execution time at which Lambda should terminate the function.
     * Because the execution time has cost implications, we recommend you set this
     * value based on your expected execution time. The default is 3 seconds.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The function execution time at which Lambda should terminate the function.
     * Because the execution time has cost implications, we recommend you set this
     * value based on your expected execution time. The default is 3 seconds.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The function execution time at which Lambda should terminate the function.
     * Because the execution time has cost implications, we recommend you set this
     * value based on your expected execution time. The default is 3 seconds.</p>
     */
    inline CreateFunctionRequest& WithTimeout(int value) { SetTimeout(value); return *this;}

    /**
     * <p>The amount of memory, in MB, your Lambda function is given. Lambda uses this
     * memory size to infer the amount of CPU and memory allocated to your function.
     * Your function use-case determines your CPU and memory requirements. For example,
     * a database operation might need less memory compared to an image processing
     * function. The default value is 128 MB. The value must be a multiple of 64
     * MB.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The amount of memory, in MB, your Lambda function is given. Lambda uses this
     * memory size to infer the amount of CPU and memory allocated to your function.
     * Your function use-case determines your CPU and memory requirements. For example,
     * a database operation might need less memory compared to an image processing
     * function. The default value is 128 MB. The value must be a multiple of 64
     * MB.</p>
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * <p>The amount of memory, in MB, your Lambda function is given. Lambda uses this
     * memory size to infer the amount of CPU and memory allocated to your function.
     * Your function use-case determines your CPU and memory requirements. For example,
     * a database operation might need less memory compared to an image processing
     * function. The default value is 128 MB. The value must be a multiple of 64
     * MB.</p>
     */
    inline CreateFunctionRequest& WithMemorySize(int value) { SetMemorySize(value); return *this;}

    /**
     * <p>This boolean parameter can be used to request AWS Lambda to create the Lambda
     * function and publish a version as an atomic operation.</p>
     */
    inline bool GetPublish() const{ return m_publish; }

    /**
     * <p>This boolean parameter can be used to request AWS Lambda to create the Lambda
     * function and publish a version as an atomic operation.</p>
     */
    inline void SetPublish(bool value) { m_publishHasBeenSet = true; m_publish = value; }

    /**
     * <p>This boolean parameter can be used to request AWS Lambda to create the Lambda
     * function and publish a version as an atomic operation.</p>
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
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

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
    inline CreateFunctionRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic. </p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic. </p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic. </p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic. </p>
     */
    inline CreateFunctionRequest& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>The parent object that contains the target Amazon Resource Name (ARN) of an
     * Amazon SQS queue or Amazon SNS topic. </p>
     */
    inline CreateFunctionRequest& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(value); return *this;}

    
    inline const Environment& GetEnvironment() const{ return m_environment; }

    
    inline void SetEnvironment(const Environment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    
    inline void SetEnvironment(Environment&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    
    inline CreateFunctionRequest& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    
    inline CreateFunctionRequest& WithEnvironment(Environment&& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If not provided, AWS Lambda will use a default service
     * key.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If not provided, AWS Lambda will use a default service
     * key.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If not provided, AWS Lambda will use a default service
     * key.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If not provided, AWS Lambda will use a default service
     * key.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If not provided, AWS Lambda will use a default service
     * key.</p>
     */
    inline CreateFunctionRequest& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If not provided, AWS Lambda will use a default service
     * key.</p>
     */
    inline CreateFunctionRequest& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt your function's
     * environment variables. If not provided, AWS Lambda will use a default service
     * key.</p>
     */
    inline CreateFunctionRequest& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}

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
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
