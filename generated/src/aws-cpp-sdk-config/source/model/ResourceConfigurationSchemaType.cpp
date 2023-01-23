/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceConfigurationSchemaType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ResourceConfigurationSchemaTypeMapper
      {

        static const int CFN_RESOURCE_SCHEMA_HASH = HashingUtils::HashString("CFN_RESOURCE_SCHEMA");


        ResourceConfigurationSchemaType GetResourceConfigurationSchemaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CFN_RESOURCE_SCHEMA_HASH)
          {
            return ResourceConfigurationSchemaType::CFN_RESOURCE_SCHEMA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceConfigurationSchemaType>(hashCode);
          }

          return ResourceConfigurationSchemaType::NOT_SET;
        }

        Aws::String GetNameForResourceConfigurationSchemaType(ResourceConfigurationSchemaType enumValue)
        {
          switch(enumValue)
          {
          case ResourceConfigurationSchemaType::CFN_RESOURCE_SCHEMA:
            return "CFN_RESOURCE_SCHEMA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceConfigurationSchemaTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
