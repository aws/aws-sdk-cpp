/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/SchemaVersionVisibility.h>
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
      namespace SchemaVersionVisibilityMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        SchemaVersionVisibility GetSchemaVersionVisibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return SchemaVersionVisibility::PUBLIC_;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return SchemaVersionVisibility::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaVersionVisibility>(hashCode);
          }

          return SchemaVersionVisibility::NOT_SET;
        }

        Aws::String GetNameForSchemaVersionVisibility(SchemaVersionVisibility enumValue)
        {
          switch(enumValue)
          {
          case SchemaVersionVisibility::NOT_SET:
            return {};
          case SchemaVersionVisibility::PUBLIC_:
            return "PUBLIC";
          case SchemaVersionVisibility::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaVersionVisibilityMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
