/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ContextProviderKeyDefinition.h>

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
 * <p>Contains the trusted identity propagation context provider configuration for
 * a SAML or OpenID Connect (OIDC) identity provider. The context provider defines
 * how the subject is derived and how keys from the external identity provider's
 * assertion or token are mapped into trusted context keys.</p> <p>This data type
 * is used as a request parameter in the <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateOpenIDConnectProvider.html">CreateOpenIDConnectProvider</a>,
 * <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UpdateOpenIDConnectProvider.html">UpdateOpenIDConnectProvider</a>,
 * <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateSAMLProvider.html">CreateSAMLProvider</a>,
 * and <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UpdateSAMLProvider.html">UpdateSAMLProvider</a>
 * operations, and as a response element in the <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetOpenIDConnectProvider.html">GetOpenIDConnectProvider</a>
 * and <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetSAMLProvider.html">GetSAMLProvider</a>
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ContextProvider">AWS
 * API Reference</a></p>
 */
class ContextProvider {
 public:
  AWS_IAM_API ContextProvider() = default;
  AWS_IAM_API ContextProvider(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API ContextProvider& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>A list of source-to-target key mappings that define how keys from the
   * external identity provider's assertion or token are mapped into trusted context
   * keys. You can specify from 0 to 10 mappings.</p>
   */
  inline const Aws::Vector<ContextProviderKeyDefinition>& GetKeyDefinitionList() const { return m_keyDefinitionList; }
  inline bool KeyDefinitionListHasBeenSet() const { return m_keyDefinitionListHasBeenSet; }
  template <typename KeyDefinitionListT = Aws::Vector<ContextProviderKeyDefinition>>
  void SetKeyDefinitionList(KeyDefinitionListT&& value) {
    m_keyDefinitionListHasBeenSet = true;
    m_keyDefinitionList = std::forward<KeyDefinitionListT>(value);
  }
  template <typename KeyDefinitionListT = Aws::Vector<ContextProviderKeyDefinition>>
  ContextProvider& WithKeyDefinitionList(KeyDefinitionListT&& value) {
    SetKeyDefinitionList(std::forward<KeyDefinitionListT>(value));
    return *this;
  }
  template <typename KeyDefinitionListT = ContextProviderKeyDefinition>
  ContextProvider& AddKeyDefinitionList(KeyDefinitionListT&& value) {
    m_keyDefinitionListHasBeenSet = true;
    m_keyDefinitionList.emplace_back(std::forward<KeyDefinitionListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source key that is used to derive the subject for the injected trusted
   * context. This value identifies the claim or attribute in the external identity
   * provider's assertion or token that supplies the subject.</p> <p>The key can
   * contain only ASCII letters (A-Z, a-z), numbers (0-9), single spaces, and the
   * following characters: <code>_ . : / = + - @ #</code>. It can't start or end with
   * a space or contain two spaces in a row.</p>
   */
  inline const Aws::String& GetSubjectSourceKey() const { return m_subjectSourceKey; }
  inline bool SubjectSourceKeyHasBeenSet() const { return m_subjectSourceKeyHasBeenSet; }
  template <typename SubjectSourceKeyT = Aws::String>
  void SetSubjectSourceKey(SubjectSourceKeyT&& value) {
    m_subjectSourceKeyHasBeenSet = true;
    m_subjectSourceKey = std::forward<SubjectSourceKeyT>(value);
  }
  template <typename SubjectSourceKeyT = Aws::String>
  ContextProvider& WithSubjectSourceKey(SubjectSourceKeyT&& value) {
    SetSubjectSourceKey(std::forward<SubjectSourceKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A static value for the subject type, such as <code>user</code> or
   * <code>workload</code>.</p> <p>This parameter is optional and is mutually
   * exclusive with <code>SubjectTypeSourceKey</code>. Specify either
   * <code>SubjectTypeValue</code> or <code>SubjectTypeSourceKey</code>, but not
   * both.</p>
   */
  inline const Aws::String& GetSubjectTypeValue() const { return m_subjectTypeValue; }
  inline bool SubjectTypeValueHasBeenSet() const { return m_subjectTypeValueHasBeenSet; }
  template <typename SubjectTypeValueT = Aws::String>
  void SetSubjectTypeValue(SubjectTypeValueT&& value) {
    m_subjectTypeValueHasBeenSet = true;
    m_subjectTypeValue = std::forward<SubjectTypeValueT>(value);
  }
  template <typename SubjectTypeValueT = Aws::String>
  ContextProvider& WithSubjectTypeValue(SubjectTypeValueT&& value) {
    SetSubjectTypeValue(std::forward<SubjectTypeValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source key that supplies the subject type from the external identity
   * provider's assertion or token.</p> <p>The key can contain only ASCII letters
   * (A-Z, a-z), numbers (0-9), single spaces, and the following characters: <code>_
   * . : / = + - @ #</code>. It can't start or end with a space or contain two spaces
   * in a row.</p> <p>This parameter is mutually exclusive with
   * <code>SubjectTypeValue</code>. Specify either <code>SubjectTypeSourceKey</code>
   * or <code>SubjectTypeValue</code>, but not both.</p>
   */
  inline const Aws::String& GetSubjectTypeSourceKey() const { return m_subjectTypeSourceKey; }
  inline bool SubjectTypeSourceKeyHasBeenSet() const { return m_subjectTypeSourceKeyHasBeenSet; }
  template <typename SubjectTypeSourceKeyT = Aws::String>
  void SetSubjectTypeSourceKey(SubjectTypeSourceKeyT&& value) {
    m_subjectTypeSourceKeyHasBeenSet = true;
    m_subjectTypeSourceKey = std::forward<SubjectTypeSourceKeyT>(value);
  }
  template <typename SubjectTypeSourceKeyT = Aws::String>
  ContextProvider& WithSubjectTypeSourceKey(SubjectTypeSourceKeyT&& value) {
    SetSubjectTypeSourceKey(std::forward<SubjectTypeSourceKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ContextProviderKeyDefinition> m_keyDefinitionList;

  Aws::String m_subjectSourceKey;

  Aws::String m_subjectTypeValue;

  Aws::String m_subjectTypeSourceKey;
  bool m_keyDefinitionListHasBeenSet = false;
  bool m_subjectSourceKeyHasBeenSet = false;
  bool m_subjectTypeValueHasBeenSet = false;
  bool m_subjectTypeSourceKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
