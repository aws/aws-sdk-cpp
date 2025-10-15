/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GroupBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace GroupByMapper
      {

        static const int resource_region_HASH = HashingUtils::HashString("resource-region");
        static const int availability_zone_id_HASH = HashingUtils::HashString("availability-zone-id");
        static const int account_id_HASH = HashingUtils::HashString("account-id");
        static const int instance_family_HASH = HashingUtils::HashString("instance-family");
        static const int instance_type_HASH = HashingUtils::HashString("instance-type");
        static const int instance_platform_HASH = HashingUtils::HashString("instance-platform");
        static const int reservation_arn_HASH = HashingUtils::HashString("reservation-arn");
        static const int reservation_id_HASH = HashingUtils::HashString("reservation-id");
        static const int reservation_type_HASH = HashingUtils::HashString("reservation-type");
        static const int reservation_create_timestamp_HASH = HashingUtils::HashString("reservation-create-timestamp");
        static const int reservation_start_timestamp_HASH = HashingUtils::HashString("reservation-start-timestamp");
        static const int reservation_end_timestamp_HASH = HashingUtils::HashString("reservation-end-timestamp");
        static const int reservation_end_date_type_HASH = HashingUtils::HashString("reservation-end-date-type");
        static const int tenancy_HASH = HashingUtils::HashString("tenancy");
        static const int reservation_state_HASH = HashingUtils::HashString("reservation-state");
        static const int reservation_instance_match_criteria_HASH = HashingUtils::HashString("reservation-instance-match-criteria");
        static const int reservation_unused_financial_owner_HASH = HashingUtils::HashString("reservation-unused-financial-owner");


        GroupBy GetGroupByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == resource_region_HASH)
          {
            return GroupBy::resource_region;
          }
          else if (hashCode == availability_zone_id_HASH)
          {
            return GroupBy::availability_zone_id;
          }
          else if (hashCode == account_id_HASH)
          {
            return GroupBy::account_id;
          }
          else if (hashCode == instance_family_HASH)
          {
            return GroupBy::instance_family;
          }
          else if (hashCode == instance_type_HASH)
          {
            return GroupBy::instance_type;
          }
          else if (hashCode == instance_platform_HASH)
          {
            return GroupBy::instance_platform;
          }
          else if (hashCode == reservation_arn_HASH)
          {
            return GroupBy::reservation_arn;
          }
          else if (hashCode == reservation_id_HASH)
          {
            return GroupBy::reservation_id;
          }
          else if (hashCode == reservation_type_HASH)
          {
            return GroupBy::reservation_type;
          }
          else if (hashCode == reservation_create_timestamp_HASH)
          {
            return GroupBy::reservation_create_timestamp;
          }
          else if (hashCode == reservation_start_timestamp_HASH)
          {
            return GroupBy::reservation_start_timestamp;
          }
          else if (hashCode == reservation_end_timestamp_HASH)
          {
            return GroupBy::reservation_end_timestamp;
          }
          else if (hashCode == reservation_end_date_type_HASH)
          {
            return GroupBy::reservation_end_date_type;
          }
          else if (hashCode == tenancy_HASH)
          {
            return GroupBy::tenancy;
          }
          else if (hashCode == reservation_state_HASH)
          {
            return GroupBy::reservation_state;
          }
          else if (hashCode == reservation_instance_match_criteria_HASH)
          {
            return GroupBy::reservation_instance_match_criteria;
          }
          else if (hashCode == reservation_unused_financial_owner_HASH)
          {
            return GroupBy::reservation_unused_financial_owner;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupBy>(hashCode);
          }

          return GroupBy::NOT_SET;
        }

        Aws::String GetNameForGroupBy(GroupBy enumValue)
        {
          switch(enumValue)
          {
          case GroupBy::NOT_SET:
            return {};
          case GroupBy::resource_region:
            return "resource-region";
          case GroupBy::availability_zone_id:
            return "availability-zone-id";
          case GroupBy::account_id:
            return "account-id";
          case GroupBy::instance_family:
            return "instance-family";
          case GroupBy::instance_type:
            return "instance-type";
          case GroupBy::instance_platform:
            return "instance-platform";
          case GroupBy::reservation_arn:
            return "reservation-arn";
          case GroupBy::reservation_id:
            return "reservation-id";
          case GroupBy::reservation_type:
            return "reservation-type";
          case GroupBy::reservation_create_timestamp:
            return "reservation-create-timestamp";
          case GroupBy::reservation_start_timestamp:
            return "reservation-start-timestamp";
          case GroupBy::reservation_end_timestamp:
            return "reservation-end-timestamp";
          case GroupBy::reservation_end_date_type:
            return "reservation-end-date-type";
          case GroupBy::tenancy:
            return "tenancy";
          case GroupBy::reservation_state:
            return "reservation-state";
          case GroupBy::reservation_instance_match_criteria:
            return "reservation-instance-match-criteria";
          case GroupBy::reservation_unused_financial_owner:
            return "reservation-unused-financial-owner";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupByMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
