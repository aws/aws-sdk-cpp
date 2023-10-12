/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ListingState.h>
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
      namespace ListingStateMapper
      {

        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t sold_HASH = ConstExprHashingUtils::HashString("sold");
        static constexpr uint32_t cancelled_HASH = ConstExprHashingUtils::HashString("cancelled");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");


        ListingState GetListingStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return ListingState::available;
          }
          else if (hashCode == sold_HASH)
          {
            return ListingState::sold;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ListingState::cancelled;
          }
          else if (hashCode == pending_HASH)
          {
            return ListingState::pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListingState>(hashCode);
          }

          return ListingState::NOT_SET;
        }

        Aws::String GetNameForListingState(ListingState enumValue)
        {
          switch(enumValue)
          {
          case ListingState::NOT_SET:
            return {};
          case ListingState::available:
            return "available";
          case ListingState::sold:
            return "sold";
          case ListingState::cancelled:
            return "cancelled";
          case ListingState::pending:
            return "pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListingStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
