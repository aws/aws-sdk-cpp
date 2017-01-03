﻿/*
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * Client-Side Certificate</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DomainName">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateDomainNameResult
  {
  public:
    UpdateDomainNameResult();
    UpdateDomainNameResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDomainNameResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = value; }

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline UpdateDomainNameResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline UpdateDomainNameResult& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the <a>DomainName</a> resource.</p>
     */
    inline UpdateDomainNameResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the certificate.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateName = value; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateName = value; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateName.assign(value); }

    /**
     * <p>The name of the certificate.</p>
     */
    inline UpdateDomainNameResult& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the certificate.</p>
     */
    inline UpdateDomainNameResult& WithCertificateName(Aws::String&& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the certificate.</p>
     */
    inline UpdateDomainNameResult& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}

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
    inline void SetCertificateUploadDate(const Aws::Utils::DateTime& value) { m_certificateUploadDate = value; }

    /**
     * <p>The date when the certificate was uploaded, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCertificateUploadDate(Aws::Utils::DateTime&& value) { m_certificateUploadDate = value; }

    /**
     * <p>The date when the certificate was uploaded, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline UpdateDomainNameResult& WithCertificateUploadDate(const Aws::Utils::DateTime& value) { SetCertificateUploadDate(value); return *this;}

    /**
     * <p>The date when the certificate was uploaded, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline UpdateDomainNameResult& WithCertificateUploadDate(Aws::Utils::DateTime&& value) { SetCertificateUploadDate(value); return *this;}

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
    inline void SetDistributionDomainName(const Aws::String& value) { m_distributionDomainName = value; }

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline void SetDistributionDomainName(Aws::String&& value) { m_distributionDomainName = value; }

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline void SetDistributionDomainName(const char* value) { m_distributionDomainName.assign(value); }

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline UpdateDomainNameResult& WithDistributionDomainName(const Aws::String& value) { SetDistributionDomainName(value); return *this;}

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline UpdateDomainNameResult& WithDistributionDomainName(Aws::String&& value) { SetDistributionDomainName(value); return *this;}

    /**
     * <p>The domain name of the Amazon CloudFront distribution. For more information,
     * see the <a href="http://aws.amazon.com/documentation/cloudfront/"
     * target="_blank">Amazon CloudFront documentation</a>.</p>
     */
    inline UpdateDomainNameResult& WithDistributionDomainName(const char* value) { SetDistributionDomainName(value); return *this;}

  private:
    Aws::String m_domainName;
    Aws::String m_certificateName;
    Aws::Utils::DateTime m_certificateUploadDate;
    Aws::String m_distributionDomainName;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
