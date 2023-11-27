/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ImplementationEffort.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostOptimizationHub
  {
    namespace Model
    {
      namespace ImplementationEffortMapper
      {

        static const int VeryLow_HASH = HashingUtils::HashString("VeryLow");
        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");
        static const int VeryHigh_HASH = HashingUtils::HashString("VeryHigh");


        ImplementationEffort GetImplementationEffortForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VeryLow_HASH)
          {
            return ImplementationEffort::VeryLow;
          }
          else if (hashCode == Low_HASH)
          {
            return ImplementationEffort::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return ImplementationEffort::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return ImplementationEffort::High;
          }
          else if (hashCode == VeryHigh_HASH)
          {
            return ImplementationEffort::VeryHigh;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImplementationEffort>(hashCode);
          }

          return ImplementationEffort::NOT_SET;
        }

        Aws::String GetNameForImplementationEffort(ImplementationEffort enumValue)
        {
          switch(enumValue)
          {
          case ImplementationEffort::NOT_SET:
            return {};
          case ImplementationEffort::VeryLow:
            return "VeryLow";
          case ImplementationEffort::Low:
            return "Low";
          case ImplementationEffort::Medium:
            return "Medium";
          case ImplementationEffort::High:
            return "High";
          case ImplementationEffort::VeryHigh:
            return "VeryHigh";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImplementationEffortMapper
    } // namespace Model
  } // namespace CostOptimizationHub
} // namespace Aws
