/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/CapacityTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace CapacityTypesMapper
      {

        static constexpr uint32_t ON_DEMAND_HASH = ConstExprHashingUtils::HashString("ON_DEMAND");
        static constexpr uint32_t SPOT_HASH = ConstExprHashingUtils::HashString("SPOT");


        CapacityTypes GetCapacityTypesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_HASH)
          {
            return CapacityTypes::ON_DEMAND;
          }
          else if (hashCode == SPOT_HASH)
          {
            return CapacityTypes::SPOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityTypes>(hashCode);
          }

          return CapacityTypes::NOT_SET;
        }

        Aws::String GetNameForCapacityTypes(CapacityTypes enumValue)
        {
          switch(enumValue)
          {
          case CapacityTypes::NOT_SET:
            return {};
          case CapacityTypes::ON_DEMAND:
            return "ON_DEMAND";
          case CapacityTypes::SPOT:
            return "SPOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityTypesMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
