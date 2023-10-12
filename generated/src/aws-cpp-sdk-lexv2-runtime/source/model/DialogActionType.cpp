/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/DialogActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeV2
  {
    namespace Model
    {
      namespace DialogActionTypeMapper
      {

        static constexpr uint32_t Close_HASH = ConstExprHashingUtils::HashString("Close");
        static constexpr uint32_t ConfirmIntent_HASH = ConstExprHashingUtils::HashString("ConfirmIntent");
        static constexpr uint32_t Delegate_HASH = ConstExprHashingUtils::HashString("Delegate");
        static constexpr uint32_t ElicitIntent_HASH = ConstExprHashingUtils::HashString("ElicitIntent");
        static constexpr uint32_t ElicitSlot_HASH = ConstExprHashingUtils::HashString("ElicitSlot");
        static constexpr uint32_t None_HASH = ConstExprHashingUtils::HashString("None");


        DialogActionType GetDialogActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Close_HASH)
          {
            return DialogActionType::Close;
          }
          else if (hashCode == ConfirmIntent_HASH)
          {
            return DialogActionType::ConfirmIntent;
          }
          else if (hashCode == Delegate_HASH)
          {
            return DialogActionType::Delegate;
          }
          else if (hashCode == ElicitIntent_HASH)
          {
            return DialogActionType::ElicitIntent;
          }
          else if (hashCode == ElicitSlot_HASH)
          {
            return DialogActionType::ElicitSlot;
          }
          else if (hashCode == None_HASH)
          {
            return DialogActionType::None;
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
          case DialogActionType::Close:
            return "Close";
          case DialogActionType::ConfirmIntent:
            return "ConfirmIntent";
          case DialogActionType::Delegate:
            return "Delegate";
          case DialogActionType::ElicitIntent:
            return "ElicitIntent";
          case DialogActionType::ElicitSlot:
            return "ElicitSlot";
          case DialogActionType::None:
            return "None";
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
  } // namespace LexRuntimeV2
} // namespace Aws
