/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LaunchWizard {
namespace Model {

/**
 * <p>The deployment must be initiated from a delegated administrator account for
 * the specified service principal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DelegatedAdminConstraint">AWS
 * API Reference</a></p>
 */
class DelegatedAdminConstraint {
 public:
  AWS_LAUNCHWIZARD_API DelegatedAdminConstraint() = default;
  AWS_LAUNCHWIZARD_API DelegatedAdminConstraint(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API DelegatedAdminConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service principal for which the account must be a delegated
   * administrator. For example,
   * <code>stacksets.cloudformation.amazonaws.com</code>.</p>
   */
  inline const Aws::String& GetServicePrincipal() const { return m_servicePrincipal; }
  inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
  template <typename ServicePrincipalT = Aws::String>
  void SetServicePrincipal(ServicePrincipalT&& value) {
    m_servicePrincipalHasBeenSet = true;
    m_servicePrincipal = std::forward<ServicePrincipalT>(value);
  }
  template <typename ServicePrincipalT = Aws::String>
  DelegatedAdminConstraint& WithServicePrincipal(ServicePrincipalT&& value) {
    SetServicePrincipal(std::forward<ServicePrincipalT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_servicePrincipal;
  bool m_servicePrincipalHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
