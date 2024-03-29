﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int enaSupport_HASH = HashingUtils::HashString("enaSupport");
        static const int enclaveOptions_HASH = HashingUtils::HashString("enclaveOptions");
        static const int disableApiStop_HASH = HashingUtils::HashString("disableApiStop");


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
          else if (hashCode == enaSupport_HASH)
          {
            return InstanceAttributeName::enaSupport;
          }
          else if (hashCode == enclaveOptions_HASH)
          {
            return InstanceAttributeName::enclaveOptions;
          }
          else if (hashCode == disableApiStop_HASH)
          {
            return InstanceAttributeName::disableApiStop;
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
          case InstanceAttributeName::NOT_SET:
            return {};
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
          case InstanceAttributeName::enaSupport:
            return "enaSupport";
          case InstanceAttributeName::enclaveOptions:
            return "enclaveOptions";
          case InstanceAttributeName::disableApiStop:
            return "disableApiStop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
