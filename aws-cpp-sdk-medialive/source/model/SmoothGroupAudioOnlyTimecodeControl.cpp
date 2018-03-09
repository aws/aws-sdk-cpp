﻿/*
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

#include <aws/medialive/model/SmoothGroupAudioOnlyTimecodeControl.h>
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
      namespace SmoothGroupAudioOnlyTimecodeControlMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int USE_CONFIGURED_CLOCK_HASH = HashingUtils::HashString("USE_CONFIGURED_CLOCK");


        SmoothGroupAudioOnlyTimecodeControl GetSmoothGroupAudioOnlyTimecodeControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return SmoothGroupAudioOnlyTimecodeControl::PASSTHROUGH;
          }
          else if (hashCode == USE_CONFIGURED_CLOCK_HASH)
          {
            return SmoothGroupAudioOnlyTimecodeControl::USE_CONFIGURED_CLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupAudioOnlyTimecodeControl>(hashCode);
          }

          return SmoothGroupAudioOnlyTimecodeControl::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupAudioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupAudioOnlyTimecodeControl::PASSTHROUGH:
            return "PASSTHROUGH";
          case SmoothGroupAudioOnlyTimecodeControl::USE_CONFIGURED_CLOCK:
            return "USE_CONFIGURED_CLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SmoothGroupAudioOnlyTimecodeControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
