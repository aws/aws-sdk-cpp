/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace DataFormatMapper
      {

        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t PARQUET_HASH = ConstExprHashingUtils::HashString("PARQUET");


        DataFormat GetDataFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return DataFormat::JSON;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return DataFormat::PARQUET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataFormat>(hashCode);
          }

          return DataFormat::NOT_SET;
        }

        Aws::String GetNameForDataFormat(DataFormat enumValue)
        {
          switch(enumValue)
          {
          case DataFormat::NOT_SET:
            return {};
          case DataFormat::JSON:
            return "JSON";
          case DataFormat::PARQUET:
            return "PARQUET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataFormatMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
