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
    AWS_CHATBOT_API UpdateCustomActionRequest();

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
    inline const Aws::String& GetCustomActionArn() const{ return m_customActionArn; }
    inline bool CustomActionArnHasBeenSet() const { return m_customActionArnHasBeenSet; }
    inline void SetCustomActionArn(const Aws::String& value) { m_customActionArnHasBeenSet = true; m_customActionArn = value; }
    inline void SetCustomActionArn(Aws::String&& value) { m_customActionArnHasBeenSet = true; m_customActionArn = std::move(value); }
    inline void SetCustomActionArn(const char* value) { m_customActionArnHasBeenSet = true; m_customActionArn.assign(value); }
    inline UpdateCustomActionRequest& WithCustomActionArn(const Aws::String& value) { SetCustomActionArn(value); return *this;}
    inline UpdateCustomActionRequest& WithCustomActionArn(Aws::String&& value) { SetCustomActionArn(std::move(value)); return *this;}
    inline UpdateCustomActionRequest& WithCustomActionArn(const char* value) { SetCustomActionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the command to run when invoked as an alias or as an action
     * button.</p>
     */
    inline const CustomActionDefinition& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const CustomActionDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(CustomActionDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline UpdateCustomActionRequest& WithDefinition(const CustomActionDefinition& value) { SetDefinition(value); return *this;}
    inline UpdateCustomActionRequest& WithDefinition(CustomActionDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name used to invoke this action in the chat channel. For example,
     * <code>@aws run my-alias</code>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }
    inline UpdateCustomActionRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline UpdateCustomActionRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline UpdateCustomActionRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines when this custom action button should be attached to a
     * notification.</p>
     */
    inline const Aws::Vector<CustomActionAttachment>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<CustomActionAttachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<CustomActionAttachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline UpdateCustomActionRequest& WithAttachments(const Aws::Vector<CustomActionAttachment>& value) { SetAttachments(value); return *this;}
    inline UpdateCustomActionRequest& WithAttachments(Aws::Vector<CustomActionAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline UpdateCustomActionRequest& AddAttachments(const CustomActionAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline UpdateCustomActionRequest& AddAttachments(CustomActionAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
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
