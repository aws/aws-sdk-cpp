/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ScalingAdjustmentType.h>
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
      namespace ScalingAdjustmentTypeMapper
      {

        static constexpr uint32_t ChangeInCapacity_HASH = ConstExprHashingUtils::HashString("ChangeInCapacity");
        static constexpr uint32_t ExactCapacity_HASH = ConstExprHashingUtils::HashString("ExactCapacity");
        static constexpr uint32_t PercentChangeInCapacity_HASH = ConstExprHashingUtils::HashString("PercentChangeInCapacity");


        ScalingAdjustmentType GetScalingAdjustmentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ChangeInCapacity_HASH)
          {
            return ScalingAdjustmentType::ChangeInCapacity;
          }
          else if (hashCode == ExactCapacity_HASH)
          {
            return ScalingAdjustmentType::ExactCapacity;
          }
          else if (hashCode == PercentChangeInCapacity_HASH)
          {
            return ScalingAdjustmentType::PercentChangeInCapacity;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingAdjustmentType>(hashCode);
          }

          return ScalingAdjustmentType::NOT_SET;
        }

        Aws::String GetNameForScalingAdjustmentType(ScalingAdjustmentType enumValue)
        {
          switch(enumValue)
          {
          case ScalingAdjustmentType::NOT_SET:
            return {};
          case ScalingAdjustmentType::ChangeInCapacity:
            return "ChangeInCapacity";
          case ScalingAdjustmentType::ExactCapacity:
            return "ExactCapacity";
          case ScalingAdjustmentType::PercentChangeInCapacity:
            return "PercentChangeInCapacity";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingAdjustmentTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
