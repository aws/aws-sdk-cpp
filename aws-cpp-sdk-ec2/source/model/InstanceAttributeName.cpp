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
#include <aws/ec2/model/InstanceAttributeName.h>
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
      namespace InstanceAttributeNameMapper
      {

        static const int instanceType_HASH = HashingUtils::HashString("instanceType");
        static const int kernel_HASH = HashingUtils::HashString("kernel");
        static const int ramdisk_HASH = HashingUtils::HashString("ramdisk");
        static const int userData_HASH = HashingUtils::HashString("userData");
        static const int disableApiTermination_HASH = HashingUtils::HashString("disableApiTermination");
        static const int instanceInitiatedShutdownBehavior_HASH = HashingUtils::HashString("instanceInitiatedShutdownBehavior");
        static const int rootDeviceName_HASH = HashingUtils::HashString("rootDeviceName");
        static const int blockDeviceMapping_HASH = HashingUtils::HashString("blockDeviceMapping");
        static const int productCodes_HASH = HashingUtils::HashString("productCodes");
        static const int sourceDestCheck_HASH = HashingUtils::HashString("sourceDestCheck");
        static const int groupSet_HASH = HashingUtils::HashString("groupSet");
        static const int ebsOptimized_HASH = HashingUtils::HashString("ebsOptimized");
        static const int sriovNetSupport_HASH = HashingUtils::HashString("sriovNetSupport");


        InstanceAttributeName GetInstanceAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == instanceType_HASH)
          {
            return InstanceAttributeName::instanceType;
          }
          else if (hashCode == kernel_HASH)
          {
            return InstanceAttributeName::kernel;
          }
          else if (hashCode == ramdisk_HASH)
          {
            return InstanceAttributeName::ramdisk;
          }
          else if (hashCode == userData_HASH)
          {
            return InstanceAttributeName::userData;
          }
          else if (hashCode == disableApiTermination_HASH)
          {
            return InstanceAttributeName::disableApiTermination;
          }
          else if (hashCode == instanceInitiatedShutdownBehavior_HASH)
          {
            return InstanceAttributeName::instanceInitiatedShutdownBehavior;
          }
          else if (hashCode == rootDeviceName_HASH)
          {
            return InstanceAttributeName::rootDeviceName;
          }
          else if (hashCode == blockDeviceMapping_HASH)
          {
            return InstanceAttributeName::blockDeviceMapping;
          }
          else if (hashCode == productCodes_HASH)
          {
            return InstanceAttributeName::productCodes;
          }
          else if (hashCode == sourceDestCheck_HASH)
          {
            return InstanceAttributeName::sourceDestCheck;
          }
          else if (hashCode == groupSet_HASH)
          {
            return InstanceAttributeName::groupSet;
          }
          else if (hashCode == ebsOptimized_HASH)
          {
            return InstanceAttributeName::ebsOptimized;
          }
          else if (hashCode == sriovNetSupport_HASH)
          {
            return InstanceAttributeName::sriovNetSupport;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceAttributeName>(hashCode);
          }

          return InstanceAttributeName::NOT_SET;
        }

        Aws::String GetNameForInstanceAttributeName(InstanceAttributeName enumValue)
        {
          switch(enumValue)
          {
          case InstanceAttributeName::instanceType:
            return "instanceType";
          case InstanceAttributeName::kernel:
            return "kernel";
          case InstanceAttributeName::ramdisk:
            return "ramdisk";
          case InstanceAttributeName::userData:
            return "userData";
          case InstanceAttributeName::disableApiTermination:
            return "disableApiTermination";
          case InstanceAttributeName::instanceInitiatedShutdownBehavior:
            return "instanceInitiatedShutdownBehavior";
          case InstanceAttributeName::rootDeviceName:
            return "rootDeviceName";
          case InstanceAttributeName::blockDeviceMapping:
            return "blockDeviceMapping";
          case InstanceAttributeName::productCodes:
            return "productCodes";
          case InstanceAttributeName::sourceDestCheck:
            return "sourceDestCheck";
          case InstanceAttributeName::groupSet:
            return "groupSet";
          case InstanceAttributeName::ebsOptimized:
            return "ebsOptimized";
          case InstanceAttributeName::sriovNetSupport:
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

      } // namespace InstanceAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
