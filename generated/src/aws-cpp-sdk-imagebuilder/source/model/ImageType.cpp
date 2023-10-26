/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageType.h>
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
      namespace ImageTypeMapper
      {

        static const int AMI_HASH = HashingUtils::HashString("AMI");
        static const int DOCKER_HASH = HashingUtils::HashString("DOCKER");


        ImageType GetImageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMI_HASH)
          {
            return ImageType::AMI;
          }
          else if (hashCode == DOCKER_HASH)
          {
            return ImageType::DOCKER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageType>(hashCode);
          }

          return ImageType::NOT_SET;
        }

        Aws::String GetNameForImageType(ImageType enumValue)
        {
          switch(enumValue)
          {
          case ImageType::NOT_SET:
            return {};
          case ImageType::AMI:
            return "AMI";
          case ImageType::DOCKER:
            return "DOCKER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
