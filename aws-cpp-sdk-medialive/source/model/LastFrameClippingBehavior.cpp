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

#include <aws/medialive/model/LastFrameClippingBehavior.h>
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
      namespace LastFrameClippingBehaviorMapper
      {

        static const int EXCLUDE_LAST_FRAME_HASH = HashingUtils::HashString("EXCLUDE_LAST_FRAME");
        static const int INCLUDE_LAST_FRAME_HASH = HashingUtils::HashString("INCLUDE_LAST_FRAME");


        LastFrameClippingBehavior GetLastFrameClippingBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCLUDE_LAST_FRAME_HASH)
          {
            return LastFrameClippingBehavior::EXCLUDE_LAST_FRAME;
          }
          else if (hashCode == INCLUDE_LAST_FRAME_HASH)
          {
            return LastFrameClippingBehavior::INCLUDE_LAST_FRAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastFrameClippingBehavior>(hashCode);
          }

          return LastFrameClippingBehavior::NOT_SET;
        }

        Aws::String GetNameForLastFrameClippingBehavior(LastFrameClippingBehavior enumValue)
        {
          switch(enumValue)
          {
          case LastFrameClippingBehavior::EXCLUDE_LAST_FRAME:
            return "EXCLUDE_LAST_FRAME";
          case LastFrameClippingBehavior::INCLUDE_LAST_FRAME:
            return "INCLUDE_LAST_FRAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastFrameClippingBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
