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
  class DeleteConfiguredAudienceModelAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API DeleteConfiguredAudienceModelAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfiguredAudienceModelAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier of the configured audience model association that you
     * want to delete.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelAssociationIdentifier() const { return m_configuredAudienceModelAssociationIdentifier; }
    inline bool ConfiguredAudienceModelAssociationIdentifierHasBeenSet() const { return m_configuredAudienceModelAssociationIdentifierHasBeenSet; }
    template<typename ConfiguredAudienceModelAssociationIdentifierT = Aws::String>
    void SetConfiguredAudienceModelAssociationIdentifier(ConfiguredAudienceModelAssociationIdentifierT&& value) { m_configuredAudienceModelAssociationIdentifierHasBeenSet = true; m_configuredAudienceModelAssociationIdentifier = std::forward<ConfiguredAudienceModelAssociationIdentifierT>(value); }
    template<typename ConfiguredAudienceModelAssociationIdentifierT = Aws::String>
    DeleteConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(ConfiguredAudienceModelAssociationIdentifierT&& value) { SetConfiguredAudienceModelAssociationIdentifier(std::forward<ConfiguredAudienceModelAssociationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier of the membership that contains the audience model
     * association that you want to delete.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    DeleteConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredAudienceModelAssociationIdentifier;
    bool m_configuredAudienceModelAssociationIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
