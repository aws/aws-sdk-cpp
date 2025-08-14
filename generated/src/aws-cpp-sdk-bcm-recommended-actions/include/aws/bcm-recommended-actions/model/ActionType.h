/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMRecommendedActions
{
namespace Model
{
  enum class ActionType
  {
    NOT_SET,
    ADD_ALTERNATE_BILLING_CONTACT,
    CREATE_ANOMALY_MONITOR,
    CREATE_BUDGET,
    ENABLE_COST_OPTIMIZATION_HUB,
    MIGRATE_TO_GRANULAR_PERMISSIONS,
    PAYMENTS_DUE,
    PAYMENTS_PAST_DUE,
    REVIEW_ANOMALIES,
    REVIEW_BUDGET_ALERTS,
    REVIEW_BUDGETS_EXCEEDED,
    REVIEW_EXPIRING_RI,
    REVIEW_EXPIRING_SP,
    REVIEW_FREETIER_USAGE_ALERTS,
    REVIEW_SAVINGS_OPPORTUNITY_RECOMMENDATIONS,
    UPDATE_EXPIRED_PAYMENT_METHOD,
    UPDATE_INVALID_PAYMENT_METHOD,
    UPDATE_TAX_EXEMPTION_CERTIFICATE,
    UPDATE_TAX_REGISTRATION_NUMBER
  };

namespace ActionTypeMapper
{
AWS_BCMRECOMMENDEDACTIONS_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_BCMRECOMMENDEDACTIONS_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
