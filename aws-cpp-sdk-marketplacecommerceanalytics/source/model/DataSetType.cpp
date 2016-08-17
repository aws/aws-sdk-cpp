/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/marketplacecommerceanalytics/model/DataSetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCommerceAnalytics
  {
    namespace Model
    {
      namespace DataSetTypeMapper
      {

        static const int customer_subscriber_hourly_monthly_subscriptions_HASH = HashingUtils::HashString("customer_subscriber_hourly_monthly_subscriptions");
        static const int customer_subscriber_annual_subscriptions_HASH = HashingUtils::HashString("customer_subscriber_annual_subscriptions");
        static const int daily_business_usage_by_instance_type_HASH = HashingUtils::HashString("daily_business_usage_by_instance_type");
        static const int daily_business_fees_HASH = HashingUtils::HashString("daily_business_fees");
        static const int daily_business_free_trial_conversions_HASH = HashingUtils::HashString("daily_business_free_trial_conversions");
        static const int daily_business_new_instances_HASH = HashingUtils::HashString("daily_business_new_instances");
        static const int daily_business_new_product_subscribers_HASH = HashingUtils::HashString("daily_business_new_product_subscribers");
        static const int daily_business_canceled_product_subscribers_HASH = HashingUtils::HashString("daily_business_canceled_product_subscribers");
        static const int monthly_revenue_billing_and_revenue_data_HASH = HashingUtils::HashString("monthly_revenue_billing_and_revenue_data");
        static const int monthly_revenue_annual_subscriptions_HASH = HashingUtils::HashString("monthly_revenue_annual_subscriptions");
        static const int disbursed_amount_by_product_HASH = HashingUtils::HashString("disbursed_amount_by_product");
        static const int disbursed_amount_by_product_with_uncollected_funds_HASH = HashingUtils::HashString("disbursed_amount_by_product_with_uncollected_funds");
        static const int disbursed_amount_by_customer_geo_HASH = HashingUtils::HashString("disbursed_amount_by_customer_geo");
        static const int disbursed_amount_by_age_of_uncollected_funds_HASH = HashingUtils::HashString("disbursed_amount_by_age_of_uncollected_funds");
        static const int disbursed_amount_by_age_of_disbursed_funds_HASH = HashingUtils::HashString("disbursed_amount_by_age_of_disbursed_funds");
        static const int customer_profile_by_industry_HASH = HashingUtils::HashString("customer_profile_by_industry");
        static const int customer_profile_by_revenue_HASH = HashingUtils::HashString("customer_profile_by_revenue");
        static const int customer_profile_by_geography_HASH = HashingUtils::HashString("customer_profile_by_geography");


        DataSetType GetDataSetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == customer_subscriber_hourly_monthly_subscriptions_HASH)
          {
            return DataSetType::customer_subscriber_hourly_monthly_subscriptions;
          }
          else if (hashCode == customer_subscriber_annual_subscriptions_HASH)
          {
            return DataSetType::customer_subscriber_annual_subscriptions;
          }
          else if (hashCode == daily_business_usage_by_instance_type_HASH)
          {
            return DataSetType::daily_business_usage_by_instance_type;
          }
          else if (hashCode == daily_business_fees_HASH)
          {
            return DataSetType::daily_business_fees;
          }
          else if (hashCode == daily_business_free_trial_conversions_HASH)
          {
            return DataSetType::daily_business_free_trial_conversions;
          }
          else if (hashCode == daily_business_new_instances_HASH)
          {
            return DataSetType::daily_business_new_instances;
          }
          else if (hashCode == daily_business_new_product_subscribers_HASH)
          {
            return DataSetType::daily_business_new_product_subscribers;
          }
          else if (hashCode == daily_business_canceled_product_subscribers_HASH)
          {
            return DataSetType::daily_business_canceled_product_subscribers;
          }
          else if (hashCode == monthly_revenue_billing_and_revenue_data_HASH)
          {
            return DataSetType::monthly_revenue_billing_and_revenue_data;
          }
          else if (hashCode == monthly_revenue_annual_subscriptions_HASH)
          {
            return DataSetType::monthly_revenue_annual_subscriptions;
          }
          else if (hashCode == disbursed_amount_by_product_HASH)
          {
            return DataSetType::disbursed_amount_by_product;
          }
          else if (hashCode == disbursed_amount_by_product_with_uncollected_funds_HASH)
          {
            return DataSetType::disbursed_amount_by_product_with_uncollected_funds;
          }
          else if (hashCode == disbursed_amount_by_customer_geo_HASH)
          {
            return DataSetType::disbursed_amount_by_customer_geo;
          }
          else if (hashCode == disbursed_amount_by_age_of_uncollected_funds_HASH)
          {
            return DataSetType::disbursed_amount_by_age_of_uncollected_funds;
          }
          else if (hashCode == disbursed_amount_by_age_of_disbursed_funds_HASH)
          {
            return DataSetType::disbursed_amount_by_age_of_disbursed_funds;
          }
          else if (hashCode == customer_profile_by_industry_HASH)
          {
            return DataSetType::customer_profile_by_industry;
          }
          else if (hashCode == customer_profile_by_revenue_HASH)
          {
            return DataSetType::customer_profile_by_revenue;
          }
          else if (hashCode == customer_profile_by_geography_HASH)
          {
            return DataSetType::customer_profile_by_geography;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSetType>(hashCode);
          }

          return DataSetType::NOT_SET;
        }

        Aws::String GetNameForDataSetType(DataSetType enumValue)
        {
          switch(enumValue)
          {
          case DataSetType::customer_subscriber_hourly_monthly_subscriptions:
            return "customer_subscriber_hourly_monthly_subscriptions";
          case DataSetType::customer_subscriber_annual_subscriptions:
            return "customer_subscriber_annual_subscriptions";
          case DataSetType::daily_business_usage_by_instance_type:
            return "daily_business_usage_by_instance_type";
          case DataSetType::daily_business_fees:
            return "daily_business_fees";
          case DataSetType::daily_business_free_trial_conversions:
            return "daily_business_free_trial_conversions";
          case DataSetType::daily_business_new_instances:
            return "daily_business_new_instances";
          case DataSetType::daily_business_new_product_subscribers:
            return "daily_business_new_product_subscribers";
          case DataSetType::daily_business_canceled_product_subscribers:
            return "daily_business_canceled_product_subscribers";
          case DataSetType::monthly_revenue_billing_and_revenue_data:
            return "monthly_revenue_billing_and_revenue_data";
          case DataSetType::monthly_revenue_annual_subscriptions:
            return "monthly_revenue_annual_subscriptions";
          case DataSetType::disbursed_amount_by_product:
            return "disbursed_amount_by_product";
          case DataSetType::disbursed_amount_by_product_with_uncollected_funds:
            return "disbursed_amount_by_product_with_uncollected_funds";
          case DataSetType::disbursed_amount_by_customer_geo:
            return "disbursed_amount_by_customer_geo";
          case DataSetType::disbursed_amount_by_age_of_uncollected_funds:
            return "disbursed_amount_by_age_of_uncollected_funds";
          case DataSetType::disbursed_amount_by_age_of_disbursed_funds:
            return "disbursed_amount_by_age_of_disbursed_funds";
          case DataSetType::customer_profile_by_industry:
            return "customer_profile_by_industry";
          case DataSetType::customer_profile_by_revenue:
            return "customer_profile_by_revenue";
          case DataSetType::customer_profile_by_geography:
            return "customer_profile_by_geography";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DataSetTypeMapper
    } // namespace Model
  } // namespace MarketplaceCommerceAnalytics
} // namespace Aws
