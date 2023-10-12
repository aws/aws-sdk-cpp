/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BillingConductor
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static constexpr uint32_t UNKNOWN_OPERATION_HASH = ConstExprHashingUtils::HashString("UNKNOWN_OPERATION");
        static constexpr uint32_t CANNOT_PARSE_HASH = ConstExprHashingUtils::HashString("CANNOT_PARSE");
        static constexpr uint32_t FIELD_VALIDATION_FAILED_HASH = ConstExprHashingUtils::HashString("FIELD_VALIDATION_FAILED");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");
        static constexpr uint32_t PRIMARY_NOT_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("PRIMARY_NOT_ASSOCIATED");
        static constexpr uint32_t PRIMARY_CANNOT_DISASSOCIATE_HASH = ConstExprHashingUtils::HashString("PRIMARY_CANNOT_DISASSOCIATE");
        static constexpr uint32_t ACCOUNTS_NOT_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("ACCOUNTS_NOT_ASSOCIATED");
        static constexpr uint32_t ACCOUNTS_ALREADY_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("ACCOUNTS_ALREADY_ASSOCIATED");
        static constexpr uint32_t ILLEGAL_PRIMARY_ACCOUNT_HASH = ConstExprHashingUtils::HashString("ILLEGAL_PRIMARY_ACCOUNT");
        static constexpr uint32_t ILLEGAL_ACCOUNTS_HASH = ConstExprHashingUtils::HashString("ILLEGAL_ACCOUNTS");
        static constexpr uint32_t MISMATCHED_BILLINGGROUP_ARN_HASH = ConstExprHashingUtils::HashString("MISMATCHED_BILLINGGROUP_ARN");
        static constexpr uint32_t MISSING_BILLINGGROUP_HASH = ConstExprHashingUtils::HashString("MISSING_BILLINGGROUP");
        static constexpr uint32_t MISMATCHED_CUSTOMLINEITEM_ARN_HASH = ConstExprHashingUtils::HashString("MISMATCHED_CUSTOMLINEITEM_ARN");
        static constexpr uint32_t ILLEGAL_BILLING_PERIOD_HASH = ConstExprHashingUtils::HashString("ILLEGAL_BILLING_PERIOD");
        static constexpr uint32_t ILLEGAL_BILLING_PERIOD_RANGE_HASH = ConstExprHashingUtils::HashString("ILLEGAL_BILLING_PERIOD_RANGE");
        static constexpr uint32_t TOO_MANY_ACCOUNTS_IN_REQUEST_HASH = ConstExprHashingUtils::HashString("TOO_MANY_ACCOUNTS_IN_REQUEST");
        static constexpr uint32_t DUPLICATE_ACCOUNT_HASH = ConstExprHashingUtils::HashString("DUPLICATE_ACCOUNT");
        static constexpr uint32_t INVALID_BILLING_GROUP_STATUS_HASH = ConstExprHashingUtils::HashString("INVALID_BILLING_GROUP_STATUS");
        static constexpr uint32_t MISMATCHED_PRICINGPLAN_ARN_HASH = ConstExprHashingUtils::HashString("MISMATCHED_PRICINGPLAN_ARN");
        static constexpr uint32_t MISSING_PRICINGPLAN_HASH = ConstExprHashingUtils::HashString("MISSING_PRICINGPLAN");
        static constexpr uint32_t MISMATCHED_PRICINGRULE_ARN_HASH = ConstExprHashingUtils::HashString("MISMATCHED_PRICINGRULE_ARN");
        static constexpr uint32_t DUPLICATE_PRICINGRULE_ARNS_HASH = ConstExprHashingUtils::HashString("DUPLICATE_PRICINGRULE_ARNS");
        static constexpr uint32_t ILLEGAL_EXPRESSION_HASH = ConstExprHashingUtils::HashString("ILLEGAL_EXPRESSION");
        static constexpr uint32_t ILLEGAL_SCOPE_HASH = ConstExprHashingUtils::HashString("ILLEGAL_SCOPE");
        static constexpr uint32_t ILLEGAL_SERVICE_HASH = ConstExprHashingUtils::HashString("ILLEGAL_SERVICE");
        static constexpr uint32_t PRICINGRULES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("PRICINGRULES_NOT_EXIST");
        static constexpr uint32_t PRICINGRULES_ALREADY_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("PRICINGRULES_ALREADY_ASSOCIATED");
        static constexpr uint32_t PRICINGRULES_NOT_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("PRICINGRULES_NOT_ASSOCIATED");
        static constexpr uint32_t INVALID_TIME_RANGE_HASH = ConstExprHashingUtils::HashString("INVALID_TIME_RANGE");
        static constexpr uint32_t INVALID_BILLINGVIEW_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_BILLINGVIEW_ARN");
        static constexpr uint32_t MISMATCHED_BILLINGVIEW_ARN_HASH = ConstExprHashingUtils::HashString("MISMATCHED_BILLINGVIEW_ARN");
        static constexpr uint32_t ILLEGAL_CUSTOMLINEITEM_HASH = ConstExprHashingUtils::HashString("ILLEGAL_CUSTOMLINEITEM");
        static constexpr uint32_t MISSING_CUSTOMLINEITEM_HASH = ConstExprHashingUtils::HashString("MISSING_CUSTOMLINEITEM");
        static constexpr uint32_t ILLEGAL_CUSTOMLINEITEM_UPDATE_HASH = ConstExprHashingUtils::HashString("ILLEGAL_CUSTOMLINEITEM_UPDATE");
        static constexpr uint32_t TOO_MANY_CUSTOMLINEITEMS_IN_REQUEST_HASH = ConstExprHashingUtils::HashString("TOO_MANY_CUSTOMLINEITEMS_IN_REQUEST");
        static constexpr uint32_t ILLEGAL_CHARGE_DETAILS_HASH = ConstExprHashingUtils::HashString("ILLEGAL_CHARGE_DETAILS");
        static constexpr uint32_t ILLEGAL_UPDATE_CHARGE_DETAILS_HASH = ConstExprHashingUtils::HashString("ILLEGAL_UPDATE_CHARGE_DETAILS");
        static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_ARN");
        static constexpr uint32_t ILLEGAL_RESOURCE_ARNS_HASH = ConstExprHashingUtils::HashString("ILLEGAL_RESOURCE_ARNS");
        static constexpr uint32_t ILLEGAL_CUSTOMLINEITEM_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ILLEGAL_CUSTOMLINEITEM_MODIFICATION");
        static constexpr uint32_t MISSING_LINKED_ACCOUNT_IDS_HASH = ConstExprHashingUtils::HashString("MISSING_LINKED_ACCOUNT_IDS");
        static constexpr uint32_t MULTIPLE_LINKED_ACCOUNT_IDS_HASH = ConstExprHashingUtils::HashString("MULTIPLE_LINKED_ACCOUNT_IDS");
        static constexpr uint32_t MISSING_PRICING_PLAN_ARN_HASH = ConstExprHashingUtils::HashString("MISSING_PRICING_PLAN_ARN");
        static constexpr uint32_t MULTIPLE_PRICING_PLAN_ARN_HASH = ConstExprHashingUtils::HashString("MULTIPLE_PRICING_PLAN_ARN");
        static constexpr uint32_t ILLEGAL_CHILD_ASSOCIATE_RESOURCE_HASH = ConstExprHashingUtils::HashString("ILLEGAL_CHILD_ASSOCIATE_RESOURCE");
        static constexpr uint32_t CUSTOM_LINE_ITEM_ASSOCIATION_EXISTS_HASH = ConstExprHashingUtils::HashString("CUSTOM_LINE_ITEM_ASSOCIATION_EXISTS");
        static constexpr uint32_t INVALID_BILLING_GROUP_HASH = ConstExprHashingUtils::HashString("INVALID_BILLING_GROUP");
        static constexpr uint32_t INVALID_BILLING_PERIOD_FOR_OPERATION_HASH = ConstExprHashingUtils::HashString("INVALID_BILLING_PERIOD_FOR_OPERATION");
        static constexpr uint32_t ILLEGAL_BILLING_ENTITY_HASH = ConstExprHashingUtils::HashString("ILLEGAL_BILLING_ENTITY");
        static constexpr uint32_t ILLEGAL_MODIFIER_PERCENTAGE_HASH = ConstExprHashingUtils::HashString("ILLEGAL_MODIFIER_PERCENTAGE");
        static constexpr uint32_t ILLEGAL_TYPE_HASH = ConstExprHashingUtils::HashString("ILLEGAL_TYPE");
        static constexpr uint32_t ILLEGAL_ENDED_BILLINGGROUP_HASH = ConstExprHashingUtils::HashString("ILLEGAL_ENDED_BILLINGGROUP");
        static constexpr uint32_t ILLEGAL_TIERING_INPUT_HASH = ConstExprHashingUtils::HashString("ILLEGAL_TIERING_INPUT");
        static constexpr uint32_t ILLEGAL_OPERATION_HASH = ConstExprHashingUtils::HashString("ILLEGAL_OPERATION");
        static constexpr uint32_t ILLEGAL_USAGE_TYPE_HASH = ConstExprHashingUtils::HashString("ILLEGAL_USAGE_TYPE");
        static constexpr uint32_t INVALID_SKU_COMBO_HASH = ConstExprHashingUtils::HashString("INVALID_SKU_COMBO");
        static constexpr uint32_t INVALID_FILTER_HASH = ConstExprHashingUtils::HashString("INVALID_FILTER");
        static constexpr uint32_t TOO_MANY_AUTO_ASSOCIATE_BILLING_GROUPS_HASH = ConstExprHashingUtils::HashString("TOO_MANY_AUTO_ASSOCIATE_BILLING_GROUPS");
        static constexpr uint32_t CANNOT_DELETE_AUTO_ASSOCIATE_BILLING_GROUP_HASH = ConstExprHashingUtils::HashString("CANNOT_DELETE_AUTO_ASSOCIATE_BILLING_GROUP");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_OPERATION_HASH)
          {
            return ValidationExceptionReason::UNKNOWN_OPERATION;
          }
          else if (hashCode == CANNOT_PARSE_HASH)
          {
            return ValidationExceptionReason::CANNOT_PARSE;
          }
          else if (hashCode == FIELD_VALIDATION_FAILED_HASH)
          {
            return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ValidationExceptionReason::OTHER;
          }
          else if (hashCode == PRIMARY_NOT_ASSOCIATED_HASH)
          {
            return ValidationExceptionReason::PRIMARY_NOT_ASSOCIATED;
          }
          else if (hashCode == PRIMARY_CANNOT_DISASSOCIATE_HASH)
          {
            return ValidationExceptionReason::PRIMARY_CANNOT_DISASSOCIATE;
          }
          else if (hashCode == ACCOUNTS_NOT_ASSOCIATED_HASH)
          {
            return ValidationExceptionReason::ACCOUNTS_NOT_ASSOCIATED;
          }
          else if (hashCode == ACCOUNTS_ALREADY_ASSOCIATED_HASH)
          {
            return ValidationExceptionReason::ACCOUNTS_ALREADY_ASSOCIATED;
          }
          else if (hashCode == ILLEGAL_PRIMARY_ACCOUNT_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_PRIMARY_ACCOUNT;
          }
          else if (hashCode == ILLEGAL_ACCOUNTS_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_ACCOUNTS;
          }
          else if (hashCode == MISMATCHED_BILLINGGROUP_ARN_HASH)
          {
            return ValidationExceptionReason::MISMATCHED_BILLINGGROUP_ARN;
          }
          else if (hashCode == MISSING_BILLINGGROUP_HASH)
          {
            return ValidationExceptionReason::MISSING_BILLINGGROUP;
          }
          else if (hashCode == MISMATCHED_CUSTOMLINEITEM_ARN_HASH)
          {
            return ValidationExceptionReason::MISMATCHED_CUSTOMLINEITEM_ARN;
          }
          else if (hashCode == ILLEGAL_BILLING_PERIOD_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_BILLING_PERIOD;
          }
          else if (hashCode == ILLEGAL_BILLING_PERIOD_RANGE_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_BILLING_PERIOD_RANGE;
          }
          else if (hashCode == TOO_MANY_ACCOUNTS_IN_REQUEST_HASH)
          {
            return ValidationExceptionReason::TOO_MANY_ACCOUNTS_IN_REQUEST;
          }
          else if (hashCode == DUPLICATE_ACCOUNT_HASH)
          {
            return ValidationExceptionReason::DUPLICATE_ACCOUNT;
          }
          else if (hashCode == INVALID_BILLING_GROUP_STATUS_HASH)
          {
            return ValidationExceptionReason::INVALID_BILLING_GROUP_STATUS;
          }
          else if (hashCode == MISMATCHED_PRICINGPLAN_ARN_HASH)
          {
            return ValidationExceptionReason::MISMATCHED_PRICINGPLAN_ARN;
          }
          else if (hashCode == MISSING_PRICINGPLAN_HASH)
          {
            return ValidationExceptionReason::MISSING_PRICINGPLAN;
          }
          else if (hashCode == MISMATCHED_PRICINGRULE_ARN_HASH)
          {
            return ValidationExceptionReason::MISMATCHED_PRICINGRULE_ARN;
          }
          else if (hashCode == DUPLICATE_PRICINGRULE_ARNS_HASH)
          {
            return ValidationExceptionReason::DUPLICATE_PRICINGRULE_ARNS;
          }
          else if (hashCode == ILLEGAL_EXPRESSION_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_EXPRESSION;
          }
          else if (hashCode == ILLEGAL_SCOPE_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_SCOPE;
          }
          else if (hashCode == ILLEGAL_SERVICE_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_SERVICE;
          }
          else if (hashCode == PRICINGRULES_NOT_EXIST_HASH)
          {
            return ValidationExceptionReason::PRICINGRULES_NOT_EXIST;
          }
          else if (hashCode == PRICINGRULES_ALREADY_ASSOCIATED_HASH)
          {
            return ValidationExceptionReason::PRICINGRULES_ALREADY_ASSOCIATED;
          }
          else if (hashCode == PRICINGRULES_NOT_ASSOCIATED_HASH)
          {
            return ValidationExceptionReason::PRICINGRULES_NOT_ASSOCIATED;
          }
          else if (hashCode == INVALID_TIME_RANGE_HASH)
          {
            return ValidationExceptionReason::INVALID_TIME_RANGE;
          }
          else if (hashCode == INVALID_BILLINGVIEW_ARN_HASH)
          {
            return ValidationExceptionReason::INVALID_BILLINGVIEW_ARN;
          }
          else if (hashCode == MISMATCHED_BILLINGVIEW_ARN_HASH)
          {
            return ValidationExceptionReason::MISMATCHED_BILLINGVIEW_ARN;
          }
          else if (hashCode == ILLEGAL_CUSTOMLINEITEM_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_CUSTOMLINEITEM;
          }
          else if (hashCode == MISSING_CUSTOMLINEITEM_HASH)
          {
            return ValidationExceptionReason::MISSING_CUSTOMLINEITEM;
          }
          else if (hashCode == ILLEGAL_CUSTOMLINEITEM_UPDATE_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_CUSTOMLINEITEM_UPDATE;
          }
          else if (hashCode == TOO_MANY_CUSTOMLINEITEMS_IN_REQUEST_HASH)
          {
            return ValidationExceptionReason::TOO_MANY_CUSTOMLINEITEMS_IN_REQUEST;
          }
          else if (hashCode == ILLEGAL_CHARGE_DETAILS_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_CHARGE_DETAILS;
          }
          else if (hashCode == ILLEGAL_UPDATE_CHARGE_DETAILS_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_UPDATE_CHARGE_DETAILS;
          }
          else if (hashCode == INVALID_ARN_HASH)
          {
            return ValidationExceptionReason::INVALID_ARN;
          }
          else if (hashCode == ILLEGAL_RESOURCE_ARNS_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_RESOURCE_ARNS;
          }
          else if (hashCode == ILLEGAL_CUSTOMLINEITEM_MODIFICATION_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_CUSTOMLINEITEM_MODIFICATION;
          }
          else if (hashCode == MISSING_LINKED_ACCOUNT_IDS_HASH)
          {
            return ValidationExceptionReason::MISSING_LINKED_ACCOUNT_IDS;
          }
          else if (hashCode == MULTIPLE_LINKED_ACCOUNT_IDS_HASH)
          {
            return ValidationExceptionReason::MULTIPLE_LINKED_ACCOUNT_IDS;
          }
          else if (hashCode == MISSING_PRICING_PLAN_ARN_HASH)
          {
            return ValidationExceptionReason::MISSING_PRICING_PLAN_ARN;
          }
          else if (hashCode == MULTIPLE_PRICING_PLAN_ARN_HASH)
          {
            return ValidationExceptionReason::MULTIPLE_PRICING_PLAN_ARN;
          }
          else if (hashCode == ILLEGAL_CHILD_ASSOCIATE_RESOURCE_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_CHILD_ASSOCIATE_RESOURCE;
          }
          else if (hashCode == CUSTOM_LINE_ITEM_ASSOCIATION_EXISTS_HASH)
          {
            return ValidationExceptionReason::CUSTOM_LINE_ITEM_ASSOCIATION_EXISTS;
          }
          else if (hashCode == INVALID_BILLING_GROUP_HASH)
          {
            return ValidationExceptionReason::INVALID_BILLING_GROUP;
          }
          else if (hashCode == INVALID_BILLING_PERIOD_FOR_OPERATION_HASH)
          {
            return ValidationExceptionReason::INVALID_BILLING_PERIOD_FOR_OPERATION;
          }
          else if (hashCode == ILLEGAL_BILLING_ENTITY_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_BILLING_ENTITY;
          }
          else if (hashCode == ILLEGAL_MODIFIER_PERCENTAGE_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_MODIFIER_PERCENTAGE;
          }
          else if (hashCode == ILLEGAL_TYPE_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_TYPE;
          }
          else if (hashCode == ILLEGAL_ENDED_BILLINGGROUP_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_ENDED_BILLINGGROUP;
          }
          else if (hashCode == ILLEGAL_TIERING_INPUT_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_TIERING_INPUT;
          }
          else if (hashCode == ILLEGAL_OPERATION_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_OPERATION;
          }
          else if (hashCode == ILLEGAL_USAGE_TYPE_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_USAGE_TYPE;
          }
          else if (hashCode == INVALID_SKU_COMBO_HASH)
          {
            return ValidationExceptionReason::INVALID_SKU_COMBO;
          }
          else if (hashCode == INVALID_FILTER_HASH)
          {
            return ValidationExceptionReason::INVALID_FILTER;
          }
          else if (hashCode == TOO_MANY_AUTO_ASSOCIATE_BILLING_GROUPS_HASH)
          {
            return ValidationExceptionReason::TOO_MANY_AUTO_ASSOCIATE_BILLING_GROUPS;
          }
          else if (hashCode == CANNOT_DELETE_AUTO_ASSOCIATE_BILLING_GROUP_HASH)
          {
            return ValidationExceptionReason::CANNOT_DELETE_AUTO_ASSOCIATE_BILLING_GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::UNKNOWN_OPERATION:
            return "UNKNOWN_OPERATION";
          case ValidationExceptionReason::CANNOT_PARSE:
            return "CANNOT_PARSE";
          case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
            return "FIELD_VALIDATION_FAILED";
          case ValidationExceptionReason::OTHER:
            return "OTHER";
          case ValidationExceptionReason::PRIMARY_NOT_ASSOCIATED:
            return "PRIMARY_NOT_ASSOCIATED";
          case ValidationExceptionReason::PRIMARY_CANNOT_DISASSOCIATE:
            return "PRIMARY_CANNOT_DISASSOCIATE";
          case ValidationExceptionReason::ACCOUNTS_NOT_ASSOCIATED:
            return "ACCOUNTS_NOT_ASSOCIATED";
          case ValidationExceptionReason::ACCOUNTS_ALREADY_ASSOCIATED:
            return "ACCOUNTS_ALREADY_ASSOCIATED";
          case ValidationExceptionReason::ILLEGAL_PRIMARY_ACCOUNT:
            return "ILLEGAL_PRIMARY_ACCOUNT";
          case ValidationExceptionReason::ILLEGAL_ACCOUNTS:
            return "ILLEGAL_ACCOUNTS";
          case ValidationExceptionReason::MISMATCHED_BILLINGGROUP_ARN:
            return "MISMATCHED_BILLINGGROUP_ARN";
          case ValidationExceptionReason::MISSING_BILLINGGROUP:
            return "MISSING_BILLINGGROUP";
          case ValidationExceptionReason::MISMATCHED_CUSTOMLINEITEM_ARN:
            return "MISMATCHED_CUSTOMLINEITEM_ARN";
          case ValidationExceptionReason::ILLEGAL_BILLING_PERIOD:
            return "ILLEGAL_BILLING_PERIOD";
          case ValidationExceptionReason::ILLEGAL_BILLING_PERIOD_RANGE:
            return "ILLEGAL_BILLING_PERIOD_RANGE";
          case ValidationExceptionReason::TOO_MANY_ACCOUNTS_IN_REQUEST:
            return "TOO_MANY_ACCOUNTS_IN_REQUEST";
          case ValidationExceptionReason::DUPLICATE_ACCOUNT:
            return "DUPLICATE_ACCOUNT";
          case ValidationExceptionReason::INVALID_BILLING_GROUP_STATUS:
            return "INVALID_BILLING_GROUP_STATUS";
          case ValidationExceptionReason::MISMATCHED_PRICINGPLAN_ARN:
            return "MISMATCHED_PRICINGPLAN_ARN";
          case ValidationExceptionReason::MISSING_PRICINGPLAN:
            return "MISSING_PRICINGPLAN";
          case ValidationExceptionReason::MISMATCHED_PRICINGRULE_ARN:
            return "MISMATCHED_PRICINGRULE_ARN";
          case ValidationExceptionReason::DUPLICATE_PRICINGRULE_ARNS:
            return "DUPLICATE_PRICINGRULE_ARNS";
          case ValidationExceptionReason::ILLEGAL_EXPRESSION:
            return "ILLEGAL_EXPRESSION";
          case ValidationExceptionReason::ILLEGAL_SCOPE:
            return "ILLEGAL_SCOPE";
          case ValidationExceptionReason::ILLEGAL_SERVICE:
            return "ILLEGAL_SERVICE";
          case ValidationExceptionReason::PRICINGRULES_NOT_EXIST:
            return "PRICINGRULES_NOT_EXIST";
          case ValidationExceptionReason::PRICINGRULES_ALREADY_ASSOCIATED:
            return "PRICINGRULES_ALREADY_ASSOCIATED";
          case ValidationExceptionReason::PRICINGRULES_NOT_ASSOCIATED:
            return "PRICINGRULES_NOT_ASSOCIATED";
          case ValidationExceptionReason::INVALID_TIME_RANGE:
            return "INVALID_TIME_RANGE";
          case ValidationExceptionReason::INVALID_BILLINGVIEW_ARN:
            return "INVALID_BILLINGVIEW_ARN";
          case ValidationExceptionReason::MISMATCHED_BILLINGVIEW_ARN:
            return "MISMATCHED_BILLINGVIEW_ARN";
          case ValidationExceptionReason::ILLEGAL_CUSTOMLINEITEM:
            return "ILLEGAL_CUSTOMLINEITEM";
          case ValidationExceptionReason::MISSING_CUSTOMLINEITEM:
            return "MISSING_CUSTOMLINEITEM";
          case ValidationExceptionReason::ILLEGAL_CUSTOMLINEITEM_UPDATE:
            return "ILLEGAL_CUSTOMLINEITEM_UPDATE";
          case ValidationExceptionReason::TOO_MANY_CUSTOMLINEITEMS_IN_REQUEST:
            return "TOO_MANY_CUSTOMLINEITEMS_IN_REQUEST";
          case ValidationExceptionReason::ILLEGAL_CHARGE_DETAILS:
            return "ILLEGAL_CHARGE_DETAILS";
          case ValidationExceptionReason::ILLEGAL_UPDATE_CHARGE_DETAILS:
            return "ILLEGAL_UPDATE_CHARGE_DETAILS";
          case ValidationExceptionReason::INVALID_ARN:
            return "INVALID_ARN";
          case ValidationExceptionReason::ILLEGAL_RESOURCE_ARNS:
            return "ILLEGAL_RESOURCE_ARNS";
          case ValidationExceptionReason::ILLEGAL_CUSTOMLINEITEM_MODIFICATION:
            return "ILLEGAL_CUSTOMLINEITEM_MODIFICATION";
          case ValidationExceptionReason::MISSING_LINKED_ACCOUNT_IDS:
            return "MISSING_LINKED_ACCOUNT_IDS";
          case ValidationExceptionReason::MULTIPLE_LINKED_ACCOUNT_IDS:
            return "MULTIPLE_LINKED_ACCOUNT_IDS";
          case ValidationExceptionReason::MISSING_PRICING_PLAN_ARN:
            return "MISSING_PRICING_PLAN_ARN";
          case ValidationExceptionReason::MULTIPLE_PRICING_PLAN_ARN:
            return "MULTIPLE_PRICING_PLAN_ARN";
          case ValidationExceptionReason::ILLEGAL_CHILD_ASSOCIATE_RESOURCE:
            return "ILLEGAL_CHILD_ASSOCIATE_RESOURCE";
          case ValidationExceptionReason::CUSTOM_LINE_ITEM_ASSOCIATION_EXISTS:
            return "CUSTOM_LINE_ITEM_ASSOCIATION_EXISTS";
          case ValidationExceptionReason::INVALID_BILLING_GROUP:
            return "INVALID_BILLING_GROUP";
          case ValidationExceptionReason::INVALID_BILLING_PERIOD_FOR_OPERATION:
            return "INVALID_BILLING_PERIOD_FOR_OPERATION";
          case ValidationExceptionReason::ILLEGAL_BILLING_ENTITY:
            return "ILLEGAL_BILLING_ENTITY";
          case ValidationExceptionReason::ILLEGAL_MODIFIER_PERCENTAGE:
            return "ILLEGAL_MODIFIER_PERCENTAGE";
          case ValidationExceptionReason::ILLEGAL_TYPE:
            return "ILLEGAL_TYPE";
          case ValidationExceptionReason::ILLEGAL_ENDED_BILLINGGROUP:
            return "ILLEGAL_ENDED_BILLINGGROUP";
          case ValidationExceptionReason::ILLEGAL_TIERING_INPUT:
            return "ILLEGAL_TIERING_INPUT";
          case ValidationExceptionReason::ILLEGAL_OPERATION:
            return "ILLEGAL_OPERATION";
          case ValidationExceptionReason::ILLEGAL_USAGE_TYPE:
            return "ILLEGAL_USAGE_TYPE";
          case ValidationExceptionReason::INVALID_SKU_COMBO:
            return "INVALID_SKU_COMBO";
          case ValidationExceptionReason::INVALID_FILTER:
            return "INVALID_FILTER";
          case ValidationExceptionReason::TOO_MANY_AUTO_ASSOCIATE_BILLING_GROUPS:
            return "TOO_MANY_AUTO_ASSOCIATE_BILLING_GROUPS";
          case ValidationExceptionReason::CANNOT_DELETE_AUTO_ASSOCIATE_BILLING_GROUP:
            return "CANNOT_DELETE_AUTO_ASSOCIATE_BILLING_GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
