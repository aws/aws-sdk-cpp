/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceHealthStatus.h>
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
      namespace InstanceHealthStatusMapper
      {

        static const int healthy_HASH = HashingUtils::HashString("healthy");
        static const int unhealthy_HASH = HashingUtils::HashString("unhealthy");


        InstanceHealthStatus GetInstanceHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == healthy_HASH)
          {
            return InstanceHealthStatus::healthy;
          }
          else if (hashCode == unhealthy_HASH)
          {
            return InstanceHealthStatus::unhealthy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceHealthStatus>(hashCode);
          }

          return InstanceHealthStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceHealthStatus(InstanceHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceHealthStatus::healthy:
            return "healthy";
          case InstanceHealthStatus::unhealthy:
            return "unhealthy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceHealthStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
