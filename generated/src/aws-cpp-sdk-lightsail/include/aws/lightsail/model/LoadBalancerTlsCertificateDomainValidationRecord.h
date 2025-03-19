/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateDomainStatus.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateDnsRecordCreationState.h>
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
   * <p>Describes the validation record of each domain name in the SSL/TLS
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsCertificateDomainValidationRecord">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTlsCertificateDomainValidationRecord
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationRecord() = default;
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LoadBalancerTlsCertificateDomainValidationRecord& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    LoadBalancerTlsCertificateDomainValidationRecord& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for that type.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    LoadBalancerTlsCertificateDomainValidationRecord& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status. Valid values are listed below.</p>
     */
    inline LoadBalancerTlsCertificateDomainStatus GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(LoadBalancerTlsCertificateDomainStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValidationStatus(LoadBalancerTlsCertificateDomainStatus value) { SetValidationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    LoadBalancerTlsCertificateDomainValidationRecord& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of a domain to validate domain
     * ownership.</p>
     */
    inline const LoadBalancerTlsCertificateDnsRecordCreationState& GetDnsRecordCreationState() const { return m_dnsRecordCreationState; }
    inline bool DnsRecordCreationStateHasBeenSet() const { return m_dnsRecordCreationStateHasBeenSet; }
    template<typename DnsRecordCreationStateT = LoadBalancerTlsCertificateDnsRecordCreationState>
    void SetDnsRecordCreationState(DnsRecordCreationStateT&& value) { m_dnsRecordCreationStateHasBeenSet = true; m_dnsRecordCreationState = std::forward<DnsRecordCreationStateT>(value); }
    template<typename DnsRecordCreationStateT = LoadBalancerTlsCertificateDnsRecordCreationState>
    LoadBalancerTlsCertificateDomainValidationRecord& WithDnsRecordCreationState(DnsRecordCreationStateT&& value) { SetDnsRecordCreationState(std::forward<DnsRecordCreationStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    LoadBalancerTlsCertificateDomainStatus m_validationStatus{LoadBalancerTlsCertificateDomainStatus::NOT_SET};
    bool m_validationStatusHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    LoadBalancerTlsCertificateDnsRecordCreationState m_dnsRecordCreationState;
    bool m_dnsRecordCreationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
