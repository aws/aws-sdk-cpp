/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerCriteria.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace ServerCriteriaMapper
      {

        static const int NOT_DEFINED_HASH = HashingUtils::HashString("NOT_DEFINED");
        static const int OS_NAME_HASH = HashingUtils::HashString("OS_NAME");
        static const int STRATEGY_HASH = HashingUtils::HashString("STRATEGY");
        static const int DESTINATION_HASH = HashingUtils::HashString("DESTINATION");
        static const int SERVER_ID_HASH = HashingUtils::HashString("SERVER_ID");
        static const int ANALYSIS_STATUS_HASH = HashingUtils::HashString("ANALYSIS_STATUS");
        static const int ERROR_CATEGORY_HASH = HashingUtils::HashString("ERROR_CATEGORY");


        ServerCriteria GetServerCriteriaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_DEFINED_HASH)
          {
            return ServerCriteria::NOT_DEFINED;
          }
          else if (hashCode == OS_NAME_HASH)
          {
            return ServerCriteria::OS_NAME;
          }
          else if (hashCode == STRATEGY_HASH)
          {
            return ServerCriteria::STRATEGY;
          }
          else if (hashCode == DESTINATION_HASH)
          {
            return ServerCriteria::DESTINATION;
          }
          else if (hashCode == SERVER_ID_HASH)
          {
            return ServerCriteria::SERVER_ID;
          }
          else if (hashCode == ANALYSIS_STATUS_HASH)
          {
            return ServerCriteria::ANALYSIS_STATUS;
          }
          else if (hashCode == ERROR_CATEGORY_HASH)
          {
            return ServerCriteria::ERROR_CATEGORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerCriteria>(hashCode);
          }

          return ServerCriteria::NOT_SET;
        }

        Aws::String GetNameForServerCriteria(ServerCriteria enumValue)
        {
          switch(enumValue)
          {
          case ServerCriteria::NOT_DEFINED:
            return "NOT_DEFINED";
          case ServerCriteria::OS_NAME:
            return "OS_NAME";
          case ServerCriteria::STRATEGY:
            return "STRATEGY";
          case ServerCriteria::DESTINATION:
            return "DESTINATION";
          case ServerCriteria::SERVER_ID:
            return "SERVER_ID";
          case ServerCriteria::ANALYSIS_STATUS:
            return "ANALYSIS_STATUS";
          case ServerCriteria::ERROR_CATEGORY:
            return "ERROR_CATEGORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerCriteriaMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
