/**
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

        static constexpr uint32_t instanceType_HASH = ConstExprHashingUtils::HashString("instanceType");
        static constexpr uint32_t kernel_HASH = ConstExprHashingUtils::HashString("kernel");
        static constexpr uint32_t ramdisk_HASH = ConstExprHashingUtils::HashString("ramdisk");
        static constexpr uint32_t userData_HASH = ConstExprHashingUtils::HashString("userData");
        static constexpr uint32_t disableApiTermination_HASH = ConstExprHashingUtils::HashString("disableApiTermination");
        static constexpr uint32_t instanceInitiatedShutdownBehavior_HASH = ConstExprHashingUtils::HashString("instanceInitiatedShutdownBehavior");
        static constexpr uint32_t rootDeviceName_HASH = ConstExprHashingUtils::HashString("rootDeviceName");
        static constexpr uint32_t blockDeviceMapping_HASH = ConstExprHashingUtils::HashString("blockDeviceMapping");
        static constexpr uint32_t productCodes_HASH = ConstExprHashingUtils::HashString("productCodes");
        static constexpr uint32_t sourceDestCheck_HASH = ConstExprHashingUtils::HashString("sourceDestCheck");
        static constexpr uint32_t groupSet_HASH = ConstExprHashingUtils::HashString("groupSet");
        static constexpr uint32_t ebsOptimized_HASH = ConstExprHashingUtils::HashString("ebsOptimized");
        static constexpr uint32_t sriovNetSupport_HASH = ConstExprHashingUtils::HashString("sriovNetSupport");
        static constexpr uint32_t enaSupport_HASH = ConstExprHashingUtils::HashString("enaSupport");
        static constexpr uint32_t enclaveOptions_HASH = ConstExprHashingUtils::HashString("enclaveOptions");
        static constexpr uint32_t disableApiStop_HASH = ConstExprHashingUtils::HashString("disableApiStop");


        InstanceAttributeName GetInstanceAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
