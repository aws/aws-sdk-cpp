/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/PolicyGrantDetail.h>
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
  class AddPolicyGrantRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API AddPolicyGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPolicyGrant"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AddPolicyGrantRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AddPolicyGrantRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AddPolicyGrantRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the policy grant.</p>
     */
    inline const PolicyGrantDetail& GetDetail() const{ return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    inline void SetDetail(const PolicyGrantDetail& value) { m_detailHasBeenSet = true; m_detail = value; }
    inline void SetDetail(PolicyGrantDetail&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }
    inline AddPolicyGrantRequest& WithDetail(const PolicyGrantDetail& value) { SetDetail(value); return *this;}
    inline AddPolicyGrantRequest& WithDetail(PolicyGrantDetail&& value) { SetDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you want to add a policy grant.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline AddPolicyGrantRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline AddPolicyGrantRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline AddPolicyGrantRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity (resource) to which you want to add a policy grant.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }
    inline AddPolicyGrantRequest& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}
    inline AddPolicyGrantRequest& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}
    inline AddPolicyGrantRequest& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of entity (resource) to which the grant is added.</p>
     */
    inline const TargetEntityType& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const TargetEntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(TargetEntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline AddPolicyGrantRequest& WithEntityType(const TargetEntityType& value) { SetEntityType(value); return *this;}
    inline AddPolicyGrantRequest& WithEntityType(TargetEntityType&& value) { SetEntityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy that you want to grant.</p>
     */
    inline const ManagedPolicyType& GetPolicyType() const{ return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(const ManagedPolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline void SetPolicyType(ManagedPolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }
    inline AddPolicyGrantRequest& WithPolicyType(const ManagedPolicyType& value) { SetPolicyType(value); return *this;}
    inline AddPolicyGrantRequest& WithPolicyType(ManagedPolicyType&& value) { SetPolicyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal to whom the permissions are granted.</p>
     */
    inline const PolicyGrantPrincipal& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const PolicyGrantPrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(PolicyGrantPrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline AddPolicyGrantRequest& WithPrincipal(const PolicyGrantPrincipal& value) { SetPrincipal(value); return *this;}
    inline AddPolicyGrantRequest& WithPrincipal(PolicyGrantPrincipal&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    PolicyGrantDetail m_detail;
    bool m_detailHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    TargetEntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;

    ManagedPolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    PolicyGrantPrincipal m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
