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

        static const int Bitbucket_HASH = HashingUtils::HashString("Bitbucket");
        static const int GitHub_HASH = HashingUtils::HashString("GitHub");
        static const int GitHubEnterpriseServer_HASH = HashingUtils::HashString("GitHubEnterpriseServer");


        ProviderType GetProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case ProviderType::Bitbucket:
            return "Bitbucket";
          case ProviderType::GitHub:
            return "GitHub";
          case ProviderType::GitHubEnterpriseServer:
            return "GitHubEnterpriseServer";
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
