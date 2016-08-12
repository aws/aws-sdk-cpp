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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/VpcConfigResponse.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{
  /**
   * <p>A complex type that describes function metadata.</p>
   */
  class AWS_LAMBDA_API CreateFunctionResult
  {
  public:
    CreateFunctionResult();
    CreateFunctionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFunctionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionName = value; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionName = value; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionName.assign(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline CreateFunctionResult& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline CreateFunctionResult& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline CreateFunctionResult& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the function.</p>
     */
    inline CreateFunctionResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the function.</p>
     */
    inline CreateFunctionResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the function.</p>
     */
    inline CreateFunctionResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p>
     */
    inline void SetRuntime(const Runtime& value) { m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p>
     */
    inline void SetRuntime(Runtime&& value) { m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p>
     */
    inline CreateFunctionResult& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p> <p>To use the Node.js
     * runtime v4.3, set the value to "nodejs4.3". To use earlier runtime (v0.10.42),
     * set the value to "nodejs".</p>
     */
    inline CreateFunctionResult& WithRuntime(Runtime&& value) { SetRuntime(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS)
     * resources.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS)
     * resources.</p>
     */
    inline void SetRole(const Aws::String& value) { m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS)
     * resources.</p>
     */
    inline void SetRole(Aws::String&& value) { m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS)
     * resources.</p>
     */
    inline void SetRole(const char* value) { m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS)
     * resources.</p>
     */
    inline CreateFunctionResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS)
     * resources.</p>
     */
    inline CreateFunctionResult& WithRole(Aws::String&& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Lambda assumes when it
     * executes your function to access any other Amazon Web Services (AWS)
     * resources.</p>
     */
    inline CreateFunctionResult& WithRole(const char* value) { SetRole(value); return *this;}

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handler = value; }

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handler = value; }

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const char* value) { m_handler.assign(value); }

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline CreateFunctionResult& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline CreateFunctionResult& WithHandler(Aws::String&& value) { SetHandler(value); return *this;}

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline CreateFunctionResult& WithHandler(const char* value) { SetHandler(value); return *this;}

    /**
     * <p>The size, in bytes, of the function .zip file you uploaded.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size, in bytes, of the function .zip file you uploaded.</p>
     */
    inline void SetCodeSize(long long value) { m_codeSize = value; }

    /**
     * <p>The size, in bytes, of the function .zip file you uploaded.</p>
     */
    inline CreateFunctionResult& WithCodeSize(long long value) { SetCodeSize(value); return *this;}

    /**
     * <p>The user-provided description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The user-provided description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The user-provided description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The user-provided description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The user-provided description.</p>
     */
    inline CreateFunctionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The user-provided description.</p>
     */
    inline CreateFunctionResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The user-provided description.</p>
     */
    inline CreateFunctionResult& WithDescription(const char* value) { SetDescription(value); return *this;}

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
    inline void SetTimeout(int value) { m_timeout = value; }

    /**
     * <p>The function execution time at which Lambda should terminate the function.
     * Because the execution time has cost implications, we recommend you set this
     * value based on your expected execution time. The default is 3 seconds.</p>
     */
    inline CreateFunctionResult& WithTimeout(int value) { SetTimeout(value); return *this;}

    /**
     * <p>The memory size, in MB, you configured for the function. Must be a multiple
     * of 64 MB.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The memory size, in MB, you configured for the function. Must be a multiple
     * of 64 MB.</p>
     */
    inline void SetMemorySize(int value) { m_memorySize = value; }

    /**
     * <p>The memory size, in MB, you configured for the function. Must be a multiple
     * of 64 MB.</p>
     */
    inline CreateFunctionResult& WithMemorySize(int value) { SetMemorySize(value); return *this;}

    /**
     * <p>The time stamp of the last time you updated the function.</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The time stamp of the last time you updated the function.</p>
     */
    inline void SetLastModified(const Aws::String& value) { m_lastModified = value; }

    /**
     * <p>The time stamp of the last time you updated the function.</p>
     */
    inline void SetLastModified(Aws::String&& value) { m_lastModified = value; }

    /**
     * <p>The time stamp of the last time you updated the function.</p>
     */
    inline void SetLastModified(const char* value) { m_lastModified.assign(value); }

    /**
     * <p>The time stamp of the last time you updated the function.</p>
     */
    inline CreateFunctionResult& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /**
     * <p>The time stamp of the last time you updated the function.</p>
     */
    inline CreateFunctionResult& WithLastModified(Aws::String&& value) { SetLastModified(value); return *this;}

    /**
     * <p>The time stamp of the last time you updated the function.</p>
     */
    inline CreateFunctionResult& WithLastModified(const char* value) { SetLastModified(value); return *this;}

    /**
     * <p>It is the SHA256 hash of your function deployment package.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }

    /**
     * <p>It is the SHA256 hash of your function deployment package.</p>
     */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256 = value; }

    /**
     * <p>It is the SHA256 hash of your function deployment package.</p>
     */
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256 = value; }

    /**
     * <p>It is the SHA256 hash of your function deployment package.</p>
     */
    inline void SetCodeSha256(const char* value) { m_codeSha256.assign(value); }

    /**
     * <p>It is the SHA256 hash of your function deployment package.</p>
     */
    inline CreateFunctionResult& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>It is the SHA256 hash of your function deployment package.</p>
     */
    inline CreateFunctionResult& WithCodeSha256(Aws::String&& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>It is the SHA256 hash of your function deployment package.</p>
     */
    inline CreateFunctionResult& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = value; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline CreateFunctionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline CreateFunctionResult& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline CreateFunctionResult& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>VPC configuration associated with your Lambda function.</p>
     */
    inline const VpcConfigResponse& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>VPC configuration associated with your Lambda function.</p>
     */
    inline void SetVpcConfig(const VpcConfigResponse& value) { m_vpcConfig = value; }

    /**
     * <p>VPC configuration associated with your Lambda function.</p>
     */
    inline void SetVpcConfig(VpcConfigResponse&& value) { m_vpcConfig = value; }

    /**
     * <p>VPC configuration associated with your Lambda function.</p>
     */
    inline CreateFunctionResult& WithVpcConfig(const VpcConfigResponse& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>VPC configuration associated with your Lambda function.</p>
     */
    inline CreateFunctionResult& WithVpcConfig(VpcConfigResponse&& value) { SetVpcConfig(value); return *this;}

  private:
    Aws::String m_functionName;
    Aws::String m_functionArn;
    Runtime m_runtime;
    Aws::String m_role;
    Aws::String m_handler;
    long long m_codeSize;
    Aws::String m_description;
    int m_timeout;
    int m_memorySize;
    Aws::String m_lastModified;
    Aws::String m_codeSha256;
    Aws::String m_version;
    VpcConfigResponse m_vpcConfig;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
