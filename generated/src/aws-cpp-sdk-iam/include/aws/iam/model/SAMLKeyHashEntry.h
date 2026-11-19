/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Contains the key hashes that are associated with a SAML identity provider
 * issuer.</p> <p>This data type is used as a response element in the <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetSAMLProvider.html">GetSAMLProvider</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/SAMLKeyHashEntry">AWS
 * API Reference</a></p>
 */
class SAMLKeyHashEntry {
 public:
  AWS_IAM_API SAMLKeyHashEntry() = default;
  AWS_IAM_API SAMLKeyHashEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API SAMLKeyHashEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The issuer URL of the SAML identity provider that the key hashes are
   * associated with.</p>
   */
  inline const Aws::String& GetIssuerURL() const { return m_issuerURL; }
  inline bool IssuerURLHasBeenSet() const { return m_issuerURLHasBeenSet; }
  template <typename IssuerURLT = Aws::String>
  void SetIssuerURL(IssuerURLT&& value) {
    m_issuerURLHasBeenSet = true;
    m_issuerURL = std::forward<IssuerURLT>(value);
  }
  template <typename IssuerURLT = Aws::String>
  SAMLKeyHashEntry& WithIssuerURL(IssuerURLT&& value) {
    SetIssuerURL(std::forward<IssuerURLT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of key hashes for the SAML identity provider issuer.</p>
   */
  inline const Aws::Vector<Aws::String>& GetKeyHashes() const { return m_keyHashes; }
  inline bool KeyHashesHasBeenSet() const { return m_keyHashesHasBeenSet; }
  template <typename KeyHashesT = Aws::Vector<Aws::String>>
  void SetKeyHashes(KeyHashesT&& value) {
    m_keyHashesHasBeenSet = true;
    m_keyHashes = std::forward<KeyHashesT>(value);
  }
  template <typename KeyHashesT = Aws::Vector<Aws::String>>
  SAMLKeyHashEntry& WithKeyHashes(KeyHashesT&& value) {
    SetKeyHashes(std::forward<KeyHashesT>(value));
    return *this;
  }
  template <typename KeyHashesT = Aws::String>
  SAMLKeyHashEntry& AddKeyHashes(KeyHashesT&& value) {
    m_keyHashesHasBeenSet = true;
    m_keyHashes.emplace_back(std::forward<KeyHashesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_issuerURL;

  Aws::Vector<Aws::String> m_keyHashes;
  bool m_issuerURLHasBeenSet = false;
  bool m_keyHashesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
