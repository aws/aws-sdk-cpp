/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {

/**
 * <p>The image configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ImageConfigurationInput">AWS
 * API Reference</a></p>
 */
class ImageConfigurationInput {
 public:
  AWS_EMRSERVERLESS_API ImageConfigurationInput() = default;
  AWS_EMRSERVERLESS_API ImageConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API ImageConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URI of an image in the Amazon ECR registry. This field is required when
   * you create a new application. If you leave this field blank in an update, Amazon
   * EMR will remove the image configuration.</p>
   */
  inline const Aws::String& GetImageUri() const { return m_imageUri; }
  inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
  template <typename ImageUriT = Aws::String>
  void SetImageUri(ImageUriT&& value) {
    m_imageUriHasBeenSet = true;
    m_imageUri = std::forward<ImageUriT>(value);
  }
  template <typename ImageUriT = Aws::String>
  ImageConfigurationInput& WithImageUri(ImageUriT&& value) {
    SetImageUri(std::forward<ImageUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Boolean value indicating if the digest resolution is application level or
   * workload level. If true, a custom image URI is resolved at application start
   * time and all workloads submitted will use that image digest. If false, the
   * custom image URI is resolved at the workload submission time.</p>
   */
  inline bool GetApplicationLevelDigestResolution() const { return m_applicationLevelDigestResolution; }
  inline bool ApplicationLevelDigestResolutionHasBeenSet() const { return m_applicationLevelDigestResolutionHasBeenSet; }
  inline void SetApplicationLevelDigestResolution(bool value) {
    m_applicationLevelDigestResolutionHasBeenSet = true;
    m_applicationLevelDigestResolution = value;
  }
  inline ImageConfigurationInput& WithApplicationLevelDigestResolution(bool value) {
    SetApplicationLevelDigestResolution(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageUri;

  bool m_applicationLevelDigestResolution{false};
  bool m_imageUriHasBeenSet = false;
  bool m_applicationLevelDigestResolutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
