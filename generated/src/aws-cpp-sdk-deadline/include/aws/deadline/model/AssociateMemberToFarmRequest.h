/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/PrincipalType.h>
#include <aws/deadline/model/MembershipLevel.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class AssociateMemberToFarmRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API AssociateMemberToFarmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateMemberToFarm"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the farm to associate with the member.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline AssociateMemberToFarmRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline AssociateMemberToFarmRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline AssociateMemberToFarmRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member's principal ID to associate with the farm.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline AssociateMemberToFarmRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline AssociateMemberToFarmRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline AssociateMemberToFarmRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal type of the member to associate with the farm.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline AssociateMemberToFarmRequest& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}
    inline AssociateMemberToFarmRequest& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity store ID of the member to associate with the farm.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline AssociateMemberToFarmRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline AssociateMemberToFarmRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline AssociateMemberToFarmRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal's membership level for the associated farm.</p>
     */
    inline const MembershipLevel& GetMembershipLevel() const{ return m_membershipLevel; }
    inline bool MembershipLevelHasBeenSet() const { return m_membershipLevelHasBeenSet; }
    inline void SetMembershipLevel(const MembershipLevel& value) { m_membershipLevelHasBeenSet = true; m_membershipLevel = value; }
    inline void SetMembershipLevel(MembershipLevel&& value) { m_membershipLevelHasBeenSet = true; m_membershipLevel = std::move(value); }
    inline AssociateMemberToFarmRequest& WithMembershipLevel(const MembershipLevel& value) { SetMembershipLevel(value); return *this;}
    inline AssociateMemberToFarmRequest& WithMembershipLevel(MembershipLevel&& value) { SetMembershipLevel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    MembershipLevel m_membershipLevel;
    bool m_membershipLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
