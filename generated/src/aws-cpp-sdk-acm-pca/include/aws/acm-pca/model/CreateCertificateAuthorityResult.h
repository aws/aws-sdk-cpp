/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
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
namespace ACMPCA
{
namespace Model
{
  class CreateCertificateAuthorityResult
  {
  public:
    AWS_ACMPCA_API CreateCertificateAuthorityResult();
    AWS_ACMPCA_API CreateCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API CreateCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the certificate authority
     * (CA). This is of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the certificate authority
     * (CA). This is of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArn = value; }

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the certificate authority
     * (CA). This is of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the certificate authority
     * (CA). This is of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArn.assign(value); }

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the certificate authority
     * (CA). This is of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline CreateCertificateAuthorityResult& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the certificate authority
     * (CA). This is of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline CreateCertificateAuthorityResult& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the certificate authority
     * (CA). This is of the form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline CreateCertificateAuthorityResult& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
