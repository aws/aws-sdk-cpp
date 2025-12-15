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
enum class Metric {
  NOT_SET,
  reservation_total_capacity_hrs_vcpu,
  reservation_total_capacity_hrs_inst,
  reservation_max_size_vcpu,
  reservation_max_size_inst,
  reservation_min_size_vcpu,
  reservation_min_size_inst,
  reservation_unused_total_capacity_hrs_vcpu,
  reservation_unused_total_capacity_hrs_inst,
  reservation_unused_total_estimated_cost,
  reservation_max_unused_size_vcpu,
  reservation_max_unused_size_inst,
  reservation_min_unused_size_vcpu,
  reservation_min_unused_size_inst,
  reservation_max_utilization,
  reservation_min_utilization,
  reservation_avg_utilization_vcpu,
  reservation_avg_utilization_inst,
  reservation_total_count,
  reservation_total_estimated_cost,
  reservation_avg_future_size_vcpu,
  reservation_avg_future_size_inst,
  reservation_min_future_size_vcpu,
  reservation_min_future_size_inst,
  reservation_max_future_size_vcpu,
  reservation_max_future_size_inst,
  reservation_avg_committed_size_vcpu,
  reservation_avg_committed_size_inst,
  reservation_max_committed_size_vcpu,
  reservation_max_committed_size_inst,
  reservation_min_committed_size_vcpu,
  reservation_min_committed_size_inst,
  reserved_total_usage_hrs_vcpu,
  reserved_total_usage_hrs_inst,
  reserved_total_estimated_cost,
  unreserved_total_usage_hrs_vcpu,
  unreserved_total_usage_hrs_inst,
  unreserved_total_estimated_cost,
  spot_total_usage_hrs_vcpu,
  spot_total_usage_hrs_inst,
  spot_total_estimated_cost,
  spot_avg_run_time_before_interruption_inst,
  spot_max_run_time_before_interruption_inst,
  spot_min_run_time_before_interruption_inst,
  spot_total_interruptions_inst,
  spot_total_interruptions_vcpu,
  spot_total_count_inst,
  spot_total_count_vcpu,
  spot_interruption_rate_inst,
  spot_interruption_rate_vcpu
};

namespace MetricMapper {
AWS_EC2_API Metric GetMetricForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForMetric(Metric value);
}  // namespace MetricMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
