/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/PlatformDifference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace PlatformDifferenceMapper
      {

        static constexpr uint32_t Hypervisor_HASH = ConstExprHashingUtils::HashString("Hypervisor");
        static constexpr uint32_t NetworkInterface_HASH = ConstExprHashingUtils::HashString("NetworkInterface");
        static constexpr uint32_t StorageInterface_HASH = ConstExprHashingUtils::HashString("StorageInterface");
        static constexpr uint32_t InstanceStoreAvailability_HASH = ConstExprHashingUtils::HashString("InstanceStoreAvailability");
        static constexpr uint32_t VirtualizationType_HASH = ConstExprHashingUtils::HashString("VirtualizationType");
        static constexpr uint32_t Architecture_HASH = ConstExprHashingUtils::HashString("Architecture");


        PlatformDifference GetPlatformDifferenceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Hypervisor_HASH)
          {
            return PlatformDifference::Hypervisor;
          }
          else if (hashCode == NetworkInterface_HASH)
          {
            return PlatformDifference::NetworkInterface;
          }
          else if (hashCode == StorageInterface_HASH)
          {
            return PlatformDifference::StorageInterface;
          }
          else if (hashCode == InstanceStoreAvailability_HASH)
          {
            return PlatformDifference::InstanceStoreAvailability;
          }
          else if (hashCode == VirtualizationType_HASH)
          {
            return PlatformDifference::VirtualizationType;
          }
          else if (hashCode == Architecture_HASH)
          {
            return PlatformDifference::Architecture;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlatformDifference>(hashCode);
          }

          return PlatformDifference::NOT_SET;
        }

        Aws::String GetNameForPlatformDifference(PlatformDifference enumValue)
        {
          switch(enumValue)
          {
          case PlatformDifference::NOT_SET:
            return {};
          case PlatformDifference::Hypervisor:
            return "Hypervisor";
          case PlatformDifference::NetworkInterface:
            return "NetworkInterface";
          case PlatformDifference::StorageInterface:
            return "StorageInterface";
          case PlatformDifference::InstanceStoreAvailability:
            return "InstanceStoreAvailability";
          case PlatformDifference::VirtualizationType:
            return "VirtualizationType";
          case PlatformDifference::Architecture:
            return "Architecture";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformDifferenceMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
