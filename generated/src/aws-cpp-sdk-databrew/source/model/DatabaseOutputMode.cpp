/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DatabaseOutputMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace DatabaseOutputModeMapper
      {

        static const int NEW_TABLE_HASH = HashingUtils::HashString("NEW_TABLE");


        DatabaseOutputMode GetDatabaseOutputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW_TABLE_HASH)
          {
            return DatabaseOutputMode::NEW_TABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseOutputMode>(hashCode);
          }

          return DatabaseOutputMode::NOT_SET;
        }

        Aws::String GetNameForDatabaseOutputMode(DatabaseOutputMode enumValue)
        {
          switch(enumValue)
          {
          case DatabaseOutputMode::NOT_SET:
            return {};
          case DatabaseOutputMode::NEW_TABLE:
            return "NEW_TABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseOutputModeMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
