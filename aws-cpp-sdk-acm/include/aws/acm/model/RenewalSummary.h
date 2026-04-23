/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/acm/model/FailureReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/acm/model/DomainValidation.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>Contains information about the status of ACM's <a
   * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
   * renewal</a> for the certificate. This structure exists only when the certificate
   * type is <code>AMAZON_ISSUED</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RenewalSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ACM_API RenewalSummary
  {
  public:
    RenewalSummary();
    RenewalSummary(Aws::Utils::Json::JsonView jsonValue);
    RenewalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline const RenewalStatus& GetRenewalStatus() const{ return m_renewalStatus; }

    /**
     * <p>The status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }

    /**
     * <p>The status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline void SetRenewalStatus(const RenewalStatus& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }

    /**
     * <p>The status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline void SetRenewalStatus(RenewalStatus&& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = std::move(value); }

    /**
     * <p>The status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline RenewalSummary& WithRenewalStatus(const RenewalStatus& value) { SetRenewalStatus(value); return *this;}

    /**
     * <p>The status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline RenewalSummary& WithRenewalStatus(RenewalStatus&& value) { SetRenewalStatus(std::move(value)); return *this;}


    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const Aws::Vector<DomainValidation>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<DomainValidation>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetDomainValidationOptions(Aws::Vector<DomainValidation>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::move(value); }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline RenewalSummary& WithDomainValidationOptions(const Aws::Vector<DomainValidation>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline RenewalSummary& WithDomainValidationOptions(Aws::Vector<DomainValidation>&& value) { SetDomainValidationOptions(std::move(value)); return *this;}

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline RenewalSummary& AddDomainValidationOptions(const DomainValidation& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline RenewalSummary& AddDomainValidationOptions(DomainValidation&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The reason that a renewal request was unsuccessful.</p>
     */
    inline const FailureReason& GetRenewalStatusReason() const{ return m_renewalStatusReason; }

    /**
     * <p>The reason that a renewal request was unsuccessful.</p>
     */
    inline bool RenewalStatusReasonHasBeenSet() const { return m_renewalStatusReasonHasBeenSet; }

    /**
     * <p>The reason that a renewal request was unsuccessful.</p>
     */
    inline void SetRenewalStatusReason(const FailureReason& value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = value; }

    /**
     * <p>The reason that a renewal request was unsuccessful.</p>
     */
    inline void SetRenewalStatusReason(FailureReason&& value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = std::move(value); }

    /**
     * <p>The reason that a renewal request was unsuccessful.</p>
     */
    inline RenewalSummary& WithRenewalStatusReason(const FailureReason& value) { SetRenewalStatusReason(value); return *this;}

    /**
     * <p>The reason that a renewal request was unsuccessful.</p>
     */
    inline RenewalSummary& WithRenewalStatusReason(FailureReason&& value) { SetRenewalStatusReason(std::move(value)); return *this;}


    /**
     * <p>The time at which the renewal summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the renewal summary was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the renewal summary was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the renewal summary was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the renewal summary was last updated.</p>
     */
    inline RenewalSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the renewal summary was last updated.</p>
     */
    inline RenewalSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    RenewalStatus m_renewalStatus;
    bool m_renewalStatusHasBeenSet;

    Aws::Vector<DomainValidation> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet;

    FailureReason m_renewalStatusReason;
    bool m_renewalStatusReasonHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
