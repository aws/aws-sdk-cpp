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
#include <aws/codebuild/model/ArtifactNamespace.h>
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
      namespace ArtifactNamespaceMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int BUILD_ID_HASH = HashingUtils::HashString("BUILD_ID");


        ArtifactNamespace GetArtifactNamespaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ArtifactNamespace::NONE;
          }
          else if (hashCode == BUILD_ID_HASH)
          {
            return ArtifactNamespace::BUILD_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactNamespace>(hashCode);
          }

          return ArtifactNamespace::NOT_SET;
        }

        Aws::String GetNameForArtifactNamespace(ArtifactNamespace enumValue)
        {
          switch(enumValue)
          {
          case ArtifactNamespace::NONE:
            return "NONE";
          case ArtifactNamespace::BUILD_ID:
            return "BUILD_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ArtifactNamespaceMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
