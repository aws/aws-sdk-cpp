/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarconnections
  {
    namespace Model
    {
      namespace ProviderTypeMapper
      {

        static constexpr uint32_t Bitbucket_HASH = ConstExprHashingUtils::HashString("Bitbucket");
        static constexpr uint32_t GitHub_HASH = ConstExprHashingUtils::HashString("GitHub");
        static constexpr uint32_t GitHubEnterpriseServer_HASH = ConstExprHashingUtils::HashString("GitHubEnterpriseServer");
        static constexpr uint32_t GitLab_HASH = ConstExprHashingUtils::HashString("GitLab");


        ProviderType GetProviderTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Bitbucket_HASH)
          {
            return ProviderType::Bitbucket;
          }
          else if (hashCode == GitHub_HASH)
          {
            return ProviderType::GitHub;
          }
          else if (hashCode == GitHubEnterpriseServer_HASH)
          {
            return ProviderType::GitHubEnterpriseServer;
          }
          else if (hashCode == GitLab_HASH)
          {
            return ProviderType::GitLab;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProviderType>(hashCode);
          }

          return ProviderType::NOT_SET;
        }

        Aws::String GetNameForProviderType(ProviderType enumValue)
        {
          switch(enumValue)
          {
          case ProviderType::NOT_SET:
            return {};
          case ProviderType::Bitbucket:
            return "Bitbucket";
          case ProviderType::GitHub:
            return "GitHub";
          case ProviderType::GitHubEnterpriseServer:
            return "GitHubEnterpriseServer";
          case ProviderType::GitLab:
            return "GitLab";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProviderTypeMapper
    } // namespace Model
  } // namespace CodeStarconnections
} // namespace Aws
