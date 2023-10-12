/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PermissionType.h>
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
      namespace PermissionTypeMapper
      {

        static constexpr uint32_t COLUMN_PERMISSION_HASH = ConstExprHashingUtils::HashString("COLUMN_PERMISSION");
        static constexpr uint32_t CELL_FILTER_PERMISSION_HASH = ConstExprHashingUtils::HashString("CELL_FILTER_PERMISSION");
        static constexpr uint32_t NESTED_PERMISSION_HASH = ConstExprHashingUtils::HashString("NESTED_PERMISSION");
        static constexpr uint32_t NESTED_CELL_PERMISSION_HASH = ConstExprHashingUtils::HashString("NESTED_CELL_PERMISSION");


        PermissionType GetPermissionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLUMN_PERMISSION_HASH)
          {
            return PermissionType::COLUMN_PERMISSION;
          }
          else if (hashCode == CELL_FILTER_PERMISSION_HASH)
          {
            return PermissionType::CELL_FILTER_PERMISSION;
          }
          else if (hashCode == NESTED_PERMISSION_HASH)
          {
            return PermissionType::NESTED_PERMISSION;
          }
          else if (hashCode == NESTED_CELL_PERMISSION_HASH)
          {
            return PermissionType::NESTED_CELL_PERMISSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionType>(hashCode);
          }

          return PermissionType::NOT_SET;
        }

        Aws::String GetNameForPermissionType(PermissionType enumValue)
        {
          switch(enumValue)
          {
          case PermissionType::NOT_SET:
            return {};
          case PermissionType::COLUMN_PERMISSION:
            return "COLUMN_PERMISSION";
          case PermissionType::CELL_FILTER_PERMISSION:
            return "CELL_FILTER_PERMISSION";
          case PermissionType::NESTED_PERMISSION:
            return "NESTED_PERMISSION";
          case PermissionType::NESTED_CELL_PERMISSION:
            return "NESTED_CELL_PERMISSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
