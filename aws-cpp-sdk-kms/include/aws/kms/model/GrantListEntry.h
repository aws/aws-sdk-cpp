﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/GrantConstraints.h>
#include <aws/kms/model/GrantOperation.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>Contains information about a grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GrantListEntry">AWS
   * API Reference</a></p>
   */
  class GrantListEntry
  {
  public:
    AWS_KMS_API GrantListEntry();
    AWS_KMS_API GrantListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API GrantListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline GrantListEntry& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline GrantListEntry& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline GrantListEntry& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline const Aws::String& GetGrantId() const{ return m_grantId; }

    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }

    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline void SetGrantId(const Aws::String& value) { m_grantIdHasBeenSet = true; m_grantId = value; }

    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline void SetGrantId(Aws::String&& value) { m_grantIdHasBeenSet = true; m_grantId = std::move(value); }

    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline void SetGrantId(const char* value) { m_grantIdHasBeenSet = true; m_grantId.assign(value); }

    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline GrantListEntry& WithGrantId(const Aws::String& value) { SetGrantId(value); return *this;}

    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline GrantListEntry& WithGrantId(Aws::String&& value) { SetGrantId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline GrantListEntry& WithGrantId(const char* value) { SetGrantId(value); return *this;}


    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline GrantListEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline GrantListEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline GrantListEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The date and time when the grant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the grant was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time when the grant was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the grant was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the grant was created.</p>
     */
    inline GrantListEntry& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the grant was created.</p>
     */
    inline GrantListEntry& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline const Aws::String& GetGranteePrincipal() const{ return m_granteePrincipal; }

    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline bool GranteePrincipalHasBeenSet() const { return m_granteePrincipalHasBeenSet; }

    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline void SetGranteePrincipal(const Aws::String& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = value; }

    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline void SetGranteePrincipal(Aws::String&& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = std::move(value); }

    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline void SetGranteePrincipal(const char* value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal.assign(value); }

    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline GrantListEntry& WithGranteePrincipal(const Aws::String& value) { SetGranteePrincipal(value); return *this;}

    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline GrantListEntry& WithGranteePrincipal(Aws::String&& value) { SetGranteePrincipal(std::move(value)); return *this;}

    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline GrantListEntry& WithGranteePrincipal(const char* value) { SetGranteePrincipal(value); return *this;}


    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }

    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline bool RetiringPrincipalHasBeenSet() const { return m_retiringPrincipalHasBeenSet; }

    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline void SetRetiringPrincipal(Aws::String&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = std::move(value); }

    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }

    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline GrantListEntry& WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline GrantListEntry& WithRetiringPrincipal(Aws::String&& value) { SetRetiringPrincipal(std::move(value)); return *this;}

    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline GrantListEntry& WithRetiringPrincipal(const char* value) { SetRetiringPrincipal(value); return *this;}


    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline const Aws::String& GetIssuingAccount() const{ return m_issuingAccount; }

    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline bool IssuingAccountHasBeenSet() const { return m_issuingAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline void SetIssuingAccount(const Aws::String& value) { m_issuingAccountHasBeenSet = true; m_issuingAccount = value; }

    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline void SetIssuingAccount(Aws::String&& value) { m_issuingAccountHasBeenSet = true; m_issuingAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline void SetIssuingAccount(const char* value) { m_issuingAccountHasBeenSet = true; m_issuingAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline GrantListEntry& WithIssuingAccount(const Aws::String& value) { SetIssuingAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline GrantListEntry& WithIssuingAccount(Aws::String&& value) { SetIssuingAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline GrantListEntry& WithIssuingAccount(const char* value) { SetIssuingAccount(value); return *this;}


    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline const Aws::Vector<GrantOperation>& GetOperations() const{ return m_operations; }

    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }

    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline void SetOperations(const Aws::Vector<GrantOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline void SetOperations(Aws::Vector<GrantOperation>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }

    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline GrantListEntry& WithOperations(const Aws::Vector<GrantOperation>& value) { SetOperations(value); return *this;}

    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline GrantListEntry& WithOperations(Aws::Vector<GrantOperation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline GrantListEntry& AddOperations(const GrantOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline GrantListEntry& AddOperations(GrantOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows.</p>
     */
    inline const GrantConstraints& GetConstraints() const{ return m_constraints; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows.</p>
     */
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows.</p>
     */
    inline void SetConstraints(const GrantConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows.</p>
     */
    inline void SetConstraints(GrantConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows.</p>
     */
    inline GrantListEntry& WithConstraints(const GrantConstraints& value) { SetConstraints(value); return *this;}

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows.</p>
     */
    inline GrantListEntry& WithConstraints(GrantConstraints&& value) { SetConstraints(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_granteePrincipal;
    bool m_granteePrincipalHasBeenSet = false;

    Aws::String m_retiringPrincipal;
    bool m_retiringPrincipalHasBeenSet = false;

    Aws::String m_issuingAccount;
    bool m_issuingAccountHasBeenSet = false;

    Aws::Vector<GrantOperation> m_operations;
    bool m_operationsHasBeenSet = false;

    GrantConstraints m_constraints;
    bool m_constraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
