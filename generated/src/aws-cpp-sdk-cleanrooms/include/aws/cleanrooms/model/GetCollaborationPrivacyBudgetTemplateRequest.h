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
  class GetCollaborationPrivacyBudgetTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationPrivacyBudgetTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCollaborationPrivacyBudgetTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for one of your collaborations.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    GetCollaborationPrivacyBudgetTemplateRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for one of your privacy budget templates.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateIdentifier() const { return m_privacyBudgetTemplateIdentifier; }
    inline bool PrivacyBudgetTemplateIdentifierHasBeenSet() const { return m_privacyBudgetTemplateIdentifierHasBeenSet; }
    template<typename PrivacyBudgetTemplateIdentifierT = Aws::String>
    void SetPrivacyBudgetTemplateIdentifier(PrivacyBudgetTemplateIdentifierT&& value) { m_privacyBudgetTemplateIdentifierHasBeenSet = true; m_privacyBudgetTemplateIdentifier = std::forward<PrivacyBudgetTemplateIdentifierT>(value); }
    template<typename PrivacyBudgetTemplateIdentifierT = Aws::String>
    GetCollaborationPrivacyBudgetTemplateRequest& WithPrivacyBudgetTemplateIdentifier(PrivacyBudgetTemplateIdentifierT&& value) { SetPrivacyBudgetTemplateIdentifier(std::forward<PrivacyBudgetTemplateIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateIdentifier;
    bool m_privacyBudgetTemplateIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
