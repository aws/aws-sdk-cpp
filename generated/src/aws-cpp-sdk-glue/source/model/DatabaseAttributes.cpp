/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DatabaseAttributes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace DatabaseAttributesMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int TARGET_DATABASE_HASH = HashingUtils::HashString("TARGET_DATABASE");


        DatabaseAttributes GetDatabaseAttributesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return DatabaseAttributes::NAME;
          }
          else if (hashCode == TARGET_DATABASE_HASH)
          {
            return DatabaseAttributes::TARGET_DATABASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseAttributes>(hashCode);
          }

          return DatabaseAttributes::NOT_SET;
        }

        Aws::String GetNameForDatabaseAttributes(DatabaseAttributes enumValue)
        {
          switch(enumValue)
          {
          case DatabaseAttributes::NOT_SET:
            return {};
          case DatabaseAttributes::NAME:
            return "NAME";
          case DatabaseAttributes::TARGET_DATABASE:
            return "TARGET_DATABASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseAttributesMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
