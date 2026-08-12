/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

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
 * <p>Contains an inline policy template that the service embeds in roles that you
 * create from a role template.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/InlinePolicy">AWS
 * API Reference</a></p>
 */
class InlinePolicy {
 public:
  AWS_IAM_API InlinePolicy() = default;
  AWS_IAM_API InlinePolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API InlinePolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  InlinePolicy& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inline policy document.</p>
   */
  inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
  inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
  template <typename PolicyDocumentT = Aws::String>
  void SetPolicyDocument(PolicyDocumentT&& value) {
    m_policyDocumentHasBeenSet = true;
    m_policyDocument = std::forward<PolicyDocumentT>(value);
  }
  template <typename PolicyDocumentT = Aws::String>
  InlinePolicy& WithPolicyDocument(PolicyDocumentT&& value) {
    SetPolicyDocument(std::forward<PolicyDocumentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyName;

  Aws::String m_policyDocument;
  bool m_policyNameHasBeenSet = false;
  bool m_policyDocumentHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
