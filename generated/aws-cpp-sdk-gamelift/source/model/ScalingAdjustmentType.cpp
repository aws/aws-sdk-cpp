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

        static const int ChangeInCapacity_HASH = HashingUtils::HashString("ChangeInCapacity");
        static const int ExactCapacity_HASH = HashingUtils::HashString("ExactCapacity");
        static const int PercentChangeInCapacity_HASH = HashingUtils::HashString("PercentChangeInCapacity");


        ScalingAdjustmentType GetScalingAdjustmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
