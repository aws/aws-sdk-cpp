/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/ImpairedZoneHealthCheckBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace ImpairedZoneHealthCheckBehaviorMapper
      {

        static const int ReplaceUnhealthy_HASH = HashingUtils::HashString("ReplaceUnhealthy");
        static const int IgnoreUnhealthy_HASH = HashingUtils::HashString("IgnoreUnhealthy");


        ImpairedZoneHealthCheckBehavior GetImpairedZoneHealthCheckBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ReplaceUnhealthy_HASH)
          {
            return ImpairedZoneHealthCheckBehavior::ReplaceUnhealthy;
          }
          else if (hashCode == IgnoreUnhealthy_HASH)
          {
            return ImpairedZoneHealthCheckBehavior::IgnoreUnhealthy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImpairedZoneHealthCheckBehavior>(hashCode);
          }

          return ImpairedZoneHealthCheckBehavior::NOT_SET;
        }

        Aws::String GetNameForImpairedZoneHealthCheckBehavior(ImpairedZoneHealthCheckBehavior enumValue)
        {
          switch(enumValue)
          {
          case ImpairedZoneHealthCheckBehavior::NOT_SET:
            return {};
          case ImpairedZoneHealthCheckBehavior::ReplaceUnhealthy:
            return "ReplaceUnhealthy";
          case ImpairedZoneHealthCheckBehavior::IgnoreUnhealthy:
            return "IgnoreUnhealthy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImpairedZoneHealthCheckBehaviorMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
