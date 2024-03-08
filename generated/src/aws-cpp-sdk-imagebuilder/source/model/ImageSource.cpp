/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace ImageSourceMapper
      {

        static const int AMAZON_MANAGED_HASH = HashingUtils::HashString("AMAZON_MANAGED");
        static const int AWS_MARKETPLACE_HASH = HashingUtils::HashString("AWS_MARKETPLACE");
        static const int IMPORTED_HASH = HashingUtils::HashString("IMPORTED");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        ImageSource GetImageSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMAZON_MANAGED_HASH)
          {
            return ImageSource::AMAZON_MANAGED;
          }
          else if (hashCode == AWS_MARKETPLACE_HASH)
          {
            return ImageSource::AWS_MARKETPLACE;
          }
          else if (hashCode == IMPORTED_HASH)
          {
            return ImageSource::IMPORTED;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ImageSource::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageSource>(hashCode);
          }

          return ImageSource::NOT_SET;
        }

        Aws::String GetNameForImageSource(ImageSource enumValue)
        {
          switch(enumValue)
          {
          case ImageSource::NOT_SET:
            return {};
          case ImageSource::AMAZON_MANAGED:
            return "AMAZON_MANAGED";
          case ImageSource::AWS_MARKETPLACE:
            return "AWS_MARKETPLACE";
          case ImageSource::IMPORTED:
            return "IMPORTED";
          case ImageSource::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageSourceMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
