/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ImagePullCredentialsType.h>
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
      namespace ImagePullCredentialsTypeMapper
      {

        static const int CODEBUILD_HASH = HashingUtils::HashString("CODEBUILD");
        static const int SERVICE_ROLE_HASH = HashingUtils::HashString("SERVICE_ROLE");


        ImagePullCredentialsType GetImagePullCredentialsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CODEBUILD_HASH)
          {
            return ImagePullCredentialsType::CODEBUILD;
          }
          else if (hashCode == SERVICE_ROLE_HASH)
          {
            return ImagePullCredentialsType::SERVICE_ROLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImagePullCredentialsType>(hashCode);
          }

          return ImagePullCredentialsType::NOT_SET;
        }

        Aws::String GetNameForImagePullCredentialsType(ImagePullCredentialsType enumValue)
        {
          switch(enumValue)
          {
          case ImagePullCredentialsType::CODEBUILD:
            return "CODEBUILD";
          case ImagePullCredentialsType::SERVICE_ROLE:
            return "SERVICE_ROLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImagePullCredentialsTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
