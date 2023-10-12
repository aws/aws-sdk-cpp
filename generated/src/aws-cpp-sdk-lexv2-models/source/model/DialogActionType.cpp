/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DialogActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace DialogActionTypeMapper
      {

        static constexpr uint32_t ElicitIntent_HASH = ConstExprHashingUtils::HashString("ElicitIntent");
        static constexpr uint32_t StartIntent_HASH = ConstExprHashingUtils::HashString("StartIntent");
        static constexpr uint32_t ElicitSlot_HASH = ConstExprHashingUtils::HashString("ElicitSlot");
        static constexpr uint32_t EvaluateConditional_HASH = ConstExprHashingUtils::HashString("EvaluateConditional");
        static constexpr uint32_t InvokeDialogCodeHook_HASH = ConstExprHashingUtils::HashString("InvokeDialogCodeHook");
        static constexpr uint32_t ConfirmIntent_HASH = ConstExprHashingUtils::HashString("ConfirmIntent");
        static constexpr uint32_t FulfillIntent_HASH = ConstExprHashingUtils::HashString("FulfillIntent");
        static constexpr uint32_t CloseIntent_HASH = ConstExprHashingUtils::HashString("CloseIntent");
        static constexpr uint32_t EndConversation_HASH = ConstExprHashingUtils::HashString("EndConversation");


        DialogActionType GetDialogActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ElicitIntent_HASH)
          {
            return DialogActionType::ElicitIntent;
          }
          else if (hashCode == StartIntent_HASH)
          {
            return DialogActionType::StartIntent;
          }
          else if (hashCode == ElicitSlot_HASH)
          {
            return DialogActionType::ElicitSlot;
          }
          else if (hashCode == EvaluateConditional_HASH)
          {
            return DialogActionType::EvaluateConditional;
          }
          else if (hashCode == InvokeDialogCodeHook_HASH)
          {
            return DialogActionType::InvokeDialogCodeHook;
          }
          else if (hashCode == ConfirmIntent_HASH)
          {
            return DialogActionType::ConfirmIntent;
          }
          else if (hashCode == FulfillIntent_HASH)
          {
            return DialogActionType::FulfillIntent;
          }
          else if (hashCode == CloseIntent_HASH)
          {
            return DialogActionType::CloseIntent;
          }
          else if (hashCode == EndConversation_HASH)
          {
            return DialogActionType::EndConversation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DialogActionType>(hashCode);
          }

          return DialogActionType::NOT_SET;
        }

        Aws::String GetNameForDialogActionType(DialogActionType enumValue)
        {
          switch(enumValue)
          {
          case DialogActionType::NOT_SET:
            return {};
          case DialogActionType::ElicitIntent:
            return "ElicitIntent";
          case DialogActionType::StartIntent:
            return "StartIntent";
          case DialogActionType::ElicitSlot:
            return "ElicitSlot";
          case DialogActionType::EvaluateConditional:
            return "EvaluateConditional";
          case DialogActionType::InvokeDialogCodeHook:
            return "InvokeDialogCodeHook";
          case DialogActionType::ConfirmIntent:
            return "ConfirmIntent";
          case DialogActionType::FulfillIntent:
            return "FulfillIntent";
          case DialogActionType::CloseIntent:
            return "CloseIntent";
          case DialogActionType::EndConversation:
            return "EndConversation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DialogActionTypeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
