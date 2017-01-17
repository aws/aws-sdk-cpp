﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
