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
    AWS_ACMPCA_API PolicyInformation() = default;
    AWS_ACMPCA_API PolicyInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API PolicyInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the object identifier (OID) of the certificate policy under which
     * the certificate was issued. For more information, see NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline const Aws::String& GetCertPolicyId() const { return m_certPolicyId; }
    inline bool CertPolicyIdHasBeenSet() const { return m_certPolicyIdHasBeenSet; }
    template<typename CertPolicyIdT = Aws::String>
    void SetCertPolicyId(CertPolicyIdT&& value) { m_certPolicyIdHasBeenSet = true; m_certPolicyId = std::forward<CertPolicyIdT>(value); }
    template<typename CertPolicyIdT = Aws::String>
    PolicyInformation& WithCertPolicyId(CertPolicyIdT&& value) { SetCertPolicyId(std::forward<CertPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the given <code>CertPolicyId</code> with a qualifier. Amazon Web
     * Services Private CA supports the certification practice statement (CPS)
     * qualifier.</p>
     */
    inline const Aws::Vector<PolicyQualifierInfo>& GetPolicyQualifiers() const { return m_policyQualifiers; }
    inline bool PolicyQualifiersHasBeenSet() const { return m_policyQualifiersHasBeenSet; }
    template<typename PolicyQualifiersT = Aws::Vector<PolicyQualifierInfo>>
    void SetPolicyQualifiers(PolicyQualifiersT&& value) { m_policyQualifiersHasBeenSet = true; m_policyQualifiers = std::forward<PolicyQualifiersT>(value); }
    template<typename PolicyQualifiersT = Aws::Vector<PolicyQualifierInfo>>
    PolicyInformation& WithPolicyQualifiers(PolicyQualifiersT&& value) { SetPolicyQualifiers(std::forward<PolicyQualifiersT>(value)); return *this;}
    template<typename PolicyQualifiersT = PolicyQualifierInfo>
    PolicyInformation& AddPolicyQualifiers(PolicyQualifiersT&& value) { m_policyQualifiersHasBeenSet = true; m_policyQualifiers.emplace_back(std::forward<PolicyQualifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_certPolicyId;
    bool m_certPolicyIdHasBeenSet = false;

    Aws::Vector<PolicyQualifierInfo> m_policyQualifiers;
    bool m_policyQualifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
