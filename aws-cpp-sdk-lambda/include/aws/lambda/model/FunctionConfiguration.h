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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/VpcConfigResponse.h>
#include <aws/lambda/model/DeadLetterConfig.h>
#include <aws/lambda/model/EnvironmentResponse.h>
#include <aws/lambda/model/TracingConfigResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/Layer.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about a function's configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API FunctionConfiguration
  {
  public:
    FunctionConfiguration();
    FunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    FunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline FunctionConfiguration& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline FunctionConfiguration& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline FunctionConfiguration& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline FunctionConfiguration& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline FunctionConfiguration& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline FunctionConfiguration& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(Runtime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline FunctionConfiguration& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline FunctionConfiguration& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>The function's execution role.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The function's execution role.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The function's execution role.</p>
     */
    inline FunctionConfiguration& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The function's execution role.</p>
     */
    inline FunctionConfiguration& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The function's execution role.</p>
     */
    inline FunctionConfiguration& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline FunctionConfiguration& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline FunctionConfiguration& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline FunctionConfiguration& WithHandler(const char* value) { SetHandler(value); return *this;}


    /**
     * <p>The size of the function's deployment package, in bytes.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size of the function's deployment package, in bytes.</p>
     */
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }

    /**
     * <p>The size of the function's deployment package, in bytes.</p>
     */
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }

    /**
     * <p>The size of the function's deployment package, in bytes.</p>
     */
    inline FunctionConfiguration& WithCodeSize(long long value) { SetCodeSize(value); return *this;}


    /**
     * <p>The function's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The function's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The function's description.</p>
     */
    inline FunctionConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The function's description.</p>
     */
    inline FunctionConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The function's description.</p>
     */
    inline FunctionConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline FunctionConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The memory that's allocated to the function.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The memory that's allocated to the function.</p>
     */
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }

    /**
     * <p>The memory that's allocated to the function.</p>
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * <p>The memory that's allocated to the function.</p>
     */
    inline FunctionConfiguration& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModified(Aws::String&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline FunctionConfiguration& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline FunctionConfiguration& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline FunctionConfiguration& WithLastModified(const char* value) { SetLastModified(value); return *this;}


    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline bool CodeSha256HasBeenSet() const { return m_codeSha256HasBeenSet; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = value; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::move(value); }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(const char* value) { m_codeSha256HasBeenSet = true; m_codeSha256.assign(value); }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline FunctionConfiguration& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline FunctionConfiguration& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline FunctionConfiguration& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}


    /**
     * <p>The version of the Lambda function.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline FunctionConfiguration& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline FunctionConfiguration& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline FunctionConfiguration& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The function's networking configuration.</p>
     */
    inline const VpcConfigResponse& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline void SetVpcConfig(const VpcConfigResponse& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline void SetVpcConfig(VpcConfigResponse&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline FunctionConfiguration& WithVpcConfig(const VpcConfigResponse& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The function's networking configuration.</p>
     */
    inline FunctionConfiguration& WithVpcConfig(VpcConfigResponse&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The function's dead letter queue.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline FunctionConfiguration& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline FunctionConfiguration& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    /**
     * <p>The function's environment variables.</p>
     */
    inline const EnvironmentResponse& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline void SetEnvironment(const EnvironmentResponse& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline void SetEnvironment(EnvironmentResponse&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The function's environment variables.</p>
     */
    inline FunctionConfiguration& WithEnvironment(const EnvironmentResponse& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The function's environment variables.</p>
     */
    inline FunctionConfiguration& WithEnvironment(EnvironmentResponse&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer-managed CMK.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer-managed CMK.</p>
     */
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer-managed CMK.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer-managed CMK.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::move(value); }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer-managed CMK.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn.assign(value); }

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer-managed CMK.</p>
     */
    inline FunctionConfiguration& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer-managed CMK.</p>
     */
    inline FunctionConfiguration& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key that's used to encrypt the function's environment variables. This
     * key is only returned if you've configured a customer-managed CMK.</p>
     */
    inline FunctionConfiguration& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}


    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline const TracingConfigResponse& GetTracingConfig() const{ return m_tracingConfig; }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline bool TracingConfigHasBeenSet() const { return m_tracingConfigHasBeenSet; }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(const TracingConfigResponse& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = value; }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(TracingConfigResponse&& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = std::move(value); }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline FunctionConfiguration& WithTracingConfig(const TracingConfigResponse& value) { SetTracingConfig(value); return *this;}

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline FunctionConfiguration& WithTracingConfig(TracingConfigResponse&& value) { SetTracingConfig(std::move(value)); return *this;}


    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline const Aws::String& GetMasterArn() const{ return m_masterArn; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline bool MasterArnHasBeenSet() const { return m_masterArnHasBeenSet; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(const Aws::String& value) { m_masterArnHasBeenSet = true; m_masterArn = value; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(Aws::String&& value) { m_masterArnHasBeenSet = true; m_masterArn = std::move(value); }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(const char* value) { m_masterArnHasBeenSet = true; m_masterArn.assign(value); }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline FunctionConfiguration& WithMasterArn(const Aws::String& value) { SetMasterArn(value); return *this;}

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline FunctionConfiguration& WithMasterArn(Aws::String&& value) { SetMasterArn(std::move(value)); return *this;}

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline FunctionConfiguration& WithMasterArn(const char* value) { SetMasterArn(value); return *this;}


    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline FunctionConfiguration& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline FunctionConfiguration& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline FunctionConfiguration& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const{ return m_layers; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline void SetLayers(const Aws::Vector<Layer>& value) { m_layersHasBeenSet = true; m_layers = value; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline void SetLayers(Aws::Vector<Layer>&& value) { m_layersHasBeenSet = true; m_layers = std::move(value); }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline FunctionConfiguration& WithLayers(const Aws::Vector<Layer>& value) { SetLayers(value); return *this;}

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline FunctionConfiguration& WithLayers(Aws::Vector<Layer>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline FunctionConfiguration& AddLayers(const Layer& value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>.</p>
     */
    inline FunctionConfiguration& AddLayers(Layer&& value) { m_layersHasBeenSet = true; m_layers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;

    Runtime m_runtime;
    bool m_runtimeHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_handler;
    bool m_handlerHasBeenSet;

    long long m_codeSize;
    bool m_codeSizeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;

    int m_memorySize;
    bool m_memorySizeHasBeenSet;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet;

    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    VpcConfigResponse m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet;

    EnvironmentResponse m_environment;
    bool m_environmentHasBeenSet;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet;

    TracingConfigResponse m_tracingConfig;
    bool m_tracingConfigHasBeenSet;

    Aws::String m_masterArn;
    bool m_masterArnHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;

    Aws::Vector<Layer> m_layers;
    bool m_layersHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
