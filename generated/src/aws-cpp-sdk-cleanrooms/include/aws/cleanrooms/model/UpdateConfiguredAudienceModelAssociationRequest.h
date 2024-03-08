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
  class UpdateConfiguredAudienceModelAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredAudienceModelAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguredAudienceModelAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to update.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelAssociationIdentifier() const{ return m_configuredAudienceModelAssociationIdentifier; }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to update.</p>
     */
    inline bool ConfiguredAudienceModelAssociationIdentifierHasBeenSet() const { return m_configuredAudienceModelAssociationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to update.</p>
     */
    inline void SetConfiguredAudienceModelAssociationIdentifier(const Aws::String& value) { m_configuredAudienceModelAssociationIdentifierHasBeenSet = true; m_configuredAudienceModelAssociationIdentifier = value; }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to update.</p>
     */
    inline void SetConfiguredAudienceModelAssociationIdentifier(Aws::String&& value) { m_configuredAudienceModelAssociationIdentifierHasBeenSet = true; m_configuredAudienceModelAssociationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to update.</p>
     */
    inline void SetConfiguredAudienceModelAssociationIdentifier(const char* value) { m_configuredAudienceModelAssociationIdentifierHasBeenSet = true; m_configuredAudienceModelAssociationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to update.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(const Aws::String& value) { SetConfiguredAudienceModelAssociationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to update.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(Aws::String&& value) { SetConfiguredAudienceModelAssociationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to update.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(const char* value) { SetConfiguredAudienceModelAssociationIdentifier(value); return *this;}


    /**
     * <p>A unique identifier of the membership that contains the configured audience
     * model association that you want to update.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier of the membership that contains the configured audience
     * model association that you want to update.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier of the membership that contains the configured audience
     * model association that you want to update.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier of the membership that contains the configured audience
     * model association that you want to update.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier of the membership that contains the configured audience
     * model association that you want to update.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier of the membership that contains the configured audience
     * model association that you want to update.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier of the membership that contains the configured audience
     * model association that you want to update.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the membership that contains the configured audience
     * model association that you want to update.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>A new description for the configured audience model association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the configured audience model association.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for the configured audience model association.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the configured audience model association.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the configured audience model association.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for the configured audience model association.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the configured audience model association.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the configured audience model association.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A new name for the configured audience model association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A new name for the configured audience model association.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A new name for the configured audience model association.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A new name for the configured audience model association.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A new name for the configured audience model association.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A new name for the configured audience model association.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A new name for the configured audience model association.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A new name for the configured audience model association.</p>
     */
    inline UpdateConfiguredAudienceModelAssociationRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_configuredAudienceModelAssociationIdentifier;
    bool m_configuredAudienceModelAssociationIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
