/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/DatabaseLFTagPolicyPermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace DatabaseLFTagPolicyPermissionMapper
      {

        static const int DESCRIBE_HASH = HashingUtils::HashString("DESCRIBE");


        DatabaseLFTagPolicyPermission GetDatabaseLFTagPolicyPermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DESCRIBE_HASH)
          {
            return DatabaseLFTagPolicyPermission::DESCRIBE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseLFTagPolicyPermission>(hashCode);
          }

          return DatabaseLFTagPolicyPermission::NOT_SET;
        }

        Aws::String GetNameForDatabaseLFTagPolicyPermission(DatabaseLFTagPolicyPermission enumValue)
        {
          switch(enumValue)
          {
          case DatabaseLFTagPolicyPermission::DESCRIBE:
            return "DESCRIBE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseLFTagPolicyPermissionMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
