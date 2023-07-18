/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ApplicationComponentCriteria.h>
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
      namespace ApplicationComponentCriteriaMapper
      {

        static const int NOT_DEFINED_HASH = HashingUtils::HashString("NOT_DEFINED");
        static const int APP_NAME_HASH = HashingUtils::HashString("APP_NAME");
        static const int SERVER_ID_HASH = HashingUtils::HashString("SERVER_ID");
        static const int APP_TYPE_HASH = HashingUtils::HashString("APP_TYPE");
        static const int STRATEGY_HASH = HashingUtils::HashString("STRATEGY");
        static const int DESTINATION_HASH = HashingUtils::HashString("DESTINATION");


        ApplicationComponentCriteria GetApplicationComponentCriteriaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_DEFINED_HASH)
          {
            return ApplicationComponentCriteria::NOT_DEFINED;
          }
          else if (hashCode == APP_NAME_HASH)
          {
            return ApplicationComponentCriteria::APP_NAME;
          }
          else if (hashCode == SERVER_ID_HASH)
          {
            return ApplicationComponentCriteria::SERVER_ID;
          }
          else if (hashCode == APP_TYPE_HASH)
          {
            return ApplicationComponentCriteria::APP_TYPE;
          }
          else if (hashCode == STRATEGY_HASH)
          {
            return ApplicationComponentCriteria::STRATEGY;
          }
          else if (hashCode == DESTINATION_HASH)
          {
            return ApplicationComponentCriteria::DESTINATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationComponentCriteria>(hashCode);
          }

          return ApplicationComponentCriteria::NOT_SET;
        }

        Aws::String GetNameForApplicationComponentCriteria(ApplicationComponentCriteria enumValue)
        {
          switch(enumValue)
          {
          case ApplicationComponentCriteria::NOT_DEFINED:
            return "NOT_DEFINED";
          case ApplicationComponentCriteria::APP_NAME:
            return "APP_NAME";
          case ApplicationComponentCriteria::SERVER_ID:
            return "SERVER_ID";
          case ApplicationComponentCriteria::APP_TYPE:
            return "APP_TYPE";
          case ApplicationComponentCriteria::STRATEGY:
            return "STRATEGY";
          case ApplicationComponentCriteria::DESTINATION:
            return "DESTINATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationComponentCriteriaMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
