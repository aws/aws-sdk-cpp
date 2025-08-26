/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageReferenceResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ImageReferenceResourceTypeMapper
      {

        static const int ec2_Instance_HASH = HashingUtils::HashString("ec2:Instance");
        static const int ec2_LaunchTemplate_HASH = HashingUtils::HashString("ec2:LaunchTemplate");
        static const int ssm_Parameter_HASH = HashingUtils::HashString("ssm:Parameter");
        static const int imagebuilder_ImageRecipe_HASH = HashingUtils::HashString("imagebuilder:ImageRecipe");
        static const int imagebuilder_ContainerRecipe_HASH = HashingUtils::HashString("imagebuilder:ContainerRecipe");


        ImageReferenceResourceType GetImageReferenceResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ec2_Instance_HASH)
          {
            return ImageReferenceResourceType::ec2_Instance;
          }
          else if (hashCode == ec2_LaunchTemplate_HASH)
          {
            return ImageReferenceResourceType::ec2_LaunchTemplate;
          }
          else if (hashCode == ssm_Parameter_HASH)
          {
            return ImageReferenceResourceType::ssm_Parameter;
          }
          else if (hashCode == imagebuilder_ImageRecipe_HASH)
          {
            return ImageReferenceResourceType::imagebuilder_ImageRecipe;
          }
          else if (hashCode == imagebuilder_ContainerRecipe_HASH)
          {
            return ImageReferenceResourceType::imagebuilder_ContainerRecipe;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageReferenceResourceType>(hashCode);
          }

          return ImageReferenceResourceType::NOT_SET;
        }

        Aws::String GetNameForImageReferenceResourceType(ImageReferenceResourceType enumValue)
        {
          switch(enumValue)
          {
          case ImageReferenceResourceType::NOT_SET:
            return {};
          case ImageReferenceResourceType::ec2_Instance:
            return "ec2:Instance";
          case ImageReferenceResourceType::ec2_LaunchTemplate:
            return "ec2:LaunchTemplate";
          case ImageReferenceResourceType::ssm_Parameter:
            return "ssm:Parameter";
          case ImageReferenceResourceType::imagebuilder_ImageRecipe:
            return "imagebuilder:ImageRecipe";
          case ImageReferenceResourceType::imagebuilder_ContainerRecipe:
            return "imagebuilder:ContainerRecipe";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageReferenceResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
