/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/KeyUsage.h>
#include <aws/acm-pca/model/PolicyInformation.h>
#include <aws/acm-pca/model/ExtendedKeyUsage.h>
#include <aws/acm-pca/model/GeneralName.h>
#include <aws/acm-pca/model/CustomExtension.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Contains X.509 extension information for a certificate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/Extensions">AWS
   * API Reference</a></p>
   */
  class Extensions
  {
  public:
    AWS_ACMPCA_API Extensions() = default;
    AWS_ACMPCA_API Extensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Extensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a sequence of one or more policy information terms, each of which
     * consists of an object identifier (OID) and optional qualifiers. For more
     * information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p> <p>In an end-entity certificate, these terms indicate the policy
     * under which the certificate was issued and the purposes for which it may be
     * used. In a CA certificate, these terms limit the set of policies for
     * certification paths that include this certificate.</p>
     */
    inline const Aws::Vector<PolicyInformation>& GetCertificatePolicies() const { return m_certificatePolicies; }
    inline bool CertificatePoliciesHasBeenSet() const { return m_certificatePoliciesHasBeenSet; }
    template<typename CertificatePoliciesT = Aws::Vector<PolicyInformation>>
    void SetCertificatePolicies(CertificatePoliciesT&& value) { m_certificatePoliciesHasBeenSet = true; m_certificatePolicies = std::forward<CertificatePoliciesT>(value); }
    template<typename CertificatePoliciesT = Aws::Vector<PolicyInformation>>
    Extensions& WithCertificatePolicies(CertificatePoliciesT&& value) { SetCertificatePolicies(std::forward<CertificatePoliciesT>(value)); return *this;}
    template<typename CertificatePoliciesT = PolicyInformation>
    Extensions& AddCertificatePolicies(CertificatePoliciesT&& value) { m_certificatePoliciesHasBeenSet = true; m_certificatePolicies.emplace_back(std::forward<CertificatePoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline const Aws::Vector<ExtendedKeyUsage>& GetExtendedKeyUsage() const { return m_extendedKeyUsage; }
    inline bool ExtendedKeyUsageHasBeenSet() const { return m_extendedKeyUsageHasBeenSet; }
    template<typename ExtendedKeyUsageT = Aws::Vector<ExtendedKeyUsage>>
    void SetExtendedKeyUsage(ExtendedKeyUsageT&& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage = std::forward<ExtendedKeyUsageT>(value); }
    template<typename ExtendedKeyUsageT = Aws::Vector<ExtendedKeyUsage>>
    Extensions& WithExtendedKeyUsage(ExtendedKeyUsageT&& value) { SetExtendedKeyUsage(std::forward<ExtendedKeyUsageT>(value)); return *this;}
    template<typename ExtendedKeyUsageT = ExtendedKeyUsage>
    Extensions& AddExtendedKeyUsage(ExtendedKeyUsageT&& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage.emplace_back(std::forward<ExtendedKeyUsageT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const KeyUsage& GetKeyUsage() const { return m_keyUsage; }
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }
    template<typename KeyUsageT = KeyUsage>
    void SetKeyUsage(KeyUsageT&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::forward<KeyUsageT>(value); }
    template<typename KeyUsageT = KeyUsage>
    Extensions& WithKeyUsage(KeyUsageT&& value) { SetKeyUsage(std::forward<KeyUsageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline const Aws::Vector<GeneralName>& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    template<typename SubjectAlternativeNamesT = Aws::Vector<GeneralName>>
    void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value); }
    template<typename SubjectAlternativeNamesT = Aws::Vector<GeneralName>>
    Extensions& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value)); return *this;}
    template<typename SubjectAlternativeNamesT = GeneralName>
    Extensions& AddSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.emplace_back(std::forward<SubjectAlternativeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline const Aws::Vector<CustomExtension>& GetCustomExtensions() const { return m_customExtensions; }
    inline bool CustomExtensionsHasBeenSet() const { return m_customExtensionsHasBeenSet; }
    template<typename CustomExtensionsT = Aws::Vector<CustomExtension>>
    void SetCustomExtensions(CustomExtensionsT&& value) { m_customExtensionsHasBeenSet = true; m_customExtensions = std::forward<CustomExtensionsT>(value); }
    template<typename CustomExtensionsT = Aws::Vector<CustomExtension>>
    Extensions& WithCustomExtensions(CustomExtensionsT&& value) { SetCustomExtensions(std::forward<CustomExtensionsT>(value)); return *this;}
    template<typename CustomExtensionsT = CustomExtension>
    Extensions& AddCustomExtensions(CustomExtensionsT&& value) { m_customExtensionsHasBeenSet = true; m_customExtensions.emplace_back(std::forward<CustomExtensionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PolicyInformation> m_certificatePolicies;
    bool m_certificatePoliciesHasBeenSet = false;

    Aws::Vector<ExtendedKeyUsage> m_extendedKeyUsage;
    bool m_extendedKeyUsageHasBeenSet = false;

    KeyUsage m_keyUsage;
    bool m_keyUsageHasBeenSet = false;

    Aws::Vector<GeneralName> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    Aws::Vector<CustomExtension> m_customExtensions;
    bool m_customExtensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
