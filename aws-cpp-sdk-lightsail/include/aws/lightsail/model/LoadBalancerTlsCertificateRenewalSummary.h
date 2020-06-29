/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateRenewalStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateDomainValidationOption.h>
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
   * <p>Contains information about the status of Lightsail's managed renewal for the
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsCertificateRenewalSummary">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API LoadBalancerTlsCertificateRenewalSummary
  {
  public:
    LoadBalancerTlsCertificateRenewalSummary();
    LoadBalancerTlsCertificateRenewalSummary(Aws::Utils::Json::JsonView jsonValue);
    LoadBalancerTlsCertificateRenewalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of Lightsail's managed renewal of the certificate. Valid values
     * are listed below.</p>
     */
    inline const LoadBalancerTlsCertificateRenewalStatus& GetRenewalStatus() const{ return m_renewalStatus; }

    /**
     * <p>The status of Lightsail's managed renewal of the certificate. Valid values
     * are listed below.</p>
     */
    inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }

    /**
     * <p>The status of Lightsail's managed renewal of the certificate. Valid values
     * are listed below.</p>
     */
    inline void SetRenewalStatus(const LoadBalancerTlsCertificateRenewalStatus& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }

    /**
     * <p>The status of Lightsail's managed renewal of the certificate. Valid values
     * are listed below.</p>
     */
    inline void SetRenewalStatus(LoadBalancerTlsCertificateRenewalStatus&& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = std::move(value); }

    /**
     * <p>The status of Lightsail's managed renewal of the certificate. Valid values
     * are listed below.</p>
     */
    inline LoadBalancerTlsCertificateRenewalSummary& WithRenewalStatus(const LoadBalancerTlsCertificateRenewalStatus& value) { SetRenewalStatus(value); return *this;}

    /**
     * <p>The status of Lightsail's managed renewal of the certificate. Valid values
     * are listed below.</p>
     */
    inline LoadBalancerTlsCertificateRenewalSummary& WithRenewalStatus(LoadBalancerTlsCertificateRenewalStatus&& value) { SetRenewalStatus(std::move(value)); return *this;}


    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline void SetDomainValidationOptions(Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::move(value); }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline LoadBalancerTlsCertificateRenewalSummary& WithDomainValidationOptions(const Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline LoadBalancerTlsCertificateRenewalSummary& WithDomainValidationOptions(Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption>&& value) { SetDomainValidationOptions(std::move(value)); return *this;}

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline LoadBalancerTlsCertificateRenewalSummary& AddDomainValidationOptions(const LoadBalancerTlsCertificateDomainValidationOption& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline LoadBalancerTlsCertificateRenewalSummary& AddDomainValidationOptions(LoadBalancerTlsCertificateDomainValidationOption&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(std::move(value)); return *this; }

  private:

    LoadBalancerTlsCertificateRenewalStatus m_renewalStatus;
    bool m_renewalStatusHasBeenSet;

    Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
