/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
namespace Model
{
  enum class DataSetType
  {
    NOT_SET,
    customer_subscriber_hourly_monthly_subscriptions,
    customer_subscriber_annual_subscriptions,
    daily_business_usage_by_instance_type,
    daily_business_fees,
    daily_business_free_trial_conversions,
    daily_business_new_instances,
    daily_business_new_product_subscribers,
    daily_business_canceled_product_subscribers,
    monthly_revenue_billing_and_revenue_data,
    monthly_revenue_annual_subscriptions,
    monthly_revenue_field_demonstration_usage,
    monthly_revenue_flexible_payment_schedule,
    disbursed_amount_by_product,
    disbursed_amount_by_product_with_uncollected_funds,
    disbursed_amount_by_instance_hours,
    disbursed_amount_by_customer_geo,
    disbursed_amount_by_age_of_uncollected_funds,
    disbursed_amount_by_age_of_disbursed_funds,
    disbursed_amount_by_age_of_past_due_funds,
    disbursed_amount_by_uncollected_funds_breakdown,
    customer_profile_by_industry,
    customer_profile_by_revenue,
    customer_profile_by_geography,
    sales_compensation_billed_revenue,
    us_sales_and_use_tax_records
  };

namespace DataSetTypeMapper
{
AWS_MARKETPLACECOMMERCEANALYTICS_API DataSetType GetDataSetTypeForName(const Aws::String& name);

AWS_MARKETPLACECOMMERCEANALYTICS_API Aws::String GetNameForDataSetType(DataSetType value);
} // namespace DataSetTypeMapper
} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
