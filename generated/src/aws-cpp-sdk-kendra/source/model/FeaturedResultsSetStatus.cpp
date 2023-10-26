/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FeaturedResultsSetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace FeaturedResultsSetStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        FeaturedResultsSetStatus GetFeaturedResultsSetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return FeaturedResultsSetStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return FeaturedResultsSetStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeaturedResultsSetStatus>(hashCode);
          }

          return FeaturedResultsSetStatus::NOT_SET;
        }

        Aws::String GetNameForFeaturedResultsSetStatus(FeaturedResultsSetStatus enumValue)
        {
          switch(enumValue)
          {
          case FeaturedResultsSetStatus::NOT_SET:
            return {};
          case FeaturedResultsSetStatus::ACTIVE:
            return "ACTIVE";
          case FeaturedResultsSetStatus::INACTIVE:
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

      } // namespace FeaturedResultsSetStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
