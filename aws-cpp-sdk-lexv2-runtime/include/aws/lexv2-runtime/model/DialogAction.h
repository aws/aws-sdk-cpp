/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/DialogActionType.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>The next action that Amazon Lex should take.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/DialogAction">AWS
   * API Reference</a></p>
   */
  class AWS_LEXRUNTIMEV2_API DialogAction
  {
  public:
    DialogAction();
    DialogAction(Aws::Utils::Json::JsonView jsonValue);
    DialogAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>Close</code> - Indicates that
     * there will not be a response from the user. For example, the statement "Your
     * order has been placed" does not require a response.</p> </li> <li> <p>
     * <code>ConfirmIntent</code> - The next action is asking the user if the intent is
     * complete and ready to be fulfilled. This is a yes/no question such as "Place the
     * order?"</p> </li> <li> <p> <code>Delegate</code> - The next action is determined
     * by Amazon Lex.</p> </li> <li> <p> <code>ElicitSlot</code> - The next action is
     * to elicit a slot value from the user.</p> </li> </ul>
     */
    inline const DialogActionType& GetType() const{ return m_type; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>Close</code> - Indicates that
     * there will not be a response from the user. For example, the statement "Your
     * order has been placed" does not require a response.</p> </li> <li> <p>
     * <code>ConfirmIntent</code> - The next action is asking the user if the intent is
     * complete and ready to be fulfilled. This is a yes/no question such as "Place the
     * order?"</p> </li> <li> <p> <code>Delegate</code> - The next action is determined
     * by Amazon Lex.</p> </li> <li> <p> <code>ElicitSlot</code> - The next action is
     * to elicit a slot value from the user.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>Close</code> - Indicates that
     * there will not be a response from the user. For example, the statement "Your
     * order has been placed" does not require a response.</p> </li> <li> <p>
     * <code>ConfirmIntent</code> - The next action is asking the user if the intent is
     * complete and ready to be fulfilled. This is a yes/no question such as "Place the
     * order?"</p> </li> <li> <p> <code>Delegate</code> - The next action is determined
     * by Amazon Lex.</p> </li> <li> <p> <code>ElicitSlot</code> - The next action is
     * to elicit a slot value from the user.</p> </li> </ul>
     */
    inline void SetType(const DialogActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>Close</code> - Indicates that
     * there will not be a response from the user. For example, the statement "Your
     * order has been placed" does not require a response.</p> </li> <li> <p>
     * <code>ConfirmIntent</code> - The next action is asking the user if the intent is
     * complete and ready to be fulfilled. This is a yes/no question such as "Place the
     * order?"</p> </li> <li> <p> <code>Delegate</code> - The next action is determined
     * by Amazon Lex.</p> </li> <li> <p> <code>ElicitSlot</code> - The next action is
     * to elicit a slot value from the user.</p> </li> </ul>
     */
    inline void SetType(DialogActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>Close</code> - Indicates that
     * there will not be a response from the user. For example, the statement "Your
     * order has been placed" does not require a response.</p> </li> <li> <p>
     * <code>ConfirmIntent</code> - The next action is asking the user if the intent is
     * complete and ready to be fulfilled. This is a yes/no question such as "Place the
     * order?"</p> </li> <li> <p> <code>Delegate</code> - The next action is determined
     * by Amazon Lex.</p> </li> <li> <p> <code>ElicitSlot</code> - The next action is
     * to elicit a slot value from the user.</p> </li> </ul>
     */
    inline DialogAction& WithType(const DialogActionType& value) { SetType(value); return *this;}

    /**
     * <p>The next action that the bot should take in its interaction with the user.
     * The possible values are:</p> <ul> <li> <p> <code>Close</code> - Indicates that
     * there will not be a response from the user. For example, the statement "Your
     * order has been placed" does not require a response.</p> </li> <li> <p>
     * <code>ConfirmIntent</code> - The next action is asking the user if the intent is
     * complete and ready to be fulfilled. This is a yes/no question such as "Place the
     * order?"</p> </li> <li> <p> <code>Delegate</code> - The next action is determined
     * by Amazon Lex.</p> </li> <li> <p> <code>ElicitSlot</code> - The next action is
     * to elicit a slot value from the user.</p> </li> </ul>
     */
    inline DialogAction& WithType(DialogActionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline const Aws::String& GetSlotToElicit() const{ return m_slotToElicit; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline bool SlotToElicitHasBeenSet() const { return m_slotToElicitHasBeenSet; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetSlotToElicit(const Aws::String& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = value; }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetSlotToElicit(Aws::String&& value) { m_slotToElicitHasBeenSet = true; m_slotToElicit = std::move(value); }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline void SetSlotToElicit(const char* value) { m_slotToElicitHasBeenSet = true; m_slotToElicit.assign(value); }

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(const Aws::String& value) { SetSlotToElicit(value); return *this;}

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(Aws::String&& value) { SetSlotToElicit(std::move(value)); return *this;}

    /**
     * <p>The name of the slot that should be elicited from the user.</p>
     */
    inline DialogAction& WithSlotToElicit(const char* value) { SetSlotToElicit(value); return *this;}

  private:

    DialogActionType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_slotToElicit;
    bool m_slotToElicitHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
