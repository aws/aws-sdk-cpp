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

#include <aws/mediaconvert/model/MotionImageInsertionMode.h>
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
      namespace MotionImageInsertionModeMapper
      {

        static const int MOV_HASH = HashingUtils::HashString("MOV");
        static const int PNG_HASH = HashingUtils::HashString("PNG");


        MotionImageInsertionMode GetMotionImageInsertionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MOV_HASH)
          {
            return MotionImageInsertionMode::MOV;
          }
          else if (hashCode == PNG_HASH)
          {
            return MotionImageInsertionMode::PNG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MotionImageInsertionMode>(hashCode);
          }

          return MotionImageInsertionMode::NOT_SET;
        }

        Aws::String GetNameForMotionImageInsertionMode(MotionImageInsertionMode enumValue)
        {
          switch(enumValue)
          {
          case MotionImageInsertionMode::MOV:
            return "MOV";
          case MotionImageInsertionMode::PNG:
            return "PNG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MotionImageInsertionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
