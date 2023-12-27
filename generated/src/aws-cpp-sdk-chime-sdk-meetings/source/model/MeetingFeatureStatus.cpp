/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/MeetingFeatureStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMeetings
  {
    namespace Model
    {
      namespace MeetingFeatureStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");


        MeetingFeatureStatus GetMeetingFeatureStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return MeetingFeatureStatus::AVAILABLE;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return MeetingFeatureStatus::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MeetingFeatureStatus>(hashCode);
          }

          return MeetingFeatureStatus::NOT_SET;
        }

        Aws::String GetNameForMeetingFeatureStatus(MeetingFeatureStatus enumValue)
        {
          switch(enumValue)
          {
          case MeetingFeatureStatus::NOT_SET:
            return {};
          case MeetingFeatureStatus::AVAILABLE:
            return "AVAILABLE";
          case MeetingFeatureStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MeetingFeatureStatusMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
