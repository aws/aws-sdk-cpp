/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SafeguardPolicy.h>
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
      namespace SafeguardPolicyMapper
      {

        static const int rely_on_sql_server_replication_agent_HASH = HashingUtils::HashString("rely-on-sql-server-replication-agent");
        static const int exclusive_automatic_truncation_HASH = HashingUtils::HashString("exclusive-automatic-truncation");
        static const int shared_automatic_truncation_HASH = HashingUtils::HashString("shared-automatic-truncation");


        SafeguardPolicy GetSafeguardPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == rely_on_sql_server_replication_agent_HASH)
          {
            return SafeguardPolicy::rely_on_sql_server_replication_agent;
          }
          else if (hashCode == exclusive_automatic_truncation_HASH)
          {
            return SafeguardPolicy::exclusive_automatic_truncation;
          }
          else if (hashCode == shared_automatic_truncation_HASH)
          {
            return SafeguardPolicy::shared_automatic_truncation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SafeguardPolicy>(hashCode);
          }

          return SafeguardPolicy::NOT_SET;
        }

        Aws::String GetNameForSafeguardPolicy(SafeguardPolicy enumValue)
        {
          switch(enumValue)
          {
          case SafeguardPolicy::rely_on_sql_server_replication_agent:
            return "rely-on-sql-server-replication-agent";
          case SafeguardPolicy::exclusive_automatic_truncation:
            return "exclusive-automatic-truncation";
          case SafeguardPolicy::shared_automatic_truncation:
            return "shared-automatic-truncation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SafeguardPolicyMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
