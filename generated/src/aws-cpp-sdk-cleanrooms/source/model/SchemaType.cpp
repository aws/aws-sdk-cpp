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

        static constexpr uint32_t TABLE_HASH = ConstExprHashingUtils::HashString("TABLE");


        SchemaType GetSchemaTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABLE_HASH)
          {
            return SchemaType::TABLE;
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
