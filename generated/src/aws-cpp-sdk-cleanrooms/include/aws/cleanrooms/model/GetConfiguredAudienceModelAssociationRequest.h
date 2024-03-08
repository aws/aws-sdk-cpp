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
  class GetConfiguredAudienceModelAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetConfiguredAudienceModelAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfiguredAudienceModelAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelAssociationIdentifier() const{ return m_configuredAudienceModelAssociationIdentifier; }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline bool ConfiguredAudienceModelAssociationIdentifierHasBeenSet() const { return m_configuredAudienceModelAssociationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline void SetConfiguredAudienceModelAssociationIdentifier(const Aws::String& value) { m_configuredAudienceModelAssociationIdentifierHasBeenSet = true; m_configuredAudienceModelAssociationIdentifier = value; }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline void SetConfiguredAudienceModelAssociationIdentifier(Aws::String&& value) { m_configuredAudienceModelAssociationIdentifierHasBeenSet = true; m_configuredAudienceModelAssociationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline void SetConfiguredAudienceModelAssociationIdentifier(const char* value) { m_configuredAudienceModelAssociationIdentifierHasBeenSet = true; m_configuredAudienceModelAssociationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline GetConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(const Aws::String& value) { SetConfiguredAudienceModelAssociationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline GetConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(Aws::String&& value) { SetConfiguredAudienceModelAssociationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline GetConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(const char* value) { SetConfiguredAudienceModelAssociationIdentifier(value); return *this;}


    /**
     * <p>A unique identifier for the membership that contains the configured audience
     * model association that you want to retrieve.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier for the membership that contains the configured audience
     * model association that you want to retrieve.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the membership that contains the configured audience
     * model association that you want to retrieve.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier for the membership that contains the configured audience
     * model association that you want to retrieve.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the membership that contains the configured audience
     * model association that you want to retrieve.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the membership that contains the configured audience
     * model association that you want to retrieve.</p>
     */
    inline GetConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the membership that contains the configured audience
     * model association that you want to retrieve.</p>
     */
    inline GetConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the membership that contains the configured audience
     * model association that you want to retrieve.</p>
     */
    inline GetConfiguredAudienceModelAssociationRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}

  private:

    Aws::String m_configuredAudienceModelAssociationIdentifier;
    bool m_configuredAudienceModelAssociationIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
