/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/PolicyQualifierId.h>
#include <aws/acm-pca/model/Qualifier.h>
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
   * <p>Modifies the <code>CertPolicyId</code> of a <code>PolicyInformation</code>
   * object with a qualifier. Amazon Web Services Private CA supports the
   * certification practice statement (CPS) qualifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/PolicyQualifierInfo">AWS
   * API Reference</a></p>
   */
  class PolicyQualifierInfo
  {
  public:
    AWS_ACMPCA_API PolicyQualifierInfo() = default;
    AWS_ACMPCA_API PolicyQualifierInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API PolicyQualifierInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the qualifier modifying a <code>CertPolicyId</code>.</p>
     */
    inline PolicyQualifierId GetPolicyQualifierId() const { return m_policyQualifierId; }
    inline bool PolicyQualifierIdHasBeenSet() const { return m_policyQualifierIdHasBeenSet; }
    inline void SetPolicyQualifierId(PolicyQualifierId value) { m_policyQualifierIdHasBeenSet = true; m_policyQualifierId = value; }
    inline PolicyQualifierInfo& WithPolicyQualifierId(PolicyQualifierId value) { SetPolicyQualifierId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the qualifier type. Amazon Web Services Private CA supports the use
     * of a URI for a CPS qualifier in this field.</p>
     */
    inline const Qualifier& GetQualifier() const { return m_qualifier; }
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
    template<typename QualifierT = Qualifier>
    void SetQualifier(QualifierT&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::forward<QualifierT>(value); }
    template<typename QualifierT = Qualifier>
    PolicyQualifierInfo& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}
  private:

    PolicyQualifierId m_policyQualifierId{PolicyQualifierId::NOT_SET};
    bool m_policyQualifierIdHasBeenSet = false;

    Qualifier m_qualifier;
    bool m_qualifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
