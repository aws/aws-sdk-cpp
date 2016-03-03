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
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UploadServerCertificateRequest : public IAMRequest
  {
  public:
    UploadServerCertificateRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p> <p>This parameter is
     * optional. If it is not included, it defaults to a slash (/).</p> <note> If you
     * are uploading a server certificate specifically for use with Amazon CloudFront
     * distributions, you must specify a path using the <code>--path</code> option. The
     * path must begin with <code>/cloudfront</code> and must include a trailing slash
     * (for example, <code>/cloudfront/test/</code>). </note>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p> <p>This parameter is
     * optional. If it is not included, it defaults to a slash (/).</p> <note> If you
     * are uploading a server certificate specifically for use with Amazon CloudFront
     * distributions, you must specify a path using the <code>--path</code> option. The
     * path must begin with <code>/cloudfront</code> and must include a trailing slash
     * (for example, <code>/cloudfront/test/</code>). </note>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p> <p>This parameter is
     * optional. If it is not included, it defaults to a slash (/).</p> <note> If you
     * are uploading a server certificate specifically for use with Amazon CloudFront
     * distributions, you must specify a path using the <code>--path</code> option. The
     * path must begin with <code>/cloudfront</code> and must include a trailing slash
     * (for example, <code>/cloudfront/test/</code>). </note>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p> <p>This parameter is
     * optional. If it is not included, it defaults to a slash (/).</p> <note> If you
     * are uploading a server certificate specifically for use with Amazon CloudFront
     * distributions, you must specify a path using the <code>--path</code> option. The
     * path must begin with <code>/cloudfront</code> and must include a trailing slash
     * (for example, <code>/cloudfront/test/</code>). </note>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p> <p>This parameter is
     * optional. If it is not included, it defaults to a slash (/).</p> <note> If you
     * are uploading a server certificate specifically for use with Amazon CloudFront
     * distributions, you must specify a path using the <code>--path</code> option. The
     * path must begin with <code>/cloudfront</code> and must include a trailing slash
     * (for example, <code>/cloudfront/test/</code>). </note>
     */
    inline UploadServerCertificateRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p> <p>This parameter is
     * optional. If it is not included, it defaults to a slash (/).</p> <note> If you
     * are uploading a server certificate specifically for use with Amazon CloudFront
     * distributions, you must specify a path using the <code>--path</code> option. The
     * path must begin with <code>/cloudfront</code> and must include a trailing slash
     * (for example, <code>/cloudfront/test/</code>). </note>
     */
    inline UploadServerCertificateRequest& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p> <p>This parameter is
     * optional. If it is not included, it defaults to a slash (/).</p> <note> If you
     * are uploading a server certificate specifically for use with Amazon CloudFront
     * distributions, you must specify a path using the <code>--path</code> option. The
     * path must begin with <code>/cloudfront</code> and must include a trailing slash
     * (for example, <code>/cloudfront/test/</code>). </note>
     */
    inline UploadServerCertificateRequest& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p>
     */
    inline const Aws::String& GetServerCertificateName() const{ return m_serverCertificateName; }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p>
     */
    inline void SetServerCertificateName(const Aws::String& value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName = value; }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p>
     */
    inline void SetServerCertificateName(Aws::String&& value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName = value; }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p>
     */
    inline void SetServerCertificateName(const char* value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName.assign(value); }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p>
     */
    inline UploadServerCertificateRequest& WithServerCertificateName(const Aws::String& value) { SetServerCertificateName(value); return *this;}

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p>
     */
    inline UploadServerCertificateRequest& WithServerCertificateName(Aws::String&& value) { SetServerCertificateName(value); return *this;}

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p>
     */
    inline UploadServerCertificateRequest& WithServerCertificateName(const char* value) { SetServerCertificateName(value); return *this;}

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p>
     */
    inline const Aws::String& GetCertificateBody() const{ return m_certificateBody; }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p>
     */
    inline void SetCertificateBody(const Aws::String& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = value; }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p>
     */
    inline void SetCertificateBody(Aws::String&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = value; }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p>
     */
    inline void SetCertificateBody(const char* value) { m_certificateBodyHasBeenSet = true; m_certificateBody.assign(value); }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p>
     */
    inline UploadServerCertificateRequest& WithCertificateBody(const Aws::String& value) { SetCertificateBody(value); return *this;}

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p>
     */
    inline UploadServerCertificateRequest& WithCertificateBody(Aws::String&& value) { SetCertificateBody(value); return *this;}

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p>
     */
    inline UploadServerCertificateRequest& WithCertificateBody(const char* value) { SetCertificateBody(value); return *this;}

    /**
     * <p>The contents of the private key in PEM-encoded format.</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p>
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p>
     */
    inline UploadServerCertificateRequest& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The contents of the private key in PEM-encoded format.</p>
     */
    inline UploadServerCertificateRequest& WithPrivateKey(Aws::String&& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The contents of the private key in PEM-encoded format.</p>
     */
    inline UploadServerCertificateRequest& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain. </p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain. </p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain. </p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain. </p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain. </p>
     */
    inline UploadServerCertificateRequest& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain. </p>
     */
    inline UploadServerCertificateRequest& WithCertificateChain(Aws::String&& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain. </p>
     */
    inline UploadServerCertificateRequest& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}

  private:
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::String m_serverCertificateName;
    bool m_serverCertificateNameHasBeenSet;
    Aws::String m_certificateBody;
    bool m_certificateBodyHasBeenSet;
    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet;
    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
