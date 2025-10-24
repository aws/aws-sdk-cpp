/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class FilterByDimension {
  NOT_SET,
  resource_region,
  availability_zone_id,
  account_id,
  instance_family,
  instance_type,
  instance_platform,
  reservation_arn,
  reservation_id,
  reservation_type,
  reservation_create_timestamp,
  reservation_start_timestamp,
  reservation_end_timestamp,
  reservation_end_date_type,
  tenancy,
  reservation_state,
  reservation_instance_match_criteria,
  reservation_unused_financial_owner
};

namespace FilterByDimensionMapper {
AWS_EC2_API FilterByDimension GetFilterByDimensionForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFilterByDimension(FilterByDimension value);
}  // namespace FilterByDimensionMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
