/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{
  enum class Dimension
  {
    NOT_SET,
    AZ,
    INSTANCE_TYPE,
    LINKED_ACCOUNT,
    OPERATION,
    PURCHASE_TYPE,
    REGION,
    SERVICE,
    USAGE_TYPE,
    USAGE_TYPE_GROUP,
    RECORD_TYPE,
    RESOURCE_ID,
    SUBSCRIPTION_ID,
    TAG_KEY,
    OPERATING_SYSTEM,
    TENANCY,
    BILLING_ENTITY,
    RESERVATION_ID,
    COST_CATEGORY_NAME,
    DATABASE_ENGINE,
    LEGAL_ENTITY_NAME,
    SAVINGS_PLANS_TYPE,
    INSTANCE_TYPE_FAMILY,
    CACHE_ENGINE,
    DEPLOYMENT_OPTION,
    SCOPE,
    PLATFORM
  };

namespace DimensionMapper
{
AWS_BCMDASHBOARDS_API Dimension GetDimensionForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForDimension(Dimension value);
} // namespace DimensionMapper
} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
