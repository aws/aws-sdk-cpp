/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/DialogActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p> Defines the action that the bot executes at runtime when the conversation
   * reaches this step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DialogAction">AWS
   * API Reference</a></p>
   */
  class DialogAction
  {
  public:
    AWS_LEXMODELSV2_API DialogAction();
    AWS_LEXMODELSV2_API DialogAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DialogAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that the bot should execute. </p>
     */
    inline const DialogActionType& GetType() const{ return m_type; }

    /**
     * <p>The action that the bot should execute. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The action that the bot should execute. </p>
     */
    inline void SetType(const DialogActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The action that the bot should execute. </p>
     */
    inline void SetType(DialogActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The action that the bot should execute. </p>
     */
    inline DialogAction& WithType(const DialogActionType& value) { SetType(value); return *this;}

    /**
     * <p>The action that the bot should execute. </p>
     */
    inline DialogAction& WithType(DialogActionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }

    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline bool SlotToElicitHasBeenSet() const { return m_slotToElicitHasBeenSet; }

    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = value; }

    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::move(value); }

    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline void SetSlotToElicit(const char* value) { m_slotToElicitHasBeenSet = true; m_slotToElicit.assign(value); }

    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}

    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}


    /**
     * <p>When true the next message for the intent is not used.</p>
     */
    inline bool GetSuppressNextMessage() const{ return m_suppressNextMessage; }

    /**
     * <p>When true the next message for the intent is not used.</p>
     */
    inline bool SuppressNextMessageHasBeenSet() const { return m_suppressNextMessageHasBeenSet; }

    /**
     * <p>When true the next message for the intent is not used.</p>
     */
    inline void SetSuppressNextMessage(bool value) { m_suppressNextMessageHasBeenSet = true; m_suppressNextMessage = value; }

    /**
     * <p>When true the next message for the intent is not used.</p>
     */
    inline DialogAction& WithSuppressNextMessage(bool value) { SetSuppressNextMessage(value); return *this;}

  private:

    DialogActionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet = false;

    bool m_suppressNextMessage;
    bool m_suppressNextMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
