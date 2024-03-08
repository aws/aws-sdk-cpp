/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AggregateFunctionName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace AggregateFunctionNameMapper
      {

        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int SUM_DISTINCT_HASH = HashingUtils::HashString("SUM_DISTINCT");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int COUNT_DISTINCT_HASH = HashingUtils::HashString("COUNT_DISTINCT");
        static const int AVG_HASH = HashingUtils::HashString("AVG");


        AggregateFunctionName GetAggregateFunctionNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUM_HASH)
          {
            return AggregateFunctionName::SUM;
          }
          else if (hashCode == SUM_DISTINCT_HASH)
          {
            return AggregateFunctionName::SUM_DISTINCT;
          }
          else if (hashCode == COUNT_HASH)
          {
            return AggregateFunctionName::COUNT;
          }
          else if (hashCode == COUNT_DISTINCT_HASH)
          {
            return AggregateFunctionName::COUNT_DISTINCT;
          }
          else if (hashCode == AVG_HASH)
          {
            return AggregateFunctionName::AVG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregateFunctionName>(hashCode);
          }

          return AggregateFunctionName::NOT_SET;
        }

        Aws::String GetNameForAggregateFunctionName(AggregateFunctionName enumValue)
        {
          switch(enumValue)
          {
          case AggregateFunctionName::NOT_SET:
            return {};
          case AggregateFunctionName::SUM:
            return "SUM";
          case AggregateFunctionName::SUM_DISTINCT:
            return "SUM_DISTINCT";
          case AggregateFunctionName::COUNT:
            return "COUNT";
          case AggregateFunctionName::COUNT_DISTINCT:
            return "COUNT_DISTINCT";
          case AggregateFunctionName::AVG:
            return "AVG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregateFunctionNameMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
