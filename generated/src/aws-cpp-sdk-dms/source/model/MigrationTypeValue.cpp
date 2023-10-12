/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/MigrationTypeValue.h>
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
      namespace MigrationTypeValueMapper
      {

        static constexpr uint32_t full_load_HASH = ConstExprHashingUtils::HashString("full-load");
        static constexpr uint32_t cdc_HASH = ConstExprHashingUtils::HashString("cdc");
        static constexpr uint32_t full_load_and_cdc_HASH = ConstExprHashingUtils::HashString("full-load-and-cdc");


        MigrationTypeValue GetMigrationTypeValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == full_load_HASH)
          {
            return MigrationTypeValue::full_load;
          }
          else if (hashCode == cdc_HASH)
          {
            return MigrationTypeValue::cdc;
          }
          else if (hashCode == full_load_and_cdc_HASH)
          {
            return MigrationTypeValue::full_load_and_cdc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationTypeValue>(hashCode);
          }

          return MigrationTypeValue::NOT_SET;
        }

        Aws::String GetNameForMigrationTypeValue(MigrationTypeValue enumValue)
        {
          switch(enumValue)
          {
          case MigrationTypeValue::NOT_SET:
            return {};
          case MigrationTypeValue::full_load:
            return "full-load";
          case MigrationTypeValue::cdc:
            return "cdc";
          case MigrationTypeValue::full_load_and_cdc:
            return "full-load-and-cdc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MigrationTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
