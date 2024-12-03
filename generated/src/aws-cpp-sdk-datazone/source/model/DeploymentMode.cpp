/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeploymentMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DeploymentModeMapper
      {

        static const int ON_CREATE_HASH = HashingUtils::HashString("ON_CREATE");
        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");


        DeploymentMode GetDeploymentModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_CREATE_HASH)
          {
            return DeploymentMode::ON_CREATE;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return DeploymentMode::ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentMode>(hashCode);
          }

          return DeploymentMode::NOT_SET;
        }

        Aws::String GetNameForDeploymentMode(DeploymentMode enumValue)
        {
          switch(enumValue)
          {
          case DeploymentMode::NOT_SET:
            return {};
          case DeploymentMode::ON_CREATE:
            return "ON_CREATE";
          case DeploymentMode::ON_DEMAND:
            return "ON_DEMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentModeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
