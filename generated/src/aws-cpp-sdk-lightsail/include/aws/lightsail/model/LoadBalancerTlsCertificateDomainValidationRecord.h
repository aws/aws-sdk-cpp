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
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationRecord();
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for that type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status. Valid values are listed below.</p>
     */
    inline const LoadBalancerTlsCertificateDomainStatus& GetValidationStatus() const{ return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(const LoadBalancerTlsCertificateDomainStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline void SetValidationStatus(LoadBalancerTlsCertificateDomainStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValidationStatus(const LoadBalancerTlsCertificateDomainStatus& value) { SetValidationStatus(value); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValidationStatus(LoadBalancerTlsCertificateDomainStatus&& value) { SetValidationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of a domain to validate domain
     * ownership.</p>
     */
    inline const LoadBalancerTlsCertificateDnsRecordCreationState& GetDnsRecordCreationState() const{ return m_dnsRecordCreationState; }
    inline bool DnsRecordCreationStateHasBeenSet() const { return m_dnsRecordCreationStateHasBeenSet; }
    inline void SetDnsRecordCreationState(const LoadBalancerTlsCertificateDnsRecordCreationState& value) { m_dnsRecordCreationStateHasBeenSet = true; m_dnsRecordCreationState = value; }
    inline void SetDnsRecordCreationState(LoadBalancerTlsCertificateDnsRecordCreationState&& value) { m_dnsRecordCreationStateHasBeenSet = true; m_dnsRecordCreationState = std::move(value); }
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDnsRecordCreationState(const LoadBalancerTlsCertificateDnsRecordCreationState& value) { SetDnsRecordCreationState(value); return *this;}
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDnsRecordCreationState(LoadBalancerTlsCertificateDnsRecordCreationState&& value) { SetDnsRecordCreationState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    LoadBalancerTlsCertificateDomainStatus m_validationStatus;
    bool m_validationStatusHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    LoadBalancerTlsCertificateDnsRecordCreationState m_dnsRecordCreationState;
    bool m_dnsRecordCreationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
