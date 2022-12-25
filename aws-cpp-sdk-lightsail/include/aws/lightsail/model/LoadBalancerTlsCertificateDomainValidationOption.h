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
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationOption();
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationOption& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationOption& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name in the certificate request.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationOption& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The status of the domain validation. Valid values are listed below.</p>
     */
    inline const LoadBalancerTlsCertificateDomainStatus& GetValidationStatus() const{ return m_validationStatus; }

    /**
     * <p>The status of the domain validation. Valid values are listed below.</p>
     */
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }

    /**
     * <p>The status of the domain validation. Valid values are listed below.</p>
     */
    inline void SetValidationStatus(const LoadBalancerTlsCertificateDomainStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }

    /**
     * <p>The status of the domain validation. Valid values are listed below.</p>
     */
    inline void SetValidationStatus(LoadBalancerTlsCertificateDomainStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }

    /**
     * <p>The status of the domain validation. Valid values are listed below.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationOption& WithValidationStatus(const LoadBalancerTlsCertificateDomainStatus& value) { SetValidationStatus(value); return *this;}

    /**
     * <p>The status of the domain validation. Valid values are listed below.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationOption& WithValidationStatus(LoadBalancerTlsCertificateDomainStatus&& value) { SetValidationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    LoadBalancerTlsCertificateDomainStatus m_validationStatus;
    bool m_validationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
