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

#include <aws/medialive/model/BurnInShadowColor.h>
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
      namespace BurnInShadowColorMapper
      {

        static const int BLACK_HASH = HashingUtils::HashString("BLACK");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int WHITE_HASH = HashingUtils::HashString("WHITE");


        BurnInShadowColor GetBurnInShadowColorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLACK_HASH)
          {
            return BurnInShadowColor::BLACK;
          }
          else if (hashCode == NONE_HASH)
          {
            return BurnInShadowColor::NONE;
          }
          else if (hashCode == WHITE_HASH)
          {
            return BurnInShadowColor::WHITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInShadowColor>(hashCode);
          }

          return BurnInShadowColor::NOT_SET;
        }

        Aws::String GetNameForBurnInShadowColor(BurnInShadowColor enumValue)
        {
          switch(enumValue)
          {
          case BurnInShadowColor::BLACK:
            return "BLACK";
          case BurnInShadowColor::NONE:
            return "NONE";
          case BurnInShadowColor::WHITE:
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

      } // namespace BurnInShadowColorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
