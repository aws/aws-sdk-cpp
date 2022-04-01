/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace ArtifactNamespaceMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
