/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/BGPStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace BGPStatusMapper
      {

        static const int up_HASH = HashingUtils::HashString("up");
        static const int down_HASH = HashingUtils::HashString("down");
        static const int unknown_HASH = HashingUtils::HashString("unknown");


        BGPStatus GetBGPStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == up_HASH)
          {
            return BGPStatus::up;
          }
          else if (hashCode == down_HASH)
          {
            return BGPStatus::down;
          }
          else if (hashCode == unknown_HASH)
          {
            return BGPStatus::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BGPStatus>(hashCode);
          }

          return BGPStatus::NOT_SET;
        }

        Aws::String GetNameForBGPStatus(BGPStatus enumValue)
        {
          switch(enumValue)
          {
          case BGPStatus::up:
            return "up";
          case BGPStatus::down:
            return "down";
          case BGPStatus::unknown:
            return "unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BGPStatusMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
