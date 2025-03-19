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
    AWS_LIGHTSAIL_API DomainValidationRecord() = default;
    AWS_LIGHTSAIL_API DomainValidationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DomainValidationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name of the certificate validation record. For example,
     * <code>example.com</code> or <code>www.example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainValidationRecord& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the DNS records to add to your domain's DNS to
     * validate it for the certificate.</p>
     */
    inline const ResourceRecord& GetResourceRecord() const { return m_resourceRecord; }
    inline bool ResourceRecordHasBeenSet() const { return m_resourceRecordHasBeenSet; }
    template<typename ResourceRecordT = ResourceRecord>
    void SetResourceRecord(ResourceRecordT&& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = std::forward<ResourceRecordT>(value); }
    template<typename ResourceRecordT = ResourceRecord>
    DomainValidationRecord& WithResourceRecord(ResourceRecordT&& value) { SetResourceRecord(std::forward<ResourceRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of the domain to validate domain
     * ownership.</p>
     */
    inline const DnsRecordCreationState& GetDnsRecordCreationState() const { return m_dnsRecordCreationState; }
    inline bool DnsRecordCreationStateHasBeenSet() const { return m_dnsRecordCreationStateHasBeenSet; }
    template<typename DnsRecordCreationStateT = DnsRecordCreationState>
    void SetDnsRecordCreationState(DnsRecordCreationStateT&& value) { m_dnsRecordCreationStateHasBeenSet = true; m_dnsRecordCreationState = std::forward<DnsRecordCreationStateT>(value); }
    template<typename DnsRecordCreationStateT = DnsRecordCreationState>
    DomainValidationRecord& WithDnsRecordCreationState(DnsRecordCreationStateT&& value) { SetDnsRecordCreationState(std::forward<DnsRecordCreationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status of the record.</p>
     */
    inline CertificateDomainValidationStatus GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(CertificateDomainValidationStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline DomainValidationRecord& WithValidationStatus(CertificateDomainValidationStatus value) { SetValidationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ResourceRecord m_resourceRecord;
    bool m_resourceRecordHasBeenSet = false;

    DnsRecordCreationState m_dnsRecordCreationState;
    bool m_dnsRecordCreationStateHasBeenSet = false;

    CertificateDomainValidationStatus m_validationStatus{CertificateDomainValidationStatus::NOT_SET};
    bool m_validationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
