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
  class GetIdMappingTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetIdMappingTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIdMappingTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the ID mapping table identifier that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetIdMappingTableIdentifier() const { return m_idMappingTableIdentifier; }
    inline bool IdMappingTableIdentifierHasBeenSet() const { return m_idMappingTableIdentifierHasBeenSet; }
    template<typename IdMappingTableIdentifierT = Aws::String>
    void SetIdMappingTableIdentifier(IdMappingTableIdentifierT&& value) { m_idMappingTableIdentifierHasBeenSet = true; m_idMappingTableIdentifier = std::forward<IdMappingTableIdentifierT>(value); }
    template<typename IdMappingTableIdentifierT = Aws::String>
    GetIdMappingTableRequest& WithIdMappingTableIdentifier(IdMappingTableIdentifierT&& value) { SetIdMappingTableIdentifier(std::forward<IdMappingTableIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the membership that contains the ID mapping table
     * that you want to retrieve.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    GetIdMappingTableRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
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
