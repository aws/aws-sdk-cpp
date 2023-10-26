/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataFormat.h>
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
      namespace DataFormatMapper
      {

        static const int AVRO_HASH = HashingUtils::HashString("AVRO");
        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int PROTOBUF_HASH = HashingUtils::HashString("PROTOBUF");


        DataFormat GetDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVRO_HASH)
          {
            return DataFormat::AVRO;
          }
          else if (hashCode == JSON_HASH)
          {
            return DataFormat::JSON;
          }
          else if (hashCode == PROTOBUF_HASH)
          {
            return DataFormat::PROTOBUF;
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
          case DataFormat::AVRO:
            return "AVRO";
          case DataFormat::JSON:
            return "JSON";
          case DataFormat::PROTOBUF:
            return "PROTOBUF";
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
  } // namespace Glue
} // namespace Aws
