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
  class AssociateMemberToJobRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API AssociateMemberToJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateMemberToJob"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID of the job to associate with the member.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline AssociateMemberToJobRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline AssociateMemberToJobRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline AssociateMemberToJobRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID to associate to the member.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline AssociateMemberToJobRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline AssociateMemberToJobRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline AssociateMemberToJobRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID to associate with the member.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline AssociateMemberToJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline AssociateMemberToJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline AssociateMemberToJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member's principal ID to associate with the job.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline AssociateMemberToJobRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline AssociateMemberToJobRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline AssociateMemberToJobRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member's principal type to associate with the job.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline AssociateMemberToJobRequest& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}
    inline AssociateMemberToJobRequest& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member's identity store ID to associate with the job.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline AssociateMemberToJobRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline AssociateMemberToJobRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline AssociateMemberToJobRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal's membership level for the associated job.</p>
     */
    inline const MembershipLevel& GetMembershipLevel() const{ return m_membershipLevel; }
    inline bool MembershipLevelHasBeenSet() const { return m_membershipLevelHasBeenSet; }
    inline void SetMembershipLevel(const MembershipLevel& value) { m_membershipLevelHasBeenSet = true; m_membershipLevel = value; }
    inline void SetMembershipLevel(MembershipLevel&& value) { m_membershipLevelHasBeenSet = true; m_membershipLevel = std::move(value); }
    inline AssociateMemberToJobRequest& WithMembershipLevel(const MembershipLevel& value) { SetMembershipLevel(value); return *this;}
    inline AssociateMemberToJobRequest& WithMembershipLevel(MembershipLevel&& value) { SetMembershipLevel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

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
