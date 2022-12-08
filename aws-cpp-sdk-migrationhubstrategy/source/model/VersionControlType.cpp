/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/VersionControlType.h>
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
      namespace VersionControlTypeMapper
      {

        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int GITHUB_ENTERPRISE_HASH = HashingUtils::HashString("GITHUB_ENTERPRISE");
        static const int AZURE_DEVOPS_GIT_HASH = HashingUtils::HashString("AZURE_DEVOPS_GIT");


        VersionControlType GetVersionControlTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_HASH)
          {
            return VersionControlType::GITHUB;
          }
          else if (hashCode == GITHUB_ENTERPRISE_HASH)
          {
            return VersionControlType::GITHUB_ENTERPRISE;
          }
          else if (hashCode == AZURE_DEVOPS_GIT_HASH)
          {
            return VersionControlType::AZURE_DEVOPS_GIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VersionControlType>(hashCode);
          }

          return VersionControlType::NOT_SET;
        }

        Aws::String GetNameForVersionControlType(VersionControlType enumValue)
        {
          switch(enumValue)
          {
          case VersionControlType::GITHUB:
            return "GITHUB";
          case VersionControlType::GITHUB_ENTERPRISE:
            return "GITHUB_ENTERPRISE";
          case VersionControlType::AZURE_DEVOPS_GIT:
            return "AZURE_DEVOPS_GIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VersionControlTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
