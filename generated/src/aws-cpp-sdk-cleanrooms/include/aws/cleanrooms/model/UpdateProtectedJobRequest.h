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
    AWS_CLEANROOMS_API UpdateProtectedJobRequest() = default;

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
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    UpdateProtectedJobRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the protected job to update.</p>
     */
    inline const Aws::String& GetProtectedJobIdentifier() const { return m_protectedJobIdentifier; }
    inline bool ProtectedJobIdentifierHasBeenSet() const { return m_protectedJobIdentifierHasBeenSet; }
    template<typename ProtectedJobIdentifierT = Aws::String>
    void SetProtectedJobIdentifier(ProtectedJobIdentifierT&& value) { m_protectedJobIdentifierHasBeenSet = true; m_protectedJobIdentifier = std::forward<ProtectedJobIdentifierT>(value); }
    template<typename ProtectedJobIdentifierT = Aws::String>
    UpdateProtectedJobRequest& WithProtectedJobIdentifier(ProtectedJobIdentifierT&& value) { SetProtectedJobIdentifier(std::forward<ProtectedJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target status of a protected job. Used to update the execution status of
     * a currently running job.</p>
     */
    inline TargetProtectedJobStatus GetTargetStatus() const { return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(TargetProtectedJobStatus value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline UpdateProtectedJobRequest& WithTargetStatus(TargetProtectedJobStatus value) { SetTargetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_protectedJobIdentifier;
    bool m_protectedJobIdentifierHasBeenSet = false;

    TargetProtectedJobStatus m_targetStatus{TargetProtectedJobStatus::NOT_SET};
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
