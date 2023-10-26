/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/PlatformDifference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace PlatformDifferenceMapper
      {

        static const int HYPERVISOR_HASH = HashingUtils::HashString("HYPERVISOR");
        static const int NETWORK_INTERFACE_HASH = HashingUtils::HashString("NETWORK_INTERFACE");
        static const int STORAGE_INTERFACE_HASH = HashingUtils::HashString("STORAGE_INTERFACE");
        static const int INSTANCE_STORE_AVAILABILITY_HASH = HashingUtils::HashString("INSTANCE_STORE_AVAILABILITY");
        static const int VIRTUALIZATION_TYPE_HASH = HashingUtils::HashString("VIRTUALIZATION_TYPE");


        PlatformDifference GetPlatformDifferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HYPERVISOR_HASH)
          {
            return PlatformDifference::HYPERVISOR;
          }
          else if (hashCode == NETWORK_INTERFACE_HASH)
          {
            return PlatformDifference::NETWORK_INTERFACE;
          }
          else if (hashCode == STORAGE_INTERFACE_HASH)
          {
            return PlatformDifference::STORAGE_INTERFACE;
          }
          else if (hashCode == INSTANCE_STORE_AVAILABILITY_HASH)
          {
            return PlatformDifference::INSTANCE_STORE_AVAILABILITY;
          }
          else if (hashCode == VIRTUALIZATION_TYPE_HASH)
          {
            return PlatformDifference::VIRTUALIZATION_TYPE;
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
          case PlatformDifference::HYPERVISOR:
            return "HYPERVISOR";
          case PlatformDifference::NETWORK_INTERFACE:
            return "NETWORK_INTERFACE";
          case PlatformDifference::STORAGE_INTERFACE:
            return "STORAGE_INTERFACE";
          case PlatformDifference::INSTANCE_STORE_AVAILABILITY:
            return "INSTANCE_STORE_AVAILABILITY";
          case PlatformDifference::VIRTUALIZATION_TYPE:
            return "VIRTUALIZATION_TYPE";
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
  } // namespace CostExplorer
} // namespace Aws
