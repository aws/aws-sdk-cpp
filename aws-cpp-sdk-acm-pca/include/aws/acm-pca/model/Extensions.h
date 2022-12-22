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
    AWS_ACMPCA_API Extensions();
    AWS_ACMPCA_API Extensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Extensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::Vector<PolicyInformation>& GetCertificatePolicies() const{ return m_certificatePolicies; }

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
    inline bool CertificatePoliciesHasBeenSet() const { return m_certificatePoliciesHasBeenSet; }

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
    inline void SetCertificatePolicies(const Aws::Vector<PolicyInformation>& value) { m_certificatePoliciesHasBeenSet = true; m_certificatePolicies = value; }

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
    inline void SetCertificatePolicies(Aws::Vector<PolicyInformation>&& value) { m_certificatePoliciesHasBeenSet = true; m_certificatePolicies = std::move(value); }

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
    inline Extensions& WithCertificatePolicies(const Aws::Vector<PolicyInformation>& value) { SetCertificatePolicies(value); return *this;}

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
    inline Extensions& WithCertificatePolicies(Aws::Vector<PolicyInformation>&& value) { SetCertificatePolicies(std::move(value)); return *this;}

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
    inline Extensions& AddCertificatePolicies(const PolicyInformation& value) { m_certificatePoliciesHasBeenSet = true; m_certificatePolicies.push_back(value); return *this; }

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
    inline Extensions& AddCertificatePolicies(PolicyInformation&& value) { m_certificatePoliciesHasBeenSet = true; m_certificatePolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline const Aws::Vector<ExtendedKeyUsage>& GetExtendedKeyUsage() const{ return m_extendedKeyUsage; }

    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline bool ExtendedKeyUsageHasBeenSet() const { return m_extendedKeyUsageHasBeenSet; }

    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline void SetExtendedKeyUsage(const Aws::Vector<ExtendedKeyUsage>& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage = value; }

    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline void SetExtendedKeyUsage(Aws::Vector<ExtendedKeyUsage>&& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage = std::move(value); }

    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline Extensions& WithExtendedKeyUsage(const Aws::Vector<ExtendedKeyUsage>& value) { SetExtendedKeyUsage(value); return *this;}

    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline Extensions& WithExtendedKeyUsage(Aws::Vector<ExtendedKeyUsage>&& value) { SetExtendedKeyUsage(std::move(value)); return *this;}

    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline Extensions& AddExtendedKeyUsage(const ExtendedKeyUsage& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage.push_back(value); return *this; }

    /**
     * <p>Specifies additional purposes for which the certified public key may be used
     * other than basic purposes indicated in the <code>KeyUsage</code> extension.</p>
     */
    inline Extensions& AddExtendedKeyUsage(ExtendedKeyUsage&& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage.push_back(std::move(value)); return *this; }


    
    inline const KeyUsage& GetKeyUsage() const{ return m_keyUsage; }

    
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }

    
    inline void SetKeyUsage(const KeyUsage& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    
    inline void SetKeyUsage(KeyUsage&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::move(value); }

    
    inline Extensions& WithKeyUsage(const KeyUsage& value) { SetKeyUsage(value); return *this;}

    
    inline Extensions& WithKeyUsage(KeyUsage&& value) { SetKeyUsage(std::move(value)); return *this;}


    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline const Aws::Vector<GeneralName>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }

    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline void SetSubjectAlternativeNames(const Aws::Vector<GeneralName>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline void SetSubjectAlternativeNames(Aws::Vector<GeneralName>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }

    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline Extensions& WithSubjectAlternativeNames(const Aws::Vector<GeneralName>& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline Extensions& WithSubjectAlternativeNames(Aws::Vector<GeneralName>&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline Extensions& AddSubjectAlternativeNames(const GeneralName& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>The subject alternative name extension allows identities to be bound to the
     * subject of the certificate. These identities may be included in addition to or
     * in place of the identity in the subject field of the certificate.</p>
     */
    inline Extensions& AddSubjectAlternativeNames(GeneralName&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(std::move(value)); return *this; }


    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline const Aws::Vector<CustomExtension>& GetCustomExtensions() const{ return m_customExtensions; }

    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline bool CustomExtensionsHasBeenSet() const { return m_customExtensionsHasBeenSet; }

    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline void SetCustomExtensions(const Aws::Vector<CustomExtension>& value) { m_customExtensionsHasBeenSet = true; m_customExtensions = value; }

    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline void SetCustomExtensions(Aws::Vector<CustomExtension>&& value) { m_customExtensionsHasBeenSet = true; m_customExtensions = std::move(value); }

    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline Extensions& WithCustomExtensions(const Aws::Vector<CustomExtension>& value) { SetCustomExtensions(value); return *this;}

    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline Extensions& WithCustomExtensions(Aws::Vector<CustomExtension>&& value) { SetCustomExtensions(std::move(value)); return *this;}

    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline Extensions& AddCustomExtensions(const CustomExtension& value) { m_customExtensionsHasBeenSet = true; m_customExtensions.push_back(value); return *this; }

    /**
     * <p/> <p>Contains a sequence of one or more X.509 extensions, each of which
     * consists of an object identifier (OID), a base64-encoded value, and the critical
     * flag. For more information, see the <a href="https://oidref.com/2.5.29">Global
     * OID reference database.</a> </p>
     */
    inline Extensions& AddCustomExtensions(CustomExtension&& value) { m_customExtensionsHasBeenSet = true; m_customExtensions.push_back(std::move(value)); return *this; }

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
