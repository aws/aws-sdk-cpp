/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/lex/model/DialogState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeService
  {
    namespace Model
    {
      namespace DialogStateMapper
      {

        static const int ElicitIntent_HASH = HashingUtils::HashString("ElicitIntent");
        static const int ConfirmIntent_HASH = HashingUtils::HashString("ConfirmIntent");
        static const int ElicitSlot_HASH = HashingUtils::HashString("ElicitSlot");
        static const int Fulfilled_HASH = HashingUtils::HashString("Fulfilled");
        static const int ReadyForFulfillment_HASH = HashingUtils::HashString("ReadyForFulfillment");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        DialogState GetDialogStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ElicitIntent_HASH)
          {
            return DialogState::ElicitIntent;
          }
          else if (hashCode == ConfirmIntent_HASH)
          {
            return DialogState::ConfirmIntent;
          }
          else if (hashCode == ElicitSlot_HASH)
          {
            return DialogState::ElicitSlot;
          }
          else if (hashCode == Fulfilled_HASH)
          {
            return DialogState::Fulfilled;
          }
          else if (hashCode == ReadyForFulfillment_HASH)
          {
            return DialogState::ReadyForFulfillment;
          }
          else if (hashCode == Failed_HASH)
          {
            return DialogState::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DialogState>(hashCode);
          }

          return DialogState::NOT_SET;
        }

        Aws::String GetNameForDialogState(DialogState enumValue)
        {
          switch(enumValue)
          {
          case DialogState::ElicitIntent:
            return "ElicitIntent";
          case DialogState::ConfirmIntent:
            return "ConfirmIntent";
          case DialogState::ElicitSlot:
            return "ElicitSlot";
          case DialogState::Fulfilled:
            return "Fulfilled";
          case DialogState::ReadyForFulfillment:
            return "ReadyForFulfillment";
          case DialogState::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DialogStateMapper
    } // namespace Model
  } // namespace LexRuntimeService
} // namespace Aws
