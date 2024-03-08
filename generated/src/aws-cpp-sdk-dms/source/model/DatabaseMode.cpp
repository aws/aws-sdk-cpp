/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DatabaseMode.h>
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
      namespace DatabaseModeMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int babelfish_HASH = HashingUtils::HashString("babelfish");


        DatabaseMode GetDatabaseModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return DatabaseMode::default_;
          }
          else if (hashCode == babelfish_HASH)
          {
            return DatabaseMode::babelfish;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseMode>(hashCode);
          }

          return DatabaseMode::NOT_SET;
        }

        Aws::String GetNameForDatabaseMode(DatabaseMode enumValue)
        {
          switch(enumValue)
          {
          case DatabaseMode::NOT_SET:
            return {};
          case DatabaseMode::default_:
            return "default";
          case DatabaseMode::babelfish:
            return "babelfish";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseModeMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
