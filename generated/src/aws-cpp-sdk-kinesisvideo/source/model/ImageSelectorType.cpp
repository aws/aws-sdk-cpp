/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ImageSelectorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace ImageSelectorTypeMapper
      {

        static const int SERVER_TIMESTAMP_HASH = HashingUtils::HashString("SERVER_TIMESTAMP");
        static const int PRODUCER_TIMESTAMP_HASH = HashingUtils::HashString("PRODUCER_TIMESTAMP");


        ImageSelectorType GetImageSelectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVER_TIMESTAMP_HASH)
          {
            return ImageSelectorType::SERVER_TIMESTAMP;
          }
          else if (hashCode == PRODUCER_TIMESTAMP_HASH)
          {
            return ImageSelectorType::PRODUCER_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageSelectorType>(hashCode);
          }

          return ImageSelectorType::NOT_SET;
        }

        Aws::String GetNameForImageSelectorType(ImageSelectorType enumValue)
        {
          switch(enumValue)
          {
          case ImageSelectorType::NOT_SET:
            return {};
          case ImageSelectorType::SERVER_TIMESTAMP:
            return "SERVER_TIMESTAMP";
          case ImageSelectorType::PRODUCER_TIMESTAMP:
            return "PRODUCER_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageSelectorTypeMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
