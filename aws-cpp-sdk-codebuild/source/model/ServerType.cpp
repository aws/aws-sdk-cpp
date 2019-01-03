/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
