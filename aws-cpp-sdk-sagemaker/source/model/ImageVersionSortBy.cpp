/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImageVersionSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ImageVersionSortByMapper
      {

        static const int CREATION_TIME_HASH = HashingUtils::HashString("CREATION_TIME");
        static const int LAST_MODIFIED_TIME_HASH = HashingUtils::HashString("LAST_MODIFIED_TIME");
        static const int VERSION_HASH = HashingUtils::HashString("VERSION");


        ImageVersionSortBy GetImageVersionSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_TIME_HASH)
          {
            return ImageVersionSortBy::CREATION_TIME;
          }
          else if (hashCode == LAST_MODIFIED_TIME_HASH)
          {
            return ImageVersionSortBy::LAST_MODIFIED_TIME;
          }
          else if (hashCode == VERSION_HASH)
          {
            return ImageVersionSortBy::VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageVersionSortBy>(hashCode);
          }

          return ImageVersionSortBy::NOT_SET;
        }

        Aws::String GetNameForImageVersionSortBy(ImageVersionSortBy enumValue)
        {
          switch(enumValue)
          {
          case ImageVersionSortBy::CREATION_TIME:
            return "CREATION_TIME";
          case ImageVersionSortBy::LAST_MODIFIED_TIME:
            return "LAST_MODIFIED_TIME";
          case ImageVersionSortBy::VERSION:
            return "VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageVersionSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
