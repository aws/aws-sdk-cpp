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

#include <aws/mediaconvert/model/F4vMoovPlacement.h>
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
      namespace F4vMoovPlacementMapper
      {

        static const int PROGRESSIVE_DOWNLOAD_HASH = HashingUtils::HashString("PROGRESSIVE_DOWNLOAD");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        F4vMoovPlacement GetF4vMoovPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRESSIVE_DOWNLOAD_HASH)
          {
            return F4vMoovPlacement::PROGRESSIVE_DOWNLOAD;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return F4vMoovPlacement::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<F4vMoovPlacement>(hashCode);
          }

          return F4vMoovPlacement::NOT_SET;
        }

        Aws::String GetNameForF4vMoovPlacement(F4vMoovPlacement enumValue)
        {
          switch(enumValue)
          {
          case F4vMoovPlacement::PROGRESSIVE_DOWNLOAD:
            return "PROGRESSIVE_DOWNLOAD";
          case F4vMoovPlacement::NORMAL:
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

      } // namespace F4vMoovPlacementMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
