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
#include <aws/lambda/model/LoggingConfig.h>
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
    AWS_LAMBDA_API FunctionConfiguration() = default;
    AWS_LAMBDA_API FunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API FunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    FunctionConfiguration& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    FunctionConfiguration& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">
     * runtime</a>. Runtime is required if the deployment package is a .zip file
     * archive. Specifying a runtime results in an error if you're deploying a function
     * using a container image.</p> <p>The following list includes deprecated runtimes.
     * Lambda blocks creating new functions and updating existing functions shortly
     * after each runtime is deprecated. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-deprecation-levels">Runtime
     * use after deprecation</a>.</p> <p>For a list of all currently supported
     * runtimes, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtimes-supported">Supported
     * runtimes</a>.</p>
     */
    inline Runtime GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(Runtime value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline FunctionConfiguration& WithRuntime(Runtime value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's execution role.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    FunctionConfiguration& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function that Lambda calls to begin running your function.</p>
     */
    inline const Aws::String& GetHandler() const { return m_handler; }
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }
    template<typename HandlerT = Aws::String>
    void SetHandler(HandlerT&& value) { m_handlerHasBeenSet = true; m_handler = std::forward<HandlerT>(value); }
    template<typename HandlerT = Aws::String>
    FunctionConfiguration& WithHandler(HandlerT&& value) { SetHandler(std::forward<HandlerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the function's deployment package, in bytes.</p>
     */
    inline long long GetCodeSize() const { return m_codeSize; }
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }
    inline FunctionConfiguration& WithCodeSize(long long value) { SetCodeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FunctionConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time in seconds that Lambda allows a function to run before
     * stopping it.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline FunctionConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory available to the function at runtime.</p>
     */
    inline int GetMemorySize() const { return m_memorySize; }
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }
    inline FunctionConfiguration& WithMemorySize(int value) { SetMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::String& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::String>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::String>
    FunctionConfiguration& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline const Aws::String& GetCodeSha256() const { return m_codeSha256; }
    inline bool CodeSha256HasBeenSet() const { return m_codeSha256HasBeenSet; }
    template<typename CodeSha256T = Aws::String>
    void SetCodeSha256(CodeSha256T&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::forward<CodeSha256T>(value); }
    template<typename CodeSha256T = Aws::String>
    FunctionConfiguration& WithCodeSha256(CodeSha256T&& value) { SetCodeSha256(std::forward<CodeSha256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Lambda function.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    FunctionConfiguration& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's networking configuration.</p>
     */
    inline const VpcConfigResponse& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfigResponse>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfigResponse>
    FunctionConfiguration& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's dead letter queue.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const { return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    void SetDeadLetterConfig(DeadLetterConfigT&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::forward<DeadLetterConfigT>(value); }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    FunctionConfiguration& WithDeadLetterConfig(DeadLetterConfigT&& value) { SetDeadLetterConfig(std::forward<DeadLetterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html">environment
     * variables</a>. Omitted from CloudTrail logs.</p>
     */
    inline const EnvironmentResponse& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = EnvironmentResponse>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = EnvironmentResponse>
    FunctionConfiguration& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt the following resources:</p> <ul> <li> <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-envvars.html#configuration-envvars-encryption">environment
     * variables</a>.</p> </li> <li> <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart-security.html">Lambda
     * SnapStart</a> snapshots.</p> </li> <li> <p>When used with
     * <code>SourceKMSKeyArn</code>, the unzipped version of the .zip deployment
     * package that's used for function invocations. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/encrypt-zip-package.html#enable-zip-custom-encryption">
     * Specifying a customer managed key for Lambda</a>.</p> </li> <li> <p>The
     * optimized version of the container image that's used for function invocations.
     * Note that this is not the same key that's used to protect your container image
     * in the Amazon Elastic Container Registry (Amazon ECR). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/images-create.html#images-lifecycle">Function
     * lifecycle</a>.</p> </li> </ul> <p>If you don't provide a customer managed key,
     * Lambda uses an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-owned-cmk">Amazon
     * Web Services owned key</a> or an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed key</a>.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const { return m_kMSKeyArn; }
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }
    template<typename KMSKeyArnT = Aws::String>
    void SetKMSKeyArn(KMSKeyArnT&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::forward<KMSKeyArnT>(value); }
    template<typename KMSKeyArnT = Aws::String>
    FunctionConfiguration& WithKMSKeyArn(KMSKeyArnT&& value) { SetKMSKeyArn(std::forward<KMSKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline const TracingConfigResponse& GetTracingConfig() const { return m_tracingConfig; }
    inline bool TracingConfigHasBeenSet() const { return m_tracingConfigHasBeenSet; }
    template<typename TracingConfigT = TracingConfigResponse>
    void SetTracingConfig(TracingConfigT&& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = std::forward<TracingConfigT>(value); }
    template<typename TracingConfigT = TracingConfigResponse>
    FunctionConfiguration& WithTracingConfig(TracingConfigT&& value) { SetTracingConfig(std::forward<TracingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Lambda@Edge functions, the ARN of the main function.</p>
     */
    inline const Aws::String& GetMasterArn() const { return m_masterArn; }
    inline bool MasterArnHasBeenSet() const { return m_masterArnHasBeenSet; }
    template<typename MasterArnT = Aws::String>
    void SetMasterArn(MasterArnT&& value) { m_masterArnHasBeenSet = true; m_masterArn = std::forward<MasterArnT>(value); }
    template<typename MasterArnT = Aws::String>
    FunctionConfiguration& WithMasterArn(MasterArnT&& value) { SetMasterArn(std::forward<MasterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    FunctionConfiguration& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">layers</a>.</p>
     */
    inline const Aws::Vector<Layer>& GetLayers() const { return m_layers; }
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }
    template<typename LayersT = Aws::Vector<Layer>>
    void SetLayers(LayersT&& value) { m_layersHasBeenSet = true; m_layers = std::forward<LayersT>(value); }
    template<typename LayersT = Aws::Vector<Layer>>
    FunctionConfiguration& WithLayers(LayersT&& value) { SetLayers(std::forward<LayersT>(value)); return *this;}
    template<typename LayersT = Layer>
    FunctionConfiguration& AddLayers(LayersT&& value) { m_layersHasBeenSet = true; m_layers.emplace_back(std::forward<LayersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the function. When the state is <code>Inactive</code>,
     * you can reactivate the function by invoking it.</p>
     */
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline FunctionConfiguration& WithState(State value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the function's current state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    FunctionConfiguration& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code for the function's current state. When the code is
     * <code>Creating</code>, you can't invoke or modify the function.</p>
     */
    inline StateReasonCode GetStateReasonCode() const { return m_stateReasonCode; }
    inline bool StateReasonCodeHasBeenSet() const { return m_stateReasonCodeHasBeenSet; }
    inline void SetStateReasonCode(StateReasonCode value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = value; }
    inline FunctionConfiguration& WithStateReasonCode(StateReasonCode value) { SetStateReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last update that was performed on the function. This is
     * first set to <code>Successful</code> after function creation completes.</p>
     */
    inline LastUpdateStatus GetLastUpdateStatus() const { return m_lastUpdateStatus; }
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }
    inline void SetLastUpdateStatus(LastUpdateStatus value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = value; }
    inline FunctionConfiguration& WithLastUpdateStatus(LastUpdateStatus value) { SetLastUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the last update that was performed on the function.</p>
     */
    inline const Aws::String& GetLastUpdateStatusReason() const { return m_lastUpdateStatusReason; }
    inline bool LastUpdateStatusReasonHasBeenSet() const { return m_lastUpdateStatusReasonHasBeenSet; }
    template<typename LastUpdateStatusReasonT = Aws::String>
    void SetLastUpdateStatusReason(LastUpdateStatusReasonT&& value) { m_lastUpdateStatusReasonHasBeenSet = true; m_lastUpdateStatusReason = std::forward<LastUpdateStatusReasonT>(value); }
    template<typename LastUpdateStatusReasonT = Aws::String>
    FunctionConfiguration& WithLastUpdateStatusReason(LastUpdateStatusReasonT&& value) { SetLastUpdateStatusReason(std::forward<LastUpdateStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code for the last update that was performed on the function.</p>
     */
    inline LastUpdateStatusReasonCode GetLastUpdateStatusReasonCode() const { return m_lastUpdateStatusReasonCode; }
    inline bool LastUpdateStatusReasonCodeHasBeenSet() const { return m_lastUpdateStatusReasonCodeHasBeenSet; }
    inline void SetLastUpdateStatusReasonCode(LastUpdateStatusReasonCode value) { m_lastUpdateStatusReasonCodeHasBeenSet = true; m_lastUpdateStatusReasonCode = value; }
    inline FunctionConfiguration& WithLastUpdateStatusReasonCode(LastUpdateStatusReasonCode value) { SetLastUpdateStatusReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection settings for an <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
     * EFS file system</a>.</p>
     */
    inline const Aws::Vector<FileSystemConfig>& GetFileSystemConfigs() const { return m_fileSystemConfigs; }
    inline bool FileSystemConfigsHasBeenSet() const { return m_fileSystemConfigsHasBeenSet; }
    template<typename FileSystemConfigsT = Aws::Vector<FileSystemConfig>>
    void SetFileSystemConfigs(FileSystemConfigsT&& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs = std::forward<FileSystemConfigsT>(value); }
    template<typename FileSystemConfigsT = Aws::Vector<FileSystemConfig>>
    FunctionConfiguration& WithFileSystemConfigs(FileSystemConfigsT&& value) { SetFileSystemConfigs(std::forward<FileSystemConfigsT>(value)); return *this;}
    template<typename FileSystemConfigsT = FileSystemConfig>
    FunctionConfiguration& AddFileSystemConfigs(FileSystemConfigsT&& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs.emplace_back(std::forward<FileSystemConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set <code>Zip</code> for .zip file archive.</p>
     */
    inline PackageType GetPackageType() const { return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(PackageType value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline FunctionConfiguration& WithPackageType(PackageType value) { SetPackageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's image configuration values.</p>
     */
    inline const ImageConfigResponse& GetImageConfigResponse() const { return m_imageConfigResponse; }
    inline bool ImageConfigResponseHasBeenSet() const { return m_imageConfigResponseHasBeenSet; }
    template<typename ImageConfigResponseT = ImageConfigResponse>
    void SetImageConfigResponse(ImageConfigResponseT&& value) { m_imageConfigResponseHasBeenSet = true; m_imageConfigResponse = std::forward<ImageConfigResponseT>(value); }
    template<typename ImageConfigResponseT = ImageConfigResponse>
    FunctionConfiguration& WithImageConfigResponse(ImageConfigResponseT&& value) { SetImageConfigResponse(std::forward<ImageConfigResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the signing profile version.</p>
     */
    inline const Aws::String& GetSigningProfileVersionArn() const { return m_signingProfileVersionArn; }
    inline bool SigningProfileVersionArnHasBeenSet() const { return m_signingProfileVersionArnHasBeenSet; }
    template<typename SigningProfileVersionArnT = Aws::String>
    void SetSigningProfileVersionArn(SigningProfileVersionArnT&& value) { m_signingProfileVersionArnHasBeenSet = true; m_signingProfileVersionArn = std::forward<SigningProfileVersionArnT>(value); }
    template<typename SigningProfileVersionArnT = Aws::String>
    FunctionConfiguration& WithSigningProfileVersionArn(SigningProfileVersionArnT&& value) { SetSigningProfileVersionArn(std::forward<SigningProfileVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the signing job.</p>
     */
    inline const Aws::String& GetSigningJobArn() const { return m_signingJobArn; }
    inline bool SigningJobArnHasBeenSet() const { return m_signingJobArnHasBeenSet; }
    template<typename SigningJobArnT = Aws::String>
    void SetSigningJobArn(SigningJobArnT&& value) { m_signingJobArnHasBeenSet = true; m_signingJobArn = std::forward<SigningJobArnT>(value); }
    template<typename SigningJobArnT = Aws::String>
    FunctionConfiguration& WithSigningJobArn(SigningJobArnT&& value) { SetSigningJobArn(std::forward<SigningJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instruction set architecture that the function supports. Architecture is
     * a string array with one of the valid values. The default architecture value is
     * <code>x86_64</code>.</p>
     */
    inline const Aws::Vector<Architecture>& GetArchitectures() const { return m_architectures; }
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
    template<typename ArchitecturesT = Aws::Vector<Architecture>>
    void SetArchitectures(ArchitecturesT&& value) { m_architecturesHasBeenSet = true; m_architectures = std::forward<ArchitecturesT>(value); }
    template<typename ArchitecturesT = Aws::Vector<Architecture>>
    FunctionConfiguration& WithArchitectures(ArchitecturesT&& value) { SetArchitectures(std::forward<ArchitecturesT>(value)); return *this;}
    inline FunctionConfiguration& AddArchitectures(Architecture value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the function's <code>/tmp</code> directory in MB. The default
     * value is 512, but can be any whole number between 512 and 10,240 MB. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-function-common.html#configuration-ephemeral-storage">Configuring
     * ephemeral storage (console)</a>.</p>
     */
    inline const EphemeralStorage& GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    template<typename EphemeralStorageT = EphemeralStorage>
    void SetEphemeralStorage(EphemeralStorageT&& value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = std::forward<EphemeralStorageT>(value); }
    template<typename EphemeralStorageT = EphemeralStorage>
    FunctionConfiguration& WithEphemeralStorage(EphemeralStorageT&& value) { SetEphemeralStorage(std::forward<EphemeralStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set <code>ApplyOn</code> to <code>PublishedVersions</code> to create a
     * snapshot of the initialized execution environment when you publish a function
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">Improving
     * startup performance with Lambda SnapStart</a>.</p>
     */
    inline const SnapStartResponse& GetSnapStart() const { return m_snapStart; }
    inline bool SnapStartHasBeenSet() const { return m_snapStartHasBeenSet; }
    template<typename SnapStartT = SnapStartResponse>
    void SetSnapStart(SnapStartT&& value) { m_snapStartHasBeenSet = true; m_snapStart = std::forward<SnapStartT>(value); }
    template<typename SnapStartT = SnapStartResponse>
    FunctionConfiguration& WithSnapStart(SnapStartT&& value) { SetSnapStart(std::forward<SnapStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the runtime and any errors that occured.</p>
     */
    inline const RuntimeVersionConfig& GetRuntimeVersionConfig() const { return m_runtimeVersionConfig; }
    inline bool RuntimeVersionConfigHasBeenSet() const { return m_runtimeVersionConfigHasBeenSet; }
    template<typename RuntimeVersionConfigT = RuntimeVersionConfig>
    void SetRuntimeVersionConfig(RuntimeVersionConfigT&& value) { m_runtimeVersionConfigHasBeenSet = true; m_runtimeVersionConfig = std::forward<RuntimeVersionConfigT>(value); }
    template<typename RuntimeVersionConfigT = RuntimeVersionConfig>
    FunctionConfiguration& WithRuntimeVersionConfig(RuntimeVersionConfigT&& value) { SetRuntimeVersionConfig(std::forward<RuntimeVersionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's Amazon CloudWatch Logs configuration settings.</p>
     */
    inline const LoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
    inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }
    template<typename LoggingConfigT = LoggingConfig>
    void SetLoggingConfig(LoggingConfigT&& value) { m_loggingConfigHasBeenSet = true; m_loggingConfig = std::forward<LoggingConfigT>(value); }
    template<typename LoggingConfigT = LoggingConfig>
    FunctionConfiguration& WithLoggingConfig(LoggingConfigT&& value) { SetLoggingConfig(std::forward<LoggingConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    FunctionConfiguration& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Runtime m_runtime{Runtime::NOT_SET};
    bool m_runtimeHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_handler;
    bool m_handlerHasBeenSet = false;

    long long m_codeSize{0};
    bool m_codeSizeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    int m_memorySize{0};
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

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    StateReasonCode m_stateReasonCode{StateReasonCode::NOT_SET};
    bool m_stateReasonCodeHasBeenSet = false;

    LastUpdateStatus m_lastUpdateStatus{LastUpdateStatus::NOT_SET};
    bool m_lastUpdateStatusHasBeenSet = false;

    Aws::String m_lastUpdateStatusReason;
    bool m_lastUpdateStatusReasonHasBeenSet = false;

    LastUpdateStatusReasonCode m_lastUpdateStatusReasonCode{LastUpdateStatusReasonCode::NOT_SET};
    bool m_lastUpdateStatusReasonCodeHasBeenSet = false;

    Aws::Vector<FileSystemConfig> m_fileSystemConfigs;
    bool m_fileSystemConfigsHasBeenSet = false;

    PackageType m_packageType{PackageType::NOT_SET};
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

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
