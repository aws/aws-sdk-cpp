/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/MigrationEffort.h>
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
      namespace MigrationEffortMapper
      {

        static const int VeryLow_HASH = HashingUtils::HashString("VeryLow");
        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");


        MigrationEffort GetMigrationEffortForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VeryLow_HASH)
          {
            return MigrationEffort::VeryLow;
          }
          else if (hashCode == Low_HASH)
          {
            return MigrationEffort::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return MigrationEffort::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return MigrationEffort::High;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationEffort>(hashCode);
          }

          return MigrationEffort::NOT_SET;
        }

        Aws::String GetNameForMigrationEffort(MigrationEffort enumValue)
        {
          switch(enumValue)
          {
          case MigrationEffort::NOT_SET:
            return {};
          case MigrationEffort::VeryLow:
            return "VeryLow";
          case MigrationEffort::Low:
            return "Low";
          case MigrationEffort::Medium:
            return "Medium";
          case MigrationEffort::High:
            return "High";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MigrationEffortMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
