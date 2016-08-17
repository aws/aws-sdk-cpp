/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/ImageAttributeName.h>
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
      namespace ImageAttributeNameMapper
      {

        static const int description_HASH = HashingUtils::HashString("description");
        static const int kernel_HASH = HashingUtils::HashString("kernel");
        static const int ramdisk_HASH = HashingUtils::HashString("ramdisk");
        static const int launchPermission_HASH = HashingUtils::HashString("launchPermission");
        static const int productCodes_HASH = HashingUtils::HashString("productCodes");
        static const int blockDeviceMapping_HASH = HashingUtils::HashString("blockDeviceMapping");
        static const int sriovNetSupport_HASH = HashingUtils::HashString("sriovNetSupport");


        ImageAttributeName GetImageAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == description_HASH)
          {
            return ImageAttributeName::description;
          }
          else if (hashCode == kernel_HASH)
          {
            return ImageAttributeName::kernel;
          }
          else if (hashCode == ramdisk_HASH)
          {
            return ImageAttributeName::ramdisk;
          }
          else if (hashCode == launchPermission_HASH)
          {
            return ImageAttributeName::launchPermission;
          }
          else if (hashCode == productCodes_HASH)
          {
            return ImageAttributeName::productCodes;
          }
          else if (hashCode == blockDeviceMapping_HASH)
          {
            return ImageAttributeName::blockDeviceMapping;
          }
          else if (hashCode == sriovNetSupport_HASH)
          {
            return ImageAttributeName::sriovNetSupport;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageAttributeName>(hashCode);
          }

          return ImageAttributeName::NOT_SET;
        }

        Aws::String GetNameForImageAttributeName(ImageAttributeName enumValue)
        {
          switch(enumValue)
          {
          case ImageAttributeName::description:
            return "description";
          case ImageAttributeName::kernel:
            return "kernel";
          case ImageAttributeName::ramdisk:
            return "ramdisk";
          case ImageAttributeName::launchPermission:
            return "launchPermission";
          case ImageAttributeName::productCodes:
            return "productCodes";
          case ImageAttributeName::blockDeviceMapping:
            return "blockDeviceMapping";
          case ImageAttributeName::sriovNetSupport:
            return "sriovNetSupport";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ImageAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
