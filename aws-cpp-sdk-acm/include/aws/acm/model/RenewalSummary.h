/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/RenewalStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/DomainValidation.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ACM
{
namespace Model
{

  /**
   * <p>Contains information about the status of ACM's <a
   * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
   * renewal</a> for the certificate. This structure exists only when the certificate
   * type is <code>AMAZON_ISSUED</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RenewalSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ACM_API RenewalSummary
  {
  public:
    RenewalSummary();
    RenewalSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    RenewalSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The status of ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline const RenewalStatus& GetRenewalStatus() const{ return m_renewalStatus; }

    /**
     * <p>The status of ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline void SetRenewalStatus(const RenewalStatus& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }

    /**
     * <p>The status of ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline void SetRenewalStatus(RenewalStatus&& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }

    /**
     * <p>The status of ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline RenewalSummary& WithRenewalStatus(const RenewalStatus& value) { SetRenewalStatus(value); return *this;}

    /**
     * <p>The status of ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline RenewalSummary& WithRenewalStatus(RenewalStatus&& value) { SetRenewalStatus(value); return *this;}

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const Aws::Vector<DomainValidation>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<DomainValidation>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetDomainValidationOptions(Aws::Vector<DomainValidation>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline RenewalSummary& WithDomainValidationOptions(const Aws::Vector<DomainValidation>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline RenewalSummary& WithDomainValidationOptions(Aws::Vector<DomainValidation>&& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline RenewalSummary& AddDomainValidationOptions(const DomainValidation& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline RenewalSummary& AddDomainValidationOptions(DomainValidation&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

  private:
    RenewalStatus m_renewalStatus;
    bool m_renewalStatusHasBeenSet;
    Aws::Vector<DomainValidation> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
