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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        ListingStatus GetListingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
