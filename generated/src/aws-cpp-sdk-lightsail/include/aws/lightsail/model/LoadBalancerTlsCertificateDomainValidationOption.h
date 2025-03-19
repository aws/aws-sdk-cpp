/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateDomainStatus.h>
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
   * <p>Contains information about the domain names on an SSL/TLS certificate that
   * you will use to validate domain ownership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsCertificateDomainValidationOption">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTlsCertificateDomainValidationOption
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationOption() = default;
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    LoadBalancerTlsCertificateDomainValidationOption& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain validation. Valid values are listed below.</p>
     */
    inline LoadBalancerTlsCertificateDomainStatus GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(LoadBalancerTlsCertificateDomainStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline LoadBalancerTlsCertificateDomainValidationOption& WithValidationStatus(LoadBalancerTlsCertificateDomainStatus value) { SetValidationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    LoadBalancerTlsCertificateDomainStatus m_validationStatus{LoadBalancerTlsCertificateDomainStatus::NOT_SET};
    bool m_validationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
