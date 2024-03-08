/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/SuppressionUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace SuppressionUnitMapper
      {

        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");
        static const int MINUTES_HASH = HashingUtils::HashString("MINUTES");
        static const int HOURS_HASH = HashingUtils::HashString("HOURS");


        SuppressionUnit GetSuppressionUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECONDS_HASH)
          {
            return SuppressionUnit::SECONDS;
          }
          else if (hashCode == MINUTES_HASH)
          {
            return SuppressionUnit::MINUTES;
          }
          else if (hashCode == HOURS_HASH)
          {
            return SuppressionUnit::HOURS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuppressionUnit>(hashCode);
          }

          return SuppressionUnit::NOT_SET;
        }

        Aws::String GetNameForSuppressionUnit(SuppressionUnit enumValue)
        {
          switch(enumValue)
          {
          case SuppressionUnit::NOT_SET:
            return {};
          case SuppressionUnit::SECONDS:
            return "SECONDS";
          case SuppressionUnit::MINUTES:
            return "MINUTES";
          case SuppressionUnit::HOURS:
            return "HOURS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuppressionUnitMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
