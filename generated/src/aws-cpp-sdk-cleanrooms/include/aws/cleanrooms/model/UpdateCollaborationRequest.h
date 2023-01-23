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
  class UpdateCollaborationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateCollaborationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCollaboration"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline UpdateCollaborationRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline UpdateCollaborationRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline UpdateCollaborationRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline UpdateCollaborationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline UpdateCollaborationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline UpdateCollaborationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the collaboration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the collaboration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the collaboration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the collaboration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the collaboration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the collaboration.</p>
     */
    inline UpdateCollaborationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the collaboration.</p>
     */
    inline UpdateCollaborationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the collaboration.</p>
     */
    inline UpdateCollaborationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
