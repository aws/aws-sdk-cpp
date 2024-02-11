/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ImageRepositoryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace ImageRepositoryTypeMapper
      {

        static const int ECR_HASH = HashingUtils::HashString("ECR");
        static const int ECR_PUBLIC_HASH = HashingUtils::HashString("ECR_PUBLIC");


        ImageRepositoryType GetImageRepositoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECR_HASH)
          {
            return ImageRepositoryType::ECR;
          }
          else if (hashCode == ECR_PUBLIC_HASH)
          {
            return ImageRepositoryType::ECR_PUBLIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageRepositoryType>(hashCode);
          }

          return ImageRepositoryType::NOT_SET;
        }

        Aws::String GetNameForImageRepositoryType(ImageRepositoryType enumValue)
        {
          switch(enumValue)
          {
          case ImageRepositoryType::NOT_SET:
            return {};
          case ImageRepositoryType::ECR:
            return "ECR";
          case ImageRepositoryType::ECR_PUBLIC:
            return "ECR_PUBLIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageRepositoryTypeMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
