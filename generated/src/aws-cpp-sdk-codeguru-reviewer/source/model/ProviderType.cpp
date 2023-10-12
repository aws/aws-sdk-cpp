/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/ProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace ProviderTypeMapper
      {

        static constexpr uint32_t CodeCommit_HASH = ConstExprHashingUtils::HashString("CodeCommit");
        static constexpr uint32_t GitHub_HASH = ConstExprHashingUtils::HashString("GitHub");
        static constexpr uint32_t Bitbucket_HASH = ConstExprHashingUtils::HashString("Bitbucket");
        static constexpr uint32_t GitHubEnterpriseServer_HASH = ConstExprHashingUtils::HashString("GitHubEnterpriseServer");
        static constexpr uint32_t S3Bucket_HASH = ConstExprHashingUtils::HashString("S3Bucket");


        ProviderType GetProviderTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CodeCommit_HASH)
          {
            return ProviderType::CodeCommit;
          }
          else if (hashCode == GitHub_HASH)
          {
            return ProviderType::GitHub;
          }
          else if (hashCode == Bitbucket_HASH)
          {
            return ProviderType::Bitbucket;
          }
          else if (hashCode == GitHubEnterpriseServer_HASH)
          {
            return ProviderType::GitHubEnterpriseServer;
          }
          else if (hashCode == S3Bucket_HASH)
          {
            return ProviderType::S3Bucket;
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
          case ProviderType::CodeCommit:
            return "CodeCommit";
          case ProviderType::GitHub:
            return "GitHub";
          case ProviderType::Bitbucket:
            return "Bitbucket";
          case ProviderType::GitHubEnterpriseServer:
            return "GitHubEnterpriseServer";
          case ProviderType::S3Bucket:
            return "S3Bucket";
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
  } // namespace CodeGuruReviewer
} // namespace Aws
