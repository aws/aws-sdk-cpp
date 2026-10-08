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
 * <p>The response object containing configuration details for an ACK (Amazon Web
 * Services Controllers for Kubernetes) capability.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AckConfigResponse">AWS
 * API Reference</a></p>
 */
class AckConfigResponse {
 public:
  AWS_EKS_API AckConfigResponse() = default;
  AWS_EKS_API AckConfigResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API AckConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether ACK controllers resolve resource references to resources in
   * a different Kubernetes namespace. This value reflects the setting that's in
   * effect, and is <code>false</code> if you never specified a value. Capabilities
   * that were using cross-namespace references before this setting became available
   * have this value set to <code>true</code>, so their behavior is unchanged.</p>
   */
  inline bool GetEnableCrossNamespace() const { return m_enableCrossNamespace; }
  inline bool EnableCrossNamespaceHasBeenSet() const { return m_enableCrossNamespaceHasBeenSet; }
  inline void SetEnableCrossNamespace(bool value) {
    m_enableCrossNamespaceHasBeenSet = true;
    m_enableCrossNamespace = value;
  }
  inline AckConfigResponse& WithEnableCrossNamespace(bool value) {
    SetEnableCrossNamespace(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of ACK service names whose controllers are turned off for this
   * capability. Existing custom resource definitions remain installed, and resources
   * of a disabled service aren't reconciled until the service is re-enabled.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDisabledServices() const { return m_disabledServices; }
  inline bool DisabledServicesHasBeenSet() const { return m_disabledServicesHasBeenSet; }
  template <typename DisabledServicesT = Aws::Vector<Aws::String>>
  void SetDisabledServices(DisabledServicesT&& value) {
    m_disabledServicesHasBeenSet = true;
    m_disabledServices = std::forward<DisabledServicesT>(value);
  }
  template <typename DisabledServicesT = Aws::Vector<Aws::String>>
  AckConfigResponse& WithDisabledServices(DisabledServicesT&& value) {
    SetDisabledServices(std::forward<DisabledServicesT>(value));
    return *this;
  }
  template <typename DisabledServicesT = Aws::String>
  AckConfigResponse& AddDisabledServices(DisabledServicesT&& value) {
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
