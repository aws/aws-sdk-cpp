/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace ImageStateChangeReasonCodeMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int IMAGE_BUILDER_NOT_AVAILABLE_HASH = HashingUtils::HashString("IMAGE_BUILDER_NOT_AVAILABLE");
        static const int IMAGE_COPY_FAILURE_HASH = HashingUtils::HashString("IMAGE_COPY_FAILURE");


        ImageStateChangeReasonCode GetImageStateChangeReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ImageStateChangeReasonCode::INTERNAL_ERROR;
          }
          else if (hashCode == IMAGE_BUILDER_NOT_AVAILABLE_HASH)
          {
            return ImageStateChangeReasonCode::IMAGE_BUILDER_NOT_AVAILABLE;
          }
          else if (hashCode == IMAGE_COPY_FAILURE_HASH)
          {
            return ImageStateChangeReasonCode::IMAGE_COPY_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageStateChangeReasonCode>(hashCode);
          }

          return ImageStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForImageStateChangeReasonCode(ImageStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case ImageStateChangeReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ImageStateChangeReasonCode::IMAGE_BUILDER_NOT_AVAILABLE:
            return "IMAGE_BUILDER_NOT_AVAILABLE";
          case ImageStateChangeReasonCode::IMAGE_COPY_FAILURE:
            return "IMAGE_COPY_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
