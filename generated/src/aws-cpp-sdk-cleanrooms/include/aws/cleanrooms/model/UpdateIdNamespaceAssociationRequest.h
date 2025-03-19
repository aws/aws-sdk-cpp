/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/IdMappingConfig.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdateIdNamespaceAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateIdNamespaceAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdNamespaceAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the ID namespace association that you want to
     * update.</p>
     */
    inline const Aws::String& GetIdNamespaceAssociationIdentifier() const { return m_idNamespaceAssociationIdentifier; }
    inline bool IdNamespaceAssociationIdentifierHasBeenSet() const { return m_idNamespaceAssociationIdentifierHasBeenSet; }
    template<typename IdNamespaceAssociationIdentifierT = Aws::String>
    void SetIdNamespaceAssociationIdentifier(IdNamespaceAssociationIdentifierT&& value) { m_idNamespaceAssociationIdentifierHasBeenSet = true; m_idNamespaceAssociationIdentifier = std::forward<IdNamespaceAssociationIdentifierT>(value); }
    template<typename IdNamespaceAssociationIdentifierT = Aws::String>
    UpdateIdNamespaceAssociationRequest& WithIdNamespaceAssociationIdentifier(IdNamespaceAssociationIdentifierT&& value) { SetIdNamespaceAssociationIdentifier(std::forward<IdNamespaceAssociationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the membership that contains the ID namespace
     * association that you want to update.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    UpdateIdNamespaceAssociationRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the ID namespace association.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateIdNamespaceAssociationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the ID namespace association.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateIdNamespaceAssociationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the ID mapping table.</p>
     */
    inline const IdMappingConfig& GetIdMappingConfig() const { return m_idMappingConfig; }
    inline bool IdMappingConfigHasBeenSet() const { return m_idMappingConfigHasBeenSet; }
    template<typename IdMappingConfigT = IdMappingConfig>
    void SetIdMappingConfig(IdMappingConfigT&& value) { m_idMappingConfigHasBeenSet = true; m_idMappingConfig = std::forward<IdMappingConfigT>(value); }
    template<typename IdMappingConfigT = IdMappingConfig>
    UpdateIdNamespaceAssociationRequest& WithIdMappingConfig(IdMappingConfigT&& value) { SetIdMappingConfig(std::forward<IdMappingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_idNamespaceAssociationIdentifier;
    bool m_idNamespaceAssociationIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IdMappingConfig m_idMappingConfig;
    bool m_idMappingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
