/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/UpdateArgoCdConfig.h>

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
 * <p>Configuration updates for a capability. The structure varies depending on the
 * capability type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateCapabilityConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateCapabilityConfiguration {
 public:
  AWS_EKS_API UpdateCapabilityConfiguration() = default;
  AWS_EKS_API UpdateCapabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API UpdateCapabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration updates specific to Argo CD capabilities.</p>
   */
  inline const UpdateArgoCdConfig& GetArgoCd() const { return m_argoCd; }
  inline bool ArgoCdHasBeenSet() const { return m_argoCdHasBeenSet; }
  template <typename ArgoCdT = UpdateArgoCdConfig>
  void SetArgoCd(ArgoCdT&& value) {
    m_argoCdHasBeenSet = true;
    m_argoCd = std::forward<ArgoCdT>(value);
  }
  template <typename ArgoCdT = UpdateArgoCdConfig>
  UpdateCapabilityConfiguration& WithArgoCd(ArgoCdT&& value) {
    SetArgoCd(std::forward<ArgoCdT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateArgoCdConfig m_argoCd;
  bool m_argoCdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
