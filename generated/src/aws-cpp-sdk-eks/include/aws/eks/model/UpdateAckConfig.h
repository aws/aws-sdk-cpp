/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>Configuration updates for an ACK (Amazon Web Services Controllers for
 * Kubernetes) capability. You only need to specify the fields that you want to
 * update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateAckConfig">AWS
 * API Reference</a></p>
 */
class UpdateAckConfig {
 public:
  AWS_EKS_API UpdateAckConfig() = default;
  AWS_EKS_API UpdateAckConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API UpdateAckConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether ACK controllers resolve resource references to resources in
   * a different Kubernetes namespace. Set this value to <code>false</code> to
   * require references to remain within the same namespace, or <code>true</code> to
   * allow cross-namespace references. If you omit this field, the current value is
   * unchanged.</p>
   */
  inline bool GetEnableCrossNamespace() const { return m_enableCrossNamespace; }
  inline bool EnableCrossNamespaceHasBeenSet() const { return m_enableCrossNamespaceHasBeenSet; }
  inline void SetEnableCrossNamespace(bool value) {
    m_enableCrossNamespaceHasBeenSet = true;
    m_enableCrossNamespace = value;
  }
  inline UpdateAckConfig& WithEnableCrossNamespace(bool value) {
    SetEnableCrossNamespace(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated list of ACK service names whose controllers are turned off for
   * this capability. This list replaces the previous list instead of merging with
   * it, so specify the complete set of services that you want turned off. If you
   * omit this field, the previous list is unchanged. To turn all services back on,
   * specify an empty list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDisabledServices() const { return m_disabledServices; }
  inline bool DisabledServicesHasBeenSet() const { return m_disabledServicesHasBeenSet; }
  template <typename DisabledServicesT = Aws::Vector<Aws::String>>
  void SetDisabledServices(DisabledServicesT&& value) {
    m_disabledServicesHasBeenSet = true;
    m_disabledServices = std::forward<DisabledServicesT>(value);
  }
  template <typename DisabledServicesT = Aws::Vector<Aws::String>>
  UpdateAckConfig& WithDisabledServices(DisabledServicesT&& value) {
    SetDisabledServices(std::forward<DisabledServicesT>(value));
    return *this;
  }
  template <typename DisabledServicesT = Aws::String>
  UpdateAckConfig& AddDisabledServices(DisabledServicesT&& value) {
    m_disabledServicesHasBeenSet = true;
    m_disabledServices.emplace_back(std::forward<DisabledServicesT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enableCrossNamespace{false};

  Aws::Vector<Aws::String> m_disabledServices;
  bool m_enableCrossNamespaceHasBeenSet = false;
  bool m_disabledServicesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
