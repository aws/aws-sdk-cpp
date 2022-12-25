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


    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A fully qualified domain name in the certificate. For example,
     * <code>example.com</code>.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of validation record. For example, <code>CNAME</code> for domain
     * validation.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The value for that type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for that type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for that type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for that type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for that type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for that type.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for that type.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for that type.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The validation status. Valid values are listed below.</p>
     */
    inline const LoadBalancerTlsCertificateDomainStatus& GetValidationStatus() const{ return m_validationStatus; }

    /**
     * <p>The validation status. Valid values are listed below.</p>
     */
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }

    /**
     * <p>The validation status. Valid values are listed below.</p>
     */
    inline void SetValidationStatus(const LoadBalancerTlsCertificateDomainStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }

    /**
     * <p>The validation status. Valid values are listed below.</p>
     */
    inline void SetValidationStatus(LoadBalancerTlsCertificateDomainStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }

    /**
     * <p>The validation status. Valid values are listed below.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValidationStatus(const LoadBalancerTlsCertificateDomainStatus& value) { SetValidationStatus(value); return *this;}

    /**
     * <p>The validation status. Valid values are listed below.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithValidationStatus(LoadBalancerTlsCertificateDomainStatus&& value) { SetValidationStatus(std::move(value)); return *this;}


    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name against which your SSL/TLS certificate was validated.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of a domain to validate domain
     * ownership.</p>
     */
    inline const LoadBalancerTlsCertificateDnsRecordCreationState& GetDnsRecordCreationState() const{ return m_dnsRecordCreationState; }

    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of a domain to validate domain
     * ownership.</p>
     */
    inline bool DnsRecordCreationStateHasBeenSet() const { return m_dnsRecordCreationStateHasBeenSet; }

    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of a domain to validate domain
     * ownership.</p>
     */
    inline void SetDnsRecordCreationState(const LoadBalancerTlsCertificateDnsRecordCreationState& value) { m_dnsRecordCreationStateHasBeenSet = true; m_dnsRecordCreationState = value; }

    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of a domain to validate domain
     * ownership.</p>
     */
    inline void SetDnsRecordCreationState(LoadBalancerTlsCertificateDnsRecordCreationState&& value) { m_dnsRecordCreationStateHasBeenSet = true; m_dnsRecordCreationState = std::move(value); }

    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of a domain to validate domain
     * ownership.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDnsRecordCreationState(const LoadBalancerTlsCertificateDnsRecordCreationState& value) { SetDnsRecordCreationState(value); return *this;}

    /**
     * <p>An object that describes the state of the canonical name (CNAME) records that
     * are automatically added by Lightsail to the DNS of a domain to validate domain
     * ownership.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationRecord& WithDnsRecordCreationState(LoadBalancerTlsCertificateDnsRecordCreationState&& value) { SetDnsRecordCreationState(std::move(value)); return *this;}

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
