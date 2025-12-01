/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ArgoCdConfigResponse.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>The response object containing capability configuration
 * details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CapabilityConfigurationResponse">AWS
 * API Reference</a></p>
 */
class CapabilityConfigurationResponse {
 public:
  AWS_EKS_API CapabilityConfigurationResponse() = default;
  AWS_EKS_API CapabilityConfigurationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CapabilityConfigurationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration settings for an Argo CD capability, including the server URL
   * and other Argo CD-specific settings.</p>
   */
  inline const ArgoCdConfigResponse& GetArgoCd() const { return m_argoCd; }
  inline bool ArgoCdHasBeenSet() const { return m_argoCdHasBeenSet; }
  template <typename ArgoCdT = ArgoCdConfigResponse>
  void SetArgoCd(ArgoCdT&& value) {
    m_argoCdHasBeenSet = true;
    m_argoCd = std::forward<ArgoCdT>(value);
  }
  template <typename ArgoCdT = ArgoCdConfigResponse>
  CapabilityConfigurationResponse& WithArgoCd(ArgoCdT&& value) {
    SetArgoCd(std::forward<ArgoCdT>(value));
    return *this;
  }
  ///@}
 private:
  ArgoCdConfigResponse m_argoCd;
  bool m_argoCdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
