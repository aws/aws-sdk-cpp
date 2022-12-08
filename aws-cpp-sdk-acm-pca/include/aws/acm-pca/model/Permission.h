/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/ActionType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Permissions designate which private CA actions can be performed by an Amazon
   * Web Services service or entity. In order for ACM to automatically renew private
   * certificates, you must give the ACM service principal all available permissions
   * (<code>IssueCertificate</code>, <code>GetCertificate</code>, and
   * <code>ListPermissions</code>). Permissions can be assigned with the <a
   * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreatePermission.html">CreatePermission</a>
   * action, removed with the <a
   * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_DeletePermission.html">DeletePermission</a>
   * action, and listed with the <a
   * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_ListPermissions.html">ListPermissions</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/Permission">AWS
   * API Reference</a></p>
   */
  class Permission
  {
  public:
    AWS_ACMPCA_API Permission();
    AWS_ACMPCA_API Permission(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Number (ARN) of the private CA from which the permission
     * was issued.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA from which the permission
     * was issued.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA from which the permission
     * was issued.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA from which the permission
     * was issued.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA from which the permission
     * was issued.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA from which the permission
     * was issued.</p>
     */
    inline Permission& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA from which the permission
     * was issued.</p>
     */
    inline Permission& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA from which the permission
     * was issued.</p>
     */
    inline Permission& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The time at which the permission was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the permission was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the permission was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the permission was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the permission was created.</p>
     */
    inline Permission& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the permission was created.</p>
     */
    inline Permission& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services service or entity that holds the permission. At this
     * time, the only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The Amazon Web Services service or entity that holds the permission. At this
     * time, the only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The Amazon Web Services service or entity that holds the permission. At this
     * time, the only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The Amazon Web Services service or entity that holds the permission. At this
     * time, the only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The Amazon Web Services service or entity that holds the permission. At this
     * time, the only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The Amazon Web Services service or entity that holds the permission. At this
     * time, the only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline Permission& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The Amazon Web Services service or entity that holds the permission. At this
     * time, the only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline Permission& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services service or entity that holds the permission. At this
     * time, the only valid principal is <code>acm.amazonaws.com</code>.</p>
     */
    inline Permission& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>The ID of the account that assigned the permission.</p>
     */
    inline const Aws::String& GetSourceAccount() const{ return m_sourceAccount; }

    /**
     * <p>The ID of the account that assigned the permission.</p>
     */
    inline bool SourceAccountHasBeenSet() const { return m_sourceAccountHasBeenSet; }

    /**
     * <p>The ID of the account that assigned the permission.</p>
     */
    inline void SetSourceAccount(const Aws::String& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = value; }

    /**
     * <p>The ID of the account that assigned the permission.</p>
     */
    inline void SetSourceAccount(Aws::String&& value) { m_sourceAccountHasBeenSet = true; m_sourceAccount = std::move(value); }

    /**
     * <p>The ID of the account that assigned the permission.</p>
     */
    inline void SetSourceAccount(const char* value) { m_sourceAccountHasBeenSet = true; m_sourceAccount.assign(value); }

    /**
     * <p>The ID of the account that assigned the permission.</p>
     */
    inline Permission& WithSourceAccount(const Aws::String& value) { SetSourceAccount(value); return *this;}

    /**
     * <p>The ID of the account that assigned the permission.</p>
     */
    inline Permission& WithSourceAccount(Aws::String&& value) { SetSourceAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the account that assigned the permission.</p>
     */
    inline Permission& WithSourceAccount(const char* value) { SetSourceAccount(value); return *this;}


    /**
     * <p>The private CA actions that can be performed by the designated Amazon Web
     * Services service.</p>
     */
    inline const Aws::Vector<ActionType>& GetActions() const{ return m_actions; }

    /**
     * <p>The private CA actions that can be performed by the designated Amazon Web
     * Services service.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The private CA actions that can be performed by the designated Amazon Web
     * Services service.</p>
     */
    inline void SetActions(const Aws::Vector<ActionType>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The private CA actions that can be performed by the designated Amazon Web
     * Services service.</p>
     */
    inline void SetActions(Aws::Vector<ActionType>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The private CA actions that can be performed by the designated Amazon Web
     * Services service.</p>
     */
    inline Permission& WithActions(const Aws::Vector<ActionType>& value) { SetActions(value); return *this;}

    /**
     * <p>The private CA actions that can be performed by the designated Amazon Web
     * Services service.</p>
     */
    inline Permission& WithActions(Aws::Vector<ActionType>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The private CA actions that can be performed by the designated Amazon Web
     * Services service.</p>
     */
    inline Permission& AddActions(const ActionType& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The private CA actions that can be performed by the designated Amazon Web
     * Services service.</p>
     */
    inline Permission& AddActions(ActionType&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the policy that is associated with the permission.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The name of the policy that is associated with the permission.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The name of the policy that is associated with the permission.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The name of the policy that is associated with the permission.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The name of the policy that is associated with the permission.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The name of the policy that is associated with the permission.</p>
     */
    inline Permission& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The name of the policy that is associated with the permission.</p>
     */
    inline Permission& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The name of the policy that is associated with the permission.</p>
     */
    inline Permission& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_sourceAccount;
    bool m_sourceAccountHasBeenSet = false;

    Aws::Vector<ActionType> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
