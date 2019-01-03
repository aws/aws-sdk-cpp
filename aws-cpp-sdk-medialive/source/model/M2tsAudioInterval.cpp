/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/medialive/model/M2tsAudioInterval.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace M2tsAudioIntervalMapper
      {

        static const int VIDEO_AND_FIXED_INTERVALS_HASH = HashingUtils::HashString("VIDEO_AND_FIXED_INTERVALS");
        static const int VIDEO_INTERVAL_HASH = HashingUtils::HashString("VIDEO_INTERVAL");


        M2tsAudioInterval GetM2tsAudioIntervalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIDEO_AND_FIXED_INTERVALS_HASH)
          {
            return M2tsAudioInterval::VIDEO_AND_FIXED_INTERVALS;
          }
          else if (hashCode == VIDEO_INTERVAL_HASH)
          {
            return M2tsAudioInterval::VIDEO_INTERVAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsAudioInterval>(hashCode);
          }

          return M2tsAudioInterval::NOT_SET;
        }

        Aws::String GetNameForM2tsAudioInterval(M2tsAudioInterval enumValue)
        {
          switch(enumValue)
          {
          case M2tsAudioInterval::VIDEO_AND_FIXED_INTERVALS:
            return "VIDEO_AND_FIXED_INTERVALS";
          case M2tsAudioInterval::VIDEO_INTERVAL:
            return "VIDEO_INTERVAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsAudioIntervalMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
