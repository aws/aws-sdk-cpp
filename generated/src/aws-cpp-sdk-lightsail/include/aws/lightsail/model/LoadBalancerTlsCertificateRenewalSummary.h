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
   * certificate.</p> <p>The renewal status of the certificate.</p> <p>The following
   * renewal status are possible:</p> <ul> <li> <p> <b>
   * <code>PendingAutoRenewal</code> </b> - Lightsail is attempting to automatically
   * validate the domain names in the certificate. No further action is required.
   * </p> </li> <li> <p> <b> <code>PendingValidation</code> </b> - Lightsail couldn't
   * automatically validate one or more domain names in the certificate. You must
   * take action to validate these domain names or the certificate won't be renewed.
   * If you used DNS validation, check to make sure your certificate's domain
   * validation records exist in your domain's DNS, and that your certificate remains
   * in use.</p> </li> <li> <p> <b> <code>Success</code> </b> - All domain names in
   * the certificate are validated, and Lightsail renewed the certificate. No further
   * action is required. </p> </li> <li> <p> <b> <code>Failed</code> </b> - One or
   * more domain names were not validated before the certificate expired, and
   * Lightsail did not renew the certificate. You can request a new certificate using
   * the <code>CreateCertificate</code> action.</p> </li> </ul><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsCertificateRenewalSummary">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTlsCertificateRenewalSummary
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateRenewalSummary() = default;
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateRenewalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateRenewalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline LoadBalancerTlsCertificateRenewalStatus GetRenewalStatus() const { return m_renewalStatus; }
    inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }
    inline void SetRenewalStatus(LoadBalancerTlsCertificateRenewalStatus value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }
    inline LoadBalancerTlsCertificateRenewalSummary& WithRenewalStatus(LoadBalancerTlsCertificateRenewalStatus value) { SetRenewalStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the validation of each domain name in the
     * certificate, as it pertains to Lightsail's managed renewal. This is different
     * from the initial validation that occurs as a result of the RequestCertificate
     * request.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption>& GetDomainValidationOptions() const { return m_domainValidationOptions; }
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }
    template<typename DomainValidationOptionsT = Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption>>
    void SetDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::forward<DomainValidationOptionsT>(value); }
    template<typename DomainValidationOptionsT = Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption>>
    LoadBalancerTlsCertificateRenewalSummary& WithDomainValidationOptions(DomainValidationOptionsT&& value) { SetDomainValidationOptions(std::forward<DomainValidationOptionsT>(value)); return *this;}
    template<typename DomainValidationOptionsT = LoadBalancerTlsCertificateDomainValidationOption>
    LoadBalancerTlsCertificateRenewalSummary& AddDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.emplace_back(std::forward<DomainValidationOptionsT>(value)); return *this; }
    ///@}
  private:

    LoadBalancerTlsCertificateRenewalStatus m_renewalStatus{LoadBalancerTlsCertificateRenewalStatus::NOT_SET};
    bool m_renewalStatusHasBeenSet = false;

    Aws::Vector<LoadBalancerTlsCertificateDomainValidationOption> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
