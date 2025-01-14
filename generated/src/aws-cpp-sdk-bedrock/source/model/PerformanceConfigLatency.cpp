/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PerformanceConfigLatency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace PerformanceConfigLatencyMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int optimized_HASH = HashingUtils::HashString("optimized");


        PerformanceConfigLatency GetPerformanceConfigLatencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return PerformanceConfigLatency::standard;
          }
          else if (hashCode == optimized_HASH)
          {
            return PerformanceConfigLatency::optimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PerformanceConfigLatency>(hashCode);
          }

          return PerformanceConfigLatency::NOT_SET;
        }

        Aws::String GetNameForPerformanceConfigLatency(PerformanceConfigLatency enumValue)
        {
          switch(enumValue)
          {
          case PerformanceConfigLatency::NOT_SET:
            return {};
          case PerformanceConfigLatency::standard:
            return "standard";
          case PerformanceConfigLatency::optimized:
            return "optimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PerformanceConfigLatencyMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
