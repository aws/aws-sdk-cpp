/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/SourceDatabase.h>
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
      namespace SourceDatabaseMapper
      {

        static const int z_OS_DB2_HASH = HashingUtils::HashString("z/OS-DB2");


        SourceDatabase GetSourceDatabaseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == z_OS_DB2_HASH)
          {
            return SourceDatabase::z_OS_DB2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceDatabase>(hashCode);
          }

          return SourceDatabase::NOT_SET;
        }

        Aws::String GetNameForSourceDatabase(SourceDatabase enumValue)
        {
          switch(enumValue)
          {
          case SourceDatabase::NOT_SET:
            return {};
          case SourceDatabase::z_OS_DB2:
            return "z/OS-DB2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceDatabaseMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
