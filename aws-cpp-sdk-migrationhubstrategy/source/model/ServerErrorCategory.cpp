/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerErrorCategory.h>
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
      namespace ServerErrorCategoryMapper
      {

        static const int CONNECTIVITY_ERROR_HASH = HashingUtils::HashString("CONNECTIVITY_ERROR");
        static const int CREDENTIAL_ERROR_HASH = HashingUtils::HashString("CREDENTIAL_ERROR");
        static const int PERMISSION_ERROR_HASH = HashingUtils::HashString("PERMISSION_ERROR");
        static const int ARCHITECTURE_ERROR_HASH = HashingUtils::HashString("ARCHITECTURE_ERROR");
        static const int OTHER_ERROR_HASH = HashingUtils::HashString("OTHER_ERROR");


        ServerErrorCategory GetServerErrorCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTIVITY_ERROR_HASH)
          {
            return ServerErrorCategory::CONNECTIVITY_ERROR;
          }
          else if (hashCode == CREDENTIAL_ERROR_HASH)
          {
            return ServerErrorCategory::CREDENTIAL_ERROR;
          }
          else if (hashCode == PERMISSION_ERROR_HASH)
          {
            return ServerErrorCategory::PERMISSION_ERROR;
          }
          else if (hashCode == ARCHITECTURE_ERROR_HASH)
          {
            return ServerErrorCategory::ARCHITECTURE_ERROR;
          }
          else if (hashCode == OTHER_ERROR_HASH)
          {
            return ServerErrorCategory::OTHER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerErrorCategory>(hashCode);
          }

          return ServerErrorCategory::NOT_SET;
        }

        Aws::String GetNameForServerErrorCategory(ServerErrorCategory enumValue)
        {
          switch(enumValue)
          {
          case ServerErrorCategory::CONNECTIVITY_ERROR:
            return "CONNECTIVITY_ERROR";
          case ServerErrorCategory::CREDENTIAL_ERROR:
            return "CREDENTIAL_ERROR";
          case ServerErrorCategory::PERMISSION_ERROR:
            return "PERMISSION_ERROR";
          case ServerErrorCategory::ARCHITECTURE_ERROR:
            return "ARCHITECTURE_ERROR";
          case ServerErrorCategory::OTHER_ERROR:
            return "OTHER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerErrorCategoryMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
