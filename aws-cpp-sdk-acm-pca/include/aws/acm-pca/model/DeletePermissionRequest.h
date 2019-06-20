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
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class AWS_ACMPCA_API DeletePermissionRequest : public ACMPCARequest
  {
  public:
    DeletePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePermission"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that issued the
     * permissions. You can find the CA's ARN by calling the
     * <a>ListCertificateAuthorities</a> action. This must have the following form:
     * </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that issued the
     * permissions. You can find the CA's ARN by calling the
     * <a>ListCertificateAuthorities</a> action. This must have the following form:
     * </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that issued the
     * permissions. You can find the CA's ARN by calling the
     * <a>ListCertificateAuthorities</a> action. This must have the following form:
     * </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that issued the
     * permissions. You can find the CA's ARN by calling the
     * <a>ListCertificateAuthorities</a> action. This must have the following form:
     * </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that issued the
     * permissions. You can find the CA's ARN by calling the
     * <a>ListCertificateAuthorities</a> action. This must have the following form:
     * </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that issued the
     * permissions. You can find the CA's ARN by calling the
     * <a>ListCertificateAuthorities</a> action. This must have the following form:
     * </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline DeletePermissionRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that issued the
     * permissions. You can find the CA's ARN by calling the
     * <a>ListCertificateAuthorities</a> action. This must have the following form:
     * </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline DeletePermissionRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA that issued the
     * permissions. You can find the CA's ARN by calling the
     * <a>ListCertificateAuthorities</a> action. This must have the following form:
     * </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline DeletePermissionRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The AWS service or identity that will have its CA permissions revoked. At
     * this time, the only valid service principal is <code>acm.amazonaws.com</code>
     * </p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The AWS service or identity that will have its CA permissions revoked. At
     * this time, the only valid service principal is <code>acm.amazonaws.com</code>
     * </p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The AWS service or identity that will have its CA permissions revoked. At
     * this time, the only valid service principal is <code>acm.amazonaws.com</code>
     * </p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The AWS service or identity that will have its CA permissions revoked. At
     * this time, the only valid service principal is <code>acm.amazonaws.com</code>
     * </p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The AWS service or identity that will have its CA permissions revoked. At
     * this time, the only valid service principal is <code>acm.amazonaws.com</code>
     * </p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The AWS service or identity that will have its CA permissions revoked. At
     * this time, the only valid service principal is <code>acm.amazonaws.com</code>
     * </p>
     */
    inline DeletePermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The AWS service or identity that will have its CA permissions revoked. At
     * this time, the only valid service principal is <code>acm.amazonaws.com</code>
     * </p>
     */
    inline DeletePermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The AWS service or identity that will have its CA permissions revoked. At
     * this time, the only valid service principal is <code>acm.amazonaws.com</code>
     * </p>
     */
    inline DeletePermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>The AWS account that calls this action.</p>
     */
    inline const Aws::String& GetSourceAccount() const{ return m_sourceAccount; }

    /**
     * <p>The AWS account that calls this action.</p>
     */
    inline bool SourceAccountHasBeenSet() const { return m_sourceAccountHasBeenSet; }

    /**
     * <p>The AWS account that calls this action.</p>
     */
    inline void SetSourceAccount(const Aws::String& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = value; }

    /**
     * <p>The AWS account that calls this action.</p>
     */
    inline void SetSourceAccount(Aws::String&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = std::move(value); }

    /**
     * <p>The AWS account that calls this action.</p>
     */
    inline void SetSourceAccount(const char* value) { m_sourceAccountHasBeenSet = true; m_sourceAccount.assign(value); }

    /**
     * <p>The AWS account that calls this action.</p>
     */
    inline DeletePermissionRequest& WithSourceAccount(const Aws::String& value) { SetSourceAccount(value); return *this;}

    /**
     * <p>The AWS account that calls this action.</p>
     */
    inline DeletePermissionRequest& WithSourceAccount(Aws::String&& value) { SetSourceAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account that calls this action.</p>
     */
    inline DeletePermissionRequest& WithSourceAccount(const char* value) { SetSourceAccount(value); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    Aws::String m_principal;
    bool m_principalHasBeenSet;

    Aws::String m_sourceAccount;
    bool m_sourceAccountHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
