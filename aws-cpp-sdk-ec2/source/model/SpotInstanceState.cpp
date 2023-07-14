/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotInstanceState.h>
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
      namespace SpotInstanceStateMapper
      {

        static const int open_HASH = HashingUtils::HashString("open");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int closed_HASH = HashingUtils::HashString("closed");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        SpotInstanceState GetSpotInstanceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_HASH)
          {
            return SpotInstanceState::open;
          }
          else if (hashCode == active_HASH)
          {
            return SpotInstanceState::active;
          }
          else if (hashCode == closed_HASH)
          {
            return SpotInstanceState::closed;
          }
          else if (hashCode == cancelled_HASH)
          {
            return SpotInstanceState::cancelled;
          }
          else if (hashCode == failed_HASH)
          {
            return SpotInstanceState::failed;
          }
          else if (hashCode == disabled_HASH)
          {
            return SpotInstanceState::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpotInstanceState>(hashCode);
          }

          return SpotInstanceState::NOT_SET;
        }

        Aws::String GetNameForSpotInstanceState(SpotInstanceState enumValue)
        {
          switch(enumValue)
          {
          case SpotInstanceState::open:
            return "open";
          case SpotInstanceState::active:
            return "active";
          case SpotInstanceState::closed:
            return "closed";
          case SpotInstanceState::cancelled:
            return "cancelled";
          case SpotInstanceState::failed:
            return "failed";
          case SpotInstanceState::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpotInstanceStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
