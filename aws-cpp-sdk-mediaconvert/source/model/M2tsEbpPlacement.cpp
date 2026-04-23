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

#include <aws/mediaconvert/model/M2tsEbpPlacement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace M2tsEbpPlacementMapper
      {

        static const int VIDEO_AND_AUDIO_PIDS_HASH = HashingUtils::HashString("VIDEO_AND_AUDIO_PIDS");
        static const int VIDEO_PID_HASH = HashingUtils::HashString("VIDEO_PID");


        M2tsEbpPlacement GetM2tsEbpPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VIDEO_AND_AUDIO_PIDS_HASH)
          {
            return M2tsEbpPlacement::VIDEO_AND_AUDIO_PIDS;
          }
          else if (hashCode == VIDEO_PID_HASH)
          {
            return M2tsEbpPlacement::VIDEO_PID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsEbpPlacement>(hashCode);
          }

          return M2tsEbpPlacement::NOT_SET;
        }

        Aws::String GetNameForM2tsEbpPlacement(M2tsEbpPlacement enumValue)
        {
          switch(enumValue)
          {
          case M2tsEbpPlacement::VIDEO_AND_AUDIO_PIDS:
            return "VIDEO_AND_AUDIO_PIDS";
          case M2tsEbpPlacement::VIDEO_PID:
            return "VIDEO_PID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsEbpPlacementMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
