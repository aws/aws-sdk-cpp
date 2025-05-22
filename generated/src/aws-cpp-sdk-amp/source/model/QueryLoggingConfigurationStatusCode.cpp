/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/QueryLoggingConfigurationStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrometheusService
  {
    namespace Model
    {
      namespace QueryLoggingConfigurationStatusCodeMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        QueryLoggingConfigurationStatusCode GetQueryLoggingConfigurationStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return QueryLoggingConfigurationStatusCode::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return QueryLoggingConfigurationStatusCode::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return QueryLoggingConfigurationStatusCode::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return QueryLoggingConfigurationStatusCode::DELETING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return QueryLoggingConfigurationStatusCode::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return QueryLoggingConfigurationStatusCode::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryLoggingConfigurationStatusCode>(hashCode);
          }

          return QueryLoggingConfigurationStatusCode::NOT_SET;
        }

        Aws::String GetNameForQueryLoggingConfigurationStatusCode(QueryLoggingConfigurationStatusCode enumValue)
        {
          switch(enumValue)
          {
          case QueryLoggingConfigurationStatusCode::NOT_SET:
            return {};
          case QueryLoggingConfigurationStatusCode::CREATING:
            return "CREATING";
          case QueryLoggingConfigurationStatusCode::ACTIVE:
            return "ACTIVE";
          case QueryLoggingConfigurationStatusCode::UPDATING:
            return "UPDATING";
          case QueryLoggingConfigurationStatusCode::DELETING:
            return "DELETING";
          case QueryLoggingConfigurationStatusCode::CREATION_FAILED:
            return "CREATION_FAILED";
          case QueryLoggingConfigurationStatusCode::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryLoggingConfigurationStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
