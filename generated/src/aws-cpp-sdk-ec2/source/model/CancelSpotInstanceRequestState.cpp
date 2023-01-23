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

        static const int active_HASH = HashingUtils::HashString("active");
        static const int open_HASH = HashingUtils::HashString("open");
        static const int closed_HASH = HashingUtils::HashString("closed");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int completed_HASH = HashingUtils::HashString("completed");


        CancelSpotInstanceRequestState GetCancelSpotInstanceRequestStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
