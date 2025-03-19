/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/RenewalStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/DomainValidationRecord.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the status of a SSL/TLS certificate renewal managed by Amazon
   * Lightsail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RenewalSummary">AWS
   * API Reference</a></p>
   */
  class RenewalSummary
  {
  public:
    AWS_LIGHTSAIL_API RenewalSummary() = default;
    AWS_LIGHTSAIL_API RenewalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RenewalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline const Aws::Vector<DomainValidationRecord>& GetDomainValidationRecords() const { return m_domainValidationRecords; }
    inline bool DomainValidationRecordsHasBeenSet() const { return m_domainValidationRecordsHasBeenSet; }
    template<typename DomainValidationRecordsT = Aws::Vector<DomainValidationRecord>>
    void SetDomainValidationRecords(DomainValidationRecordsT&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords = std::forward<DomainValidationRecordsT>(value); }
    template<typename DomainValidationRecordsT = Aws::Vector<DomainValidationRecord>>
    RenewalSummary& WithDomainValidationRecords(DomainValidationRecordsT&& value) { SetDomainValidationRecords(std::forward<DomainValidationRecordsT>(value)); return *this;}
    template<typename DomainValidationRecordsT = DomainValidationRecord>
    RenewalSummary& AddDomainValidationRecords(DomainValidationRecordsT&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords.emplace_back(std::forward<DomainValidationRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The renewal status of the certificate.</p> <p>The following renewal status
     * are possible:</p> <ul> <li> <p> <b> <code>PendingAutoRenewal</code> </b> -
     * Lightsail is attempting to automatically validate the domain names of the
     * certificate. No further action is required. </p> </li> <li> <p> <b>
     * <code>PendingValidation</code> </b> - Lightsail couldn't automatically validate
     * one or more domain names of the certificate. You must take action to validate
     * these domain names or the certificate won't be renewed. Check to make sure your
     * certificate's domain validation records exist in your domain's DNS, and that
     * your certificate remains in use.</p> </li> <li> <p> <b> <code>Success</code>
     * </b> - All domain names in the certificate are validated, and Lightsail renewed
     * the certificate. No further action is required. </p> </li> <li> <p> <b>
     * <code>Failed</code> </b> - One or more domain names were not validated before
     * the certificate expired, and Lightsail did not renew the certificate. You can
     * request a new certificate using the <code>CreateCertificate</code> action.</p>
     * </li> </ul>
     */
    inline RenewalStatus GetRenewalStatus() const { return m_renewalStatus; }
    inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }
    inline void SetRenewalStatus(RenewalStatus value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }
    inline RenewalSummary& WithRenewalStatus(RenewalStatus value) { SetRenewalStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline const Aws::String& GetRenewalStatusReason() const { return m_renewalStatusReason; }
    inline bool RenewalStatusReasonHasBeenSet() const { return m_renewalStatusReasonHasBeenSet; }
    template<typename RenewalStatusReasonT = Aws::String>
    void SetRenewalStatusReason(RenewalStatusReasonT&& value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = std::forward<RenewalStatusReasonT>(value); }
    template<typename RenewalStatusReasonT = Aws::String>
    RenewalSummary& WithRenewalStatusReason(RenewalStatusReasonT&& value) { SetRenewalStatusReason(std::forward<RenewalStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    RenewalSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainValidationRecord> m_domainValidationRecords;
    bool m_domainValidationRecordsHasBeenSet = false;

    RenewalStatus m_renewalStatus{RenewalStatus::NOT_SET};
    bool m_renewalStatusHasBeenSet = false;

    Aws::String m_renewalStatusReason;
    bool m_renewalStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
