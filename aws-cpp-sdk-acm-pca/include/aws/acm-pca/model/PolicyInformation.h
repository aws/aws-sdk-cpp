/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/PolicyQualifierInfo.h>
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
   * <p>Defines the X.509 <code>CertificatePolicies</code> extension.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/PolicyInformation">AWS
   * API Reference</a></p>
   */
  class PolicyInformation
  {
  public:
    AWS_ACMPCA_API PolicyInformation();
    AWS_ACMPCA_API PolicyInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API PolicyInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline const Aws::String& GetCertPolicyId() const{ return m_certPolicyId; }

    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline bool CertPolicyIdHasBeenSet() const { return m_certPolicyIdHasBeenSet; }

    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline void SetCertPolicyId(const Aws::String& value) { m_certPolicyIdHasBeenSet = true; m_certPolicyId = value; }

    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline void SetCertPolicyId(Aws::String&& value) { m_certPolicyIdHasBeenSet = true; m_certPolicyId = std::move(value); }

    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline void SetCertPolicyId(const char* value) { m_certPolicyIdHasBeenSet = true; m_certPolicyId.assign(value); }

    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline PolicyInformation& WithCertPolicyId(const Aws::String& value) { SetCertPolicyId(value); return *this;}

    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline PolicyInformation& WithCertPolicyId(Aws::String&& value) { SetCertPolicyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline PolicyInformation& WithCertPolicyId(const char* value) { SetCertPolicyId(value); return *this;}


    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. ACM Private CA
     * supports the certification practice statement (CPS) qualifier.</p>
     */
    inline const Aws::Vector<PolicyQualifierInfo>& GetPolicyQualifiers() const{ return m_policyQualifiers; }

    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. ACM Private CA
     * supports the certification practice statement (CPS) qualifier.</p>
     */
    inline bool PolicyQualifiersHasBeenSet() const { return m_policyQualifiersHasBeenSet; }

    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. ACM Private CA
     * supports the certification practice statement (CPS) qualifier.</p>
     */
    inline void SetPolicyQualifiers(const Aws::Vector<PolicyQualifierInfo>& value) { m_policyQualifiersHasBeenSet = true; m_policyQualifiers = value; }

    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. ACM Private CA
     * supports the certification practice statement (CPS) qualifier.</p>
     */
    inline void SetPolicyQualifiers(Aws::Vector<PolicyQualifierInfo>&& value) { m_policyQualifiersHasBeenSet = true; m_policyQualifiers = std::move(value); }

    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. ACM Private CA
     * supports the certification practice statement (CPS) qualifier.</p>
     */
    inline PolicyInformation& WithPolicyQualifiers(const Aws::Vector<PolicyQualifierInfo>& value) { SetPolicyQualifiers(value); return *this;}

    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. ACM Private CA
     * supports the certification practice statement (CPS) qualifier.</p>
     */
    inline PolicyInformation& WithPolicyQualifiers(Aws::Vector<PolicyQualifierInfo>&& value) { SetPolicyQualifiers(std::move(value)); return *this;}

    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. ACM Private CA
     * supports the certification practice statement (CPS) qualifier.</p>
     */
    inline PolicyInformation& AddPolicyQualifiers(const PolicyQualifierInfo& value) { m_policyQualifiersHasBeenSet = true; m_policyQualifiers.push_back(value); return *this; }

    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. ACM Private CA
     * supports the certification practice statement (CPS) qualifier.</p>
     */
    inline PolicyInformation& AddPolicyQualifiers(PolicyQualifierInfo&& value) { m_policyQualifiersHasBeenSet = true; m_policyQualifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_certPolicyId;
    bool m_certPolicyIdHasBeenSet = false;

    Aws::Vector<PolicyQualifierInfo> m_policyQualifiers;
    bool m_policyQualifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
