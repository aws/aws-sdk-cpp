/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/SpotProvisioningTimeoutAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace SpotProvisioningTimeoutActionMapper
      {

        static const int SWITCH_TO_ON_DEMAND_HASH = HashingUtils::HashString("SWITCH_TO_ON_DEMAND");
        static const int TERMINATE_CLUSTER_HASH = HashingUtils::HashString("TERMINATE_CLUSTER");


        SpotProvisioningTimeoutAction GetSpotProvisioningTimeoutActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SWITCH_TO_ON_DEMAND_HASH)
          {
            return SpotProvisioningTimeoutAction::SWITCH_TO_ON_DEMAND;
          }
          else if (hashCode == TERMINATE_CLUSTER_HASH)
          {
            return SpotProvisioningTimeoutAction::TERMINATE_CLUSTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpotProvisioningTimeoutAction>(hashCode);
          }

          return SpotProvisioningTimeoutAction::NOT_SET;
        }

        Aws::String GetNameForSpotProvisioningTimeoutAction(SpotProvisioningTimeoutAction enumValue)
        {
          switch(enumValue)
          {
          case SpotProvisioningTimeoutAction::SWITCH_TO_ON_DEMAND:
            return "SWITCH_TO_ON_DEMAND";
          case SpotProvisioningTimeoutAction::TERMINATE_CLUSTER:
            return "TERMINATE_CLUSTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpotProvisioningTimeoutActionMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
