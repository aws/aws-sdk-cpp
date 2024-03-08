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
  class GetCollaborationConfiguredAudienceModelAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationConfiguredAudienceModelAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCollaborationConfiguredAudienceModelAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the collaboration that the configured audience model
     * association belongs to. Accepts a collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>A unique identifier for the collaboration that the configured audience model
     * association belongs to. Accepts a collaboration ID.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the collaboration that the configured audience model
     * association belongs to. Accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>A unique identifier for the collaboration that the configured audience model
     * association belongs to. Accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the collaboration that the configured audience model
     * association belongs to. Accepts a collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the collaboration that the configured audience model
     * association belongs to. Accepts a collaboration ID.</p>
     */
    inline GetCollaborationConfiguredAudienceModelAssociationRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the configured audience model
     * association belongs to. Accepts a collaboration ID.</p>
     */
    inline GetCollaborationConfiguredAudienceModelAssociationRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the configured audience model
     * association belongs to. Accepts a collaboration ID.</p>
     */
    inline GetCollaborationConfiguredAudienceModelAssociationRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


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
    inline GetCollaborationConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(const Aws::String& value) { SetConfiguredAudienceModelAssociationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline GetCollaborationConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(Aws::String&& value) { SetConfiguredAudienceModelAssociationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the configured audience model association that you
     * want to retrieve.</p>
     */
    inline GetCollaborationConfiguredAudienceModelAssociationRequest& WithConfiguredAudienceModelAssociationIdentifier(const char* value) { SetConfiguredAudienceModelAssociationIdentifier(value); return *this;}

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_configuredAudienceModelAssociationIdentifier;
    bool m_configuredAudienceModelAssociationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
