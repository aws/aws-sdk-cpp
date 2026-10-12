/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/BuildConfig.h>
#include <aws/lambda-web/model/ServiceConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>The configuration for a web function revision, including code build settings
 * and service configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/RevisionConfig">AWS
 * API Reference</a></p>
 */
class RevisionConfig {
 public:
  AWS_LAMBDAWEB_API RevisionConfig() = default;
  AWS_LAMBDAWEB_API RevisionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API RevisionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  RevisionConfig& WithDescription(DescriptionT&& value) {
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
  RevisionConfig& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The build configuration for the revision.</p>
   */
  inline const BuildConfig& GetBuildConfig() const { return m_buildConfig; }
  inline bool BuildConfigHasBeenSet() const { return m_buildConfigHasBeenSet; }
  template <typename BuildConfigT = BuildConfig>
  void SetBuildConfig(BuildConfigT&& value) {
    m_buildConfigHasBeenSet = true;
    m_buildConfig = std::forward<BuildConfigT>(value);
  }
  template <typename BuildConfigT = BuildConfig>
  RevisionConfig& WithBuildConfig(BuildConfigT&& value) {
    SetBuildConfig(std::forward<BuildConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service configuration for the revision.</p>
   */
  inline const ServiceConfig& GetServiceConfig() const { return m_serviceConfig; }
  inline bool ServiceConfigHasBeenSet() const { return m_serviceConfigHasBeenSet; }
  template <typename ServiceConfigT = ServiceConfig>
  void SetServiceConfig(ServiceConfigT&& value) {
    m_serviceConfigHasBeenSet = true;
    m_serviceConfig = std::forward<ServiceConfigT>(value);
  }
  template <typename ServiceConfigT = ServiceConfig>
  RevisionConfig& WithServiceConfig(ServiceConfigT&& value) {
    SetServiceConfig(std::forward<ServiceConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_kmsKeyArn;

  BuildConfig m_buildConfig;

  ServiceConfig m_serviceConfig;
  bool m_descriptionHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_buildConfigHasBeenSet = false;
  bool m_serviceConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
