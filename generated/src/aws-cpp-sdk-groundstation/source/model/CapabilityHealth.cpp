/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/CapabilityHealth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace CapabilityHealthMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");


        CapabilityHealth GetCapabilityHealthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return CapabilityHealth::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return CapabilityHealth::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapabilityHealth>(hashCode);
          }

          return CapabilityHealth::NOT_SET;
        }

        Aws::String GetNameForCapabilityHealth(CapabilityHealth enumValue)
        {
          switch(enumValue)
          {
          case CapabilityHealth::NOT_SET:
            return {};
          case CapabilityHealth::HEALTHY:
            return "HEALTHY";
          case CapabilityHealth::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapabilityHealthMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
