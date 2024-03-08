/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/BurstablePerformance.h>
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
      namespace BurstablePerformanceMapper
      {

        static const int included_HASH = HashingUtils::HashString("included");
        static const int required_HASH = HashingUtils::HashString("required");
        static const int excluded_HASH = HashingUtils::HashString("excluded");


        BurstablePerformance GetBurstablePerformanceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == included_HASH)
          {
            return BurstablePerformance::included;
          }
          else if (hashCode == required_HASH)
          {
            return BurstablePerformance::required;
          }
          else if (hashCode == excluded_HASH)
          {
            return BurstablePerformance::excluded;
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
          case BurstablePerformance::required:
            return "required";
          case BurstablePerformance::excluded:
            return "excluded";
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
  } // namespace EC2
} // namespace Aws
