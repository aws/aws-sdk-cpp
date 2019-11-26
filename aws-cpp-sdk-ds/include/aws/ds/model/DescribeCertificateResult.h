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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/Certificate.h>
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
namespace DirectoryService
{
namespace Model
{
  class AWS_DIRECTORYSERVICE_API DescribeCertificateResult
  {
  public:
    DescribeCertificateResult();
    DescribeCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the certificate, including registered date time,
     * certificate state, the reason for the state, expiration date time, and
     * certificate common name.</p>
     */
    inline const Certificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>Information about the certificate, including registered date time,
     * certificate state, the reason for the state, expiration date time, and
     * certificate common name.</p>
     */
    inline void SetCertificate(const Certificate& value) { m_certificate = value; }

    /**
     * <p>Information about the certificate, including registered date time,
     * certificate state, the reason for the state, expiration date time, and
     * certificate common name.</p>
     */
    inline void SetCertificate(Certificate&& value) { m_certificate = std::move(value); }

    /**
     * <p>Information about the certificate, including registered date time,
     * certificate state, the reason for the state, expiration date time, and
     * certificate common name.</p>
     */
    inline DescribeCertificateResult& WithCertificate(const Certificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>Information about the certificate, including registered date time,
     * certificate state, the reason for the state, expiration date time, and
     * certificate common name.</p>
     */
    inline DescribeCertificateResult& WithCertificate(Certificate&& value) { SetCertificate(std::move(value)); return *this;}

  private:

    Certificate m_certificate;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
