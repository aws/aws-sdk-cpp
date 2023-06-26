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
  class GetConfiguredTableAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetConfiguredTableAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfiguredTableAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID for the configured table association to retrieve. Currently
     * accepts the configured table ID.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationIdentifier() const{ return m_configuredTableAssociationIdentifier; }

    /**
     * <p>The unique ID for the configured table association to retrieve. Currently
     * accepts the configured table ID.</p>
     */
    inline bool ConfiguredTableAssociationIdentifierHasBeenSet() const { return m_configuredTableAssociationIdentifierHasBeenSet; }

    /**
     * <p>The unique ID for the configured table association to retrieve. Currently
     * accepts the configured table ID.</p>
     */
    inline void SetConfiguredTableAssociationIdentifier(const Aws::String& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = value; }

    /**
     * <p>The unique ID for the configured table association to retrieve. Currently
     * accepts the configured table ID.</p>
     */
    inline void SetConfiguredTableAssociationIdentifier(Aws::String&& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = std::move(value); }

    /**
     * <p>The unique ID for the configured table association to retrieve. Currently
     * accepts the configured table ID.</p>
     */
    inline void SetConfiguredTableAssociationIdentifier(const char* value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier.assign(value); }

    /**
     * <p>The unique ID for the configured table association to retrieve. Currently
     * accepts the configured table ID.</p>
     */
    inline GetConfiguredTableAssociationRequest& WithConfiguredTableAssociationIdentifier(const Aws::String& value) { SetConfiguredTableAssociationIdentifier(value); return *this;}

    /**
     * <p>The unique ID for the configured table association to retrieve. Currently
     * accepts the configured table ID.</p>
     */
    inline GetConfiguredTableAssociationRequest& WithConfiguredTableAssociationIdentifier(Aws::String&& value) { SetConfiguredTableAssociationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the configured table association to retrieve. Currently
     * accepts the configured table ID.</p>
     */
    inline GetConfiguredTableAssociationRequest& WithConfiguredTableAssociationIdentifier(const char* value) { SetConfiguredTableAssociationIdentifier(value); return *this;}


    /**
     * <p>A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline GetConfiguredTableAssociationRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline GetConfiguredTableAssociationRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the membership that the configured table association
     * belongs to. Currently accepts the membership ID.</p>
     */
    inline GetConfiguredTableAssociationRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}

  private:

    Aws::String m_configuredTableAssociationIdentifier;
    bool m_configuredTableAssociationIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
