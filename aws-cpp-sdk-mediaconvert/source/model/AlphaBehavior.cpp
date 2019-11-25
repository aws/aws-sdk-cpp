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

#include <aws/mediaconvert/model/AlphaBehavior.h>
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
      namespace AlphaBehaviorMapper
      {

        static const int DISCARD_HASH = HashingUtils::HashString("DISCARD");
        static const int REMAP_TO_LUMA_HASH = HashingUtils::HashString("REMAP_TO_LUMA");


        AlphaBehavior GetAlphaBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCARD_HASH)
          {
            return AlphaBehavior::DISCARD;
          }
          else if (hashCode == REMAP_TO_LUMA_HASH)
          {
            return AlphaBehavior::REMAP_TO_LUMA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlphaBehavior>(hashCode);
          }

          return AlphaBehavior::NOT_SET;
        }

        Aws::String GetNameForAlphaBehavior(AlphaBehavior enumValue)
        {
          switch(enumValue)
          {
          case AlphaBehavior::DISCARD:
            return "DISCARD";
          case AlphaBehavior::REMAP_TO_LUMA:
            return "REMAP_TO_LUMA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlphaBehaviorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
