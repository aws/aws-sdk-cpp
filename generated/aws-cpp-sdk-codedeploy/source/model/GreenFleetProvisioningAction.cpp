/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/GreenFleetProvisioningAction.h>
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
      namespace GreenFleetProvisioningActionMapper
      {

        static const int DISCOVER_EXISTING_HASH = HashingUtils::HashString("DISCOVER_EXISTING");
        static const int COPY_AUTO_SCALING_GROUP_HASH = HashingUtils::HashString("COPY_AUTO_SCALING_GROUP");


        GreenFleetProvisioningAction GetGreenFleetProvisioningActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCOVER_EXISTING_HASH)
          {
            return GreenFleetProvisioningAction::DISCOVER_EXISTING;
          }
          else if (hashCode == COPY_AUTO_SCALING_GROUP_HASH)
          {
            return GreenFleetProvisioningAction::COPY_AUTO_SCALING_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GreenFleetProvisioningAction>(hashCode);
          }

          return GreenFleetProvisioningAction::NOT_SET;
        }

        Aws::String GetNameForGreenFleetProvisioningAction(GreenFleetProvisioningAction enumValue)
        {
          switch(enumValue)
          {
          case GreenFleetProvisioningAction::DISCOVER_EXISTING:
            return "DISCOVER_EXISTING";
          case GreenFleetProvisioningAction::COPY_AUTO_SCALING_GROUP:
            return "COPY_AUTO_SCALING_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GreenFleetProvisioningActionMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
