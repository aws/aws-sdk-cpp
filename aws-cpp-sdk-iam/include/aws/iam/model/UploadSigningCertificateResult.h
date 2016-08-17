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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/SigningCertificate.h>
#include <aws/iam/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>UploadSigningCertificate</a>
   * request. </p>
   */
  class AWS_IAM_API UploadSigningCertificateResult
  {
  public:
    UploadSigningCertificateResult();
    UploadSigningCertificateResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UploadSigningCertificateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the certificate.</p>
     */
    inline const SigningCertificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>Information about the certificate.</p>
     */
    inline void SetCertificate(const SigningCertificate& value) { m_certificate = value; }

    /**
     * <p>Information about the certificate.</p>
     */
    inline void SetCertificate(SigningCertificate&& value) { m_certificate = value; }

    /**
     * <p>Information about the certificate.</p>
     */
    inline UploadSigningCertificateResult& WithCertificate(const SigningCertificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>Information about the certificate.</p>
     */
    inline UploadSigningCertificateResult& WithCertificate(SigningCertificate&& value) { SetCertificate(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline UploadSigningCertificateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UploadSigningCertificateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    SigningCertificate m_certificate;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws