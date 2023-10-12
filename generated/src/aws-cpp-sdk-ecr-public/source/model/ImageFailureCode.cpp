/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/ImageFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECRPublic
  {
    namespace Model
    {
      namespace ImageFailureCodeMapper
      {

        static constexpr uint32_t InvalidImageDigest_HASH = ConstExprHashingUtils::HashString("InvalidImageDigest");
        static constexpr uint32_t InvalidImageTag_HASH = ConstExprHashingUtils::HashString("InvalidImageTag");
        static constexpr uint32_t ImageTagDoesNotMatchDigest_HASH = ConstExprHashingUtils::HashString("ImageTagDoesNotMatchDigest");
        static constexpr uint32_t ImageNotFound_HASH = ConstExprHashingUtils::HashString("ImageNotFound");
        static constexpr uint32_t MissingDigestAndTag_HASH = ConstExprHashingUtils::HashString("MissingDigestAndTag");
        static constexpr uint32_t ImageReferencedByManifestList_HASH = ConstExprHashingUtils::HashString("ImageReferencedByManifestList");
        static constexpr uint32_t KmsError_HASH = ConstExprHashingUtils::HashString("KmsError");


        ImageFailureCode GetImageFailureCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidImageDigest_HASH)
          {
            return ImageFailureCode::InvalidImageDigest;
          }
          else if (hashCode == InvalidImageTag_HASH)
          {
            return ImageFailureCode::InvalidImageTag;
          }
          else if (hashCode == ImageTagDoesNotMatchDigest_HASH)
          {
            return ImageFailureCode::ImageTagDoesNotMatchDigest;
          }
          else if (hashCode == ImageNotFound_HASH)
          {
            return ImageFailureCode::ImageNotFound;
          }
          else if (hashCode == MissingDigestAndTag_HASH)
          {
            return ImageFailureCode::MissingDigestAndTag;
          }
          else if (hashCode == ImageReferencedByManifestList_HASH)
          {
            return ImageFailureCode::ImageReferencedByManifestList;
          }
          else if (hashCode == KmsError_HASH)
          {
            return ImageFailureCode::KmsError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageFailureCode>(hashCode);
          }

          return ImageFailureCode::NOT_SET;
        }

        Aws::String GetNameForImageFailureCode(ImageFailureCode enumValue)
        {
          switch(enumValue)
          {
          case ImageFailureCode::NOT_SET:
            return {};
          case ImageFailureCode::InvalidImageDigest:
            return "InvalidImageDigest";
          case ImageFailureCode::InvalidImageTag:
            return "InvalidImageTag";
          case ImageFailureCode::ImageTagDoesNotMatchDigest:
            return "ImageTagDoesNotMatchDigest";
          case ImageFailureCode::ImageNotFound:
            return "ImageNotFound";
          case ImageFailureCode::MissingDigestAndTag:
            return "MissingDigestAndTag";
          case ImageFailureCode::ImageReferencedByManifestList:
            return "ImageReferencedByManifestList";
          case ImageFailureCode::KmsError:
            return "KmsError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageFailureCodeMapper
    } // namespace Model
  } // namespace ECRPublic
} // namespace Aws
