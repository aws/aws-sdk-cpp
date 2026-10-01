/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWebRequest.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/BuildConfig.h>
#include <aws/lambda-web/model/ServiceConfig.h>

#include <utility>

namespace Aws {
namespace LambdaWeb {
namespace Model {

/**
 * <p>The request to create a web function revision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunctionRevisionRequest">AWS
 * API Reference</a></p>
 */
class CreateWebFunctionRevisionRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API CreateWebFunctionRevisionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWebFunctionRevision"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the web function. You can specify the function name or the
   * function ARN. The length constraint applies only to the full ARN. If you specify
   * only the function name, it is limited to 64 characters in length.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  CreateWebFunctionRevisionRequest& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the revision.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateWebFunctionRevisionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS Key Management Service (AWS KMS)
   * key used to encrypt the revision's code and environment variables.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CreateWebFunctionRevisionRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The build configuration for the revision, including code location and runtime
   * settings.</p>
   */
  inline const BuildConfig& GetBuildConfig() const { return m_buildConfig; }
  inline bool BuildConfigHasBeenSet() const { return m_buildConfigHasBeenSet; }
  template <typename BuildConfigT = BuildConfig>
  void SetBuildConfig(BuildConfigT&& value) {
    m_buildConfigHasBeenSet = true;
    m_buildConfig = std::forward<BuildConfigT>(value);
  }
  template <typename BuildConfigT = BuildConfig>
  CreateWebFunctionRevisionRequest& WithBuildConfig(BuildConfigT&& value) {
    SetBuildConfig(std::forward<BuildConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service configuration for the revision, including execution role,
   * timeout, and concurrency settings.</p>
   */
  inline const ServiceConfig& GetServiceConfig() const { return m_serviceConfig; }
  inline bool ServiceConfigHasBeenSet() const { return m_serviceConfigHasBeenSet; }
  template <typename ServiceConfigT = ServiceConfig>
  void SetServiceConfig(ServiceConfigT&& value) {
    m_serviceConfigHasBeenSet = true;
    m_serviceConfig = std::forward<ServiceConfigT>(value);
  }
  template <typename ServiceConfigT = ServiceConfig>
  CreateWebFunctionRevisionRequest& WithServiceConfig(ServiceConfigT&& value) {
    SetServiceConfig(std::forward<ServiceConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::String m_description;

  Aws::String m_kmsKeyArn;

  BuildConfig m_buildConfig;

  ServiceConfig m_serviceConfig;
  bool m_functionNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_buildConfigHasBeenSet = false;
  bool m_serviceConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
