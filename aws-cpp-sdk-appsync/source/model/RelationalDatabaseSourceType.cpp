/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/RelationalDatabaseSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace RelationalDatabaseSourceTypeMapper
      {

        static const int RDS_HTTP_ENDPOINT_HASH = HashingUtils::HashString("RDS_HTTP_ENDPOINT");


        RelationalDatabaseSourceType GetRelationalDatabaseSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RDS_HTTP_ENDPOINT_HASH)
          {
            return RelationalDatabaseSourceType::RDS_HTTP_ENDPOINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelationalDatabaseSourceType>(hashCode);
          }

          return RelationalDatabaseSourceType::NOT_SET;
        }

        Aws::String GetNameForRelationalDatabaseSourceType(RelationalDatabaseSourceType enumValue)
        {
          switch(enumValue)
          {
          case RelationalDatabaseSourceType::RDS_HTTP_ENDPOINT:
            return "RDS_HTTP_ENDPOINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationalDatabaseSourceTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
