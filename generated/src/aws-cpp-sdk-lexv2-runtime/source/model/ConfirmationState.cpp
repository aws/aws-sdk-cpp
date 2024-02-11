/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/ConfirmationState.h>
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
      namespace ConfirmationStateMapper
      {

        static const int Confirmed_HASH = HashingUtils::HashString("Confirmed");
        static const int Denied_HASH = HashingUtils::HashString("Denied");
        static const int None_HASH = HashingUtils::HashString("None");


        ConfirmationState GetConfirmationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Confirmed_HASH)
          {
            return ConfirmationState::Confirmed;
          }
          else if (hashCode == Denied_HASH)
          {
            return ConfirmationState::Denied;
          }
          else if (hashCode == None_HASH)
          {
            return ConfirmationState::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfirmationState>(hashCode);
          }

          return ConfirmationState::NOT_SET;
        }

        Aws::String GetNameForConfirmationState(ConfirmationState enumValue)
        {
          switch(enumValue)
          {
          case ConfirmationState::NOT_SET:
            return {};
          case ConfirmationState::Confirmed:
            return "Confirmed";
          case ConfirmationState::Denied:
            return "Denied";
          case ConfirmationState::None:
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

      } // namespace ConfirmationStateMapper
    } // namespace Model
  } // namespace LexRuntimeV2
} // namespace Aws
