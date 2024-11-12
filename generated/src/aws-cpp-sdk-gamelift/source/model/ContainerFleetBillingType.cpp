/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerFleetBillingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ContainerFleetBillingTypeMapper
      {

        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
        static const int SPOT_HASH = HashingUtils::HashString("SPOT");


        ContainerFleetBillingType GetContainerFleetBillingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_HASH)
          {
            return ContainerFleetBillingType::ON_DEMAND;
          }
          else if (hashCode == SPOT_HASH)
          {
            return ContainerFleetBillingType::SPOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerFleetBillingType>(hashCode);
          }

          return ContainerFleetBillingType::NOT_SET;
        }

        Aws::String GetNameForContainerFleetBillingType(ContainerFleetBillingType enumValue)
        {
          switch(enumValue)
          {
          case ContainerFleetBillingType::NOT_SET:
            return {};
          case ContainerFleetBillingType::ON_DEMAND:
            return "ON_DEMAND";
          case ContainerFleetBillingType::SPOT:
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

      } // namespace ContainerFleetBillingTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
