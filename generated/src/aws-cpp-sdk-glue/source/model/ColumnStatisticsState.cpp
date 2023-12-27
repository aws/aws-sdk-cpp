/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnStatisticsState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ColumnStatisticsStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        ColumnStatisticsState GetColumnStatisticsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return ColumnStatisticsState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ColumnStatisticsState::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ColumnStatisticsState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ColumnStatisticsState::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ColumnStatisticsState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnStatisticsState>(hashCode);
          }

          return ColumnStatisticsState::NOT_SET;
        }

        Aws::String GetNameForColumnStatisticsState(ColumnStatisticsState enumValue)
        {
          switch(enumValue)
          {
          case ColumnStatisticsState::NOT_SET:
            return {};
          case ColumnStatisticsState::STARTING:
            return "STARTING";
          case ColumnStatisticsState::RUNNING:
            return "RUNNING";
          case ColumnStatisticsState::SUCCEEDED:
            return "SUCCEEDED";
          case ColumnStatisticsState::FAILED:
            return "FAILED";
          case ColumnStatisticsState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnStatisticsStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
