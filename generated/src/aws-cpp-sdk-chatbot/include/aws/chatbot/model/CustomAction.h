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
    AWS_CHATBOT_API CustomAction() = default;
    AWS_CHATBOT_API CustomAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API CustomAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully defined Amazon Resource Name (ARN) of the custom action.</p>
     */
    inline const Aws::String& GetCustomActionArn() const { return m_customActionArn; }
    inline bool CustomActionArnHasBeenSet() const { return m_customActionArnHasBeenSet; }
    template<typename CustomActionArnT = Aws::String>
    void SetCustomActionArn(CustomActionArnT&& value) { m_customActionArnHasBeenSet = true; m_customActionArn = std::forward<CustomActionArnT>(value); }
    template<typename CustomActionArnT = Aws::String>
    CustomAction& WithCustomActionArn(CustomActionArnT&& value) { SetCustomActionArn(std::forward<CustomActionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the command to run when invoked an alias or as an action
     * button.</p>
     */
    inline const CustomActionDefinition& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = CustomActionDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = CustomActionDefinition>
    CustomAction& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
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
    CustomAction& WithAliasName(AliasNameT&& value) { SetAliasName(std::forward<AliasNameT>(value)); return *this;}
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
    CustomAction& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = CustomActionAttachment>
    CustomAction& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the custom action that is included in the ARN.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    CustomAction& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
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
