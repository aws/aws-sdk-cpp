/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/TablePreparationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace TablePreparationModeMapper
      {

        static const int do_nothing_HASH = HashingUtils::HashString("do-nothing");
        static const int truncate_HASH = HashingUtils::HashString("truncate");
        static const int drop_tables_on_target_HASH = HashingUtils::HashString("drop-tables-on-target");


        TablePreparationMode GetTablePreparationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == do_nothing_HASH)
          {
            return TablePreparationMode::do_nothing;
          }
          else if (hashCode == truncate_HASH)
          {
            return TablePreparationMode::truncate;
          }
          else if (hashCode == drop_tables_on_target_HASH)
          {
            return TablePreparationMode::drop_tables_on_target;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TablePreparationMode>(hashCode);
          }

          return TablePreparationMode::NOT_SET;
        }

        Aws::String GetNameForTablePreparationMode(TablePreparationMode enumValue)
        {
          switch(enumValue)
          {
          case TablePreparationMode::NOT_SET:
            return {};
          case TablePreparationMode::do_nothing:
            return "do-nothing";
          case TablePreparationMode::truncate:
            return "truncate";
          case TablePreparationMode::drop_tables_on_target:
            return "drop-tables-on-target";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TablePreparationModeMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
