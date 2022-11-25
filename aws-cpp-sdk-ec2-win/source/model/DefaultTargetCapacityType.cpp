/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DefaultTargetCapacityType.h>
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
      namespace DefaultTargetCapacityTypeMapper
      {

        static const int spot_HASH = HashingUtils::HashString("spot");
        static const int on_demand_HASH = HashingUtils::HashString("on-demand");


        DefaultTargetCapacityType GetDefaultTargetCapacityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == spot_HASH)
          {
            return DefaultTargetCapacityType::spot;
          }
          else if (hashCode == on_demand_HASH)
          {
            return DefaultTargetCapacityType::on_demand;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultTargetCapacityType>(hashCode);
          }

          return DefaultTargetCapacityType::NOT_SET;
        }

        Aws::String GetNameForDefaultTargetCapacityType(DefaultTargetCapacityType enumValue)
        {
          switch(enumValue)
          {
          case DefaultTargetCapacityType::spot:
            return "spot";
          case DefaultTargetCapacityType::on_demand:
            return "on-demand";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultTargetCapacityTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
