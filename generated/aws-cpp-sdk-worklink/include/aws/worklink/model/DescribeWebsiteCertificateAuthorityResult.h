/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API DescribeWebsiteCertificateAuthorityResult
  {
  public:
    DescribeWebsiteCertificateAuthorityResult();
    DescribeWebsiteCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWebsiteCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The root certificate of the certificate authority.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The root certificate of the certificate authority.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }

    /**
     * <p>The root certificate of the certificate authority.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }

    /**
     * <p>The root certificate of the certificate authority.</p>
     */
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }

    /**
     * <p>The root certificate of the certificate authority.</p>
     */
    inline DescribeWebsiteCertificateAuthorityResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The root certificate of the certificate authority.</p>
     */
    inline DescribeWebsiteCertificateAuthorityResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The root certificate of the certificate authority.</p>
     */
    inline DescribeWebsiteCertificateAuthorityResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The time that the certificate authority was added.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the certificate authority was added.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The time that the certificate authority was added.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The time that the certificate authority was added.</p>
     */
    inline DescribeWebsiteCertificateAuthorityResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the certificate authority was added.</p>
     */
    inline DescribeWebsiteCertificateAuthorityResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The certificate name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The certificate name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The certificate name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The certificate name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The certificate name to display.</p>
     */
    inline DescribeWebsiteCertificateAuthorityResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The certificate name to display.</p>
     */
    inline DescribeWebsiteCertificateAuthorityResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The certificate name to display.</p>
     */
    inline DescribeWebsiteCertificateAuthorityResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_certificate;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_displayName;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
