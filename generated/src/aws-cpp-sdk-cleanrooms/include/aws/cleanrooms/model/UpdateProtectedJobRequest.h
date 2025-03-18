/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/TargetProtectedJobStatus.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdateProtectedJobRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateProtectedJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProtectedJob"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for a member of a protected job instance.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline UpdateProtectedJobRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline UpdateProtectedJobRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline UpdateProtectedJobRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the protected job to update.</p>
     */
    inline const Aws::String& GetProtectedJobIdentifier() const{ return m_protectedJobIdentifier; }
    inline bool ProtectedJobIdentifierHasBeenSet() const { return m_protectedJobIdentifierHasBeenSet; }
    inline void SetProtectedJobIdentifier(const Aws::String& value) { m_protectedJobIdentifierHasBeenSet = true; m_protectedJobIdentifier = value; }
    inline void SetProtectedJobIdentifier(Aws::String&& value) { m_protectedJobIdentifierHasBeenSet = true; m_protectedJobIdentifier = std::move(value); }
    inline void SetProtectedJobIdentifier(const char* value) { m_protectedJobIdentifierHasBeenSet = true; m_protectedJobIdentifier.assign(value); }
    inline UpdateProtectedJobRequest& WithProtectedJobIdentifier(const Aws::String& value) { SetProtectedJobIdentifier(value); return *this;}
    inline UpdateProtectedJobRequest& WithProtectedJobIdentifier(Aws::String&& value) { SetProtectedJobIdentifier(std::move(value)); return *this;}
    inline UpdateProtectedJobRequest& WithProtectedJobIdentifier(const char* value) { SetProtectedJobIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target status of a protected job. Used to update the execution status of
     * a currently running job.</p>
     */
    inline const TargetProtectedJobStatus& GetTargetStatus() const{ return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(const TargetProtectedJobStatus& value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline void SetTargetStatus(TargetProtectedJobStatus&& value) { m_targetStatusHasBeenSet = true; m_targetStatus = std::move(value); }
    inline UpdateProtectedJobRequest& WithTargetStatus(const TargetProtectedJobStatus& value) { SetTargetStatus(value); return *this;}
    inline UpdateProtectedJobRequest& WithTargetStatus(TargetProtectedJobStatus&& value) { SetTargetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_protectedJobIdentifier;
    bool m_protectedJobIdentifierHasBeenSet = false;

    TargetProtectedJobStatus m_targetStatus;
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
