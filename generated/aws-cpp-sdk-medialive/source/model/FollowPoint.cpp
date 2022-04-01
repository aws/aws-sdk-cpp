/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FollowPoint.h>
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
      namespace FollowPointMapper
      {

        static const int END_HASH = HashingUtils::HashString("END");
        static const int START_HASH = HashingUtils::HashString("START");


        FollowPoint GetFollowPointForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == END_HASH)
          {
            return FollowPoint::END;
          }
          else if (hashCode == START_HASH)
          {
            return FollowPoint::START;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FollowPoint>(hashCode);
          }

          return FollowPoint::NOT_SET;
        }

        Aws::String GetNameForFollowPoint(FollowPoint enumValue)
        {
          switch(enumValue)
          {
          case FollowPoint::END:
            return "END";
          case FollowPoint::START:
            return "START";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FollowPointMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
