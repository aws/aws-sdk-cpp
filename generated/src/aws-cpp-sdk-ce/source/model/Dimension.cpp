/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Dimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace DimensionMapper
      {

        static const int AZ_HASH = HashingUtils::HashString("AZ");
        static const int INSTANCE_TYPE_HASH = HashingUtils::HashString("INSTANCE_TYPE");
        static const int LINKED_ACCOUNT_HASH = HashingUtils::HashString("LINKED_ACCOUNT");
        static const int LINKED_ACCOUNT_NAME_HASH = HashingUtils::HashString("LINKED_ACCOUNT_NAME");
        static const int OPERATION_HASH = HashingUtils::HashString("OPERATION");
        static const int PURCHASE_TYPE_HASH = HashingUtils::HashString("PURCHASE_TYPE");
        static const int REGION_HASH = HashingUtils::HashString("REGION");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int SERVICE_CODE_HASH = HashingUtils::HashString("SERVICE_CODE");
        static const int USAGE_TYPE_HASH = HashingUtils::HashString("USAGE_TYPE");
        static const int USAGE_TYPE_GROUP_HASH = HashingUtils::HashString("USAGE_TYPE_GROUP");
        static const int RECORD_TYPE_HASH = HashingUtils::HashString("RECORD_TYPE");
        static const int OPERATING_SYSTEM_HASH = HashingUtils::HashString("OPERATING_SYSTEM");
        static const int TENANCY_HASH = HashingUtils::HashString("TENANCY");
        static const int SCOPE_HASH = HashingUtils::HashString("SCOPE");
        static const int PLATFORM_HASH = HashingUtils::HashString("PLATFORM");
        static const int SUBSCRIPTION_ID_HASH = HashingUtils::HashString("SUBSCRIPTION_ID");
        static const int LEGAL_ENTITY_NAME_HASH = HashingUtils::HashString("LEGAL_ENTITY_NAME");
        static const int DEPLOYMENT_OPTION_HASH = HashingUtils::HashString("DEPLOYMENT_OPTION");
        static const int DATABASE_ENGINE_HASH = HashingUtils::HashString("DATABASE_ENGINE");
        static const int CACHE_ENGINE_HASH = HashingUtils::HashString("CACHE_ENGINE");
        static const int INSTANCE_TYPE_FAMILY_HASH = HashingUtils::HashString("INSTANCE_TYPE_FAMILY");
        static const int BILLING_ENTITY_HASH = HashingUtils::HashString("BILLING_ENTITY");
        static const int RESERVATION_ID_HASH = HashingUtils::HashString("RESERVATION_ID");
        static const int RESOURCE_ID_HASH = HashingUtils::HashString("RESOURCE_ID");
        static const int RIGHTSIZING_TYPE_HASH = HashingUtils::HashString("RIGHTSIZING_TYPE");
        static const int SAVINGS_PLANS_TYPE_HASH = HashingUtils::HashString("SAVINGS_PLANS_TYPE");
        static const int SAVINGS_PLAN_ARN_HASH = HashingUtils::HashString("SAVINGS_PLAN_ARN");
        static const int PAYMENT_OPTION_HASH = HashingUtils::HashString("PAYMENT_OPTION");
        static const int AGREEMENT_END_DATE_TIME_AFTER_HASH = HashingUtils::HashString("AGREEMENT_END_DATE_TIME_AFTER");
        static const int AGREEMENT_END_DATE_TIME_BEFORE_HASH = HashingUtils::HashString("AGREEMENT_END_DATE_TIME_BEFORE");
        static const int INVOICING_ENTITY_HASH = HashingUtils::HashString("INVOICING_ENTITY");
        static const int ANOMALY_TOTAL_IMPACT_ABSOLUTE_HASH = HashingUtils::HashString("ANOMALY_TOTAL_IMPACT_ABSOLUTE");
        static const int ANOMALY_TOTAL_IMPACT_PERCENTAGE_HASH = HashingUtils::HashString("ANOMALY_TOTAL_IMPACT_PERCENTAGE");


        Dimension GetDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AZ_HASH)
          {
            return Dimension::AZ;
          }
          else if (hashCode == INSTANCE_TYPE_HASH)
          {
            return Dimension::INSTANCE_TYPE;
          }
          else if (hashCode == LINKED_ACCOUNT_HASH)
          {
            return Dimension::LINKED_ACCOUNT;
          }
          else if (hashCode == LINKED_ACCOUNT_NAME_HASH)
          {
            return Dimension::LINKED_ACCOUNT_NAME;
          }
          else if (hashCode == OPERATION_HASH)
          {
            return Dimension::OPERATION;
          }
          else if (hashCode == PURCHASE_TYPE_HASH)
          {
            return Dimension::PURCHASE_TYPE;
          }
          else if (hashCode == REGION_HASH)
          {
            return Dimension::REGION;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return Dimension::SERVICE;
          }
          else if (hashCode == SERVICE_CODE_HASH)
          {
            return Dimension::SERVICE_CODE;
          }
          else if (hashCode == USAGE_TYPE_HASH)
          {
            return Dimension::USAGE_TYPE;
          }
          else if (hashCode == USAGE_TYPE_GROUP_HASH)
          {
            return Dimension::USAGE_TYPE_GROUP;
          }
          else if (hashCode == RECORD_TYPE_HASH)
          {
            return Dimension::RECORD_TYPE;
          }
          else if (hashCode == OPERATING_SYSTEM_HASH)
          {
            return Dimension::OPERATING_SYSTEM;
          }
          else if (hashCode == TENANCY_HASH)
          {
            return Dimension::TENANCY;
          }
          else if (hashCode == SCOPE_HASH)
          {
            return Dimension::SCOPE;
          }
          else if (hashCode == PLATFORM_HASH)
          {
            return Dimension::PLATFORM;
          }
          else if (hashCode == SUBSCRIPTION_ID_HASH)
          {
            return Dimension::SUBSCRIPTION_ID;
          }
          else if (hashCode == LEGAL_ENTITY_NAME_HASH)
          {
            return Dimension::LEGAL_ENTITY_NAME;
          }
          else if (hashCode == DEPLOYMENT_OPTION_HASH)
          {
            return Dimension::DEPLOYMENT_OPTION;
          }
          else if (hashCode == DATABASE_ENGINE_HASH)
          {
            return Dimension::DATABASE_ENGINE;
          }
          else if (hashCode == CACHE_ENGINE_HASH)
          {
            return Dimension::CACHE_ENGINE;
          }
          else if (hashCode == INSTANCE_TYPE_FAMILY_HASH)
          {
            return Dimension::INSTANCE_TYPE_FAMILY;
          }
          else if (hashCode == BILLING_ENTITY_HASH)
          {
            return Dimension::BILLING_ENTITY;
          }
          else if (hashCode == RESERVATION_ID_HASH)
          {
            return Dimension::RESERVATION_ID;
          }
          else if (hashCode == RESOURCE_ID_HASH)
          {
            return Dimension::RESOURCE_ID;
          }
          else if (hashCode == RIGHTSIZING_TYPE_HASH)
          {
            return Dimension::RIGHTSIZING_TYPE;
          }
          else if (hashCode == SAVINGS_PLANS_TYPE_HASH)
          {
            return Dimension::SAVINGS_PLANS_TYPE;
          }
          else if (hashCode == SAVINGS_PLAN_ARN_HASH)
          {
            return Dimension::SAVINGS_PLAN_ARN;
          }
          else if (hashCode == PAYMENT_OPTION_HASH)
          {
            return Dimension::PAYMENT_OPTION;
          }
          else if (hashCode == AGREEMENT_END_DATE_TIME_AFTER_HASH)
          {
            return Dimension::AGREEMENT_END_DATE_TIME_AFTER;
          }
          else if (hashCode == AGREEMENT_END_DATE_TIME_BEFORE_HASH)
          {
            return Dimension::AGREEMENT_END_DATE_TIME_BEFORE;
          }
          else if (hashCode == INVOICING_ENTITY_HASH)
          {
            return Dimension::INVOICING_ENTITY;
          }
          else if (hashCode == ANOMALY_TOTAL_IMPACT_ABSOLUTE_HASH)
          {
            return Dimension::ANOMALY_TOTAL_IMPACT_ABSOLUTE;
          }
          else if (hashCode == ANOMALY_TOTAL_IMPACT_PERCENTAGE_HASH)
          {
            return Dimension::ANOMALY_TOTAL_IMPACT_PERCENTAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Dimension>(hashCode);
          }

          return Dimension::NOT_SET;
        }

        Aws::String GetNameForDimension(Dimension enumValue)
        {
          switch(enumValue)
          {
          case Dimension::AZ:
            return "AZ";
          case Dimension::INSTANCE_TYPE:
            return "INSTANCE_TYPE";
          case Dimension::LINKED_ACCOUNT:
            return "LINKED_ACCOUNT";
          case Dimension::LINKED_ACCOUNT_NAME:
            return "LINKED_ACCOUNT_NAME";
          case Dimension::OPERATION:
            return "OPERATION";
          case Dimension::PURCHASE_TYPE:
            return "PURCHASE_TYPE";
          case Dimension::REGION:
            return "REGION";
          case Dimension::SERVICE:
            return "SERVICE";
          case Dimension::SERVICE_CODE:
            return "SERVICE_CODE";
          case Dimension::USAGE_TYPE:
            return "USAGE_TYPE";
          case Dimension::USAGE_TYPE_GROUP:
            return "USAGE_TYPE_GROUP";
          case Dimension::RECORD_TYPE:
            return "RECORD_TYPE";
          case Dimension::OPERATING_SYSTEM:
            return "OPERATING_SYSTEM";
          case Dimension::TENANCY:
            return "TENANCY";
          case Dimension::SCOPE:
            return "SCOPE";
          case Dimension::PLATFORM:
            return "PLATFORM";
          case Dimension::SUBSCRIPTION_ID:
            return "SUBSCRIPTION_ID";
          case Dimension::LEGAL_ENTITY_NAME:
            return "LEGAL_ENTITY_NAME";
          case Dimension::DEPLOYMENT_OPTION:
            return "DEPLOYMENT_OPTION";
          case Dimension::DATABASE_ENGINE:
            return "DATABASE_ENGINE";
          case Dimension::CACHE_ENGINE:
            return "CACHE_ENGINE";
          case Dimension::INSTANCE_TYPE_FAMILY:
            return "INSTANCE_TYPE_FAMILY";
          case Dimension::BILLING_ENTITY:
            return "BILLING_ENTITY";
          case Dimension::RESERVATION_ID:
            return "RESERVATION_ID";
          case Dimension::RESOURCE_ID:
            return "RESOURCE_ID";
          case Dimension::RIGHTSIZING_TYPE:
            return "RIGHTSIZING_TYPE";
          case Dimension::SAVINGS_PLANS_TYPE:
            return "SAVINGS_PLANS_TYPE";
          case Dimension::SAVINGS_PLAN_ARN:
            return "SAVINGS_PLAN_ARN";
          case Dimension::PAYMENT_OPTION:
            return "PAYMENT_OPTION";
          case Dimension::AGREEMENT_END_DATE_TIME_AFTER:
            return "AGREEMENT_END_DATE_TIME_AFTER";
          case Dimension::AGREEMENT_END_DATE_TIME_BEFORE:
            return "AGREEMENT_END_DATE_TIME_BEFORE";
          case Dimension::INVOICING_ENTITY:
            return "INVOICING_ENTITY";
          case Dimension::ANOMALY_TOTAL_IMPACT_ABSOLUTE:
            return "ANOMALY_TOTAL_IMPACT_ABSOLUTE";
          case Dimension::ANOMALY_TOTAL_IMPACT_PERCENTAGE:
            return "ANOMALY_TOTAL_IMPACT_PERCENTAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
