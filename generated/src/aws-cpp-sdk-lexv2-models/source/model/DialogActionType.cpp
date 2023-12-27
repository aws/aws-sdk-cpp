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

        static const int ElicitIntent_HASH = HashingUtils::HashString("ElicitIntent");
        static const int StartIntent_HASH = HashingUtils::HashString("StartIntent");
        static const int ElicitSlot_HASH = HashingUtils::HashString("ElicitSlot");
        static const int EvaluateConditional_HASH = HashingUtils::HashString("EvaluateConditional");
        static const int InvokeDialogCodeHook_HASH = HashingUtils::HashString("InvokeDialogCodeHook");
        static const int ConfirmIntent_HASH = HashingUtils::HashString("ConfirmIntent");
        static const int FulfillIntent_HASH = HashingUtils::HashString("FulfillIntent");
        static const int CloseIntent_HASH = HashingUtils::HashString("CloseIntent");
        static const int EndConversation_HASH = HashingUtils::HashString("EndConversation");


        DialogActionType GetDialogActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
