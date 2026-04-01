/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DistinguishedName.h>
#include <aws/acm/model/ExtendedKeyUsageName.h>
#include <aws/acm/model/GeneralName.h>
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/acm/model/KeyUsageName.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Contains X.509 certificate attributes extracted from the
 * certificate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/X509Attributes">AWS
 * API Reference</a></p>
 */
class X509Attributes {
 public:
  AWS_ACM_API X509Attributes() = default;
  AWS_ACM_API X509Attributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API X509Attributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The distinguished name of the certificate issuer.</p>
   */
  inline const DistinguishedName& GetIssuer() const { return m_issuer; }
  inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
  template <typename IssuerT = DistinguishedName>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = DistinguishedName>
  X509Attributes& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distinguished name of the certificate subject.</p>
   */
  inline const DistinguishedName& GetSubject() const { return m_subject; }
  inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
  template <typename SubjectT = DistinguishedName>
  void SetSubject(SubjectT&& value) {
    m_subjectHasBeenSet = true;
    m_subject = std::forward<SubjectT>(value);
  }
  template <typename SubjectT = DistinguishedName>
  X509Attributes& WithSubject(SubjectT&& value) {
    SetSubject(std::forward<SubjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more domain names (subject alternative names) included in the
   * certificate. This list contains the domain names that are bound to the public
   * key that is contained in the certificate. The subject alternative names include
   * the canonical domain name (CN) of the certificate and additional domain names
   * that can be used to connect to the website. </p>
   */
  inline const Aws::Vector<GeneralName>& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
  inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
  template <typename SubjectAlternativeNamesT = Aws::Vector<GeneralName>>
  void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) {
    m_subjectAlternativeNamesHasBeenSet = true;
    m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value);
  }
  template <typename SubjectAlternativeNamesT = Aws::Vector<GeneralName>>
  X509Attributes& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) {
    SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value));
    return *this;
  }
  template <typename SubjectAlternativeNamesT = GeneralName>
  X509Attributes& AddSubjectAlternativeNames(SubjectAlternativeNamesT&& value) {
    m_subjectAlternativeNamesHasBeenSet = true;
    m_subjectAlternativeNames.emplace_back(std::forward<SubjectAlternativeNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
   * specifies a purpose for which the certificate public key can be used and
   * consists of a name and an object identifier (OID). </p>
   */
  inline const Aws::Vector<ExtendedKeyUsageName>& GetExtendedKeyUsages() const { return m_extendedKeyUsages; }
  inline bool ExtendedKeyUsagesHasBeenSet() const { return m_extendedKeyUsagesHasBeenSet; }
  template <typename ExtendedKeyUsagesT = Aws::Vector<ExtendedKeyUsageName>>
  void SetExtendedKeyUsages(ExtendedKeyUsagesT&& value) {
    m_extendedKeyUsagesHasBeenSet = true;
    m_extendedKeyUsages = std::forward<ExtendedKeyUsagesT>(value);
  }
  template <typename ExtendedKeyUsagesT = Aws::Vector<ExtendedKeyUsageName>>
  X509Attributes& WithExtendedKeyUsages(ExtendedKeyUsagesT&& value) {
    SetExtendedKeyUsages(std::forward<ExtendedKeyUsagesT>(value));
    return *this;
  }
  inline X509Attributes& AddExtendedKeyUsages(ExtendedKeyUsageName value) {
    m_extendedKeyUsagesHasBeenSet = true;
    m_extendedKeyUsages.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The algorithm that was used to generate the public-private key pair.</p>
   */
  inline KeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
  inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
  inline void SetKeyAlgorithm(KeyAlgorithm value) {
    m_keyAlgorithmHasBeenSet = true;
    m_keyAlgorithm = value;
  }
  inline X509Attributes& WithKeyAlgorithm(KeyAlgorithm value) {
    SetKeyAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
   * that identifies the purpose of the public key contained in the certificate.
   * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
   * NON_REPUDIATION, and more.</p>
   */
  inline const Aws::Vector<KeyUsageName>& GetKeyUsages() const { return m_keyUsages; }
  inline bool KeyUsagesHasBeenSet() const { return m_keyUsagesHasBeenSet; }
  template <typename KeyUsagesT = Aws::Vector<KeyUsageName>>
  void SetKeyUsages(KeyUsagesT&& value) {
    m_keyUsagesHasBeenSet = true;
    m_keyUsages = std::forward<KeyUsagesT>(value);
  }
  template <typename KeyUsagesT = Aws::Vector<KeyUsageName>>
  X509Attributes& WithKeyUsages(KeyUsagesT&& value) {
    SetKeyUsages(std::forward<KeyUsagesT>(value));
    return *this;
  }
  inline X509Attributes& AddKeyUsages(KeyUsageName value) {
    m_keyUsagesHasBeenSet = true;
    m_keyUsages.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The serial number assigned by the certificate authority.</p>
   */
  inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
  inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
  template <typename SerialNumberT = Aws::String>
  void SetSerialNumber(SerialNumberT&& value) {
    m_serialNumberHasBeenSet = true;
    m_serialNumber = std::forward<SerialNumberT>(value);
  }
  template <typename SerialNumberT = Aws::String>
  X509Attributes& WithSerialNumber(SerialNumberT&& value) {
    SetSerialNumber(std::forward<SerialNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time after which the certificate is not valid.</p>
   */
  inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
  inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
  template <typename NotAfterT = Aws::Utils::DateTime>
  void SetNotAfter(NotAfterT&& value) {
    m_notAfterHasBeenSet = true;
    m_notAfter = std::forward<NotAfterT>(value);
  }
  template <typename NotAfterT = Aws::Utils::DateTime>
  X509Attributes& WithNotAfter(NotAfterT&& value) {
    SetNotAfter(std::forward<NotAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time before which the certificate is not valid.</p>
   */
  inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
  inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
  template <typename NotBeforeT = Aws::Utils::DateTime>
  void SetNotBefore(NotBeforeT&& value) {
    m_notBeforeHasBeenSet = true;
    m_notBefore = std::forward<NotBeforeT>(value);
  }
  template <typename NotBeforeT = Aws::Utils::DateTime>
  X509Attributes& WithNotBefore(NotBeforeT&& value) {
    SetNotBefore(std::forward<NotBeforeT>(value));
    return *this;
  }
  ///@}
 private:
  DistinguishedName m_issuer;

  DistinguishedName m_subject;

  Aws::Vector<GeneralName> m_subjectAlternativeNames;

  Aws::Vector<ExtendedKeyUsageName> m_extendedKeyUsages;

  KeyAlgorithm m_keyAlgorithm{KeyAlgorithm::NOT_SET};

  Aws::Vector<KeyUsageName> m_keyUsages;

  Aws::String m_serialNumber;

  Aws::Utils::DateTime m_notAfter{};

  Aws::Utils::DateTime m_notBefore{};
  bool m_issuerHasBeenSet = false;
  bool m_subjectHasBeenSet = false;
  bool m_subjectAlternativeNamesHasBeenSet = false;
  bool m_extendedKeyUsagesHasBeenSet = false;
  bool m_keyAlgorithmHasBeenSet = false;
  bool m_keyUsagesHasBeenSet = false;
  bool m_serialNumberHasBeenSet = false;
  bool m_notAfterHasBeenSet = false;
  bool m_notBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
