/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ListingStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        ListingStatus GetListingStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ListingStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ListingStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return ListingStatus::INACTIVE;
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
          case ListingStatus::CREATING:
            return "CREATING";
          case ListingStatus::ACTIVE:
            return "ACTIVE";
          case ListingStatus::INACTIVE:
            return "INACTIVE";
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
  } // namespace DataZone
} // namespace Aws
