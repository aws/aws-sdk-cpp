/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/SchemaRegistryEventRecordFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace SchemaRegistryEventRecordFormatMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int SOURCE_HASH = HashingUtils::HashString("SOURCE");


        SchemaRegistryEventRecordFormat GetSchemaRegistryEventRecordFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return SchemaRegistryEventRecordFormat::JSON;
          }
          else if (hashCode == SOURCE_HASH)
          {
            return SchemaRegistryEventRecordFormat::SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaRegistryEventRecordFormat>(hashCode);
          }

          return SchemaRegistryEventRecordFormat::NOT_SET;
        }

        Aws::String GetNameForSchemaRegistryEventRecordFormat(SchemaRegistryEventRecordFormat enumValue)
        {
          switch(enumValue)
          {
          case SchemaRegistryEventRecordFormat::NOT_SET:
            return {};
          case SchemaRegistryEventRecordFormat::JSON:
            return "JSON";
          case SchemaRegistryEventRecordFormat::SOURCE:
            return "SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaRegistryEventRecordFormatMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
