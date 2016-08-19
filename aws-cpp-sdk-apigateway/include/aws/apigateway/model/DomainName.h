/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a domain name that is contained in a simpler, more intuitive URL
   * that can be called.</p> <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-custom-domains.html">Use
   * Client-Side Certificate</a> </div>
   */
  class AWS_APIGATEWAY_API DomainName
  {
  public:
    DomainName();
    DomainName(const Aws::Utils::Json::JsonValue& jsonValue);
    DomainName& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline DomainName& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline DomainName& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline DomainName& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the certificate.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name of the certificate.</p>
     */
    inline DomainName& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the certificate.</p>
     */
    inline DomainName& WithCertificateName(Aws::String&& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the certificate.</p>
     */
    inline DomainName& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}

    /**
     * <p>The date when the certificate was uploaded, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCertificateUploadDate() const{ return m_certificateUploadDate; }

    /**
     * <p>The date when the certificate was uploaded, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCertificateUploadDate(const Aws::Utils::DateTime& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = value; }

    /**
     * <p>The date when the certificate was uploaded, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCertificateUploadDate(Aws::Utils::DateTime&& value) { m_certificateUploadDateHasBeenSet = true; m_certificateUploadDate = value; }

    /**
     * <p>The date when the certificate was uploaded, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline DomainName& WithCertificateUploadDate(const Aws::Utils::DateTime& value) { SetCertificateUploadDate(value); return *this;}

    /**
     * <p>The date when the certificate was uploaded, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline DomainName& WithCertificateUploadDate(Aws::Utils::DateTime&& value) { SetCertificateUploadDate(value); return *this;}

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline const Aws::String& GetDistributionDomainName() const{ return m_distributionDomainName; }

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline void SetDistributionDomainName(const Aws::String& value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName = value; }

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline void SetDistributionDomainName(Aws::String&& value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName = value; }

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline void SetDistributionDomainName(const char* value) { m_distributionDomainNameHasBeenSet = true; m_distributionDomainName.assign(value); }

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline DomainName& WithDistributionDomainName(const Aws::String& value) { SetDistributionDomainName(value); return *this;}

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline DomainName& WithDistributionDomainName(Aws::String&& value) { SetDistributionDomainName(value); return *this;}

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline DomainName& WithDistributionDomainName(const char* value) { SetDistributionDomainName(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet;
    Aws::Utils::DateTime m_certificateUploadDate;
    bool m_certificateUploadDateHasBeenSet;
    Aws::String m_distributionDomainName;
    bool m_distributionDomainNameHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
