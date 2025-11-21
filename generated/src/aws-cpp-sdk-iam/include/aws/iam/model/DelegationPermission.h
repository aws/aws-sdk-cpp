/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/PolicyParameter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {

/**
 * <p>Contains information about the permissions being delegated in a delegation
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/DelegationPermission">AWS
 * API Reference</a></p>
 */
class DelegationPermission {
 public:
  AWS_IAM_API DelegationPermission() = default;
  AWS_IAM_API DelegationPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API DelegationPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>This ARN maps to a pre-registered policy content for this partner. See the <a
   * href="">partner onboarding documentation</a> to understand how to create a
   * delegation template.</p>
   */
  inline const Aws::String& GetPolicyTemplateArn() const { return m_policyTemplateArn; }
  inline bool PolicyTemplateArnHasBeenSet() const { return m_policyTemplateArnHasBeenSet; }
  template <typename PolicyTemplateArnT = Aws::String>
  void SetPolicyTemplateArn(PolicyTemplateArnT&& value) {
    m_policyTemplateArnHasBeenSet = true;
    m_policyTemplateArn = std::forward<PolicyTemplateArnT>(value);
  }
  template <typename PolicyTemplateArnT = Aws::String>
  DelegationPermission& WithPolicyTemplateArn(PolicyTemplateArnT&& value) {
    SetPolicyTemplateArn(std::forward<PolicyTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of policy parameters that define the scope and constraints of the
   * delegated permissions.</p>
   */
  inline const Aws::Vector<PolicyParameter>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Vector<PolicyParameter>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Vector<PolicyParameter>>
  DelegationPermission& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersT = PolicyParameter>
  DelegationPermission& AddParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace_back(std::forward<ParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyTemplateArn;
  bool m_policyTemplateArnHasBeenSet = false;

  Aws::Vector<PolicyParameter> m_parameters;
  bool m_parametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
