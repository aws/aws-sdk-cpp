/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaType.h>
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
      namespace SchemaTypeMapper
      {

        static const int TABLE_HASH = HashingUtils::HashString("TABLE");
        static const int ID_MAPPING_TABLE_HASH = HashingUtils::HashString("ID_MAPPING_TABLE");


        SchemaType GetSchemaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABLE_HASH)
          {
            return SchemaType::TABLE;
          }
          else if (hashCode == ID_MAPPING_TABLE_HASH)
          {
            return SchemaType::ID_MAPPING_TABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaType>(hashCode);
          }

          return SchemaType::NOT_SET;
        }

        Aws::String GetNameForSchemaType(SchemaType enumValue)
        {
          switch(enumValue)
          {
          case SchemaType::NOT_SET:
            return {};
          case SchemaType::TABLE:
            return "TABLE";
          case SchemaType::ID_MAPPING_TABLE:
            return "ID_MAPPING_TABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
