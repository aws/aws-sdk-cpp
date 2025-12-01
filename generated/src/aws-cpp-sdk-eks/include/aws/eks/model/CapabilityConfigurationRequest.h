/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ArgoCdConfigRequest.h>

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
 * <p>Configuration settings for a capability. The structure of this object varies
 * depending on the capability type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CapabilityConfigurationRequest">AWS
 * API Reference</a></p>
 */
class CapabilityConfigurationRequest {
 public:
  AWS_EKS_API CapabilityConfigurationRequest() = default;
  AWS_EKS_API CapabilityConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CapabilityConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration settings specific to Argo CD capabilities. This field is only
   * used when creating or updating an Argo CD capability.</p>
   */
  inline const ArgoCdConfigRequest& GetArgoCd() const { return m_argoCd; }
  inline bool ArgoCdHasBeenSet() const { return m_argoCdHasBeenSet; }
  template <typename ArgoCdT = ArgoCdConfigRequest>
  void SetArgoCd(ArgoCdT&& value) {
    m_argoCdHasBeenSet = true;
    m_argoCd = std::forward<ArgoCdT>(value);
  }
  template <typename ArgoCdT = ArgoCdConfigRequest>
  CapabilityConfigurationRequest& WithArgoCd(ArgoCdT&& value) {
    SetArgoCd(std::forward<ArgoCdT>(value));
    return *this;
  }
  ///@}
 private:
  ArgoCdConfigRequest m_argoCd;
  bool m_argoCdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
