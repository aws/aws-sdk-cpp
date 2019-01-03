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

#include <aws/mediaconvert/model/Mp4MoovPlacement.h>
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
      namespace Mp4MoovPlacementMapper
      {

        static const int PROGRESSIVE_DOWNLOAD_HASH = HashingUtils::HashString("PROGRESSIVE_DOWNLOAD");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        Mp4MoovPlacement GetMp4MoovPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRESSIVE_DOWNLOAD_HASH)
          {
            return Mp4MoovPlacement::PROGRESSIVE_DOWNLOAD;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return Mp4MoovPlacement::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mp4MoovPlacement>(hashCode);
          }

          return Mp4MoovPlacement::NOT_SET;
        }

        Aws::String GetNameForMp4MoovPlacement(Mp4MoovPlacement enumValue)
        {
          switch(enumValue)
          {
          case Mp4MoovPlacement::PROGRESSIVE_DOWNLOAD:
            return "PROGRESSIVE_DOWNLOAD";
          case Mp4MoovPlacement::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mp4MoovPlacementMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
