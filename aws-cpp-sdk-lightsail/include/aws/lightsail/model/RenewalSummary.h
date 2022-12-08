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
    AWS_LIGHTSAIL_API RenewalSummary();
    AWS_LIGHTSAIL_API RenewalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RenewalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline const Aws::Vector<DomainValidationRecord>& GetDomainValidationRecords() const{ return m_domainValidationRecords; }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline bool DomainValidationRecordsHasBeenSet() const { return m_domainValidationRecordsHasBeenSet; }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline void SetDomainValidationRecords(const Aws::Vector<DomainValidationRecord>& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords = value; }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline void SetDomainValidationRecords(Aws::Vector<DomainValidationRecord>&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords = std::move(value); }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline RenewalSummary& WithDomainValidationRecords(const Aws::Vector<DomainValidationRecord>& value) { SetDomainValidationRecords(value); return *this;}

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline RenewalSummary& WithDomainValidationRecords(Aws::Vector<DomainValidationRecord>&& value) { SetDomainValidationRecords(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline RenewalSummary& AddDomainValidationRecords(const DomainValidationRecord& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline RenewalSummary& AddDomainValidationRecords(DomainValidationRecord&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords.push_back(std::move(value)); return *this; }


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
    inline const RenewalStatus& GetRenewalStatus() const{ return m_renewalStatus; }

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
    inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }

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
    inline void SetRenewalStatus(const RenewalStatus& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }

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
    inline void SetRenewalStatus(RenewalStatus&& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = std::move(value); }

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
    inline RenewalSummary& WithRenewalStatus(const RenewalStatus& value) { SetRenewalStatus(value); return *this;}

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
    inline RenewalSummary& WithRenewalStatus(RenewalStatus&& value) { SetRenewalStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline const Aws::String& GetRenewalStatusReason() const{ return m_renewalStatusReason; }

    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline bool RenewalStatusReasonHasBeenSet() const { return m_renewalStatusReasonHasBeenSet; }

    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline void SetRenewalStatusReason(const Aws::String& value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = value; }

    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline void SetRenewalStatusReason(Aws::String&& value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = std::move(value); }

    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline void SetRenewalStatusReason(const char* value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason.assign(value); }

    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline RenewalSummary& WithRenewalStatusReason(const Aws::String& value) { SetRenewalStatusReason(value); return *this;}

    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline RenewalSummary& WithRenewalStatusReason(Aws::String&& value) { SetRenewalStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the renewal status of the certificate.</p>
     */
    inline RenewalSummary& WithRenewalStatusReason(const char* value) { SetRenewalStatusReason(value); return *this;}


    /**
     * <p>The timestamp when the certificate was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp when the certificate was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp when the certificate was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp when the certificate was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp when the certificate was last updated.</p>
     */
    inline RenewalSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp when the certificate was last updated.</p>
     */
    inline RenewalSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Vector<DomainValidationRecord> m_domainValidationRecords;
    bool m_domainValidationRecordsHasBeenSet = false;

    RenewalStatus m_renewalStatus;
    bool m_renewalStatusHasBeenSet = false;

    Aws::String m_renewalStatusReason;
    bool m_renewalStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
