/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/FunctionCode.h>
#include <aws/lambda/model/VpcConfig.h>
#include <aws/lambda/model/PackageType.h>
#include <aws/lambda/model/DeadLetterConfig.h>
#include <aws/lambda/model/Environment.h>
#include <aws/lambda/model/TracingConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/ImageConfig.h>
#include <aws/lambda/model/EphemeralStorage.h>
#include <aws/lambda/model/SnapStart.h>
#include <aws/lambda/model/LoggingConfig.h>
#include <aws/lambda/model/FileSystemConfig.h>
#include <aws/lambda/model/Architecture.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class CreateFunctionRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API CreateFunctionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFunction"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ARN of the Lambda function.</p> <p class="title"> <b>Name
     * formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>my-function</code>.</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    CreateFunctionRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
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
    inline CreateFunctionRequest& WithRuntime(Runtime value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the function's execution role.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CreateFunctionRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the method within your code that Lambda calls to run your
     * function. Handler is required if the deployment package is a .zip file archive.
     * The format includes the file name. It can also include namespaces and other
     * qualifiers, depending on the runtime. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-progmodel.html">Lambda
     * programming model</a>.</p>
     */
    inline const Aws::String& GetHandler() const { return m_handler; }
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }
    template<typename HandlerT = Aws::String>
    void SetHandler(HandlerT&& value) { m_handlerHasBeenSet = true; m_handler = std::forward<HandlerT>(value); }
    template<typename HandlerT = Aws::String>
    CreateFunctionRequest& WithHandler(HandlerT&& value) { SetHandler(std::forward<HandlerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the function.</p>
     */
    inline const FunctionCode& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = FunctionCode>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = FunctionCode>
    CreateFunctionRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the function.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFunctionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in seconds) that Lambda allows a function to run before
     * stopping it. The default is 3 seconds. The maximum allowed value is 900 seconds.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/runtimes-context.html">Lambda
     * execution environment</a>.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline CreateFunctionRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-function-common.html#configuration-memory-console">memory
     * available to the function</a> at runtime. Increasing the function memory also
     * increases its CPU allocation. The default value is 128 MB. The value can be any
     * multiple of 1 MB.</p>
     */
    inline int GetMemorySize() const { return m_memorySize; }
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }
    inline CreateFunctionRequest& WithMemorySize(int value) { SetMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true to publish the first version of the function during creation.</p>
     */
    inline bool GetPublish() const { return m_publish; }
    inline bool PublishHasBeenSet() const { return m_publishHasBeenSet; }
    inline void SetPublish(bool value) { m_publishHasBeenSet = true; m_publish = value; }
    inline CreateFunctionRequest& WithPublish(bool value) { SetPublish(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For network connectivity to Amazon Web Services resources in a VPC, specify a
     * list of security groups and subnets in the VPC. When you connect a function to a
     * VPC, it can access resources and the internet only through that VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">Configuring
     * a Lambda function to access resources in a VPC</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    CreateFunctionRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set to <code>Zip</code> for .zip file archive.</p>
     */
    inline PackageType GetPackageType() const { return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(PackageType value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline CreateFunctionRequest& WithPackageType(PackageType value) { SetPackageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A dead-letter queue configuration that specifies the queue or topic where
     * Lambda sends asynchronous events when they fail processing. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-dlq">Dead-letter
     * queues</a>.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const { return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    void SetDeadLetterConfig(DeadLetterConfigT&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::forward<DeadLetterConfigT>(value); }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    CreateFunctionRequest& WithDeadLetterConfig(DeadLetterConfigT&& value) { SetDeadLetterConfig(std::forward<DeadLetterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Environment variables that are accessible from function code during
     * execution.</p>
     */
    inline const Environment& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Environment>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Environment>
    CreateFunctionRequest& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
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
    CreateFunctionRequest& WithKMSKeyArn(KMSKeyArnT&& value) { SetKMSKeyArn(std::forward<KMSKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set <code>Mode</code> to <code>Active</code> to sample and trace a subset of
     * incoming requests with <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/services-xray.html">X-Ray</a>.</p>
     */
    inline const TracingConfig& GetTracingConfig() const { return m_tracingConfig; }
    inline bool TracingConfigHasBeenSet() const { return m_tracingConfigHasBeenSet; }
    template<typename TracingConfigT = TracingConfig>
    void SetTracingConfig(TracingConfigT&& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = std::forward<TracingConfigT>(value); }
    template<typename TracingConfigT = TracingConfig>
    CreateFunctionRequest& WithTracingConfig(TracingConfigT&& value) { SetTracingConfig(std::forward<TracingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> to
     * apply to the function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateFunctionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateFunctionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">function
     * layers</a> to add to the function's execution environment. Specify each layer by
     * its ARN, including the version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayers() const { return m_layers; }
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }
    template<typename LayersT = Aws::Vector<Aws::String>>
    void SetLayers(LayersT&& value) { m_layersHasBeenSet = true; m_layers = std::forward<LayersT>(value); }
    template<typename LayersT = Aws::Vector<Aws::String>>
    CreateFunctionRequest& WithLayers(LayersT&& value) { SetLayers(std::forward<LayersT>(value)); return *this;}
    template<typename LayersT = Aws::String>
    CreateFunctionRequest& AddLayers(LayersT&& value) { m_layersHasBeenSet = true; m_layers.emplace_back(std::forward<LayersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Connection settings for an Amazon EFS file system.</p>
     */
    inline const Aws::Vector<FileSystemConfig>& GetFileSystemConfigs() const { return m_fileSystemConfigs; }
    inline bool FileSystemConfigsHasBeenSet() const { return m_fileSystemConfigsHasBeenSet; }
    template<typename FileSystemConfigsT = Aws::Vector<FileSystemConfig>>
    void SetFileSystemConfigs(FileSystemConfigsT&& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs = std::forward<FileSystemConfigsT>(value); }
    template<typename FileSystemConfigsT = Aws::Vector<FileSystemConfig>>
    CreateFunctionRequest& WithFileSystemConfigs(FileSystemConfigsT&& value) { SetFileSystemConfigs(std::forward<FileSystemConfigsT>(value)); return *this;}
    template<typename FileSystemConfigsT = FileSystemConfig>
    CreateFunctionRequest& AddFileSystemConfigs(FileSystemConfigsT&& value) { m_fileSystemConfigsHasBeenSet = true; m_fileSystemConfigs.emplace_back(std::forward<FileSystemConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container image <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/images-create.html#images-parms">configuration
     * values</a> that override the values in the container image Dockerfile.</p>
     */
    inline const ImageConfig& GetImageConfig() const { return m_imageConfig; }
    inline bool ImageConfigHasBeenSet() const { return m_imageConfigHasBeenSet; }
    template<typename ImageConfigT = ImageConfig>
    void SetImageConfig(ImageConfigT&& value) { m_imageConfigHasBeenSet = true; m_imageConfig = std::forward<ImageConfigT>(value); }
    template<typename ImageConfigT = ImageConfig>
    CreateFunctionRequest& WithImageConfig(ImageConfigT&& value) { SetImageConfig(std::forward<ImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To enable code signing for this function, specify the ARN of a code-signing
     * configuration. A code-signing configuration includes a set of signing profiles,
     * which define the trusted publishers for this function.</p>
     */
    inline const Aws::String& GetCodeSigningConfigArn() const { return m_codeSigningConfigArn; }
    inline bool CodeSigningConfigArnHasBeenSet() const { return m_codeSigningConfigArnHasBeenSet; }
    template<typename CodeSigningConfigArnT = Aws::String>
    void SetCodeSigningConfigArn(CodeSigningConfigArnT&& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = std::forward<CodeSigningConfigArnT>(value); }
    template<typename CodeSigningConfigArnT = Aws::String>
    CreateFunctionRequest& WithCodeSigningConfigArn(CodeSigningConfigArnT&& value) { SetCodeSigningConfigArn(std::forward<CodeSigningConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instruction set architecture that the function supports. Enter a string
     * array with one of the valid values (arm64 or x86_64). The default value is
     * <code>x86_64</code>.</p>
     */
    inline const Aws::Vector<Architecture>& GetArchitectures() const { return m_architectures; }
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
    template<typename ArchitecturesT = Aws::Vector<Architecture>>
    void SetArchitectures(ArchitecturesT&& value) { m_architecturesHasBeenSet = true; m_architectures = std::forward<ArchitecturesT>(value); }
    template<typename ArchitecturesT = Aws::Vector<Architecture>>
    CreateFunctionRequest& WithArchitectures(ArchitecturesT&& value) { SetArchitectures(std::forward<ArchitecturesT>(value)); return *this;}
    inline CreateFunctionRequest& AddArchitectures(Architecture value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }
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
    CreateFunctionRequest& WithEphemeralStorage(EphemeralStorageT&& value) { SetEphemeralStorage(std::forward<EphemeralStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/snapstart.html">SnapStart</a>
     * setting.</p>
     */
    inline const SnapStart& GetSnapStart() const { return m_snapStart; }
    inline bool SnapStartHasBeenSet() const { return m_snapStartHasBeenSet; }
    template<typename SnapStartT = SnapStart>
    void SetSnapStart(SnapStartT&& value) { m_snapStartHasBeenSet = true; m_snapStart = std::forward<SnapStartT>(value); }
    template<typename SnapStartT = SnapStart>
    CreateFunctionRequest& WithSnapStart(SnapStartT&& value) { SetSnapStart(std::forward<SnapStartT>(value)); return *this;}
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
    CreateFunctionRequest& WithLoggingConfig(LoggingConfigT&& value) { SetLoggingConfig(std::forward<LoggingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Runtime m_runtime{Runtime::NOT_SET};
    bool m_runtimeHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_handler;
    bool m_handlerHasBeenSet = false;

    FunctionCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    int m_memorySize{0};
    bool m_memorySizeHasBeenSet = false;

    bool m_publish{false};
    bool m_publishHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    PackageType m_packageType{PackageType::NOT_SET};
    bool m_packageTypeHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    Environment m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet = false;

    TracingConfig m_tracingConfig;
    bool m_tracingConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_layers;
    bool m_layersHasBeenSet = false;

    Aws::Vector<FileSystemConfig> m_fileSystemConfigs;
    bool m_fileSystemConfigsHasBeenSet = false;

    ImageConfig m_imageConfig;
    bool m_imageConfigHasBeenSet = false;

    Aws::String m_codeSigningConfigArn;
    bool m_codeSigningConfigArnHasBeenSet = false;

    Aws::Vector<Architecture> m_architectures;
    bool m_architecturesHasBeenSet = false;

    EphemeralStorage m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    SnapStart m_snapStart;
    bool m_snapStartHasBeenSet = false;

    LoggingConfig m_loggingConfig;
    bool m_loggingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
