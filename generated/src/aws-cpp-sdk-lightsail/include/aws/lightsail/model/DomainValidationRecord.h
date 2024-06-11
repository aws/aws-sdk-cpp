/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceRecord.h>
#include <aws/lightsail/model/DnsRecordCreationState.h>
#include <aws/lightsail/model/CertificateDomainValidationStatus.h>
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
   * <p>Describes the domain name system (DNS) records that you must add to the DNS
   * of your registered domain to validate ownership for an Amazon Lightsail SSL/TLS
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DomainValidationRecord">AWS
   * API Reference</a></p>
   */
  class DomainValidationRecord
  {
  public:
    AWS_LIGHTSAIL_API DomainValidationRecord();
    AWS_LIGHTSAIL_API DomainValidationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DomainValidationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DomainValidationRecord& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DomainValidationRecord& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DomainValidationRecord& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the DNS records to add to your domain's DNS to
     * validate it for the certificate.</p>
     */
    inline const ResourceRecord& GetResourceRecord() const{ return m_resourceRecord; }
    inline bool ResourceRecordHasBeenSet() const { return m_resourceRecordHasBeenSet; }
    inline void SetResourceRecord(const ResourceRecord& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = value; }
    inline void SetResourceRecord(ResourceRecord&& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = std::move(value); }
    inline DomainValidationRecord& WithResourceRecord(const ResourceRecord& value) { SetResourceRecord(value); return *this;}
    inline DomainValidationRecord& WithResourceRecord(ResourceRecord&& value) { SetResourceRecord(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of the domain to validate domain
     * ownership.</p>
     */
    inline const DnsRecordCreationState& GetDnsRecordCreationState() const{ return m_dnsRecordCreationState; }
    inline bool DnsRecordCreationStateHasBeenSet() const { return m_dnsRecordCreationStateHasBeenSet; }
    inline void SetDnsRecordCreationState(const DnsRecordCreationState& value) { m_dnsRecordCreationStateHasBeenSet = true; m_dnsRecordCreationState = value; }
    inline void SetDnsRecordCreationState(DnsRecordCreationState&& value) { m_dnsRecordCreationStateHasBeenSet = true; m_dnsRecordCreationState = std::move(value); }
    inline DomainValidationRecord& WithDnsRecordCreationState(const DnsRecordCreationState& value) { SetDnsRecordCreationState(value); return *this;}
    inline DomainValidationRecord& WithDnsRecordCreationState(DnsRecordCreationState&& value) { SetDnsRecordCreationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status of the record.</p>
     */
    inline const CertificateDomainValidationStatus& GetValidationStatus() const{ return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(const CertificateDomainValidationStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline void SetValidationStatus(CertificateDomainValidationStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }
    inline DomainValidationRecord& WithValidationStatus(const CertificateDomainValidationStatus& value) { SetValidationStatus(value); return *this;}
    inline DomainValidationRecord& WithValidationStatus(CertificateDomainValidationStatus&& value) { SetValidationStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ResourceRecord m_resourceRecord;
    bool m_resourceRecordHasBeenSet = false;

    DnsRecordCreationState m_dnsRecordCreationState;
    bool m_dnsRecordCreationStateHasBeenSet = false;

    CertificateDomainValidationStatus m_validationStatus;
    bool m_validationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
