/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/AttachmentType.h>

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
 * <p>Identifies one or more inline policies that are embedded in IAM users,
 * groups, or roles, by the name of the policy together with the type and name of
 * the entity that it is attached to. Wildcard characters in the entity name can
 * match multiple entities, so a single identifier can select more than one
 * attached inline policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/InlinePolicyIdentifierType">AWS
 * API Reference</a></p>
 */
class InlinePolicyIdentifierType {
 public:
  AWS_IAM_API InlinePolicyIdentifierType() = default;
  AWS_IAM_API InlinePolicyIdentifierType(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API InlinePolicyIdentifierType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the inline policy.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  InlinePolicyIdentifierType& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of IAM entity that the inline policy is attached to.</p>
   */
  inline AttachmentType GetAttachmentType() const { return m_attachmentType; }
  inline bool AttachmentTypeHasBeenSet() const { return m_attachmentTypeHasBeenSet; }
  inline void SetAttachmentType(AttachmentType value) {
    m_attachmentTypeHasBeenSet = true;
    m_attachmentType = value;
  }
  inline InlinePolicyIdentifierType& WithAttachmentType(AttachmentType value) {
    SetAttachmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the IAM user, group, or role that the inline policy is attached
   * to. Wildcard characters are supported to match multiple entities: use at most
   * one <code>*</code> (matches any sequence of characters, including none), and any
   * number of <code>?</code> (each matches exactly one character).</p>
   */
  inline const Aws::String& GetAttachmentName() const { return m_attachmentName; }
  inline bool AttachmentNameHasBeenSet() const { return m_attachmentNameHasBeenSet; }
  template <typename AttachmentNameT = Aws::String>
  void SetAttachmentName(AttachmentNameT&& value) {
    m_attachmentNameHasBeenSet = true;
    m_attachmentName = std::forward<AttachmentNameT>(value);
  }
  template <typename AttachmentNameT = Aws::String>
  InlinePolicyIdentifierType& WithAttachmentName(AttachmentNameT&& value) {
    SetAttachmentName(std::forward<AttachmentNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyName;

  AttachmentType m_attachmentType{AttachmentType::NOT_SET};

  Aws::String m_attachmentName;
  bool m_policyNameHasBeenSet = false;
  bool m_attachmentTypeHasBeenSet = false;
  bool m_attachmentNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
