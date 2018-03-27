/*
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
#include <aws/acm/ACM_EXPORTS.h>
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
namespace ACM
{
namespace Model
{
  class AWS_ACM_API GetCertificateResult
  {
  public:
    GetCertificateResult();
    GetCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>String that contains the ACM certificate represented by the ARN specified at
     * input.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>String that contains the ACM certificate represented by the ARN specified at
     * input.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }

    /**
     * <p>String that contains the ACM certificate represented by the ARN specified at
     * input.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }

    /**
     * <p>String that contains the ACM certificate represented by the ARN specified at
     * input.</p>
     */
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }

    /**
     * <p>String that contains the ACM certificate represented by the ARN specified at
     * input.</p>
     */
    inline GetCertificateResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>String that contains the ACM certificate represented by the ARN specified at
     * input.</p>
     */
    inline GetCertificateResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>String that contains the ACM certificate represented by the ARN specified at
     * input.</p>
     */
    inline GetCertificateResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The certificate chain that contains the root certificate issued by the
     * certificate authority (CA).</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The certificate chain that contains the root certificate issued by the
     * certificate authority (CA).</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChain = value; }

    /**
     * <p>The certificate chain that contains the root certificate issued by the
     * certificate authority (CA).</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChain = std::move(value); }

    /**
     * <p>The certificate chain that contains the root certificate issued by the
     * certificate authority (CA).</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChain.assign(value); }

    /**
     * <p>The certificate chain that contains the root certificate issued by the
     * certificate authority (CA).</p>
     */
    inline GetCertificateResult& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The certificate chain that contains the root certificate issued by the
     * certificate authority (CA).</p>
     */
    inline GetCertificateResult& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The certificate chain that contains the root certificate issued by the
     * certificate authority (CA).</p>
     */
    inline GetCertificateResult& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}

  private:

    Aws::String m_certificate;

    Aws::String m_certificateChain;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
