/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ArtifactPackaging.h>
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
      namespace ArtifactPackagingMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t ZIP_HASH = ConstExprHashingUtils::HashString("ZIP");


        ArtifactPackaging GetArtifactPackagingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ArtifactPackaging::NONE;
          }
          else if (hashCode == ZIP_HASH)
          {
            return ArtifactPackaging::ZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactPackaging>(hashCode);
          }

          return ArtifactPackaging::NOT_SET;
        }

        Aws::String GetNameForArtifactPackaging(ArtifactPackaging enumValue)
        {
          switch(enumValue)
          {
          case ArtifactPackaging::NOT_SET:
            return {};
          case ArtifactPackaging::NONE:
            return "NONE";
          case ArtifactPackaging::ZIP:
            return "ZIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArtifactPackagingMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
