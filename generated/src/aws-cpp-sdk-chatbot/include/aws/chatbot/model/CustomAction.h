/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chatbot/model/CustomActionDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/CustomActionAttachment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace chatbot
{
namespace Model
{

  /**
   * <p>Represents a parameterized command that can be invoked as an alias or as a
   * notification button in the chat client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/CustomAction">AWS
   * API Reference</a></p>
   */
  class CustomAction
  {
  public:
    AWS_CHATBOT_API CustomAction();
    AWS_CHATBOT_API CustomAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API CustomAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully defined Amazon Resource Name (ARN) of the custom action.</p>
     */
    inline const Aws::String& GetCustomActionArn() const{ return m_customActionArn; }
    inline bool CustomActionArnHasBeenSet() const { return m_customActionArnHasBeenSet; }
    inline void SetCustomActionArn(const Aws::String& value) { m_customActionArnHasBeenSet = true; m_customActionArn = value; }
    inline void SetCustomActionArn(Aws::String&& value) { m_customActionArnHasBeenSet = true; m_customActionArn = std::move(value); }
    inline void SetCustomActionArn(const char* value) { m_customActionArnHasBeenSet = true; m_customActionArn.assign(value); }
    inline CustomAction& WithCustomActionArn(const Aws::String& value) { SetCustomActionArn(value); return *this;}
    inline CustomAction& WithCustomActionArn(Aws::String&& value) { SetCustomActionArn(std::move(value)); return *this;}
    inline CustomAction& WithCustomActionArn(const char* value) { SetCustomActionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the command to run when invoked an alias or as an action
     * button.</p>
     */
    inline const CustomActionDefinition& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const CustomActionDefinition& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(CustomActionDefinition&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline CustomAction& WithDefinition(const CustomActionDefinition& value) { SetDefinition(value); return *this;}
    inline CustomAction& WithDefinition(CustomActionDefinition&& value) { SetDefinition(std::move(value)); return *this;}
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
    inline CustomAction& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline CustomAction& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline CustomAction& WithAliasName(const char* value) { SetAliasName(value); return *this;}
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
    inline CustomAction& WithAttachments(const Aws::Vector<CustomActionAttachment>& value) { SetAttachments(value); return *this;}
    inline CustomAction& WithAttachments(Aws::Vector<CustomActionAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline CustomAction& AddAttachments(const CustomActionAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline CustomAction& AddAttachments(CustomActionAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the custom action that is included in the ARN.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline CustomAction& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline CustomAction& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline CustomAction& WithActionName(const char* value) { SetActionName(value); return *this;}
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

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
