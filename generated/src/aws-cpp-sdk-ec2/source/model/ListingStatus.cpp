/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ListingStatus.h>
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
      namespace ListingStatusMapper
      {

        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t cancelled_HASH = ConstExprHashingUtils::HashString("cancelled");
        static constexpr uint32_t closed_HASH = ConstExprHashingUtils::HashString("closed");


        ListingStatus GetListingStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return ListingStatus::active;
          }
          else if (hashCode == pending_HASH)
          {
            return ListingStatus::pending;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ListingStatus::cancelled;
          }
          else if (hashCode == closed_HASH)
          {
            return ListingStatus::closed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListingStatus>(hashCode);
          }

          return ListingStatus::NOT_SET;
        }

        Aws::String GetNameForListingStatus(ListingStatus enumValue)
        {
          switch(enumValue)
          {
          case ListingStatus::NOT_SET:
            return {};
          case ListingStatus::active:
            return "active";
          case ListingStatus::pending:
            return "pending";
          case ListingStatus::cancelled:
            return "cancelled";
          case ListingStatus::closed:
            return "closed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListingStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
