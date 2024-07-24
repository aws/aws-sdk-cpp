/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaConfiguration.h>
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
      namespace SchemaConfigurationMapper
      {

        static const int DIFFERENTIAL_PRIVACY_HASH = HashingUtils::HashString("DIFFERENTIAL_PRIVACY");


        SchemaConfiguration GetSchemaConfigurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIFFERENTIAL_PRIVACY_HASH)
          {
            return SchemaConfiguration::DIFFERENTIAL_PRIVACY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaConfiguration>(hashCode);
          }

          return SchemaConfiguration::NOT_SET;
        }

        Aws::String GetNameForSchemaConfiguration(SchemaConfiguration enumValue)
        {
          switch(enumValue)
          {
          case SchemaConfiguration::NOT_SET:
            return {};
          case SchemaConfiguration::DIFFERENTIAL_PRIVACY:
            return "DIFFERENTIAL_PRIVACY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaConfigurationMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
