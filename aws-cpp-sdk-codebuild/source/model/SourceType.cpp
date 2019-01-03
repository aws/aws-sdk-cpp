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

#include <aws/codebuild/model/SourceType.h>
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
      namespace SourceTypeMapper
      {

        static const int CODECOMMIT_HASH = HashingUtils::HashString("CODECOMMIT");
        static const int CODEPIPELINE_HASH = HashingUtils::HashString("CODEPIPELINE");
        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int BITBUCKET_HASH = HashingUtils::HashString("BITBUCKET");
        static const int GITHUB_ENTERPRISE_HASH = HashingUtils::HashString("GITHUB_ENTERPRISE");
        static const int NO_SOURCE_HASH = HashingUtils::HashString("NO_SOURCE");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODECOMMIT_HASH)
          {
            return SourceType::CODECOMMIT;
          }
          else if (hashCode == CODEPIPELINE_HASH)
          {
            return SourceType::CODEPIPELINE;
          }
          else if (hashCode == GITHUB_HASH)
          {
            return SourceType::GITHUB;
          }
          else if (hashCode == S3_HASH)
          {
            return SourceType::S3;
          }
          else if (hashCode == BITBUCKET_HASH)
          {
            return SourceType::BITBUCKET;
          }
          else if (hashCode == GITHUB_ENTERPRISE_HASH)
          {
            return SourceType::GITHUB_ENTERPRISE;
          }
          else if (hashCode == NO_SOURCE_HASH)
          {
            return SourceType::NO_SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::CODECOMMIT:
            return "CODECOMMIT";
          case SourceType::CODEPIPELINE:
            return "CODEPIPELINE";
          case SourceType::GITHUB:
            return "GITHUB";
          case SourceType::S3:
            return "S3";
          case SourceType::BITBUCKET:
            return "BITBUCKET";
          case SourceType::GITHUB_ENTERPRISE:
            return "GITHUB_ENTERPRISE";
          case SourceType::NO_SOURCE:
            return "NO_SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
