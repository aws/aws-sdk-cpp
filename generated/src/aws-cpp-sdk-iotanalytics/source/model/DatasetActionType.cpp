/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTAnalytics
  {
    namespace Model
    {
      namespace DatasetActionTypeMapper
      {

        static constexpr uint32_t QUERY_HASH = ConstExprHashingUtils::HashString("QUERY");
        static constexpr uint32_t CONTAINER_HASH = ConstExprHashingUtils::HashString("CONTAINER");


        DatasetActionType GetDatasetActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUERY_HASH)
          {
            return DatasetActionType::QUERY;
          }
          else if (hashCode == CONTAINER_HASH)
          {
            return DatasetActionType::CONTAINER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetActionType>(hashCode);
          }

          return DatasetActionType::NOT_SET;
        }

        Aws::String GetNameForDatasetActionType(DatasetActionType enumValue)
        {
          switch(enumValue)
          {
          case DatasetActionType::NOT_SET:
            return {};
          case DatasetActionType::QUERY:
            return "QUERY";
          case DatasetActionType::CONTAINER:
            return "CONTAINER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetActionTypeMapper
    } // namespace Model
  } // namespace IoTAnalytics
} // namespace Aws
