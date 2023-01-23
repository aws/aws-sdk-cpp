/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/Finding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace FindingMapper
      {

        static const int Underprovisioned_HASH = HashingUtils::HashString("Underprovisioned");
        static const int Overprovisioned_HASH = HashingUtils::HashString("Overprovisioned");
        static const int Optimized_HASH = HashingUtils::HashString("Optimized");
        static const int NotOptimized_HASH = HashingUtils::HashString("NotOptimized");


        Finding GetFindingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Underprovisioned_HASH)
          {
            return Finding::Underprovisioned;
          }
          else if (hashCode == Overprovisioned_HASH)
          {
            return Finding::Overprovisioned;
          }
          else if (hashCode == Optimized_HASH)
          {
            return Finding::Optimized;
          }
          else if (hashCode == NotOptimized_HASH)
          {
            return Finding::NotOptimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Finding>(hashCode);
          }

          return Finding::NOT_SET;
        }

        Aws::String GetNameForFinding(Finding enumValue)
        {
          switch(enumValue)
          {
          case Finding::Underprovisioned:
            return "Underprovisioned";
          case Finding::Overprovisioned:
            return "Overprovisioned";
          case Finding::Optimized:
            return "Optimized";
          case Finding::NotOptimized:
            return "NotOptimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
