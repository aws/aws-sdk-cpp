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

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        FeaturedResultsSetStatus GetFeaturedResultsSetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
