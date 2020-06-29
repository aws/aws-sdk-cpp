/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ServerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace ServerTypeMapper
      {

        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int BITBUCKET_HASH = HashingUtils::HashString("BITBUCKET");
        static const int GITHUB_ENTERPRISE_HASH = HashingUtils::HashString("GITHUB_ENTERPRISE");


        ServerType GetServerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_HASH)
          {
            return ServerType::GITHUB;
          }
          else if (hashCode == BITBUCKET_HASH)
          {
            return ServerType::BITBUCKET;
          }
          else if (hashCode == GITHUB_ENTERPRISE_HASH)
          {
            return ServerType::GITHUB_ENTERPRISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerType>(hashCode);
          }

          return ServerType::NOT_SET;
        }

        Aws::String GetNameForServerType(ServerType enumValue)
        {
          switch(enumValue)
          {
          case ServerType::GITHUB:
            return "GITHUB";
          case ServerType::BITBUCKET:
            return "BITBUCKET";
          case ServerType::GITHUB_ENTERPRISE:
            return "GITHUB_ENTERPRISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
