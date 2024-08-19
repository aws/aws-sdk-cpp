/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/PrincipalType.h>
#include <aws/deadline/model/MembershipLevel.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details for a job member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobMember">AWS
   * API Reference</a></p>
   */
  class JobMember
  {
  public:
    AWS_DEADLINE_API JobMember();
    AWS_DEADLINE_API JobMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The farm ID.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline JobMember& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline JobMember& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline JobMember& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline JobMember& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline JobMember& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline JobMember& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobMember& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobMember& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobMember& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal ID of the job member.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline JobMember& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline JobMember& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline JobMember& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal type of the job member.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline JobMember& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}
    inline JobMember& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity store ID.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline JobMember& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline JobMember& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline JobMember& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job member's membership level.</p>
     */
    inline const MembershipLevel& GetMembershipLevel() const{ return m_membershipLevel; }
    inline bool MembershipLevelHasBeenSet() const { return m_membershipLevelHasBeenSet; }
    inline void SetMembershipLevel(const MembershipLevel& value) { m_membershipLevelHasBeenSet = true; m_membershipLevel = value; }
    inline void SetMembershipLevel(MembershipLevel&& value) { m_membershipLevelHasBeenSet = true; m_membershipLevel = std::move(value); }
    inline JobMember& WithMembershipLevel(const MembershipLevel& value) { SetMembershipLevel(value); return *this;}
    inline JobMember& WithMembershipLevel(MembershipLevel&& value) { SetMembershipLevel(std::move(value)); return *this;}
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
