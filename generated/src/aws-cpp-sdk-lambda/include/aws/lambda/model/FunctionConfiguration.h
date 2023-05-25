/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/lambda/model/State.h>
#include <aws/lambda/model/StateReasonCode.h>
#include <aws/lambda/model/LastUpdateStatus.h>
#include <aws/lambda/model/LastUpdateStatusReasonCode.h>
#include <aws/lambda/model/PackageType.h>
#include <aws/lambda/model/ImageConfigResponse.h>
#include <aws/lambda/model/EphemeralStorage.h>
#include <aws/lambda/model/SnapStartResponse.h>
#include <aws/lambda/model/RuntimeVersionConfig.h>
#include <aws/lambda/model/Layer.h>
#include <aws/lambda/model/FileSystemConfig.h>
#include <aws/lambda/model/Architecture.h>
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
  class FunctionConfiguration
  {
  public:
    AWS_LAMBDA_API FunctionConfiguration();
    AWS_LAMBDA_API FunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API FunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline FunctionConfiguration& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The identifier of the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime</a>.
     * Runtime is required if the deployment package is a .zip file archive.</p> <p>The
     * following list includes deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-support-policy">Runtime
     * deprecation policy</a>.</p>
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
     * <p>The function that Lambda calls to begin running your function.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The function that Lambda calls to begin running your function.</p>
     */
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }

    /**
     * <p>The function that Lambda calls to begin running your function.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The function that Lambda calls to begin running your function.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }

    /**
     * <p>The function that Lambda calls to begin running your function.</p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The function that Lambda calls to begin running your function.</p>
     */
    inline FunctionConfiguration& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The function that Lambda calls to begin running your function.</p>
     */
    inline FunctionConfiguration& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The function that Lambda calls to begin running your function.</p>
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
     * <p>The amount of time in seconds that Lambda allows a function to run before
     * stopping it.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time in seconds that Lambda allows a function to run before
     * stopping it.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The amount of time in seconds that Lambda allows a function to run before
     * stopping it.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The amount of time in seconds that Lambda allows a function to run before
     * stopping it.</p>
     */
    inline FunctionConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The amount of memory available to the function at runtime.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The amount of memory available to the function at runtime.</p>
     */
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }

    /**
     * <p>The amount of memory available to the function at runtime.</p>
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * <p>The amount of memory available to the function at runtime.</p>
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
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html">environment
     * variables</a>. Omitted from CloudTrail logs.</p>
     */
    inline const EnvironmentResponse& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html">environment
     * variables</a>. Omitted from CloudTrail logs.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html">environment
     * variables</a>. Omitted from CloudTrail logs.</p>
     */
    inline void SetEnvironment(const EnvironmentResponse& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html">environment
     * variables</a>. Omitted from CloudTrail logs.</p>
     */
    inline void SetEnvironment(EnvironmentResponse&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html">environment
     * variables</a>. Omitted from CloudTrail logs.</p>
     */
    inline FunctionConfiguration& WithEnvironment(const EnvironmentResponse& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html">environment
     * variables</a>. Omitted from CloudTrail logs.</p>
     */
    inline FunctionConfiguration& WithEnvironment(EnvironmentResponse&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The KMS key that's used to encrypt the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, this key is also used to encrypt the function's
     * snapshot. This key is returned only if you've configured a customer managed
     * key.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The KMS key that's used to encrypt the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, this key is also used to encrypt the function's
     * snapshot. This key is returned only if you've configured a customer managed
     * key.</p>
     */
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }

    /**
     * <p>The KMS key that's used to encrypt the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, this key is also used to encrypt the function's
     * snapshot. This key is returned only if you've configured a customer managed
     * key.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The KMS key that's used to encrypt the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, this key is also used to encrypt the function's
     * snapshot. This key is returned only if you've configured a customer managed
     * key.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::move(value); }

    /**
     * <p>The KMS key that's used to encrypt the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, this key is also used to encrypt the function's
     * snapshot. This key is returned only if you've configured a customer managed
     * key.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn.assign(value); }

    /**
     * <p>The KMS key that's used to encrypt the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, this key is also used to encrypt the function's
     * snapshot. This key is returned only if you've configured a customer managed
     * key.</p>
     */
    inline FunctionConfiguration& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The KMS key that's used to encrypt the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, this key is also used to encrypt the function's
     * snapshot. This key is returned only if you've configured a customer managed
     * key.</p>
     */
    inline FunctionConfiguration& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key that's used to encrypt the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>. When <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> is activated, this key is also used to encrypt the function's
     * snapshot. This key is returned only if you've configured a customer managed
     * key.</p>
     */
    inline FunctionConfiguration& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}


    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline const TracingConfigResponse& GetTracingConfig() const{ return m_tracingConfig; }

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline bool TracingConfigHasBeenSet() const { return m_tracingConfigHasBeenSet; }

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(const TracingConfigResponse& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = value; }

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(TracingConfigResponse&& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = std::move(value); }

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline FunctionConfiguration& WithTracingConfig(const TracingConfigResponse& value) { SetTracingConfig(value); return *this;}

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline FunctionConfiguration& WithTracingConfig(TracingConfigResponse&& value) { SetTracingConfig(std::move(value)); return *this;}


    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
     */
    inline const Aws::String& GetMasterArn() const{ return m_masterArn; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
     */
    inline bool MasterArnHasBeenSet() const { return m_masterArnHasBeenSet; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
     */
    inline void SetMasterArn(const Aws::String& value) { m_masterArnHasBeenSet = true; m_masterArn = value; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
     */
    inline void SetMasterArn(Aws::String&& value) { m_masterArnHasBeenSet = true; m_masterArn = std::move(value); }

    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
     */
    inline void SetMasterArn(const char* value) { m_masterArnHasBeenSet = true; m_masterArn.assign(value); }

    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
     */
    inline FunctionConfiguration& WithMasterArn(const Aws::String& value) { SetMasterArn(value); return *this;}

    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
     */
    inline FunctionConfiguration& WithMasterArn(Aws::String&& value) { SetMasterArn(std::move(value)); return *this;}

    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
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
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const{ return m_layers; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline void SetLayers(const Aws::Vector<Layer>& value) { m_layersHasBeenSet = true; m_layers = value; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline void SetLayers(Aws::Vector<Layer>&& value) { m_layersHasBeenSet = true; m_layers = std::move(value); }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline FunctionConfiguration& WithLayers(const Aws::Vector<Layer>& value) { SetLayers(value); return *this;}

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline FunctionConfiguration& WithLayers(Aws::Vector<Layer>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline FunctionConfiguration& AddLayers(const Layer& value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }

    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline FunctionConfiguration& AddLayers(Layer&& value) { m_layersHasBeenSet = true; m_layers.push_back(std::move(value)); return *this; }


    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline FunctionConfiguration& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline FunctionConfiguration& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for the function's current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline FunctionConfiguration& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline FunctionConfiguration& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the function's current state.</p>
     */
    inline FunctionConfiguration& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline const StateReasonCode& GetStateReasonCode() const{ return m_stateReasonCode; }

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline bool StateReasonCodeHasBeenSet() const { return m_stateReasonCodeHasBeenSet; }

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline void SetStateReasonCode(const StateReasonCode& value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = value; }

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline void SetStateReasonCode(StateReasonCode&& value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = std::move(value); }

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline FunctionConfiguration& WithStateReasonCode(const StateReasonCode& value) { SetStateReasonCode(value); return *this;}

    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline FunctionConfiguration& WithStateReasonCode(StateReasonCode&& value) { SetStateReasonCode(std::move(value)); return *this;}


    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline const LastUpdateStatus& GetLastUpdateStatus() const{ return m_lastUpdateStatus; }

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline void SetLastUpdateStatus(const LastUpdateStatus& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = value; }

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline void SetLastUpdateStatus(LastUpdateStatus&& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = std::move(value); }

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline FunctionConfiguration& WithLastUpdateStatus(const LastUpdateStatus& value) { SetLastUpdateStatus(value); return *this;}

    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline FunctionConfiguration& WithLastUpdateStatus(LastUpdateStatus&& value) { SetLastUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline const Aws::String& GetLastUpdateStatusReason() const{ return m_lastUpdateStatusReason; }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline bool LastUpdateStatusReasonHasBeenSet() const { return m_lastUpdateStatusReasonHasBeenSet; }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReason(const Aws::String& value) { m_lastUpdateStatusReasonHasBeenSet = true; m_lastUpdateStatusReason = value; }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReason(Aws::String&& value) { m_lastUpdateStatusReasonHasBeenSet = true; m_lastUpdateStatusReason = std::move(value); }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReason(const char* value) { m_lastUpdateStatusReasonHasBeenSet = true; m_lastUpdateStatusReason.assign(value); }

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline FunctionConfiguration& WithLastUpdateStatusReason(const Aws::String& value) { SetLastUpdateStatusReason(value); return *this;}

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline FunctionConfiguration& WithLastUpdateStatusReason(Aws::String&& value) { SetLastUpdateStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline FunctionConfiguration& WithLastUpdateStatusReason(const char* value) { SetLastUpdateStatusReason(value); return *this;}


    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline const LastUpdateStatusReasonCode& GetLastUpdateStatusReasonCode() const{ return m_lastUpdateStatusReasonCode; }

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline bool LastUpdateStatusReasonCodeHasBeenSet() const { return m_lastUpdateStatusReasonCodeHasBeenSet; }

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReasonCode(const LastUpdateStatusReasonCode& value) { m_lastUpdateStatusReasonCodeHasBeenSet = true; m_lastUpdateStatusReasonCode = value; }

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline void SetLastUpdateStatusReasonCode(LastUpdateStatusReasonCode&& value) { m_lastUpdateStatusReasonCodeHasBeenSet = true; m_lastUpdateStatusReasonCode = std::move(value); }

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline FunctionConfiguration& WithLastUpdateStatusReasonCode(const LastUpdateStatusReasonCode& value) { SetLastUpdateStatusReasonCode(value); return *this;}

    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline FunctionConfiguration& WithLastUpdateStatusReasonCode(LastUpdateStatusReasonCode&& value) { SetLastUpdateStatusReasonCode(std::move(value)); return *this;}


    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline const Aws::Vector<FileSystemConfig>& GetFileSystemConfigs() const{ return m_fileSystemConfigs; }

    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline bool FileSystemConfigsHasBeenSet() const { return m_fileSystemConfigsHasBeenSet; }

    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline void SetFileSystemConfigs(const Aws::Vector<FileSystemConfig>& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs = value; }

    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline void SetFileSystemConfigs(Aws::Vector<FileSystemConfig>&& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs = std::move(value); }

    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline FunctionConfiguration& WithFileSystemConfigs(const Aws::Vector<FileSystemConfig>& value) { SetFileSystemConfigs(value); return *this;}

    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline FunctionConfiguration& WithFileSystemConfigs(Aws::Vector<FileSystemConfig>&& value) { SetFileSystemConfigs(std::move(value)); return *this;}

    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline FunctionConfiguration& AddFileSystemConfigs(const FileSystemConfig& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs.push_back(value); return *this; }

    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline FunctionConfiguration& AddFileSystemConfigs(FileSystemConfig&& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set <code>Zip</code> for .zip file archive.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }

    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set <code>Zip</code> for .zip file archive.</p>
     */
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }

    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set <code>Zip</code> for .zip file archive.</p>
     */
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }

    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set <code>Zip</code> for .zip file archive.</p>
     */
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }

    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set <code>Zip</code> for .zip file archive.</p>
     */
    inline FunctionConfiguration& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}

    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set <code>Zip</code> for .zip file archive.</p>
     */
    inline FunctionConfiguration& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}


    /**
     * <p>The function's image configuration values.</p>
     */
    inline const ImageConfigResponse& GetImageConfigResponse() const{ return m_imageConfigResponse; }

    /**
     * <p>The function's image configuration values.</p>
     */
    inline bool ImageConfigResponseHasBeenSet() const { return m_imageConfigResponseHasBeenSet; }

    /**
     * <p>The function's image configuration values.</p>
     */
    inline void SetImageConfigResponse(const ImageConfigResponse& value) { m_imageConfigResponseHasBeenSet = true; m_imageConfigResponse = value; }

    /**
     * <p>The function's image configuration values.</p>
     */
    inline void SetImageConfigResponse(ImageConfigResponse&& value) { m_imageConfigResponseHasBeenSet = true; m_imageConfigResponse = std::move(value); }

    /**
     * <p>The function's image configuration values.</p>
     */
    inline FunctionConfiguration& WithImageConfigResponse(const ImageConfigResponse& value) { SetImageConfigResponse(value); return *this;}

    /**
     * <p>The function's image configuration values.</p>
     */
    inline FunctionConfiguration& WithImageConfigResponse(ImageConfigResponse&& value) { SetImageConfigResponse(std::move(value)); return *this;}


    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline const Aws::String& GetSigningProfileVersionArn() const{ return m_signingProfileVersionArn; }

    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline bool SigningProfileVersionArnHasBeenSet() const { return m_signingProfileVersionArnHasBeenSet; }

    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline void SetSigningProfileVersionArn(const Aws::String& value) { m_signingProfileVersionArnHasBeenSet = true; m_signingProfileVersionArn = value; }

    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline void SetSigningProfileVersionArn(Aws::String&& value) { m_signingProfileVersionArnHasBeenSet = true; m_signingProfileVersionArn = std::move(value); }

    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline void SetSigningProfileVersionArn(const char* value) { m_signingProfileVersionArnHasBeenSet = true; m_signingProfileVersionArn.assign(value); }

    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline FunctionConfiguration& WithSigningProfileVersionArn(const Aws::String& value) { SetSigningProfileVersionArn(value); return *this;}

    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline FunctionConfiguration& WithSigningProfileVersionArn(Aws::String&& value) { SetSigningProfileVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline FunctionConfiguration& WithSigningProfileVersionArn(const char* value) { SetSigningProfileVersionArn(value); return *this;}


    /**
     * <p>The ARN of the signing job.</p>
     */
    inline const Aws::String& GetSigningJobArn() const{ return m_signingJobArn; }

    /**
     * <p>The ARN of the signing job.</p>
     */
    inline bool SigningJobArnHasBeenSet() const { return m_signingJobArnHasBeenSet; }

    /**
     * <p>The ARN of the signing job.</p>
     */
    inline void SetSigningJobArn(const Aws::String& value) { m_signingJobArnHasBeenSet = true; m_signingJobArn = value; }

    /**
     * <p>The ARN of the signing job.</p>
     */
    inline void SetSigningJobArn(Aws::String&& value) { m_signingJobArnHasBeenSet = true; m_signingJobArn = std::move(value); }

    /**
     * <p>The ARN of the signing job.</p>
     */
    inline void SetSigningJobArn(const char* value) { m_signingJobArnHasBeenSet = true; m_signingJobArn.assign(value); }

    /**
     * <p>The ARN of the signing job.</p>
     */
    inline FunctionConfiguration& WithSigningJobArn(const Aws::String& value) { SetSigningJobArn(value); return *this;}

    /**
     * <p>The ARN of the signing job.</p>
     */
    inline FunctionConfiguration& WithSigningJobArn(Aws::String&& value) { SetSigningJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the signing job.</p>
     */
    inline FunctionConfiguration& WithSigningJobArn(const char* value) { SetSigningJobArn(value); return *this;}


    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline const Aws::Vector<Architecture>& GetArchitectures() const{ return m_architectures; }

    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }

    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline void SetArchitectures(const Aws::Vector<Architecture>& value) { m_architecturesHasBeenSet = true; m_architectures = value; }

    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline void SetArchitectures(Aws::Vector<Architecture>&& value) { m_architecturesHasBeenSet = true; m_architectures = std::move(value); }

    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline FunctionConfiguration& WithArchitectures(const Aws::Vector<Architecture>& value) { SetArchitectures(value); return *this;}

    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline FunctionConfiguration& WithArchitectures(Aws::Vector<Architecture>&& value) { SetArchitectures(std::move(value)); return *this;}

    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline FunctionConfiguration& AddArchitectures(const Architecture& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }

    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline FunctionConfiguration& AddArchitectures(Architecture&& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(std::move(value)); return *this; }


    /**
     * <p>The size of the function’s <code>/tmp</code> directory in MB. The default
     * value is 512, but it can be any whole number between 512 and 10,240 MB.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const{ return m_ephemeralStorage; }

    /**
     * <p>The size of the function’s <code>/tmp</code> directory in MB. The default
     * value is 512, but it can be any whole number between 512 and 10,240 MB.</p>
     */
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }

    /**
     * <p>The size of the function’s <code>/tmp</code> directory in MB. The default
     * value is 512, but it can be any whole number between 512 and 10,240 MB.</p>
     */
    inline void SetEphemeralStorage(const EphemeralStorage& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }

    /**
     * <p>The size of the function’s <code>/tmp</code> directory in MB. The default
     * value is 512, but it can be any whole number between 512 and 10,240 MB.</p>
     */
    inline void SetEphemeralStorage(EphemeralStorage&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::move(value); }

    /**
     * <p>The size of the function’s <code>/tmp</code> directory in MB. The default
     * value is 512, but it can be any whole number between 512 and 10,240 MB.</p>
     */
    inline FunctionConfiguration& WithEphemeralStorage(const EphemeralStorage& value) { SetEphemeralStorage(value); return *this;}

    /**
     * <p>The size of the function’s <code>/tmp</code> directory in MB. The default
     * value is 512, but it can be any whole number between 512 and 10,240 MB.</p>
     */
    inline FunctionConfiguration& WithEphemeralStorage(EphemeralStorage&& value) { SetEphemeralStorage(std::move(value)); return *this;}


    /**
     * <p>Set <code>ApplyOn</code> to <code>PublishedVersions</code> to create a
     * snapshot of the initialized execution environment when you publish a function
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">Improving
     * startup performance with Lambda SnapStart</a>.</p>
     */
    inline const SnapStartResponse& GetSnapStart() const{ return m_snapStart; }

    /**
     * <p>Set <code>ApplyOn</code> to <code>PublishedVersions</code> to create a
     * snapshot of the initialized execution environment when you publish a function
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">Improving
     * startup performance with Lambda SnapStart</a>.</p>
     */
    inline bool SnapStartHasBeenSet() const { return m_snapStartHasBeenSet; }

    /**
     * <p>Set <code>ApplyOn</code> to <code>PublishedVersions</code> to create a
     * snapshot of the initialized execution environment when you publish a function
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">Improving
     * startup performance with Lambda SnapStart</a>.</p>
     */
    inline void SetSnapStart(const SnapStartResponse& value) { m_snapStartHasBeenSet = true; m_snapStart = value; }

    /**
     * <p>Set <code>ApplyOn</code> to <code>PublishedVersions</code> to create a
     * snapshot of the initialized execution environment when you publish a function
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">Improving
     * startup performance with Lambda SnapStart</a>.</p>
     */
    inline void SetSnapStart(SnapStartResponse&& value) { m_snapStartHasBeenSet = true; m_snapStart = std::move(value); }

    /**
     * <p>Set <code>ApplyOn</code> to <code>PublishedVersions</code> to create a
     * snapshot of the initialized execution environment when you publish a function
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">Improving
     * startup performance with Lambda SnapStart</a>.</p>
     */
    inline FunctionConfiguration& WithSnapStart(const SnapStartResponse& value) { SetSnapStart(value); return *this;}

    /**
     * <p>Set <code>ApplyOn</code> to <code>PublishedVersions</code> to create a
     * snapshot of the initialized execution environment when you publish a function
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">Improving
     * startup performance with Lambda SnapStart</a>.</p>
     */
    inline FunctionConfiguration& WithSnapStart(SnapStartResponse&& value) { SetSnapStart(std::move(value)); return *this;}


    /**
     * <p>The ARN of the runtime and any errors that occured.</p>
     */
    inline const RuntimeVersionConfig& GetRuntimeVersionConfig() const{ return m_runtimeVersionConfig; }

    /**
     * <p>The ARN of the runtime and any errors that occured.</p>
     */
    inline bool RuntimeVersionConfigHasBeenSet() const { return m_runtimeVersionConfigHasBeenSet; }

    /**
     * <p>The ARN of the runtime and any errors that occured.</p>
     */
    inline void SetRuntimeVersionConfig(const RuntimeVersionConfig& value) { m_runtimeVersionConfigHasBeenSet = true; m_runtimeVersionConfig = value; }

    /**
     * <p>The ARN of the runtime and any errors that occured.</p>
     */
    inline void SetRuntimeVersionConfig(RuntimeVersionConfig&& value) { m_runtimeVersionConfigHasBeenSet = true; m_runtimeVersionConfig = std::move(value); }

    /**
     * <p>The ARN of the runtime and any errors that occured.</p>
     */
    inline FunctionConfiguration& WithRuntimeVersionConfig(const RuntimeVersionConfig& value) { SetRuntimeVersionConfig(value); return *this;}

    /**
     * <p>The ARN of the runtime and any errors that occured.</p>
     */
    inline FunctionConfiguration& WithRuntimeVersionConfig(RuntimeVersionConfig&& value) { SetRuntimeVersionConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline FunctionConfiguration& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline FunctionConfiguration& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline FunctionConfiguration& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Runtime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_handler;
    bool m_handlerHasBeenSet = false;

    long long m_codeSize;
    bool m_codeSizeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    int m_memorySize;
    bool m_memorySizeHasBeenSet = false;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    VpcConfigResponse m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    EnvironmentResponse m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet = false;

    TracingConfigResponse m_tracingConfig;
    bool m_tracingConfigHasBeenSet = false;

    Aws::String m_masterArn;
    bool m_masterArnHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::Vector<Layer> m_layers;
    bool m_layersHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    StateReasonCode m_stateReasonCode;
    bool m_stateReasonCodeHasBeenSet = false;

    LastUpdateStatus m_lastUpdateStatus;
    bool m_lastUpdateStatusHasBeenSet = false;

    Aws::String m_lastUpdateStatusReason;
    bool m_lastUpdateStatusReasonHasBeenSet = false;

    LastUpdateStatusReasonCode m_lastUpdateStatusReasonCode;
    bool m_lastUpdateStatusReasonCodeHasBeenSet = false;

    Aws::Vector<FileSystemConfig> m_fileSystemConfigs;
    bool m_fileSystemConfigsHasBeenSet = false;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet = false;

    ImageConfigResponse m_imageConfigResponse;
    bool m_imageConfigResponseHasBeenSet = false;

    Aws::String m_signingProfileVersionArn;
    bool m_signingProfileVersionArnHasBeenSet = false;

    Aws::String m_signingJobArn;
    bool m_signingJobArnHasBeenSet = false;

    Aws::Vector<Architecture> m_architectures;
    bool m_architecturesHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    SnapStartResponse m_snapStart;
    bool m_snapStartHasBeenSet = false;

    RuntimeVersionConfig m_runtimeVersionConfig;
    bool m_runtimeVersionConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
