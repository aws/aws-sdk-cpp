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
    AWS_CLEANROOMS_API UpdateIdNamespaceAssociationRequest();

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
    inline const Aws::String& GetIdNamespaceAssociationIdentifier() const{ return m_idNamespaceAssociationIdentifier; }
    inline bool IdNamespaceAssociationIdentifierHasBeenSet() const { return m_idNamespaceAssociationIdentifierHasBeenSet; }
    inline void SetIdNamespaceAssociationIdentifier(const Aws::String& value) { m_idNamespaceAssociationIdentifierHasBeenSet = true; m_idNamespaceAssociationIdentifier = value; }
    inline void SetIdNamespaceAssociationIdentifier(Aws::String&& value) { m_idNamespaceAssociationIdentifierHasBeenSet = true; m_idNamespaceAssociationIdentifier = std::move(value); }
    inline void SetIdNamespaceAssociationIdentifier(const char* value) { m_idNamespaceAssociationIdentifierHasBeenSet = true; m_idNamespaceAssociationIdentifier.assign(value); }
    inline UpdateIdNamespaceAssociationRequest& WithIdNamespaceAssociationIdentifier(const Aws::String& value) { SetIdNamespaceAssociationIdentifier(value); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithIdNamespaceAssociationIdentifier(Aws::String&& value) { SetIdNamespaceAssociationIdentifier(std::move(value)); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithIdNamespaceAssociationIdentifier(const char* value) { SetIdNamespaceAssociationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the membership that contains the ID namespace
     * association that you want to update.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline UpdateIdNamespaceAssociationRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the ID namespace association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateIdNamespaceAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the ID namespace association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateIdNamespaceAssociationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the ID mapping table.</p>
     */
    inline const IdMappingConfig& GetIdMappingConfig() const{ return m_idMappingConfig; }
    inline bool IdMappingConfigHasBeenSet() const { return m_idMappingConfigHasBeenSet; }
    inline void SetIdMappingConfig(const IdMappingConfig& value) { m_idMappingConfigHasBeenSet = true; m_idMappingConfig = value; }
    inline void SetIdMappingConfig(IdMappingConfig&& value) { m_idMappingConfigHasBeenSet = true; m_idMappingConfig = std::move(value); }
    inline UpdateIdNamespaceAssociationRequest& WithIdMappingConfig(const IdMappingConfig& value) { SetIdMappingConfig(value); return *this;}
    inline UpdateIdNamespaceAssociationRequest& WithIdMappingConfig(IdMappingConfig&& value) { SetIdMappingConfig(std::move(value)); return *this;}
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
