/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CallingNameStatus.h>
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
      namespace CallingNameStatusMapper
      {

        static const int Unassigned_HASH = HashingUtils::HashString("Unassigned");
        static const int UpdateInProgress_HASH = HashingUtils::HashString("UpdateInProgress");
        static const int UpdateSucceeded_HASH = HashingUtils::HashString("UpdateSucceeded");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");


        CallingNameStatus GetCallingNameStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Unassigned_HASH)
          {
            return CallingNameStatus::Unassigned;
          }
          else if (hashCode == UpdateInProgress_HASH)
          {
            return CallingNameStatus::UpdateInProgress;
          }
          else if (hashCode == UpdateSucceeded_HASH)
          {
            return CallingNameStatus::UpdateSucceeded;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return CallingNameStatus::UpdateFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallingNameStatus>(hashCode);
          }

          return CallingNameStatus::NOT_SET;
        }

        Aws::String GetNameForCallingNameStatus(CallingNameStatus enumValue)
        {
          switch(enumValue)
          {
          case CallingNameStatus::Unassigned:
            return "Unassigned";
          case CallingNameStatus::UpdateInProgress:
            return "UpdateInProgress";
          case CallingNameStatus::UpdateSucceeded:
            return "UpdateSucceeded";
          case CallingNameStatus::UpdateFailed:
            return "UpdateFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallingNameStatusMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
