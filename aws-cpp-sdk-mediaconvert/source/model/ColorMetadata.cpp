/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ColorMetadata.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace ColorMetadataMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int INSERT_HASH = HashingUtils::HashString("INSERT");


        ColorMetadata GetColorMetadataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return ColorMetadata::IGNORE;
          }
          else if (hashCode == INSERT_HASH)
          {
            return ColorMetadata::INSERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorMetadata>(hashCode);
          }

          return ColorMetadata::NOT_SET;
        }

        Aws::String GetNameForColorMetadata(ColorMetadata enumValue)
        {
          switch(enumValue)
          {
          case ColorMetadata::IGNORE:
            return "IGNORE";
          case ColorMetadata::INSERT:
            return "INSERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorMetadataMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
