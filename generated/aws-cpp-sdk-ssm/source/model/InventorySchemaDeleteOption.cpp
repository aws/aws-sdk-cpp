/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventorySchemaDeleteOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace InventorySchemaDeleteOptionMapper
      {

        static const int DisableSchema_HASH = HashingUtils::HashString("DisableSchema");
        static const int DeleteSchema_HASH = HashingUtils::HashString("DeleteSchema");


        InventorySchemaDeleteOption GetInventorySchemaDeleteOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DisableSchema_HASH)
          {
            return InventorySchemaDeleteOption::DisableSchema;
          }
          else if (hashCode == DeleteSchema_HASH)
          {
            return InventorySchemaDeleteOption::DeleteSchema;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventorySchemaDeleteOption>(hashCode);
          }

          return InventorySchemaDeleteOption::NOT_SET;
        }

        Aws::String GetNameForInventorySchemaDeleteOption(InventorySchemaDeleteOption enumValue)
        {
          switch(enumValue)
          {
          case InventorySchemaDeleteOption::DisableSchema:
            return "DisableSchema";
          case InventorySchemaDeleteOption::DeleteSchema:
            return "DeleteSchema";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InventorySchemaDeleteOptionMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
