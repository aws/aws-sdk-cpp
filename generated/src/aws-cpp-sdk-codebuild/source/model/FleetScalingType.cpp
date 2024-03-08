/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetScalingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace FleetScalingTypeMapper
      {

        static const int TARGET_TRACKING_SCALING_HASH = HashingUtils::HashString("TARGET_TRACKING_SCALING");


        FleetScalingType GetFleetScalingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TARGET_TRACKING_SCALING_HASH)
          {
            return FleetScalingType::TARGET_TRACKING_SCALING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetScalingType>(hashCode);
          }

          return FleetScalingType::NOT_SET;
        }

        Aws::String GetNameForFleetScalingType(FleetScalingType enumValue)
        {
          switch(enumValue)
          {
          case FleetScalingType::NOT_SET:
            return {};
          case FleetScalingType::TARGET_TRACKING_SCALING:
            return "TARGET_TRACKING_SCALING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetScalingTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
