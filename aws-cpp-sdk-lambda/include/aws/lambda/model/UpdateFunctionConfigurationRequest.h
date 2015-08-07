/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /*
  */
  class AWS_LAMBDA_API UpdateFunctionConfigurationRequest : public LambdaRequest
  {
  public:
    UpdateFunctionConfigurationRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /*
     <p>The name of the Lambda function.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    /*
     <p>The name of the Lambda function.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /*
     <p>The name of the Lambda function.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /*
     <p>The name of the Lambda function.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline UpdateFunctionConfigurationRequest&  WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /*
     <p>The name of the Lambda function.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline UpdateFunctionConfigurationRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when it executes your function. </p>
    */
    inline const Aws::String& GetRole() const{ return m_role; }
    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when it executes your function. </p>
    */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when it executes your function. </p>
    */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when it executes your function. </p>
    */
    inline UpdateFunctionConfigurationRequest&  WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the IAM role that Lambda will assume when it executes your function. </p>
    */
    inline UpdateFunctionConfigurationRequest& WithRole(const char* value) { SetRole(value); return *this;}

    /*
     <p>The function that Lambda calls to begin executing your function. For Node.js, it is the <i>module-name.export</i> value in your function. </p>
    */
    inline const Aws::String& GetHandler() const{ return m_handler; }
    /*
     <p>The function that Lambda calls to begin executing your function. For Node.js, it is the <i>module-name.export</i> value in your function. </p>
    */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /*
     <p>The function that Lambda calls to begin executing your function. For Node.js, it is the <i>module-name.export</i> value in your function. </p>
    */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /*
     <p>The function that Lambda calls to begin executing your function. For Node.js, it is the <i>module-name.export</i> value in your function. </p>
    */
    inline UpdateFunctionConfigurationRequest&  WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /*
     <p>The function that Lambda calls to begin executing your function. For Node.js, it is the <i>module-name.export</i> value in your function. </p>
    */
    inline UpdateFunctionConfigurationRequest& WithHandler(const char* value) { SetHandler(value); return *this;}

    /*
     <p>A short user-defined function description. AWS Lambda does not use this value. Assign a meaningful description as you see fit.</p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }
    /*
     <p>A short user-defined function description. AWS Lambda does not use this value. Assign a meaningful description as you see fit.</p>
    */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p>A short user-defined function description. AWS Lambda does not use this value. Assign a meaningful description as you see fit.</p>
    */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /*
     <p>A short user-defined function description. AWS Lambda does not use this value. Assign a meaningful description as you see fit.</p>
    */
    inline UpdateFunctionConfigurationRequest&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p>A short user-defined function description. AWS Lambda does not use this value. Assign a meaningful description as you see fit.</p>
    */
    inline UpdateFunctionConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p>The function execution time at which AWS Lambda should terminate the function. Because the execution time has cost implications, we recommend you set this value based on your expected execution time. The default is 3 seconds. </p>
    */
    inline long GetTimeout() const{ return m_timeout; }
    /*
     <p>The function execution time at which AWS Lambda should terminate the function. Because the execution time has cost implications, we recommend you set this value based on your expected execution time. The default is 3 seconds. </p>
    */
    inline void SetTimeout(long value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /*
     <p>The function execution time at which AWS Lambda should terminate the function. Because the execution time has cost implications, we recommend you set this value based on your expected execution time. The default is 3 seconds. </p>
    */
    inline UpdateFunctionConfigurationRequest&  WithTimeout(long value) { SetTimeout(value); return *this;}

    /*
     <p>The amount of memory, in MB, your Lambda function is given. AWS Lambda uses this memory size to infer the amount of CPU allocated to your function. Your function use-case determines your CPU and memory requirements. For example, a database operation might need less memory compared to an image processing function. The default value is 128 MB. The value must be a multiple of 64 MB.</p>
    */
    inline long GetMemorySize() const{ return m_memorySize; }
    /*
     <p>The amount of memory, in MB, your Lambda function is given. AWS Lambda uses this memory size to infer the amount of CPU allocated to your function. Your function use-case determines your CPU and memory requirements. For example, a database operation might need less memory compared to an image processing function. The default value is 128 MB. The value must be a multiple of 64 MB.</p>
    */
    inline void SetMemorySize(long value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /*
     <p>The amount of memory, in MB, your Lambda function is given. AWS Lambda uses this memory size to infer the amount of CPU allocated to your function. Your function use-case determines your CPU and memory requirements. For example, a database operation might need less memory compared to an image processing function. The default value is 128 MB. The value must be a multiple of 64 MB.</p>
    */
    inline UpdateFunctionConfigurationRequest&  WithMemorySize(long value) { SetMemorySize(value); return *this;}

    /*
     <p>Specifies Lambda function version to update. If you specify an ARN with version information as the <code>FunctionName</code>, you either don't specify this parameter at all or you must specify the same version that you provided in the <code>FunctionName</code>. To update the default version of a function, do not include version in the function name ARN and do not set this parameter. </p>
    */
    inline const Aws::String& GetVersion() const{ return m_version; }
    /*
     <p>Specifies Lambda function version to update. If you specify an ARN with version information as the <code>FunctionName</code>, you either don't specify this parameter at all or you must specify the same version that you provided in the <code>FunctionName</code>. To update the default version of a function, do not include version in the function name ARN and do not set this parameter. </p>
    */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /*
     <p>Specifies Lambda function version to update. If you specify an ARN with version information as the <code>FunctionName</code>, you either don't specify this parameter at all or you must specify the same version that you provided in the <code>FunctionName</code>. To update the default version of a function, do not include version in the function name ARN and do not set this parameter. </p>
    */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /*
     <p>Specifies Lambda function version to update. If you specify an ARN with version information as the <code>FunctionName</code>, you either don't specify this parameter at all or you must specify the same version that you provided in the <code>FunctionName</code>. To update the default version of a function, do not include version in the function name ARN and do not set this parameter. </p>
    */
    inline UpdateFunctionConfigurationRequest&  WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /*
     <p>Specifies Lambda function version to update. If you specify an ARN with version information as the <code>FunctionName</code>, you either don't specify this parameter at all or you must specify the same version that you provided in the <code>FunctionName</code>. To update the default version of a function, do not include version in the function name ARN and do not set this parameter. </p>
    */
    inline UpdateFunctionConfigurationRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

    /*
     <p>Modifies the default function version. If current default version is 1 and you set this parameter to 2, the default version of your Lambda function will be 2. You can use the <code>UpdateFunctionConfiguration</code> to either update the default version value or update other configuration parameters of the default version, but not both. If you are updating configuration parameters for a specific version, you can set that version to be the default version by setting this parameter to the same version. For example, if you are updating configuration for version 1 of a Lambda function, this parameter can be either 1 or null. </p>
    */
    inline const Aws::String& GetDefaultVersion() const{ return m_defaultVersion; }
    /*
     <p>Modifies the default function version. If current default version is 1 and you set this parameter to 2, the default version of your Lambda function will be 2. You can use the <code>UpdateFunctionConfiguration</code> to either update the default version value or update other configuration parameters of the default version, but not both. If you are updating configuration parameters for a specific version, you can set that version to be the default version by setting this parameter to the same version. For example, if you are updating configuration for version 1 of a Lambda function, this parameter can be either 1 or null. </p>
    */
    inline void SetDefaultVersion(const Aws::String& value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /*
     <p>Modifies the default function version. If current default version is 1 and you set this parameter to 2, the default version of your Lambda function will be 2. You can use the <code>UpdateFunctionConfiguration</code> to either update the default version value or update other configuration parameters of the default version, but not both. If you are updating configuration parameters for a specific version, you can set that version to be the default version by setting this parameter to the same version. For example, if you are updating configuration for version 1 of a Lambda function, this parameter can be either 1 or null. </p>
    */
    inline void SetDefaultVersion(const char* value) { m_defaultVersionHasBeenSet = true; m_defaultVersion.assign(value); }

    /*
     <p>Modifies the default function version. If current default version is 1 and you set this parameter to 2, the default version of your Lambda function will be 2. You can use the <code>UpdateFunctionConfiguration</code> to either update the default version value or update other configuration parameters of the default version, but not both. If you are updating configuration parameters for a specific version, you can set that version to be the default version by setting this parameter to the same version. For example, if you are updating configuration for version 1 of a Lambda function, this parameter can be either 1 or null. </p>
    */
    inline UpdateFunctionConfigurationRequest&  WithDefaultVersion(const Aws::String& value) { SetDefaultVersion(value); return *this;}

    /*
     <p>Modifies the default function version. If current default version is 1 and you set this parameter to 2, the default version of your Lambda function will be 2. You can use the <code>UpdateFunctionConfiguration</code> to either update the default version value or update other configuration parameters of the default version, but not both. If you are updating configuration parameters for a specific version, you can set that version to be the default version by setting this parameter to the same version. For example, if you are updating configuration for version 1 of a Lambda function, this parameter can be either 1 or null. </p>
    */
    inline UpdateFunctionConfigurationRequest& WithDefaultVersion(const char* value) { SetDefaultVersion(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_role;
    bool m_roleHasBeenSet;
    Aws::String m_handler;
    bool m_handlerHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    long m_timeout;
    bool m_timeoutHasBeenSet;
    long m_memorySize;
    bool m_memorySizeHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::String m_defaultVersion;
    bool m_defaultVersionHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
