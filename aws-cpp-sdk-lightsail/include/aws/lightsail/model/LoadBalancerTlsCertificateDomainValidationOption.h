﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Contains information about the domain names on a TLS/SSL certificate that you
   * will use to validate domain ownership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsCertificateDomainValidationOption">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainValidationOption
  {
  public:
    LoadBalancerTlsCertificateDomainValidationOption();
    LoadBalancerTlsCertificateDomainValidationOption(const Aws::Utils::Json::JsonValue& jsonValue);
    LoadBalancerTlsCertificateDomainValidationOption& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A fully qualified domain name in the certificate request.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A fully qualified domain name in the certificate request.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A fully qualified domain name in the certificate request.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A fully qualified domain name in the certificate request.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A fully qualified domain name in the certificate request.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationOption& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A fully qualified domain name in the certificate request.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationOption& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A fully qualified domain name in the certificate request.</p>
     */
    inline LoadBalancerTlsCertificateDomainValidationOption& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The status of the domain validation. Valid values are listed below.</p>
     */
    inline const LoadBalancerTlsCertificateDomainStatus& GetValidationStatus() const{ return m_validationStatus; }

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
    bool m_domainNameHasBeenSet;

    LoadBalancerTlsCertificateDomainStatus m_validationStatus;
    bool m_validationStatusHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
