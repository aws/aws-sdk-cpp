/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostOptimizationHub
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static const int Rightsize_HASH = HashingUtils::HashString("Rightsize");
        static const int Stop_HASH = HashingUtils::HashString("Stop");
        static const int Upgrade_HASH = HashingUtils::HashString("Upgrade");
        static const int PurchaseSavingsPlans_HASH = HashingUtils::HashString("PurchaseSavingsPlans");
        static const int PurchaseReservedInstances_HASH = HashingUtils::HashString("PurchaseReservedInstances");
        static const int MigrateToGraviton_HASH = HashingUtils::HashString("MigrateToGraviton");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Rightsize_HASH)
          {
            return ActionType::Rightsize;
          }
          else if (hashCode == Stop_HASH)
          {
            return ActionType::Stop;
          }
          else if (hashCode == Upgrade_HASH)
          {
            return ActionType::Upgrade;
          }
          else if (hashCode == PurchaseSavingsPlans_HASH)
          {
            return ActionType::PurchaseSavingsPlans;
          }
          else if (hashCode == PurchaseReservedInstances_HASH)
          {
            return ActionType::PurchaseReservedInstances;
          }
          else if (hashCode == MigrateToGraviton_HASH)
          {
            return ActionType::MigrateToGraviton;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::NOT_SET:
            return {};
          case ActionType::Rightsize:
            return "Rightsize";
          case ActionType::Stop:
            return "Stop";
          case ActionType::Upgrade:
            return "Upgrade";
          case ActionType::PurchaseSavingsPlans:
            return "PurchaseSavingsPlans";
          case ActionType::PurchaseReservedInstances:
            return "PurchaseReservedInstances";
          case ActionType::MigrateToGraviton:
            return "MigrateToGraviton";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace CostOptimizationHub
} // namespace Aws
