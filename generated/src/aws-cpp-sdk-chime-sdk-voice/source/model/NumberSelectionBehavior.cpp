/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/NumberSelectionBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace NumberSelectionBehaviorMapper
      {

        static const int PreferSticky_HASH = HashingUtils::HashString("PreferSticky");
        static const int AvoidSticky_HASH = HashingUtils::HashString("AvoidSticky");


        NumberSelectionBehavior GetNumberSelectionBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PreferSticky_HASH)
          {
            return NumberSelectionBehavior::PreferSticky;
          }
          else if (hashCode == AvoidSticky_HASH)
          {
            return NumberSelectionBehavior::AvoidSticky;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumberSelectionBehavior>(hashCode);
          }

          return NumberSelectionBehavior::NOT_SET;
        }

        Aws::String GetNameForNumberSelectionBehavior(NumberSelectionBehavior enumValue)
        {
          switch(enumValue)
          {
          case NumberSelectionBehavior::PreferSticky:
            return "PreferSticky";
          case NumberSelectionBehavior::AvoidSticky:
            return "AvoidSticky";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumberSelectionBehaviorMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
