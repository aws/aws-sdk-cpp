/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageBuilderStateChangeReasonCode.h>
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
      namespace ImageBuilderStateChangeReasonCodeMapper
      {

        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t IMAGE_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("IMAGE_UNAVAILABLE");


        ImageBuilderStateChangeReasonCode GetImageBuilderStateChangeReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ImageBuilderStateChangeReasonCode::INTERNAL_ERROR;
          }
          else if (hashCode == IMAGE_UNAVAILABLE_HASH)
          {
            return ImageBuilderStateChangeReasonCode::IMAGE_UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageBuilderStateChangeReasonCode>(hashCode);
          }

          return ImageBuilderStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForImageBuilderStateChangeReasonCode(ImageBuilderStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case ImageBuilderStateChangeReasonCode::NOT_SET:
            return {};
          case ImageBuilderStateChangeReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ImageBuilderStateChangeReasonCode::IMAGE_UNAVAILABLE:
            return "IMAGE_UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageBuilderStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
