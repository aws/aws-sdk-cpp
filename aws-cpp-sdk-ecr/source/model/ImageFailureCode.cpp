/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace ImageFailureCodeMapper
      {

        static const int InvalidImageDigest_HASH = HashingUtils::HashString("InvalidImageDigest");
        static const int InvalidImageTag_HASH = HashingUtils::HashString("InvalidImageTag");
        static const int ImageTagDoesNotMatchDigest_HASH = HashingUtils::HashString("ImageTagDoesNotMatchDigest");
        static const int ImageNotFound_HASH = HashingUtils::HashString("ImageNotFound");
        static const int MissingDigestAndTag_HASH = HashingUtils::HashString("MissingDigestAndTag");
        static const int ImageReferencedByManifestList_HASH = HashingUtils::HashString("ImageReferencedByManifestList");
        static const int KmsError_HASH = HashingUtils::HashString("KmsError");


        ImageFailureCode GetImageFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace ECR
} // namespace Aws
