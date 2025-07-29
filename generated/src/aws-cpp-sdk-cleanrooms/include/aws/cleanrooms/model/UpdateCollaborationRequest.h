/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalyticsEngine.h>
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
    AWS_CLEANROOMS_API UpdateCollaborationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCollaboration"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    UpdateCollaborationRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCollaborationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the collaboration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCollaborationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analytics engine.</p>  <p>After July 16, 2025, the
     * <code>CLEAN_ROOMS_SQL</code> parameter will no longer be available. </p> 
     */
    inline AnalyticsEngine GetAnalyticsEngine() const { return m_analyticsEngine; }
    inline bool AnalyticsEngineHasBeenSet() const { return m_analyticsEngineHasBeenSet; }
    inline void SetAnalyticsEngine(AnalyticsEngine value) { m_analyticsEngineHasBeenSet = true; m_analyticsEngine = value; }
    inline UpdateCollaborationRequest& WithAnalyticsEngine(AnalyticsEngine value) { SetAnalyticsEngine(value); return *this;}
    ///@}
  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AnalyticsEngine m_analyticsEngine{AnalyticsEngine::NOT_SET};
    bool m_analyticsEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
