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

        static const int Hypervisor_HASH = HashingUtils::HashString("Hypervisor");
        static const int NetworkInterface_HASH = HashingUtils::HashString("NetworkInterface");
        static const int StorageInterface_HASH = HashingUtils::HashString("StorageInterface");
        static const int InstanceStoreAvailability_HASH = HashingUtils::HashString("InstanceStoreAvailability");
        static const int VirtualizationType_HASH = HashingUtils::HashString("VirtualizationType");
        static const int Architecture_HASH = HashingUtils::HashString("Architecture");


        PlatformDifference GetPlatformDifferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
