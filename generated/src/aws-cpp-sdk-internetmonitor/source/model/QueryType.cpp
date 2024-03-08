/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/QueryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace InternetMonitor
  {
    namespace Model
    {
      namespace QueryTypeMapper
      {

        static const int MEASUREMENTS_HASH = HashingUtils::HashString("MEASUREMENTS");
        static const int TOP_LOCATIONS_HASH = HashingUtils::HashString("TOP_LOCATIONS");
        static const int TOP_LOCATION_DETAILS_HASH = HashingUtils::HashString("TOP_LOCATION_DETAILS");


        QueryType GetQueryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEASUREMENTS_HASH)
          {
            return QueryType::MEASUREMENTS;
          }
          else if (hashCode == TOP_LOCATIONS_HASH)
          {
            return QueryType::TOP_LOCATIONS;
          }
          else if (hashCode == TOP_LOCATION_DETAILS_HASH)
          {
            return QueryType::TOP_LOCATION_DETAILS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryType>(hashCode);
          }

          return QueryType::NOT_SET;
        }

        Aws::String GetNameForQueryType(QueryType enumValue)
        {
          switch(enumValue)
          {
          case QueryType::NOT_SET:
            return {};
          case QueryType::MEASUREMENTS:
            return "MEASUREMENTS";
          case QueryType::TOP_LOCATIONS:
            return "TOP_LOCATIONS";
          case QueryType::TOP_LOCATION_DETAILS:
            return "TOP_LOCATION_DETAILS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryTypeMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
