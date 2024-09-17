/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TargetDatabase.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace TargetDatabaseMapper
      {

        static const int PostgreSQL_HASH = HashingUtils::HashString("PostgreSQL");


        TargetDatabase GetTargetDatabaseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PostgreSQL_HASH)
          {
            return TargetDatabase::PostgreSQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetDatabase>(hashCode);
          }

          return TargetDatabase::NOT_SET;
        }

        Aws::String GetNameForTargetDatabase(TargetDatabase enumValue)
        {
          switch(enumValue)
          {
          case TargetDatabase::NOT_SET:
            return {};
          case TargetDatabase::PostgreSQL:
            return "PostgreSQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetDatabaseMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
