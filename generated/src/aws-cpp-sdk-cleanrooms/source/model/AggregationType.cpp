/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AggregationType.h>
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
      namespace AggregationTypeMapper
      {

        static const int COUNT_DISTINCT_HASH = HashingUtils::HashString("COUNT_DISTINCT");


        AggregationType GetAggregationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COUNT_DISTINCT_HASH)
          {
            return AggregationType::COUNT_DISTINCT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationType>(hashCode);
          }

          return AggregationType::NOT_SET;
        }

        Aws::String GetNameForAggregationType(AggregationType enumValue)
        {
          switch(enumValue)
          {
          case AggregationType::NOT_SET:
            return {};
          case AggregationType::COUNT_DISTINCT:
            return "COUNT_DISTINCT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
