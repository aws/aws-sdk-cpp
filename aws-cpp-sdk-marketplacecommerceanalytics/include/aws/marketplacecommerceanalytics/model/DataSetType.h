/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    disbursed_amount_by_product,
    disbursed_amount_by_product_with_uncollected_funds,
    disbursed_amount_by_instance_hours,
    disbursed_amount_by_customer_geo,
    disbursed_amount_by_age_of_uncollected_funds,
    disbursed_amount_by_age_of_disbursed_funds,
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
