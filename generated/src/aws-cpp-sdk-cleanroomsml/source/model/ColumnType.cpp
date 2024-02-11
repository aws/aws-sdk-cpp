/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ColumnType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace ColumnTypeMapper
      {

        static const int USER_ID_HASH = HashingUtils::HashString("USER_ID");
        static const int ITEM_ID_HASH = HashingUtils::HashString("ITEM_ID");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int CATEGORICAL_FEATURE_HASH = HashingUtils::HashString("CATEGORICAL_FEATURE");
        static const int NUMERICAL_FEATURE_HASH = HashingUtils::HashString("NUMERICAL_FEATURE");


        ColumnType GetColumnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_ID_HASH)
          {
            return ColumnType::USER_ID;
          }
          else if (hashCode == ITEM_ID_HASH)
          {
            return ColumnType::ITEM_ID;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return ColumnType::TIMESTAMP;
          }
          else if (hashCode == CATEGORICAL_FEATURE_HASH)
          {
            return ColumnType::CATEGORICAL_FEATURE;
          }
          else if (hashCode == NUMERICAL_FEATURE_HASH)
          {
            return ColumnType::NUMERICAL_FEATURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnType>(hashCode);
          }

          return ColumnType::NOT_SET;
        }

        Aws::String GetNameForColumnType(ColumnType enumValue)
        {
          switch(enumValue)
          {
          case ColumnType::NOT_SET:
            return {};
          case ColumnType::USER_ID:
            return "USER_ID";
          case ColumnType::ITEM_ID:
            return "ITEM_ID";
          case ColumnType::TIMESTAMP:
            return "TIMESTAMP";
          case ColumnType::CATEGORICAL_FEATURE:
            return "CATEGORICAL_FEATURE";
          case ColumnType::NUMERICAL_FEATURE:
            return "NUMERICAL_FEATURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
