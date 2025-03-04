/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/SchemaVersionType.h>
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
      namespace SchemaVersionTypeMapper
      {

        static const int capability_HASH = HashingUtils::HashString("capability");
        static const int definition_HASH = HashingUtils::HashString("definition");


        SchemaVersionType GetSchemaVersionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == capability_HASH)
          {
            return SchemaVersionType::capability;
          }
          else if (hashCode == definition_HASH)
          {
            return SchemaVersionType::definition;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaVersionType>(hashCode);
          }

          return SchemaVersionType::NOT_SET;
        }

        Aws::String GetNameForSchemaVersionType(SchemaVersionType enumValue)
        {
          switch(enumValue)
          {
          case SchemaVersionType::NOT_SET:
            return {};
          case SchemaVersionType::capability:
            return "capability";
          case SchemaVersionType::definition:
            return "definition";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaVersionTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
