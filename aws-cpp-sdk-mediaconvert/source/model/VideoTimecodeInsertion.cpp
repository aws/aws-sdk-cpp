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

#include <aws/mediaconvert/model/VideoTimecodeInsertion.h>
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
      namespace VideoTimecodeInsertionMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int PIC_TIMING_SEI_HASH = HashingUtils::HashString("PIC_TIMING_SEI");


        VideoTimecodeInsertion GetVideoTimecodeInsertionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return VideoTimecodeInsertion::DISABLED;
          }
          else if (hashCode == PIC_TIMING_SEI_HASH)
          {
            return VideoTimecodeInsertion::PIC_TIMING_SEI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoTimecodeInsertion>(hashCode);
          }

          return VideoTimecodeInsertion::NOT_SET;
        }

        Aws::String GetNameForVideoTimecodeInsertion(VideoTimecodeInsertion enumValue)
        {
          switch(enumValue)
          {
          case VideoTimecodeInsertion::DISABLED:
            return "DISABLED";
          case VideoTimecodeInsertion::PIC_TIMING_SEI:
            return "PIC_TIMING_SEI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace VideoTimecodeInsertionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
