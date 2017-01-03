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
#include <aws/codebuild/model/ArtifactsType.h>
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
      namespace ArtifactsTypeMapper
      {

        static const int CODEPIPELINE_HASH = HashingUtils::HashString("CODEPIPELINE");
        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int NO_ARTIFACTS_HASH = HashingUtils::HashString("NO_ARTIFACTS");


        ArtifactsType GetArtifactsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODEPIPELINE_HASH)
          {
            return ArtifactsType::CODEPIPELINE;
          }
          else if (hashCode == S3_HASH)
          {
            return ArtifactsType::S3;
          }
          else if (hashCode == NO_ARTIFACTS_HASH)
          {
            return ArtifactsType::NO_ARTIFACTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactsType>(hashCode);
          }

          return ArtifactsType::NOT_SET;
        }

        Aws::String GetNameForArtifactsType(ArtifactsType enumValue)
        {
          switch(enumValue)
          {
          case ArtifactsType::CODEPIPELINE:
            return "CODEPIPELINE";
          case ArtifactsType::S3:
            return "S3";
          case ArtifactsType::NO_ARTIFACTS:
            return "NO_ARTIFACTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ArtifactsTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
