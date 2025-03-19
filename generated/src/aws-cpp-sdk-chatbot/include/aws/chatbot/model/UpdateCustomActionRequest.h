/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chatbot/model/CustomActionDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/CustomActionAttachment.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class UpdateCustomActionRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API UpdateCustomActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomAction"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The fully defined Amazon Resource Name (ARN) of the custom action.</p>
     */
    inline const Aws::String& GetCustomActionArn() const { return m_customActionArn; }
    inline bool CustomActionArnHasBeenSet() const { return m_customActionArnHasBeenSet; }
    template<typename CustomActionArnT = Aws::String>
    void SetCustomActionArn(CustomActionArnT&& value) { m_customActionArnHasBeenSet = true; m_customActionArn = std::forward<CustomActionArnT>(value); }
    template<typename CustomActionArnT = Aws::String>
    UpdateCustomActionRequest& WithCustomActionArn(CustomActionArnT&& value) { SetCustomActionArn(std::forward<CustomActionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the command to run when invoked as an alias or as an action
     * button.</p>
     */
    inline const CustomActionDefinition& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = CustomActionDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = CustomActionDefinition>
    UpdateCustomActionRequest& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name used to invoke this action in the chat channel. For example,
     * <code>@aws run my-alias</code>.</p>
     */
    inline const Aws::String& GetAliasName() const { return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    template<typename AliasNameT = Aws::String>
    void SetAliasName(AliasNameT&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::forward<AliasNameT>(value); }
    template<typename AliasNameT = Aws::String>
    UpdateCustomActionRequest& WithAliasName(AliasNameT&& value) { SetAliasName(std::forward<AliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines when this custom action button should be attached to a
     * notification.</p>
     */
    inline const Aws::Vector<CustomActionAttachment>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<CustomActionAttachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<CustomActionAttachment>>
    UpdateCustomActionRequest& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = CustomActionAttachment>
    UpdateCustomActionRequest& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_customActionArn;
    bool m_customActionArnHasBeenSet = false;

    CustomActionDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::Vector<CustomActionAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
