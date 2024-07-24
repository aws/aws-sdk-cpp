/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class DeleteIdMappingTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API DeleteIdMappingTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIdMappingTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the ID mapping table that you want to delete.</p>
     */
    inline const Aws::String& GetIdMappingTableIdentifier() const{ return m_idMappingTableIdentifier; }
    inline bool IdMappingTableIdentifierHasBeenSet() const { return m_idMappingTableIdentifierHasBeenSet; }
    inline void SetIdMappingTableIdentifier(const Aws::String& value) { m_idMappingTableIdentifierHasBeenSet = true; m_idMappingTableIdentifier = value; }
    inline void SetIdMappingTableIdentifier(Aws::String&& value) { m_idMappingTableIdentifierHasBeenSet = true; m_idMappingTableIdentifier = std::move(value); }
    inline void SetIdMappingTableIdentifier(const char* value) { m_idMappingTableIdentifierHasBeenSet = true; m_idMappingTableIdentifier.assign(value); }
    inline DeleteIdMappingTableRequest& WithIdMappingTableIdentifier(const Aws::String& value) { SetIdMappingTableIdentifier(value); return *this;}
    inline DeleteIdMappingTableRequest& WithIdMappingTableIdentifier(Aws::String&& value) { SetIdMappingTableIdentifier(std::move(value)); return *this;}
    inline DeleteIdMappingTableRequest& WithIdMappingTableIdentifier(const char* value) { SetIdMappingTableIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the membership that contains the ID mapping table
     * that you want to delete.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline DeleteIdMappingTableRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline DeleteIdMappingTableRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline DeleteIdMappingTableRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_idMappingTableIdentifier;
    bool m_idMappingTableIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
