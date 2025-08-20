/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/TargetEntityType.h>
#include <aws/datazone/model/ManagedPolicyType.h>
#include <aws/datazone/model/PolicyGrantPrincipal.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class RemovePolicyGrantRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API RemovePolicyGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemovePolicyGrant"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    RemovePolicyGrantRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you want to remove a policy grant.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    RemovePolicyGrantRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity from which you want to remove a policy grant.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    template<typename EntityIdentifierT = Aws::String>
    void SetEntityIdentifier(EntityIdentifierT&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::forward<EntityIdentifierT>(value); }
    template<typename EntityIdentifierT = Aws::String>
    RemovePolicyGrantRequest& WithEntityIdentifier(EntityIdentifierT&& value) { SetEntityIdentifier(std::forward<EntityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the entity from which you want to remove a policy grant.</p>
     */
    inline TargetEntityType GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(TargetEntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline RemovePolicyGrantRequest& WithEntityType(TargetEntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the policy grant that is to be removed from a specified entity.</p>
     */
    inline const Aws::String& GetGrantIdentifier() const { return m_grantIdentifier; }
    inline bool GrantIdentifierHasBeenSet() const { return m_grantIdentifierHasBeenSet; }
    template<typename GrantIdentifierT = Aws::String>
    void SetGrantIdentifier(GrantIdentifierT&& value) { m_grantIdentifierHasBeenSet = true; m_grantIdentifier = std::forward<GrantIdentifierT>(value); }
    template<typename GrantIdentifierT = Aws::String>
    RemovePolicyGrantRequest& WithGrantIdentifier(GrantIdentifierT&& value) { SetGrantIdentifier(std::forward<GrantIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the policy that you want to remove.</p>
     */
    inline ManagedPolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(ManagedPolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline RemovePolicyGrantRequest& WithPolicyType(ManagedPolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal from which you want to remove a policy grant.</p>
     */
    inline const PolicyGrantPrincipal& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = PolicyGrantPrincipal>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = PolicyGrantPrincipal>
    RemovePolicyGrantRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    TargetEntityType m_entityType{TargetEntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_grantIdentifier;
    bool m_grantIdentifierHasBeenSet = false;

    ManagedPolicyType m_policyType{ManagedPolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    PolicyGrantPrincipal m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
