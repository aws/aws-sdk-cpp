﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/Certificate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class AWS_WORKSPACESWEB_API GetTrustStoreCertificateResult
  {
  public:
    GetTrustStoreCertificateResult();
    GetTrustStoreCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTrustStoreCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The certificate of the trust store certificate.</p>
     */
    inline const Certificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The certificate of the trust store certificate.</p>
     */
    inline void SetCertificate(const Certificate& value) { m_certificate = value; }

    /**
     * <p>The certificate of the trust store certificate.</p>
     */
    inline void SetCertificate(Certificate&& value) { m_certificate = std::move(value); }

    /**
     * <p>The certificate of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateResult& WithCertificate(const Certificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>The certificate of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateResult& WithCertificate(Certificate&& value) { SetCertificate(std::move(value)); return *this;}


    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateResult& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateResult& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateResult& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}

  private:

    Certificate m_certificate;

    Aws::String m_trustStoreArn;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
