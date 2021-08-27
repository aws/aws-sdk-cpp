/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SmoothGroupEventStopBehavior.h>
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
      namespace SmoothGroupEventStopBehaviorMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SEND_EOS_HASH = HashingUtils::HashString("SEND_EOS");


        SmoothGroupEventStopBehavior GetSmoothGroupEventStopBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return SmoothGroupEventStopBehavior::NONE;
          }
          else if (hashCode == SEND_EOS_HASH)
          {
            return SmoothGroupEventStopBehavior::SEND_EOS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupEventStopBehavior>(hashCode);
          }

          return SmoothGroupEventStopBehavior::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupEventStopBehavior(SmoothGroupEventStopBehavior enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupEventStopBehavior::NONE:
            return "NONE";
          case SmoothGroupEventStopBehavior::SEND_EOS:
            return "SEND_EOS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmoothGroupEventStopBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
