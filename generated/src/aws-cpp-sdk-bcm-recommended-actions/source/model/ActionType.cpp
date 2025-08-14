/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMRecommendedActions
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static const int ADD_ALTERNATE_BILLING_CONTACT_HASH = HashingUtils::HashString("ADD_ALTERNATE_BILLING_CONTACT");
        static const int CREATE_ANOMALY_MONITOR_HASH = HashingUtils::HashString("CREATE_ANOMALY_MONITOR");
        static const int CREATE_BUDGET_HASH = HashingUtils::HashString("CREATE_BUDGET");
        static const int ENABLE_COST_OPTIMIZATION_HUB_HASH = HashingUtils::HashString("ENABLE_COST_OPTIMIZATION_HUB");
        static const int MIGRATE_TO_GRANULAR_PERMISSIONS_HASH = HashingUtils::HashString("MIGRATE_TO_GRANULAR_PERMISSIONS");
        static const int PAYMENTS_DUE_HASH = HashingUtils::HashString("PAYMENTS_DUE");
        static const int PAYMENTS_PAST_DUE_HASH = HashingUtils::HashString("PAYMENTS_PAST_DUE");
        static const int REVIEW_ANOMALIES_HASH = HashingUtils::HashString("REVIEW_ANOMALIES");
        static const int REVIEW_BUDGET_ALERTS_HASH = HashingUtils::HashString("REVIEW_BUDGET_ALERTS");
        static const int REVIEW_BUDGETS_EXCEEDED_HASH = HashingUtils::HashString("REVIEW_BUDGETS_EXCEEDED");
        static const int REVIEW_EXPIRING_RI_HASH = HashingUtils::HashString("REVIEW_EXPIRING_RI");
        static const int REVIEW_EXPIRING_SP_HASH = HashingUtils::HashString("REVIEW_EXPIRING_SP");
        static const int REVIEW_FREETIER_USAGE_ALERTS_HASH = HashingUtils::HashString("REVIEW_FREETIER_USAGE_ALERTS");
        static const int REVIEW_SAVINGS_OPPORTUNITY_RECOMMENDATIONS_HASH = HashingUtils::HashString("REVIEW_SAVINGS_OPPORTUNITY_RECOMMENDATIONS");
        static const int UPDATE_EXPIRED_PAYMENT_METHOD_HASH = HashingUtils::HashString("UPDATE_EXPIRED_PAYMENT_METHOD");
        static const int UPDATE_INVALID_PAYMENT_METHOD_HASH = HashingUtils::HashString("UPDATE_INVALID_PAYMENT_METHOD");
        static const int UPDATE_TAX_EXEMPTION_CERTIFICATE_HASH = HashingUtils::HashString("UPDATE_TAX_EXEMPTION_CERTIFICATE");
        static const int UPDATE_TAX_REGISTRATION_NUMBER_HASH = HashingUtils::HashString("UPDATE_TAX_REGISTRATION_NUMBER");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_ALTERNATE_BILLING_CONTACT_HASH)
          {
            return ActionType::ADD_ALTERNATE_BILLING_CONTACT;
          }
          else if (hashCode == CREATE_ANOMALY_MONITOR_HASH)
          {
            return ActionType::CREATE_ANOMALY_MONITOR;
          }
          else if (hashCode == CREATE_BUDGET_HASH)
          {
            return ActionType::CREATE_BUDGET;
          }
          else if (hashCode == ENABLE_COST_OPTIMIZATION_HUB_HASH)
          {
            return ActionType::ENABLE_COST_OPTIMIZATION_HUB;
          }
          else if (hashCode == MIGRATE_TO_GRANULAR_PERMISSIONS_HASH)
          {
            return ActionType::MIGRATE_TO_GRANULAR_PERMISSIONS;
          }
          else if (hashCode == PAYMENTS_DUE_HASH)
          {
            return ActionType::PAYMENTS_DUE;
          }
          else if (hashCode == PAYMENTS_PAST_DUE_HASH)
          {
            return ActionType::PAYMENTS_PAST_DUE;
          }
          else if (hashCode == REVIEW_ANOMALIES_HASH)
          {
            return ActionType::REVIEW_ANOMALIES;
          }
          else if (hashCode == REVIEW_BUDGET_ALERTS_HASH)
          {
            return ActionType::REVIEW_BUDGET_ALERTS;
          }
          else if (hashCode == REVIEW_BUDGETS_EXCEEDED_HASH)
          {
            return ActionType::REVIEW_BUDGETS_EXCEEDED;
          }
          else if (hashCode == REVIEW_EXPIRING_RI_HASH)
          {
            return ActionType::REVIEW_EXPIRING_RI;
          }
          else if (hashCode == REVIEW_EXPIRING_SP_HASH)
          {
            return ActionType::REVIEW_EXPIRING_SP;
          }
          else if (hashCode == REVIEW_FREETIER_USAGE_ALERTS_HASH)
          {
            return ActionType::REVIEW_FREETIER_USAGE_ALERTS;
          }
          else if (hashCode == REVIEW_SAVINGS_OPPORTUNITY_RECOMMENDATIONS_HASH)
          {
            return ActionType::REVIEW_SAVINGS_OPPORTUNITY_RECOMMENDATIONS;
          }
          else if (hashCode == UPDATE_EXPIRED_PAYMENT_METHOD_HASH)
          {
            return ActionType::UPDATE_EXPIRED_PAYMENT_METHOD;
          }
          else if (hashCode == UPDATE_INVALID_PAYMENT_METHOD_HASH)
          {
            return ActionType::UPDATE_INVALID_PAYMENT_METHOD;
          }
          else if (hashCode == UPDATE_TAX_EXEMPTION_CERTIFICATE_HASH)
          {
            return ActionType::UPDATE_TAX_EXEMPTION_CERTIFICATE;
          }
          else if (hashCode == UPDATE_TAX_REGISTRATION_NUMBER_HASH)
          {
            return ActionType::UPDATE_TAX_REGISTRATION_NUMBER;
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
          case ActionType::ADD_ALTERNATE_BILLING_CONTACT:
            return "ADD_ALTERNATE_BILLING_CONTACT";
          case ActionType::CREATE_ANOMALY_MONITOR:
            return "CREATE_ANOMALY_MONITOR";
          case ActionType::CREATE_BUDGET:
            return "CREATE_BUDGET";
          case ActionType::ENABLE_COST_OPTIMIZATION_HUB:
            return "ENABLE_COST_OPTIMIZATION_HUB";
          case ActionType::MIGRATE_TO_GRANULAR_PERMISSIONS:
            return "MIGRATE_TO_GRANULAR_PERMISSIONS";
          case ActionType::PAYMENTS_DUE:
            return "PAYMENTS_DUE";
          case ActionType::PAYMENTS_PAST_DUE:
            return "PAYMENTS_PAST_DUE";
          case ActionType::REVIEW_ANOMALIES:
            return "REVIEW_ANOMALIES";
          case ActionType::REVIEW_BUDGET_ALERTS:
            return "REVIEW_BUDGET_ALERTS";
          case ActionType::REVIEW_BUDGETS_EXCEEDED:
            return "REVIEW_BUDGETS_EXCEEDED";
          case ActionType::REVIEW_EXPIRING_RI:
            return "REVIEW_EXPIRING_RI";
          case ActionType::REVIEW_EXPIRING_SP:
            return "REVIEW_EXPIRING_SP";
          case ActionType::REVIEW_FREETIER_USAGE_ALERTS:
            return "REVIEW_FREETIER_USAGE_ALERTS";
          case ActionType::REVIEW_SAVINGS_OPPORTUNITY_RECOMMENDATIONS:
            return "REVIEW_SAVINGS_OPPORTUNITY_RECOMMENDATIONS";
          case ActionType::UPDATE_EXPIRED_PAYMENT_METHOD:
            return "UPDATE_EXPIRED_PAYMENT_METHOD";
          case ActionType::UPDATE_INVALID_PAYMENT_METHOD:
            return "UPDATE_INVALID_PAYMENT_METHOD";
          case ActionType::UPDATE_TAX_EXEMPTION_CERTIFICATE:
            return "UPDATE_TAX_EXEMPTION_CERTIFICATE";
          case ActionType::UPDATE_TAX_REGISTRATION_NUMBER:
            return "UPDATE_TAX_REGISTRATION_NUMBER";
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
  } // namespace BCMRecommendedActions
} // namespace Aws
