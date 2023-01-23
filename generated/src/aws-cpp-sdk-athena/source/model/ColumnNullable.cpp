/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ColumnNullable.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace ColumnNullableMapper
      {

        static const int NOT_NULL_HASH = HashingUtils::HashString("NOT_NULL");
        static const int NULLABLE_HASH = HashingUtils::HashString("NULLABLE");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        ColumnNullable GetColumnNullableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_NULL_HASH)
          {
            return ColumnNullable::NOT_NULL;
          }
          else if (hashCode == NULLABLE_HASH)
          {
            return ColumnNullable::NULLABLE;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ColumnNullable::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnNullable>(hashCode);
          }

          return ColumnNullable::NOT_SET;
        }

        Aws::String GetNameForColumnNullable(ColumnNullable enumValue)
        {
          switch(enumValue)
          {
          case ColumnNullable::NOT_NULL:
            return "NOT_NULL";
          case ColumnNullable::NULLABLE:
            return "NULLABLE";
          case ColumnNullable::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnNullableMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
