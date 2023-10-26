/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/MigrationSortAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace MigrationSortAttributeMapper
      {

        static const int V1_BOT_NAME_HASH = HashingUtils::HashString("V1_BOT_NAME");
        static const int MIGRATION_DATE_TIME_HASH = HashingUtils::HashString("MIGRATION_DATE_TIME");


        MigrationSortAttribute GetMigrationSortAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_BOT_NAME_HASH)
          {
            return MigrationSortAttribute::V1_BOT_NAME;
          }
          else if (hashCode == MIGRATION_DATE_TIME_HASH)
          {
            return MigrationSortAttribute::MIGRATION_DATE_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationSortAttribute>(hashCode);
          }

          return MigrationSortAttribute::NOT_SET;
        }

        Aws::String GetNameForMigrationSortAttribute(MigrationSortAttribute enumValue)
        {
          switch(enumValue)
          {
          case MigrationSortAttribute::NOT_SET:
            return {};
          case MigrationSortAttribute::V1_BOT_NAME:
            return "V1_BOT_NAME";
          case MigrationSortAttribute::MIGRATION_DATE_TIME:
            return "MIGRATION_DATE_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MigrationSortAttributeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
