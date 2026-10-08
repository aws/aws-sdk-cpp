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
 * <p>Configuration settings for an ACK (Amazon Web Services Controllers for
 * Kubernetes) capability. This includes whether controllers can resolve
 * cross-namespace resource references and which ACK service controllers are
 * disabled.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AckConfigRequest">AWS
 * API Reference</a></p>
 */
class AckConfigRequest {
 public:
  AWS_EKS_API AckConfigRequest() = default;
  AWS_EKS_API AckConfigRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API AckConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether ACK controllers resolve resource references to resources in
   * a different Kubernetes namespace. Set this value to <code>true</code> to allow
   * references to resolve to resources in another namespace. If you don't specify
   * this value, or you omit the <code>ack</code> configuration entirely, the
   * capability is created with this value set to <code>false</code> and references
   * must remain within the same namespace.</p>
   */
  inline bool GetEnableCrossNamespace() const { return m_enableCrossNamespace; }
  inline bool EnableCrossNamespaceHasBeenSet() const { return m_enableCrossNamespaceHasBeenSet; }
  inline void SetEnableCrossNamespace(bool value) {
    m_enableCrossNamespaceHasBeenSet = true;
    m_enableCrossNamespace = value;
  }
  inline AckConfigRequest& WithEnableCrossNamespace(bool value) {
    SetEnableCrossNamespace(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of ACK service names whose controllers are turned off for this
   * capability, for example <code>s3</code>, <code>ec2</code>, and <code>iam</code>.
   * Resources of a disabled service aren't reconciled until you re-enable the
   * service. To keep all services enabled, omit this field or specify an empty list.
   * An unrecognized service name is accepted and stored but turns nothing off, and
   * <code>DescribeCapability</code> returns the list exactly as you supplied it. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/create-ack-capability.html#ack-configuration-options">ACK
   * capability configuration options</a> in the <i>Amazon EKS User Guide</i>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDisabledServices() const { return m_disabledServices; }
  inline bool DisabledServicesHasBeenSet() const { return m_disabledServicesHasBeenSet; }
  template <typename DisabledServicesT = Aws::Vector<Aws::String>>
  void SetDisabledServices(DisabledServicesT&& value) {
    m_disabledServicesHasBeenSet = true;
    m_disabledServices = std::forward<DisabledServicesT>(value);
  }
  template <typename DisabledServicesT = Aws::Vector<Aws::String>>
  AckConfigRequest& WithDisabledServices(DisabledServicesT&& value) {
    SetDisabledServices(std::forward<DisabledServicesT>(value));
    return *this;
  }
  template <typename DisabledServicesT = Aws::String>
  AckConfigRequest& AddDisabledServices(DisabledServicesT&& value) {
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
