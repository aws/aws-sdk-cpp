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

#include <aws/mediaconvert/model/DeinterlacerControl.h>
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
      namespace DeinterlacerControlMapper
      {

        static const int FORCE_ALL_FRAMES_HASH = HashingUtils::HashString("FORCE_ALL_FRAMES");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        DeinterlacerControl GetDeinterlacerControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORCE_ALL_FRAMES_HASH)
          {
            return DeinterlacerControl::FORCE_ALL_FRAMES;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return DeinterlacerControl::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeinterlacerControl>(hashCode);
          }

          return DeinterlacerControl::NOT_SET;
        }

        Aws::String GetNameForDeinterlacerControl(DeinterlacerControl enumValue)
        {
          switch(enumValue)
          {
          case DeinterlacerControl::FORCE_ALL_FRAMES:
            return "FORCE_ALL_FRAMES";
          case DeinterlacerControl::NORMAL:
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

      } // namespace DeinterlacerControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
