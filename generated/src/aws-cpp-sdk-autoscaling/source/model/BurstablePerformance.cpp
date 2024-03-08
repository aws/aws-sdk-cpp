/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/BurstablePerformance.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace BurstablePerformanceMapper
      {

        static const int included_HASH = HashingUtils::HashString("included");
        static const int excluded_HASH = HashingUtils::HashString("excluded");
        static const int required_HASH = HashingUtils::HashString("required");


        BurstablePerformance GetBurstablePerformanceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == included_HASH)
          {
            return BurstablePerformance::included;
          }
          else if (hashCode == excluded_HASH)
          {
            return BurstablePerformance::excluded;
          }
          else if (hashCode == required_HASH)
          {
            return BurstablePerformance::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurstablePerformance>(hashCode);
          }

          return BurstablePerformance::NOT_SET;
        }

        Aws::String GetNameForBurstablePerformance(BurstablePerformance enumValue)
        {
          switch(enumValue)
          {
          case BurstablePerformance::NOT_SET:
            return {};
          case BurstablePerformance::included:
            return "included";
          case BurstablePerformance::excluded:
            return "excluded";
          case BurstablePerformance::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurstablePerformanceMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
