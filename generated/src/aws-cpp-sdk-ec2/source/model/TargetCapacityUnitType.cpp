/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TargetCapacityUnitType.h>
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
      namespace TargetCapacityUnitTypeMapper
      {

        static const int vcpu_HASH = HashingUtils::HashString("vcpu");
        static const int memory_mib_HASH = HashingUtils::HashString("memory-mib");
        static const int units_HASH = HashingUtils::HashString("units");


        TargetCapacityUnitType GetTargetCapacityUnitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vcpu_HASH)
          {
            return TargetCapacityUnitType::vcpu;
          }
          else if (hashCode == memory_mib_HASH)
          {
            return TargetCapacityUnitType::memory_mib;
          }
          else if (hashCode == units_HASH)
          {
            return TargetCapacityUnitType::units;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetCapacityUnitType>(hashCode);
          }

          return TargetCapacityUnitType::NOT_SET;
        }

        Aws::String GetNameForTargetCapacityUnitType(TargetCapacityUnitType enumValue)
        {
          switch(enumValue)
          {
          case TargetCapacityUnitType::NOT_SET:
            return {};
          case TargetCapacityUnitType::vcpu:
            return "vcpu";
          case TargetCapacityUnitType::memory_mib:
            return "memory-mib";
          case TargetCapacityUnitType::units:
            return "units";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetCapacityUnitTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
