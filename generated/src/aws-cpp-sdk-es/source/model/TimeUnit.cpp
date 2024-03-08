/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/TimeUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace TimeUnitMapper
      {

        static const int HOURS_HASH = HashingUtils::HashString("HOURS");


        TimeUnit GetTimeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURS_HASH)
          {
            return TimeUnit::HOURS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeUnit>(hashCode);
          }

          return TimeUnit::NOT_SET;
        }

        Aws::String GetNameForTimeUnit(TimeUnit enumValue)
        {
          switch(enumValue)
          {
          case TimeUnit::NOT_SET:
            return {};
          case TimeUnit::HOURS:
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

      } // namespace TimeUnitMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
