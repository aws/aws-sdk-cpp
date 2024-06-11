/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/TargetProtectedQueryStatus.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdateProtectedQueryRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateProtectedQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProtectedQuery"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for a member of a protected query instance.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline UpdateProtectedQueryRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline UpdateProtectedQueryRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline UpdateProtectedQueryRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline const Aws::String& GetProtectedQueryIdentifier() const{ return m_protectedQueryIdentifier; }
    inline bool ProtectedQueryIdentifierHasBeenSet() const { return m_protectedQueryIdentifierHasBeenSet; }
    inline void SetProtectedQueryIdentifier(const Aws::String& value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier = value; }
    inline void SetProtectedQueryIdentifier(Aws::String&& value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier = std::move(value); }
    inline void SetProtectedQueryIdentifier(const char* value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier.assign(value); }
    inline UpdateProtectedQueryRequest& WithProtectedQueryIdentifier(const Aws::String& value) { SetProtectedQueryIdentifier(value); return *this;}
    inline UpdateProtectedQueryRequest& WithProtectedQueryIdentifier(Aws::String&& value) { SetProtectedQueryIdentifier(std::move(value)); return *this;}
    inline UpdateProtectedQueryRequest& WithProtectedQueryIdentifier(const char* value) { SetProtectedQueryIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target status of a query. Used to update the execution status of a
     * currently running query.</p>
     */
    inline const TargetProtectedQueryStatus& GetTargetStatus() const{ return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(const TargetProtectedQueryStatus& value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline void SetTargetStatus(TargetProtectedQueryStatus&& value) { m_targetStatusHasBeenSet = true; m_targetStatus = std::move(value); }
    inline UpdateProtectedQueryRequest& WithTargetStatus(const TargetProtectedQueryStatus& value) { SetTargetStatus(value); return *this;}
    inline UpdateProtectedQueryRequest& WithTargetStatus(TargetProtectedQueryStatus&& value) { SetTargetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_protectedQueryIdentifier;
    bool m_protectedQueryIdentifierHasBeenSet = false;

    TargetProtectedQueryStatus m_targetStatus;
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
