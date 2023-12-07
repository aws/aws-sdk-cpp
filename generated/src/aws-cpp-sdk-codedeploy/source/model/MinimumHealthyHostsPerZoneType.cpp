/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/MinimumHealthyHostsPerZoneType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace MinimumHealthyHostsPerZoneTypeMapper
      {

        static const int HOST_COUNT_HASH = HashingUtils::HashString("HOST_COUNT");
        static const int FLEET_PERCENT_HASH = HashingUtils::HashString("FLEET_PERCENT");


        MinimumHealthyHostsPerZoneType GetMinimumHealthyHostsPerZoneTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOST_COUNT_HASH)
          {
            return MinimumHealthyHostsPerZoneType::HOST_COUNT;
          }
          else if (hashCode == FLEET_PERCENT_HASH)
          {
            return MinimumHealthyHostsPerZoneType::FLEET_PERCENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MinimumHealthyHostsPerZoneType>(hashCode);
          }

          return MinimumHealthyHostsPerZoneType::NOT_SET;
        }

        Aws::String GetNameForMinimumHealthyHostsPerZoneType(MinimumHealthyHostsPerZoneType enumValue)
        {
          switch(enumValue)
          {
          case MinimumHealthyHostsPerZoneType::NOT_SET:
            return {};
          case MinimumHealthyHostsPerZoneType::HOST_COUNT:
            return "HOST_COUNT";
          case MinimumHealthyHostsPerZoneType::FLEET_PERCENT:
            return "FLEET_PERCENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MinimumHealthyHostsPerZoneTypeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
