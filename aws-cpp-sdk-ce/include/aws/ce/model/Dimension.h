/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class Dimension
  {
    NOT_SET,
    AZ,
    INSTANCE_TYPE,
    LINKED_ACCOUNT,
    LINKED_ACCOUNT_NAME,
    OPERATION,
    PURCHASE_TYPE,
    REGION,
    SERVICE,
    SERVICE_CODE,
    USAGE_TYPE,
    USAGE_TYPE_GROUP,
    RECORD_TYPE,
    OPERATING_SYSTEM,
    TENANCY,
    SCOPE,
    PLATFORM,
    SUBSCRIPTION_ID,
    LEGAL_ENTITY_NAME,
    DEPLOYMENT_OPTION,
    DATABASE_ENGINE,
    CACHE_ENGINE,
    INSTANCE_TYPE_FAMILY,
    BILLING_ENTITY,
    RESERVATION_ID,
    RESOURCE_ID,
    RIGHTSIZING_TYPE,
    SAVINGS_PLANS_TYPE,
    SAVINGS_PLAN_ARN,
    PAYMENT_OPTION,
    AGREEMENT_END_DATE_TIME_AFTER,
    AGREEMENT_END_DATE_TIME_BEFORE,
    INVOICING_ENTITY,
    ANOMALY_TOTAL_IMPACT_ABSOLUTE,
    ANOMALY_TOTAL_IMPACT_PERCENTAGE
  };

namespace DimensionMapper
{
AWS_COSTEXPLORER_API Dimension GetDimensionForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForDimension(Dimension value);
} // namespace DimensionMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
