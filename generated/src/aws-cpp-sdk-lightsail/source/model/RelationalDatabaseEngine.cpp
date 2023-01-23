/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RelationalDatabaseEngine.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace RelationalDatabaseEngineMapper
      {

        static const int mysql_HASH = HashingUtils::HashString("mysql");


        RelationalDatabaseEngine GetRelationalDatabaseEngineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == mysql_HASH)
          {
            return RelationalDatabaseEngine::mysql;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelationalDatabaseEngine>(hashCode);
          }

          return RelationalDatabaseEngine::NOT_SET;
        }

        Aws::String GetNameForRelationalDatabaseEngine(RelationalDatabaseEngine enumValue)
        {
          switch(enumValue)
          {
          case RelationalDatabaseEngine::mysql:
            return "mysql";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationalDatabaseEngineMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
