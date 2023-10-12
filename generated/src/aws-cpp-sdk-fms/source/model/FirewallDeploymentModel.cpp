/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/FirewallDeploymentModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace FirewallDeploymentModelMapper
      {

        static constexpr uint32_t CENTRALIZED_HASH = ConstExprHashingUtils::HashString("CENTRALIZED");
        static constexpr uint32_t DISTRIBUTED_HASH = ConstExprHashingUtils::HashString("DISTRIBUTED");


        FirewallDeploymentModel GetFirewallDeploymentModelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENTRALIZED_HASH)
          {
            return FirewallDeploymentModel::CENTRALIZED;
          }
          else if (hashCode == DISTRIBUTED_HASH)
          {
            return FirewallDeploymentModel::DISTRIBUTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallDeploymentModel>(hashCode);
          }

          return FirewallDeploymentModel::NOT_SET;
        }

        Aws::String GetNameForFirewallDeploymentModel(FirewallDeploymentModel enumValue)
        {
          switch(enumValue)
          {
          case FirewallDeploymentModel::NOT_SET:
            return {};
          case FirewallDeploymentModel::CENTRALIZED:
            return "CENTRALIZED";
          case FirewallDeploymentModel::DISTRIBUTED:
            return "DISTRIBUTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirewallDeploymentModelMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
