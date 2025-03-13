/**
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
    AWS_KMS_API GrantListEntry() = default;
    AWS_KMS_API GrantListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API GrantListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the KMS key to which the grant applies.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GrantListEntry& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the grant.</p>
     */
    inline const Aws::String& GetGrantId() const { return m_grantId; }
    inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }
    template<typename GrantIdT = Aws::String>
    void SetGrantId(GrantIdT&& value) { m_grantIdHasBeenSet = true; m_grantId = std::forward<GrantIdT>(value); }
    template<typename GrantIdT = Aws::String>
    GrantListEntry& WithGrantId(GrantIdT&& value) { SetGrantId(std::forward<GrantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name that identifies the grant. If a name was provided in the
     * <a>CreateGrant</a> request, that name is returned. Otherwise this value is
     * null.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GrantListEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the grant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GrantListEntry& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity that gets the permissions in the grant.</p> <p>The
     * <code>GranteePrincipal</code> field in the <code>ListGrants</code> response
     * usually contains the user or role designated as the grantee principal in the
     * grant. However, when the grantee principal in the grant is an Amazon Web
     * Services service, the <code>GranteePrincipal</code> field contains the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
     * principal</a>, which might represent several different grantee principals.</p>
     */
    inline const Aws::String& GetGranteePrincipal() const { return m_granteePrincipal; }
    inline bool GranteePrincipalHasBeenSet() const { return m_granteePrincipalHasBeenSet; }
    template<typename GranteePrincipalT = Aws::String>
    void SetGranteePrincipal(GranteePrincipalT&& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = std::forward<GranteePrincipalT>(value); }
    template<typename GranteePrincipalT = Aws::String>
    GrantListEntry& WithGranteePrincipal(GranteePrincipalT&& value) { SetGranteePrincipal(std::forward<GranteePrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal that can retire the grant.</p>
     */
    inline const Aws::String& GetRetiringPrincipal() const { return m_retiringPrincipal; }
    inline bool RetiringPrincipalHasBeenSet() const { return m_retiringPrincipalHasBeenSet; }
    template<typename RetiringPrincipalT = Aws::String>
    void SetRetiringPrincipal(RetiringPrincipalT&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = std::forward<RetiringPrincipalT>(value); }
    template<typename RetiringPrincipalT = Aws::String>
    GrantListEntry& WithRetiringPrincipal(RetiringPrincipalT&& value) { SetRetiringPrincipal(std::forward<RetiringPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account under which the grant was issued.</p>
     */
    inline const Aws::String& GetIssuingAccount() const { return m_issuingAccount; }
    inline bool IssuingAccountHasBeenSet() const { return m_issuingAccountHasBeenSet; }
    template<typename IssuingAccountT = Aws::String>
    void SetIssuingAccount(IssuingAccountT&& value) { m_issuingAccountHasBeenSet = true; m_issuingAccount = std::forward<IssuingAccountT>(value); }
    template<typename IssuingAccountT = Aws::String>
    GrantListEntry& WithIssuingAccount(IssuingAccountT&& value) { SetIssuingAccount(std::forward<IssuingAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of operations permitted by the grant.</p>
     */
    inline const Aws::Vector<GrantOperation>& GetOperations() const { return m_operations; }
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
    template<typename OperationsT = Aws::Vector<GrantOperation>>
    void SetOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations = std::forward<OperationsT>(value); }
    template<typename OperationsT = Aws::Vector<GrantOperation>>
    GrantListEntry& WithOperations(OperationsT&& value) { SetOperations(std::forward<OperationsT>(value)); return *this;}
    inline GrantListEntry& AddOperations(GrantOperation value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows.</p>
     */
    inline const GrantConstraints& GetConstraints() const { return m_constraints; }
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
    template<typename ConstraintsT = GrantConstraints>
    void SetConstraints(ConstraintsT&& value) { m_constraintsHasBeenSet = true; m_constraints = std::forward<ConstraintsT>(value); }
    template<typename ConstraintsT = GrantConstraints>
    GrantListEntry& WithConstraints(ConstraintsT&& value) { SetConstraints(std::forward<ConstraintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
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
