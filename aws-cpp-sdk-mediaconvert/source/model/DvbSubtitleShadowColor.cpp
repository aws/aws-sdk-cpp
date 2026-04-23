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

#include <aws/mediaconvert/model/DvbSubtitleShadowColor.h>
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
      namespace DvbSubtitleShadowColorMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");


        DvbSubtitleShadowColor GetDvbSubtitleShadowColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DvbSubtitleShadowColor::NONE;
          }
          else if (hashCode == BLACK_HASH)
          {
            return DvbSubtitleShadowColor::BLACK;
          }
          else if (hashCode == WHITE_HASH)
          {
            return DvbSubtitleShadowColor::WHITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleShadowColor>(hashCode);
          }

          return DvbSubtitleShadowColor::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleShadowColor(DvbSubtitleShadowColor enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleShadowColor::NONE:
            return "NONE";
          case DvbSubtitleShadowColor::BLACK:
            return "BLACK";
          case DvbSubtitleShadowColor::WHITE:
            return "WHITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubtitleShadowColorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
