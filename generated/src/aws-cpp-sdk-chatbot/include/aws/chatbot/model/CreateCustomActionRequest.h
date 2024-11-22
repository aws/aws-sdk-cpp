/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/chatbot/model/CustomActionDefinition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/CustomActionAttachment.h>
#include <aws/chatbot/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class CreateCustomActionRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API CreateCustomActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomAction"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The definition of the command to run when invoked as an alias or as an action
     * button.</p>
     */
    inline const CustomActionDefinition& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const CustomActionDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(CustomActionDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline CreateCustomActionRequest& WithDefinition(const CustomActionDefinition& value) { SetDefinition(value); return *this;}
    inline CreateCustomActionRequest& WithDefinition(CustomActionDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name used to invoke this action in a chat channel. For example,
     * <code>@aws run my-alias</code>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }
    inline CreateCustomActionRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline CreateCustomActionRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline CreateCustomActionRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}
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
    inline CreateCustomActionRequest& WithAttachments(const Aws::Vector<CustomActionAttachment>& value) { SetAttachments(value); return *this;}
    inline CreateCustomActionRequest& WithAttachments(Aws::Vector<CustomActionAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline CreateCustomActionRequest& AddAttachments(const CustomActionAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline CreateCustomActionRequest& AddAttachments(CustomActionAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of tags assigned to a resource. A tag is a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCustomActionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCustomActionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCustomActionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateCustomActionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request.</p> <p>If you do not specify a client
     * token, one is automatically generated by the SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateCustomActionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateCustomActionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateCustomActionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom action. This name is included in the Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline CreateCustomActionRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline CreateCustomActionRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline CreateCustomActionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}
  private:

    CustomActionDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::Vector<CustomActionAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
