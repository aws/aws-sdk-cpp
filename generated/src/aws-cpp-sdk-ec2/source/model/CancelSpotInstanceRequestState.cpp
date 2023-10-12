/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelSpotInstanceRequestState.h>
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
      namespace CancelSpotInstanceRequestStateMapper
      {

        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t open_HASH = ConstExprHashingUtils::HashString("open");
        static constexpr uint32_t closed_HASH = ConstExprHashingUtils::HashString("closed");
        static constexpr uint32_t cancelled_HASH = ConstExprHashingUtils::HashString("cancelled");
        static constexpr uint32_t completed_HASH = ConstExprHashingUtils::HashString("completed");


        CancelSpotInstanceRequestState GetCancelSpotInstanceRequestStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return CancelSpotInstanceRequestState::active;
          }
          else if (hashCode == open_HASH)
          {
            return CancelSpotInstanceRequestState::open;
          }
          else if (hashCode == closed_HASH)
          {
            return CancelSpotInstanceRequestState::closed;
          }
          else if (hashCode == cancelled_HASH)
          {
            return CancelSpotInstanceRequestState::cancelled;
          }
          else if (hashCode == completed_HASH)
          {
            return CancelSpotInstanceRequestState::completed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CancelSpotInstanceRequestState>(hashCode);
          }

          return CancelSpotInstanceRequestState::NOT_SET;
        }

        Aws::String GetNameForCancelSpotInstanceRequestState(CancelSpotInstanceRequestState enumValue)
        {
          switch(enumValue)
          {
          case CancelSpotInstanceRequestState::NOT_SET:
            return {};
          case CancelSpotInstanceRequestState::active:
            return "active";
          case CancelSpotInstanceRequestState::open:
            return "open";
          case CancelSpotInstanceRequestState::closed:
            return "closed";
          case CancelSpotInstanceRequestState::cancelled:
            return "cancelled";
          case CancelSpotInstanceRequestState::completed:
            return "completed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CancelSpotInstanceRequestStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
