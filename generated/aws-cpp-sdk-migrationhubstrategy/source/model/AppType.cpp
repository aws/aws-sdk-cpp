/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AppType.h>
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
      namespace AppTypeMapper
      {

        static const int DotNetFramework_HASH = HashingUtils::HashString("DotNetFramework");
        static const int Java_HASH = HashingUtils::HashString("Java");
        static const int SQLServer_HASH = HashingUtils::HashString("SQLServer");
        static const int IIS_HASH = HashingUtils::HashString("IIS");
        static const int Oracle_HASH = HashingUtils::HashString("Oracle");
        static const int Other_HASH = HashingUtils::HashString("Other");


        AppType GetAppTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DotNetFramework_HASH)
          {
            return AppType::DotNetFramework;
          }
          else if (hashCode == Java_HASH)
          {
            return AppType::Java;
          }
          else if (hashCode == SQLServer_HASH)
          {
            return AppType::SQLServer;
          }
          else if (hashCode == IIS_HASH)
          {
            return AppType::IIS;
          }
          else if (hashCode == Oracle_HASH)
          {
            return AppType::Oracle;
          }
          else if (hashCode == Other_HASH)
          {
            return AppType::Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppType>(hashCode);
          }

          return AppType::NOT_SET;
        }

        Aws::String GetNameForAppType(AppType enumValue)
        {
          switch(enumValue)
          {
          case AppType::DotNetFramework:
            return "DotNetFramework";
          case AppType::Java:
            return "Java";
          case AppType::SQLServer:
            return "SQLServer";
          case AppType::IIS:
            return "IIS";
          case AppType::Oracle:
            return "Oracle";
          case AppType::Other:
            return "Other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
