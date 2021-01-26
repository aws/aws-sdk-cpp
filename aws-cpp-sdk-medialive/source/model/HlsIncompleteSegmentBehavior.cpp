/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsIncompleteSegmentBehavior.h>
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
      namespace HlsIncompleteSegmentBehaviorMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int SUPPRESS_HASH = HashingUtils::HashString("SUPPRESS");


        HlsIncompleteSegmentBehavior GetHlsIncompleteSegmentBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return HlsIncompleteSegmentBehavior::AUTO;
          }
          else if (hashCode == SUPPRESS_HASH)
          {
            return HlsIncompleteSegmentBehavior::SUPPRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsIncompleteSegmentBehavior>(hashCode);
          }

          return HlsIncompleteSegmentBehavior::NOT_SET;
        }

        Aws::String GetNameForHlsIncompleteSegmentBehavior(HlsIncompleteSegmentBehavior enumValue)
        {
          switch(enumValue)
          {
          case HlsIncompleteSegmentBehavior::AUTO:
            return "AUTO";
          case HlsIncompleteSegmentBehavior::SUPPRESS:
            return "SUPPRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsIncompleteSegmentBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
