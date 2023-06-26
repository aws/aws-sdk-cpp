/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/ImageConfig.h>
#include <aws/lambda/model/EphemeralStorage.h>
#include <aws/lambda/model/SnapStart.h>
#include <aws/lambda/model/FileSystemConfig.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class UpdateFunctionConfigurationRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API UpdateFunctionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFunctionConfiguration"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> – <code>my-function</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }

    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }

    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithHandler(const char* value) { SetHandler(value); return *this;}


    /**
     * <p>A description of the function.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the function.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

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
    inline UpdateFunctionConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the function.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the function.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The amount of time (in seconds) that Lambda allows a function to run before
     * stopping it. The default is 3 seconds. The maximum allowed value is 900 seconds.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/runtimes-context.html">Lambda
     * execution environment</a>.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time (in seconds) that Lambda allows a function to run before
     * stopping it. The default is 3 seconds. The maximum allowed value is 900 seconds.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/runtimes-context.html">Lambda
     * execution environment</a>.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The amount of time (in seconds) that Lambda allows a function to run before
     * stopping it. The default is 3 seconds. The maximum allowed value is 900 seconds.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/runtimes-context.html">Lambda
     * execution environment</a>.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The amount of time (in seconds) that Lambda allows a function to run before
     * stopping it. The default is 3 seconds. The maximum allowed value is 900 seconds.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/runtimes-context.html">Lambda
     * execution environment</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The amount of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-function-common.html#configuration-memory-console">memory
     * available to the function</a> at runtime. Increasing the function memory also
     * increases its CPU allocation. The default value is 128 MB. The value can be any
     * multiple of 1 MB.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The amount of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-function-common.html#configuration-memory-console">memory
     * available to the function</a> at runtime. Increasing the function memory also
     * increases its CPU allocation. The default value is 128 MB. The value can be any
     * multiple of 1 MB.</p>
     */
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }

    /**
     * <p>The amount of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-function-common.html#configuration-memory-console">memory
     * available to the function</a> at runtime. Increasing the function memory also
     * increases its CPU allocation. The default value is 128 MB. The value can be any
     * multiple of 1 MB.</p>
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * <p>The amount of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-function-common.html#configuration-memory-console">memory
     * available to the function</a> at runtime. Increasing the function memory also
     * increases its CPU allocation. The default value is 128 MB. The value can be any
     * multiple of 1 MB.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * <p>For network connectivity to Amazon Web Services resources in a VPC, specify a
     * list of security groups and subnets in the VPC. When you connect a function to a
     * VPC, it can access resources and the internet only through that VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">Configuring
     * a Lambda function to access resources in a VPC</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>For network connectivity to Amazon Web Services resources in a VPC, specify a
     * list of security groups and subnets in the VPC. When you connect a function to a
     * VPC, it can access resources and the internet only through that VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">Configuring
     * a Lambda function to access resources in a VPC</a>.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>For network connectivity to Amazon Web Services resources in a VPC, specify a
     * list of security groups and subnets in the VPC. When you connect a function to a
     * VPC, it can access resources and the internet only through that VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">Configuring
     * a Lambda function to access resources in a VPC</a>.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>For network connectivity to Amazon Web Services resources in a VPC, specify a
     * list of security groups and subnets in the VPC. When you connect a function to a
     * VPC, it can access resources and the internet only through that VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">Configuring
     * a Lambda function to access resources in a VPC</a>.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>For network connectivity to Amazon Web Services resources in a VPC, specify a
     * list of security groups and subnets in the VPC. When you connect a function to a
     * VPC, it can access resources and the internet only through that VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">Configuring
     * a Lambda function to access resources in a VPC</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>For network connectivity to Amazon Web Services resources in a VPC, specify a
     * list of security groups and subnets in the VPC. When you connect a function to a
     * VPC, it can access resources and the internet only through that VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">Configuring
     * a Lambda function to access resources in a VPC</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

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
    inline UpdateFunctionConfigurationRequest& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The identifier of the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime</a>.
     * Runtime is required if the deployment package is a .zip file archive.</p> <p>The
     * following list includes deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The identifier of the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime</a>.
     * Runtime is required if the deployment package is a .zip file archive.</p> <p>The
     * following list includes deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    /**
     * <p>The identifier of the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime</a>.
     * Runtime is required if the deployment package is a .zip file archive.</p> <p>The
     * following list includes deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The identifier of the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime</a>.
     * Runtime is required if the deployment package is a .zip file archive.</p> <p>The
     * following list includes deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline void SetRuntime(Runtime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>The identifier of the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime</a>.
     * Runtime is required if the deployment package is a .zip file archive.</p> <p>The
     * following list includes deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The identifier of the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime</a>.
     * Runtime is required if the deployment package is a .zip file archive.</p> <p>The
     * following list includes deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>A dead-letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-dlq">Dead-letter
     * queues</a>.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>A dead-letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-dlq">Dead-letter
     * queues</a>.</p>
     */
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }

    /**
     * <p>A dead-letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-dlq">Dead-letter
     * queues</a>.</p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>A dead-letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-dlq">Dead-letter
     * queues</a>.</p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }

    /**
     * <p>A dead-letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-dlq">Dead-letter
     * queues</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>A dead-letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-dlq">Dead-letter
     * queues</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, Lambda also uses this key is to encrypt your
     * function's snapshot. If you deploy your function using a container image, Lambda
     * also uses this key to encrypt your function when it's deployed. Note that this
     * is not the same key that's used to protect your container image in the Amazon
     * Elastic Container Registry (Amazon ECR). If you don't provide a customer managed
     * key, Lambda uses a default service key.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, Lambda also uses this key is to encrypt your
     * function's snapshot. If you deploy your function using a container image, Lambda
     * also uses this key to encrypt your function when it's deployed. Note that this
     * is not the same key that's used to protect your container image in the Amazon
     * Elastic Container Registry (Amazon ECR). If you don't provide a customer managed
     * key, Lambda uses a default service key.</p>
     */
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, Lambda also uses this key is to encrypt your
     * function's snapshot. If you deploy your function using a container image, Lambda
     * also uses this key to encrypt your function when it's deployed. Note that this
     * is not the same key that's used to protect your container image in the Amazon
     * Elastic Container Registry (Amazon ECR). If you don't provide a customer managed
     * key, Lambda uses a default service key.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, Lambda also uses this key is to encrypt your
     * function's snapshot. If you deploy your function using a container image, Lambda
     * also uses this key to encrypt your function when it's deployed. Note that this
     * is not the same key that's used to protect your container image in the Amazon
     * Elastic Container Registry (Amazon ECR). If you don't provide a customer managed
     * key, Lambda uses a default service key.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::move(value); }

    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, Lambda also uses this key is to encrypt your
     * function's snapshot. If you deploy your function using a container image, Lambda
     * also uses this key to encrypt your function when it's deployed. Note that this
     * is not the same key that's used to protect your container image in the Amazon
     * Elastic Container Registry (Amazon ECR). If you don't provide a customer managed
     * key, Lambda uses a default service key.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn.assign(value); }

    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, Lambda also uses this key is to encrypt your
     * function's snapshot. If you deploy your function using a container image, Lambda
     * also uses this key to encrypt your function when it's deployed. Note that this
     * is not the same key that's used to protect your container image in the Amazon
     * Elastic Container Registry (Amazon ECR). If you don't provide a customer managed
     * key, Lambda uses a default service key.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, Lambda also uses this key is to encrypt your
     * function's snapshot. If you deploy your function using a container image, Lambda
     * also uses this key to encrypt your function when it's deployed. Note that this
     * is not the same key that's used to protect your container image in the Amazon
     * Elastic Container Registry (Amazon ECR). If you don't provide a customer managed
     * key, Lambda uses a default service key.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, Lambda also uses this key is to encrypt your
     * function's snapshot. If you deploy your function using a container image, Lambda
     * also uses this key to encrypt your function when it's deployed. Note that this
     * is not the same key that's used to protect your container image in the Amazon
     * Elastic Container Registry (Amazon ECR). If you don't provide a customer managed
     * key, Lambda uses a default service key.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}


    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/services-xray.html">X-Ray</a>.</p>
     */
    inline const TracingConfig& GetTracingConfig() const{ return m_tracingConfig; }

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/services-xray.html">X-Ray</a>.</p>
     */
    inline bool TracingConfigHasBeenSet() const { return m_tracingConfigHasBeenSet; }

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/services-xray.html">X-Ray</a>.</p>
     */
    inline void SetTracingConfig(const TracingConfig& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = value; }

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/services-xray.html">X-Ray</a>.</p>
     */
    inline void SetTracingConfig(TracingConfig&& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = std::move(value); }

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/services-xray.html">X-Ray</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithTracingConfig(const TracingConfig& value) { SetTracingConfig(value); return *this;}

    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/services-xray.html">X-Ray</a>.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithTracingConfig(TracingConfig&& value) { SetTracingConfig(std::move(value)); return *this;}


    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>Update the function only if the revision ID matches the ID that's specified.
     * Use this option to avoid modifying a function that has changed since you last
     * read it.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayers() const{ return m_layers; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline void SetLayers(const Aws::Vector<Aws::String>& value) { m_layersHasBeenSet = true; m_layers = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline void SetLayers(Aws::Vector<Aws::String>&& value) { m_layersHasBeenSet = true; m_layers = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithLayers(const Aws::Vector<Aws::String>& value) { SetLayers(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithLayers(Aws::Vector<Aws::String>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline UpdateFunctionConfigurationRequest& AddLayers(const Aws::String& value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline UpdateFunctionConfigurationRequest& AddLayers(Aws::String&& value) { m_layersHasBeenSet = true; m_layers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline UpdateFunctionConfigurationRequest& AddLayers(const char* value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }


    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline const Aws::Vector<FileSystemConfig>& GetFileSystemConfigs() const{ return m_fileSystemConfigs; }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline bool FileSystemConfigsHasBeenSet() const { return m_fileSystemConfigsHasBeenSet; }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline void SetFileSystemConfigs(const Aws::Vector<FileSystemConfig>& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs = value; }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline void SetFileSystemConfigs(Aws::Vector<FileSystemConfig>&& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs = std::move(value); }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithFileSystemConfigs(const Aws::Vector<FileSystemConfig>& value) { SetFileSystemConfigs(value); return *this;}

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithFileSystemConfigs(Aws::Vector<FileSystemConfig>&& value) { SetFileSystemConfigs(std::move(value)); return *this;}

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline UpdateFunctionConfigurationRequest& AddFileSystemConfigs(const FileSystemConfig& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs.push_back(value); return *this; }

    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline UpdateFunctionConfigurationRequest& AddFileSystemConfigs(FileSystemConfig&& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/images-parms.html">Container
     * image configuration values</a> that override the values in the container image
     * Docker file.</p>
     */
    inline const ImageConfig& GetImageConfig() const{ return m_imageConfig; }

    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/images-parms.html">Container
     * image configuration values</a> that override the values in the container image
     * Docker file.</p>
     */
    inline bool ImageConfigHasBeenSet() const { return m_imageConfigHasBeenSet; }

    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/images-parms.html">Container
     * image configuration values</a> that override the values in the container image
     * Docker file.</p>
     */
    inline void SetImageConfig(const ImageConfig& value) { m_imageConfigHasBeenSet = true; m_imageConfig = value; }

    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/images-parms.html">Container
     * image configuration values</a> that override the values in the container image
     * Docker file.</p>
     */
    inline void SetImageConfig(ImageConfig&& value) { m_imageConfigHasBeenSet = true; m_imageConfig = std::move(value); }

    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/images-parms.html">Container
     * image configuration values</a> that override the values in the container image
     * Docker file.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithImageConfig(const ImageConfig& value) { SetImageConfig(value); return *this;}

    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/images-parms.html">Container
     * image configuration values</a> that override the values in the container image
     * Docker file.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithImageConfig(ImageConfig&& value) { SetImageConfig(std::move(value)); return *this;}


    /**
     * <p>The size of the function's <code>/tmp</code> directory in MB. The default
     * value is 512, but can be any whole number between 512 and 10,240 MB.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p>The size of the function's <code>/tmp</code> directory in MB. The default
     * value is 512, but can be any whole number between 512 and 10,240 MB.</p>
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p>The size of the function's <code>/tmp</code> directory in MB. The default
     * value is 512, but can be any whole number between 512 and 10,240 MB.</p>
     */
    inline void SetEphemeralStorage(const EphemeralStorage& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p>The size of the function's <code>/tmp</code> directory in MB. The default
     * value is 512, but can be any whole number between 512 and 10,240 MB.</p>
     */
    inline void SetEphemeralStorage(EphemeralStorage&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::move(value); }

    /**
     * <p>The size of the function's <code>/tmp</code> directory in MB. The default
     * value is 512, but can be any whole number between 512 and 10,240 MB.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithEphemeralStorage(const EphemeralStorage& value) { SetEphemeralStorage(value); return *this;}

    /**
     * <p>The size of the function's <code>/tmp</code> directory in MB. The default
     * value is 512, but can be any whole number between 512 and 10,240 MB.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithEphemeralStorage(EphemeralStorage&& value) { SetEphemeralStorage(std::move(value)); return *this;}


    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">SnapStart</a>
     * setting.</p>
     */
    inline const SnapStart& GetSnapStart() const{ return m_snapStart; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">SnapStart</a>
     * setting.</p>
     */
    inline bool SnapStartHasBeenSet() const { return m_snapStartHasBeenSet; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">SnapStart</a>
     * setting.</p>
     */
    inline void SetSnapStart(const SnapStart& value) { m_snapStartHasBeenSet = true; m_snapStart = value; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">SnapStart</a>
     * setting.</p>
     */
    inline void SetSnapStart(SnapStart&& value) { m_snapStartHasBeenSet = true; m_snapStart = std::move(value); }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">SnapStart</a>
     * setting.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithSnapStart(const SnapStart& value) { SetSnapStart(value); return *this;}

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">SnapStart</a>
     * setting.</p>
     */
    inline UpdateFunctionConfigurationRequest& WithSnapStart(SnapStart&& value) { SetSnapStart(std::move(value)); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_handler;
    bool m_handlerHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    int m_memorySize;
    bool m_memorySizeHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Environment m_environment;
    bool m_environmentHasBeenSet = false;

    Runtime m_runtime;
    bool m_runtimeHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet = false;

    TracingConfig m_tracingConfig;
    bool m_tracingConfigHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_layers;
    bool m_layersHasBeenSet = false;

    Aws::Vector<FileSystemConfig> m_fileSystemConfigs;
    bool m_fileSystemConfigsHasBeenSet = false;

    ImageConfig m_imageConfig;
    bool m_imageConfigHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    SnapStart m_snapStart;
    bool m_snapStartHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
