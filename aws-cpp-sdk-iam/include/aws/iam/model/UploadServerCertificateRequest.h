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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadServerCertificate"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/). This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p> <note> <p> If you are uploading a server certificate specifically
     * for use with Amazon CloudFront distributions, you must specify a path using the
     * <code>path</code> parameter. The path must begin with <code>/cloudfront</code>
     * and must include a trailing slash (for example,
     * <code>/cloudfront/test/</code>).</p> </note>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/). This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p> <note> <p> If you are uploading a server certificate specifically
     * for use with Amazon CloudFront distributions, you must specify a path using the
     * <code>path</code> parameter. The path must begin with <code>/cloudfront</code>
     * and must include a trailing slash (for example,
     * <code>/cloudfront/test/</code>).</p> </note>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/). This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p> <note> <p> If you are uploading a server certificate specifically
     * for use with Amazon CloudFront distributions, you must specify a path using the
     * <code>path</code> parameter. The path must begin with <code>/cloudfront</code>
     * and must include a trailing slash (for example,
     * <code>/cloudfront/test/</code>).</p> </note>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/). This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p> <note> <p> If you are uploading a server certificate specifically
     * for use with Amazon CloudFront distributions, you must specify a path using the
     * <code>path</code> parameter. The path must begin with <code>/cloudfront</code>
     * and must include a trailing slash (for example,
     * <code>/cloudfront/test/</code>).</p> </note>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/). This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p> <note> <p> If you are uploading a server certificate specifically
     * for use with Amazon CloudFront distributions, you must specify a path using the
     * <code>path</code> parameter. The path must begin with <code>/cloudfront</code>
     * and must include a trailing slash (for example,
     * <code>/cloudfront/test/</code>).</p> </note>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/). This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p> <note> <p> If you are uploading a server certificate specifically
     * for use with Amazon CloudFront distributions, you must specify a path using the
     * <code>path</code> parameter. The path must begin with <code>/cloudfront</code>
     * and must include a trailing slash (for example,
     * <code>/cloudfront/test/</code>).</p> </note>
     */
    inline UploadServerCertificateRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/). This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p> <note> <p> If you are uploading a server certificate specifically
     * for use with Amazon CloudFront distributions, you must specify a path using the
     * <code>path</code> parameter. The path must begin with <code>/cloudfront</code>
     * and must include a trailing slash (for example,
     * <code>/cloudfront/test/</code>).</p> </note>
     */
    inline UploadServerCertificateRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path for the server certificate. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/). This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes. In addition, it can contain
     * any ASCII character from the ! (\u0021) through the DEL character (\u007F),
     * including most punctuation characters, digits, and upper and lowercased
     * letters.</p> <note> <p> If you are uploading a server certificate specifically
     * for use with Amazon CloudFront distributions, you must specify a path using the
     * <code>path</code> parameter. The path must begin with <code>/cloudfront</code>
     * and must include a trailing slash (for example,
     * <code>/cloudfront/test/</code>).</p> </note>
     */
    inline UploadServerCertificateRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline const Aws::String& GetServerCertificateName() const{ return m_serverCertificateName; }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline bool ServerCertificateNameHasBeenSet() const { return m_serverCertificateNameHasBeenSet; }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline void SetServerCertificateName(const Aws::String& value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName = value; }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline void SetServerCertificateName(Aws::String&& value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName = std::move(value); }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline void SetServerCertificateName(const char* value) { m_serverCertificateNameHasBeenSet = true; m_serverCertificateName.assign(value); }

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline UploadServerCertificateRequest& WithServerCertificateName(const Aws::String& value) { SetServerCertificateName(value); return *this;}

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline UploadServerCertificateRequest& WithServerCertificateName(Aws::String&& value) { SetServerCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name for the server certificate. Do not include the path in this value.
     * The name of the certificate cannot contain any spaces.</p> <p>This parameter
     * allows (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>)
     * a string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline UploadServerCertificateRequest& WithServerCertificateName(const char* value) { SetServerCertificateName(value); return *this;}


    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate
     * this parameter is a string of characters consisting of the following:</p> <ul>
     * <li> <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline const Aws::String& GetCertificateBody() const{ return m_certificateBody; }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate
     * this parameter is a string of characters consisting of the following:</p> <ul>
     * <li> <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline bool CertificateBodyHasBeenSet() const { return m_certificateBodyHasBeenSet; }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate
     * this parameter is a string of characters consisting of the following:</p> <ul>
     * <li> <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetCertificateBody(const Aws::String& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = value; }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate
     * this parameter is a string of characters consisting of the following:</p> <ul>
     * <li> <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetCertificateBody(Aws::String&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = std::move(value); }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate
     * this parameter is a string of characters consisting of the following:</p> <ul>
     * <li> <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetCertificateBody(const char* value) { m_certificateBodyHasBeenSet = true; m_certificateBody.assign(value); }

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate
     * this parameter is a string of characters consisting of the following:</p> <ul>
     * <li> <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadServerCertificateRequest& WithCertificateBody(const Aws::String& value) { SetCertificateBody(value); return *this;}

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate
     * this parameter is a string of characters consisting of the following:</p> <ul>
     * <li> <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadServerCertificateRequest& WithCertificateBody(Aws::String&& value) { SetCertificateBody(std::move(value)); return *this;}

    /**
     * <p>The contents of the public key certificate in PEM-encoded format.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate
     * this parameter is a string of characters consisting of the following:</p> <ul>
     * <li> <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadServerCertificateRequest& WithCertificateBody(const char* value) { SetCertificateBody(value); return *this;}


    /**
     * <p>The contents of the private key in PEM-encoded format.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * <p>The contents of the private key in PEM-encoded format.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadServerCertificateRequest& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The contents of the private key in PEM-encoded format.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadServerCertificateRequest& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * <p>The contents of the private key in PEM-encoded format.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadServerCertificateRequest& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}


    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadServerCertificateRequest& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
     */
    inline UploadServerCertificateRequest& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The contents of the certificate chain. This is typically a concatenation of
     * the PEM-encoded public key certificates of the chain.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> used to validate this
     * parameter is a string of characters consisting of the following:</p> <ul> <li>
     * <p>Any printable ASCII character ranging from the space character (\u0020)
     * through the end of the ASCII character range</p> </li> <li> <p>The printable
     * characters in the Basic Latin and Latin-1 Supplement character set (through
     * \u00FF)</p> </li> <li> <p>The special characters tab (\u0009), line feed
     * (\u000A), and carriage return (\u000D)</p> </li> </ul>
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
