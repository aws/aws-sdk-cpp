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
   * <p>Defines the action that the bot executes at runtime when the conversation
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


    ///@{
    /**
     * <p>The action that the bot should execute. </p>
     */
    inline const DialogActionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DialogActionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DialogActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DialogAction& WithType(const DialogActionType& value) { SetType(value); return *this;}
    inline DialogAction& WithType(DialogActionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the dialog action is <code>ElicitSlot</code>, defines the slot to elicit
     * from the user.</p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }
    inline bool SlotToElicitHasBeenSet() const { return m_slotToElicitHasBeenSet; }
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = value; }
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::move(value); }
    inline void SetSlotToElicit(const char* value) { m_slotToElicitHasBeenSet = true; m_slotToElicit.assign(value); }
    inline DialogAction& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}
    inline DialogAction& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}
    inline DialogAction& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true the next message for the intent is not used.</p>
     */
    inline bool GetSuppressNextMessage() const{ return m_suppressNextMessage; }
    inline bool SuppressNextMessageHasBeenSet() const { return m_suppressNextMessageHasBeenSet; }
    inline void SetSuppressNextMessage(bool value) { m_suppressNextMessageHasBeenSet = true; m_suppressNextMessage = value; }
    inline DialogAction& WithSuppressNextMessage(bool value) { SetSuppressNextMessage(value); return *this;}
    ///@}
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
