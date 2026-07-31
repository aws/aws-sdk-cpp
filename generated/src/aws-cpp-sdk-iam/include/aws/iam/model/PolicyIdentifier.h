/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/InlinePolicyIdentifierType.h>
#include <aws/iam/model/PolicyIdentifierPolicyType.h>

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
 * <p>Identifies one or more policies as a union type. Specify exactly one of
 * <code>PolicyType</code>, <code>PolicyArn</code>, or
 * <code>InlinePolicyIdentifier</code> to identify policies by their type, by
 * Amazon Resource Name (ARN), or by the name of an inline policy and the entity it
 * is attached to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PolicyIdentifier">AWS
 * API Reference</a></p>
 */
class PolicyIdentifier {
 public:
  AWS_IAM_API PolicyIdentifier() = default;
  AWS_IAM_API PolicyIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API PolicyIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The policy type to identify. All policies of the specified type are
   * matched.</p>
   */
  inline PolicyIdentifierPolicyType GetPolicyType() const { return m_policyType; }
  inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
  inline void SetPolicyType(PolicyIdentifierPolicyType value) {
    m_policyTypeHasBeenSet = true;
    m_policyType = value;
  }
  inline PolicyIdentifier& WithPolicyType(PolicyIdentifierPolicyType value) {
    SetPolicyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an Amazon Web Services managed policy or a
   * customer managed policy that is attached to an IAM user, group, or role.
   * Wildcard characters are supported in the resource name portion of the ARN to
   * match multiple managed policies: use at most one <code>*</code> (matches any
   * sequence of characters, including none), and any number of <code>?</code> (each
   * matches exactly one character).</p> <p>For more information about ARNs, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  PolicyIdentifier& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An inline policy identifier consisting of a policy name and the entity it is
   * attached to. Wildcard characters (<code>*</code> and <code>?</code>) in the
   * entity name can match multiple entities.</p>
   */
  inline const InlinePolicyIdentifierType& GetInlinePolicyIdentifier() const { return m_inlinePolicyIdentifier; }
  inline bool InlinePolicyIdentifierHasBeenSet() const { return m_inlinePolicyIdentifierHasBeenSet; }
  template <typename InlinePolicyIdentifierT = InlinePolicyIdentifierType>
  void SetInlinePolicyIdentifier(InlinePolicyIdentifierT&& value) {
    m_inlinePolicyIdentifierHasBeenSet = true;
    m_inlinePolicyIdentifier = std::forward<InlinePolicyIdentifierT>(value);
  }
  template <typename InlinePolicyIdentifierT = InlinePolicyIdentifierType>
  PolicyIdentifier& WithInlinePolicyIdentifier(InlinePolicyIdentifierT&& value) {
    SetInlinePolicyIdentifier(std::forward<InlinePolicyIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  PolicyIdentifierPolicyType m_policyType{PolicyIdentifierPolicyType::NOT_SET};

  Aws::String m_policyArn;

  InlinePolicyIdentifierType m_inlinePolicyIdentifier;
  bool m_policyTypeHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_inlinePolicyIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
