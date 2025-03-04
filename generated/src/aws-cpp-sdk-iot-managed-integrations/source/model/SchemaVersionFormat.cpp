/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/SchemaVersionFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace SchemaVersionFormatMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int ZCL_HASH = HashingUtils::HashString("ZCL");
        static const int CONNECTOR_HASH = HashingUtils::HashString("CONNECTOR");


        SchemaVersionFormat GetSchemaVersionFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return SchemaVersionFormat::AWS;
          }
          else if (hashCode == ZCL_HASH)
          {
            return SchemaVersionFormat::ZCL;
          }
          else if (hashCode == CONNECTOR_HASH)
          {
            return SchemaVersionFormat::CONNECTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaVersionFormat>(hashCode);
          }

          return SchemaVersionFormat::NOT_SET;
        }

        Aws::String GetNameForSchemaVersionFormat(SchemaVersionFormat enumValue)
        {
          switch(enumValue)
          {
          case SchemaVersionFormat::NOT_SET:
            return {};
          case SchemaVersionFormat::AWS:
            return "AWS";
          case SchemaVersionFormat::ZCL:
            return "ZCL";
          case SchemaVersionFormat::CONNECTOR:
            return "CONNECTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaVersionFormatMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
