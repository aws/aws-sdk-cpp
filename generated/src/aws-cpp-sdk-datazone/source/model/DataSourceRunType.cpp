/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceRunType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DataSourceRunTypeMapper
      {

        static const int PRIORITIZED_HASH = HashingUtils::HashString("PRIORITIZED");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");


        DataSourceRunType GetDataSourceRunTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIORITIZED_HASH)
          {
            return DataSourceRunType::PRIORITIZED;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return DataSourceRunType::SCHEDULED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceRunType>(hashCode);
          }

          return DataSourceRunType::NOT_SET;
        }

        Aws::String GetNameForDataSourceRunType(DataSourceRunType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceRunType::NOT_SET:
            return {};
          case DataSourceRunType::PRIORITIZED:
            return "PRIORITIZED";
          case DataSourceRunType::SCHEDULED:
            return "SCHEDULED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceRunTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
