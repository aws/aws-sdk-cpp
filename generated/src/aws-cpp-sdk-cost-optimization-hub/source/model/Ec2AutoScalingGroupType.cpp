/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroupType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostOptimizationHub
  {
    namespace Model
    {
      namespace Ec2AutoScalingGroupTypeMapper
      {

        static const int SingleInstanceType_HASH = HashingUtils::HashString("SingleInstanceType");
        static const int MixedInstanceTypes_HASH = HashingUtils::HashString("MixedInstanceTypes");


        Ec2AutoScalingGroupType GetEc2AutoScalingGroupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleInstanceType_HASH)
          {
            return Ec2AutoScalingGroupType::SingleInstanceType;
          }
          else if (hashCode == MixedInstanceTypes_HASH)
          {
            return Ec2AutoScalingGroupType::MixedInstanceTypes;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2AutoScalingGroupType>(hashCode);
          }

          return Ec2AutoScalingGroupType::NOT_SET;
        }

        Aws::String GetNameForEc2AutoScalingGroupType(Ec2AutoScalingGroupType enumValue)
        {
          switch(enumValue)
          {
          case Ec2AutoScalingGroupType::NOT_SET:
            return {};
          case Ec2AutoScalingGroupType::SingleInstanceType:
            return "SingleInstanceType";
          case Ec2AutoScalingGroupType::MixedInstanceTypes:
            return "MixedInstanceTypes";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2AutoScalingGroupTypeMapper
    } // namespace Model
  } // namespace CostOptimizationHub
} // namespace Aws
