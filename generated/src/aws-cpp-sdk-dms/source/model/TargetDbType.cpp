/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/TargetDbType.h>
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
      namespace TargetDbTypeMapper
      {

        static constexpr uint32_t specific_database_HASH = ConstExprHashingUtils::HashString("specific-database");
        static constexpr uint32_t multiple_databases_HASH = ConstExprHashingUtils::HashString("multiple-databases");


        TargetDbType GetTargetDbTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == specific_database_HASH)
          {
            return TargetDbType::specific_database;
          }
          else if (hashCode == multiple_databases_HASH)
          {
            return TargetDbType::multiple_databases;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetDbType>(hashCode);
          }

          return TargetDbType::NOT_SET;
        }

        Aws::String GetNameForTargetDbType(TargetDbType enumValue)
        {
          switch(enumValue)
          {
          case TargetDbType::NOT_SET:
            return {};
          case TargetDbType::specific_database:
            return "specific-database";
          case TargetDbType::multiple_databases:
            return "multiple-databases";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetDbTypeMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
