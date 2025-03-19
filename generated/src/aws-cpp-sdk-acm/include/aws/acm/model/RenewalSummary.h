/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RenewalSummary
  {
  public:
    AWS_ACM_API RenewalSummary() = default;
    AWS_ACM_API RenewalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API RenewalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> of the certificate.</p>
     */
    inline RenewalStatus GetRenewalStatus() const { return m_renewalStatus; }
    inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }
    inline void SetRenewalStatus(RenewalStatus value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }
    inline RenewalSummary& WithRenewalStatus(RenewalStatus value) { SetRenewalStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a>. This is different from the initial validation that occurs as a
     * result of the <a>RequestCertificate</a> request. This field exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const Aws::Vector<DomainValidation>& GetDomainValidationOptions() const { return m_domainValidationOptions; }
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }
    template<typename DomainValidationOptionsT = Aws::Vector<DomainValidation>>
    void SetDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::forward<DomainValidationOptionsT>(value); }
    template<typename DomainValidationOptionsT = Aws::Vector<DomainValidation>>
    RenewalSummary& WithDomainValidationOptions(DomainValidationOptionsT&& value) { SetDomainValidationOptions(std::forward<DomainValidationOptionsT>(value)); return *this;}
    template<typename DomainValidationOptionsT = DomainValidation>
    RenewalSummary& AddDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.emplace_back(std::forward<DomainValidationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason that a renewal request was unsuccessful.</p>
     */
    inline FailureReason GetRenewalStatusReason() const { return m_renewalStatusReason; }
    inline bool RenewalStatusReasonHasBeenSet() const { return m_renewalStatusReasonHasBeenSet; }
    inline void SetRenewalStatusReason(FailureReason value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = value; }
    inline RenewalSummary& WithRenewalStatusReason(FailureReason value) { SetRenewalStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the renewal summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    RenewalSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    RenewalStatus m_renewalStatus{RenewalStatus::NOT_SET};
    bool m_renewalStatusHasBeenSet = false;

    Aws::Vector<DomainValidation> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet = false;

    FailureReason m_renewalStatusReason{FailureReason::NOT_SET};
    bool m_renewalStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
