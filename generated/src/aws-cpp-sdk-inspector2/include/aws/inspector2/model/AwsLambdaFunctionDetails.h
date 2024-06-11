/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/PackageType.h>
#include <aws/inspector2/model/Runtime.h>
#include <aws/inspector2/model/LambdaVpcConfig.h>
#include <aws/inspector2/model/Architecture.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p> A summary of information about the Amazon Web Services Lambda
   * function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsLambdaFunctionDetails">AWS
   * API Reference</a></p>
   */
  class AwsLambdaFunctionDetails
  {
  public:
    AWS_INSPECTOR2_API AwsLambdaFunctionDetails();
    AWS_INSPECTOR2_API AwsLambdaFunctionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsLambdaFunctionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instruction set architecture that the Amazon Web Services Lambda function
     * supports. Architecture is a string array with one of the valid values. The
     * default architecture value is <code>x86_64</code>.</p>
     */
    inline const Aws::Vector<Architecture>& GetArchitectures() const{ return m_architectures; }
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
    inline void SetArchitectures(const Aws::Vector<Architecture>& value) { m_architecturesHasBeenSet = true; m_architectures = value; }
    inline void SetArchitectures(Aws::Vector<Architecture>&& value) { m_architecturesHasBeenSet = true; m_architectures = std::move(value); }
    inline AwsLambdaFunctionDetails& WithArchitectures(const Aws::Vector<Architecture>& value) { SetArchitectures(value); return *this;}
    inline AwsLambdaFunctionDetails& WithArchitectures(Aws::Vector<Architecture>&& value) { SetArchitectures(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& AddArchitectures(const Architecture& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }
    inline AwsLambdaFunctionDetails& AddArchitectures(Architecture&& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SHA256 hash of the Amazon Web Services Lambda function's deployment
     * package.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }
    inline bool CodeSha256HasBeenSet() const { return m_codeSha256HasBeenSet; }
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = value; }
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::move(value); }
    inline void SetCodeSha256(const char* value) { m_codeSha256HasBeenSet = true; m_codeSha256.assign(value); }
    inline AwsLambdaFunctionDetails& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}
    inline AwsLambdaFunctionDetails& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function's execution role.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline AwsLambdaFunctionDetails& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline AwsLambdaFunctionDetails& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services Lambda function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }
    inline AwsLambdaFunctionDetails& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}
    inline AwsLambdaFunctionDetails& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a user last updated the configuration, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601
     * format</a> </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }
    inline AwsLambdaFunctionDetails& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline AwsLambdaFunctionDetails& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">
     * layers</a>. A Lambda function can have up to five layers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayers() const{ return m_layers; }
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }
    inline void SetLayers(const Aws::Vector<Aws::String>& value) { m_layersHasBeenSet = true; m_layers = value; }
    inline void SetLayers(Aws::Vector<Aws::String>&& value) { m_layersHasBeenSet = true; m_layers = std::move(value); }
    inline AwsLambdaFunctionDetails& WithLayers(const Aws::Vector<Aws::String>& value) { SetLayers(value); return *this;}
    inline AwsLambdaFunctionDetails& WithLayers(Aws::Vector<Aws::String>&& value) { SetLayers(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& AddLayers(const Aws::String& value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }
    inline AwsLambdaFunctionDetails& AddLayers(Aws::String&& value) { m_layersHasBeenSet = true; m_layers.push_back(std::move(value)); return *this; }
    inline AwsLambdaFunctionDetails& AddLayers(const char* value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of deployment package. Set to <code>Image</code> for container image
     * and set <code>Zip</code> for .zip file archive.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }
    inline AwsLambdaFunctionDetails& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}
    inline AwsLambdaFunctionDetails& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime environment for the Amazon Web Services Lambda function.</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(Runtime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline AwsLambdaFunctionDetails& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}
    inline AwsLambdaFunctionDetails& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Web Services Lambda function.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline AwsLambdaFunctionDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline AwsLambdaFunctionDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function's networking configuration.</p>
     */
    inline const LambdaVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const LambdaVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(LambdaVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline AwsLambdaFunctionDetails& WithVpcConfig(const LambdaVpcConfig& value) { SetVpcConfig(value); return *this;}
    inline AwsLambdaFunctionDetails& WithVpcConfig(LambdaVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Architecture> m_architectures;
    bool m_architecturesHasBeenSet = false;

    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_layers;
    bool m_layersHasBeenSet = false;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet = false;

    Runtime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    LambdaVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
