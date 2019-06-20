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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/ActionType.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class AWS_ACMPCA_API CreatePermissionRequest : public ACMPCARequest
  {
  public:
    CreatePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePermission"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the CA that grants the permissions. You can
     * find the ARN by calling the <a>ListCertificateAuthorities</a> action. This must
     * have the following form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA that grants the permissions. You can
     * find the ARN by calling the <a>ListCertificateAuthorities</a> action. This must
     * have the following form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA that grants the permissions. You can
     * find the ARN by calling the <a>ListCertificateAuthorities</a> action. This must
     * have the following form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA that grants the permissions. You can
     * find the ARN by calling the <a>ListCertificateAuthorities</a> action. This must
     * have the following form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA that grants the permissions. You can
     * find the ARN by calling the <a>ListCertificateAuthorities</a> action. This must
     * have the following form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA that grants the permissions. You can
     * find the ARN by calling the <a>ListCertificateAuthorities</a> action. This must
     * have the following form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline CreatePermissionRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CA that grants the permissions. You can
     * find the ARN by calling the <a>ListCertificateAuthorities</a> action. This must
     * have the following form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline CreatePermissionRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CA that grants the permissions. You can
     * find the ARN by calling the <a>ListCertificateAuthorities</a> action. This must
     * have the following form: </p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>. </p>
     */
    inline CreatePermissionRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The AWS service or identity that receives the permission. At this time, the
     * only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The AWS service or identity that receives the permission. At this time, the
     * only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The AWS service or identity that receives the permission. At this time, the
     * only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The AWS service or identity that receives the permission. At this time, the
     * only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The AWS service or identity that receives the permission. At this time, the
     * only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The AWS service or identity that receives the permission. At this time, the
     * only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline CreatePermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The AWS service or identity that receives the permission. At this time, the
     * only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline CreatePermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The AWS service or identity that receives the permission. At this time, the
     * only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline CreatePermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>The ID of the calling account.</p>
     */
    inline const Aws::String& GetSourceAccount() const{ return m_sourceAccount; }

    /**
     * <p>The ID of the calling account.</p>
     */
    inline bool SourceAccountHasBeenSet() const { return m_sourceAccountHasBeenSet; }

    /**
     * <p>The ID of the calling account.</p>
     */
    inline void SetSourceAccount(const Aws::String& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = value; }

    /**
     * <p>The ID of the calling account.</p>
     */
    inline void SetSourceAccount(Aws::String&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = std::move(value); }

    /**
     * <p>The ID of the calling account.</p>
     */
    inline void SetSourceAccount(const char* value) { m_sourceAccountHasBeenSet = true; m_sourceAccount.assign(value); }

    /**
     * <p>The ID of the calling account.</p>
     */
    inline CreatePermissionRequest& WithSourceAccount(const Aws::String& value) { SetSourceAccount(value); return *this;}

    /**
     * <p>The ID of the calling account.</p>
     */
    inline CreatePermissionRequest& WithSourceAccount(Aws::String&& value) { SetSourceAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the calling account.</p>
     */
    inline CreatePermissionRequest& WithSourceAccount(const char* value) { SetSourceAccount(value); return *this;}


    /**
     * <p>The actions that the specified AWS service principal can use. These include
     * <code>IssueCertificate</code>, <code>GetCertificate</code>, and
     * <code>ListPermissions</code>.</p>
     */
    inline const Aws::Vector<ActionType>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions that the specified AWS service principal can use. These include
     * <code>IssueCertificate</code>, <code>GetCertificate</code>, and
     * <code>ListPermissions</code>.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions that the specified AWS service principal can use. These include
     * <code>IssueCertificate</code>, <code>GetCertificate</code>, and
     * <code>ListPermissions</code>.</p>
     */
    inline void SetActions(const Aws::Vector<ActionType>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions that the specified AWS service principal can use. These include
     * <code>IssueCertificate</code>, <code>GetCertificate</code>, and
     * <code>ListPermissions</code>.</p>
     */
    inline void SetActions(Aws::Vector<ActionType>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions that the specified AWS service principal can use. These include
     * <code>IssueCertificate</code>, <code>GetCertificate</code>, and
     * <code>ListPermissions</code>.</p>
     */
    inline CreatePermissionRequest& WithActions(const Aws::Vector<ActionType>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions that the specified AWS service principal can use. These include
     * <code>IssueCertificate</code>, <code>GetCertificate</code>, and
     * <code>ListPermissions</code>.</p>
     */
    inline CreatePermissionRequest& WithActions(Aws::Vector<ActionType>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions that the specified AWS service principal can use. These include
     * <code>IssueCertificate</code>, <code>GetCertificate</code>, and
     * <code>ListPermissions</code>.</p>
     */
    inline CreatePermissionRequest& AddActions(const ActionType& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions that the specified AWS service principal can use. These include
     * <code>IssueCertificate</code>, <code>GetCertificate</code>, and
     * <code>ListPermissions</code>.</p>
     */
    inline CreatePermissionRequest& AddActions(ActionType&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    Aws::String m_principal;
    bool m_principalHasBeenSet;

    Aws::String m_sourceAccount;
    bool m_sourceAccountHasBeenSet;

    Aws::Vector<ActionType> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
