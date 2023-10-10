/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BgpStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace BgpStatusMapper
      {

        static const int up_HASH = HashingUtils::HashString("up");
        static const int down_HASH = HashingUtils::HashString("down");


        BgpStatus GetBgpStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == up_HASH)
          {
            return BgpStatus::up;
          }
          else if (hashCode == down_HASH)
          {
            return BgpStatus::down;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BgpStatus>(hashCode);
          }

          return BgpStatus::NOT_SET;
        }

        Aws::String GetNameForBgpStatus(BgpStatus enumValue)
        {
          switch(enumValue)
          {
          case BgpStatus::NOT_SET:
            return {};
          case BgpStatus::up:
            return "up";
          case BgpStatus::down:
            return "down";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BgpStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
