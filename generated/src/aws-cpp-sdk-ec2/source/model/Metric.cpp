/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/Metric.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace MetricMapper {

static const int reservation_total_capacity_hrs_vcpu_HASH = HashingUtils::HashString("reservation-total-capacity-hrs-vcpu");
static const int reservation_total_capacity_hrs_inst_HASH = HashingUtils::HashString("reservation-total-capacity-hrs-inst");
static const int reservation_max_size_vcpu_HASH = HashingUtils::HashString("reservation-max-size-vcpu");
static const int reservation_max_size_inst_HASH = HashingUtils::HashString("reservation-max-size-inst");
static const int reservation_min_size_vcpu_HASH = HashingUtils::HashString("reservation-min-size-vcpu");
static const int reservation_min_size_inst_HASH = HashingUtils::HashString("reservation-min-size-inst");
static const int reservation_unused_total_capacity_hrs_vcpu_HASH = HashingUtils::HashString("reservation-unused-total-capacity-hrs-vcpu");
static const int reservation_unused_total_capacity_hrs_inst_HASH = HashingUtils::HashString("reservation-unused-total-capacity-hrs-inst");
static const int reservation_unused_total_estimated_cost_HASH = HashingUtils::HashString("reservation-unused-total-estimated-cost");
static const int reservation_max_unused_size_vcpu_HASH = HashingUtils::HashString("reservation-max-unused-size-vcpu");
static const int reservation_max_unused_size_inst_HASH = HashingUtils::HashString("reservation-max-unused-size-inst");
static const int reservation_min_unused_size_vcpu_HASH = HashingUtils::HashString("reservation-min-unused-size-vcpu");
static const int reservation_min_unused_size_inst_HASH = HashingUtils::HashString("reservation-min-unused-size-inst");
static const int reservation_max_utilization_HASH = HashingUtils::HashString("reservation-max-utilization");
static const int reservation_min_utilization_HASH = HashingUtils::HashString("reservation-min-utilization");
static const int reservation_avg_utilization_vcpu_HASH = HashingUtils::HashString("reservation-avg-utilization-vcpu");
static const int reservation_avg_utilization_inst_HASH = HashingUtils::HashString("reservation-avg-utilization-inst");
static const int reservation_total_count_HASH = HashingUtils::HashString("reservation-total-count");
static const int reservation_total_estimated_cost_HASH = HashingUtils::HashString("reservation-total-estimated-cost");
static const int reservation_avg_future_size_vcpu_HASH = HashingUtils::HashString("reservation-avg-future-size-vcpu");
static const int reservation_avg_future_size_inst_HASH = HashingUtils::HashString("reservation-avg-future-size-inst");
static const int reservation_min_future_size_vcpu_HASH = HashingUtils::HashString("reservation-min-future-size-vcpu");
static const int reservation_min_future_size_inst_HASH = HashingUtils::HashString("reservation-min-future-size-inst");
static const int reservation_max_future_size_vcpu_HASH = HashingUtils::HashString("reservation-max-future-size-vcpu");
static const int reservation_max_future_size_inst_HASH = HashingUtils::HashString("reservation-max-future-size-inst");
static const int reservation_avg_committed_size_vcpu_HASH = HashingUtils::HashString("reservation-avg-committed-size-vcpu");
static const int reservation_avg_committed_size_inst_HASH = HashingUtils::HashString("reservation-avg-committed-size-inst");
static const int reservation_max_committed_size_vcpu_HASH = HashingUtils::HashString("reservation-max-committed-size-vcpu");
static const int reservation_max_committed_size_inst_HASH = HashingUtils::HashString("reservation-max-committed-size-inst");
static const int reservation_min_committed_size_vcpu_HASH = HashingUtils::HashString("reservation-min-committed-size-vcpu");
static const int reservation_min_committed_size_inst_HASH = HashingUtils::HashString("reservation-min-committed-size-inst");
static const int reserved_total_usage_hrs_vcpu_HASH = HashingUtils::HashString("reserved-total-usage-hrs-vcpu");
static const int reserved_total_usage_hrs_inst_HASH = HashingUtils::HashString("reserved-total-usage-hrs-inst");
static const int reserved_total_estimated_cost_HASH = HashingUtils::HashString("reserved-total-estimated-cost");
static const int unreserved_total_usage_hrs_vcpu_HASH = HashingUtils::HashString("unreserved-total-usage-hrs-vcpu");
static const int unreserved_total_usage_hrs_inst_HASH = HashingUtils::HashString("unreserved-total-usage-hrs-inst");
static const int unreserved_total_estimated_cost_HASH = HashingUtils::HashString("unreserved-total-estimated-cost");
static const int spot_total_usage_hrs_vcpu_HASH = HashingUtils::HashString("spot-total-usage-hrs-vcpu");
static const int spot_total_usage_hrs_inst_HASH = HashingUtils::HashString("spot-total-usage-hrs-inst");
static const int spot_total_estimated_cost_HASH = HashingUtils::HashString("spot-total-estimated-cost");
static const int spot_avg_run_time_before_interruption_inst_HASH = HashingUtils::HashString("spot-avg-run-time-before-interruption-inst");
static const int spot_max_run_time_before_interruption_inst_HASH = HashingUtils::HashString("spot-max-run-time-before-interruption-inst");
static const int spot_min_run_time_before_interruption_inst_HASH = HashingUtils::HashString("spot-min-run-time-before-interruption-inst");
static const int spot_total_interruptions_inst_HASH = HashingUtils::HashString("spot-total-interruptions-inst");
static const int spot_total_interruptions_vcpu_HASH = HashingUtils::HashString("spot-total-interruptions-vcpu");
static const int spot_total_count_inst_HASH = HashingUtils::HashString("spot-total-count-inst");
static const int spot_total_count_vcpu_HASH = HashingUtils::HashString("spot-total-count-vcpu");
static const int spot_interruption_rate_inst_HASH = HashingUtils::HashString("spot-interruption-rate-inst");
static const int spot_interruption_rate_vcpu_HASH = HashingUtils::HashString("spot-interruption-rate-vcpu");

Metric GetMetricForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == reservation_total_capacity_hrs_vcpu_HASH) {
    return Metric::reservation_total_capacity_hrs_vcpu;
  } else if (hashCode == reservation_total_capacity_hrs_inst_HASH) {
    return Metric::reservation_total_capacity_hrs_inst;
  } else if (hashCode == reservation_max_size_vcpu_HASH) {
    return Metric::reservation_max_size_vcpu;
  } else if (hashCode == reservation_max_size_inst_HASH) {
    return Metric::reservation_max_size_inst;
  } else if (hashCode == reservation_min_size_vcpu_HASH) {
    return Metric::reservation_min_size_vcpu;
  } else if (hashCode == reservation_min_size_inst_HASH) {
    return Metric::reservation_min_size_inst;
  } else if (hashCode == reservation_unused_total_capacity_hrs_vcpu_HASH) {
    return Metric::reservation_unused_total_capacity_hrs_vcpu;
  } else if (hashCode == reservation_unused_total_capacity_hrs_inst_HASH) {
    return Metric::reservation_unused_total_capacity_hrs_inst;
  } else if (hashCode == reservation_unused_total_estimated_cost_HASH) {
    return Metric::reservation_unused_total_estimated_cost;
  } else if (hashCode == reservation_max_unused_size_vcpu_HASH) {
    return Metric::reservation_max_unused_size_vcpu;
  } else if (hashCode == reservation_max_unused_size_inst_HASH) {
    return Metric::reservation_max_unused_size_inst;
  } else if (hashCode == reservation_min_unused_size_vcpu_HASH) {
    return Metric::reservation_min_unused_size_vcpu;
  } else if (hashCode == reservation_min_unused_size_inst_HASH) {
    return Metric::reservation_min_unused_size_inst;
  } else if (hashCode == reservation_max_utilization_HASH) {
    return Metric::reservation_max_utilization;
  } else if (hashCode == reservation_min_utilization_HASH) {
    return Metric::reservation_min_utilization;
  } else if (hashCode == reservation_avg_utilization_vcpu_HASH) {
    return Metric::reservation_avg_utilization_vcpu;
  } else if (hashCode == reservation_avg_utilization_inst_HASH) {
    return Metric::reservation_avg_utilization_inst;
  } else if (hashCode == reservation_total_count_HASH) {
    return Metric::reservation_total_count;
  } else if (hashCode == reservation_total_estimated_cost_HASH) {
    return Metric::reservation_total_estimated_cost;
  } else if (hashCode == reservation_avg_future_size_vcpu_HASH) {
    return Metric::reservation_avg_future_size_vcpu;
  } else if (hashCode == reservation_avg_future_size_inst_HASH) {
    return Metric::reservation_avg_future_size_inst;
  } else if (hashCode == reservation_min_future_size_vcpu_HASH) {
    return Metric::reservation_min_future_size_vcpu;
  } else if (hashCode == reservation_min_future_size_inst_HASH) {
    return Metric::reservation_min_future_size_inst;
  } else if (hashCode == reservation_max_future_size_vcpu_HASH) {
    return Metric::reservation_max_future_size_vcpu;
  } else if (hashCode == reservation_max_future_size_inst_HASH) {
    return Metric::reservation_max_future_size_inst;
  } else if (hashCode == reservation_avg_committed_size_vcpu_HASH) {
    return Metric::reservation_avg_committed_size_vcpu;
  } else if (hashCode == reservation_avg_committed_size_inst_HASH) {
    return Metric::reservation_avg_committed_size_inst;
  } else if (hashCode == reservation_max_committed_size_vcpu_HASH) {
    return Metric::reservation_max_committed_size_vcpu;
  } else if (hashCode == reservation_max_committed_size_inst_HASH) {
    return Metric::reservation_max_committed_size_inst;
  } else if (hashCode == reservation_min_committed_size_vcpu_HASH) {
    return Metric::reservation_min_committed_size_vcpu;
  } else if (hashCode == reservation_min_committed_size_inst_HASH) {
    return Metric::reservation_min_committed_size_inst;
  } else if (hashCode == reserved_total_usage_hrs_vcpu_HASH) {
    return Metric::reserved_total_usage_hrs_vcpu;
  } else if (hashCode == reserved_total_usage_hrs_inst_HASH) {
    return Metric::reserved_total_usage_hrs_inst;
  } else if (hashCode == reserved_total_estimated_cost_HASH) {
    return Metric::reserved_total_estimated_cost;
  } else if (hashCode == unreserved_total_usage_hrs_vcpu_HASH) {
    return Metric::unreserved_total_usage_hrs_vcpu;
  } else if (hashCode == unreserved_total_usage_hrs_inst_HASH) {
    return Metric::unreserved_total_usage_hrs_inst;
  } else if (hashCode == unreserved_total_estimated_cost_HASH) {
    return Metric::unreserved_total_estimated_cost;
  } else if (hashCode == spot_total_usage_hrs_vcpu_HASH) {
    return Metric::spot_total_usage_hrs_vcpu;
  } else if (hashCode == spot_total_usage_hrs_inst_HASH) {
    return Metric::spot_total_usage_hrs_inst;
  } else if (hashCode == spot_total_estimated_cost_HASH) {
    return Metric::spot_total_estimated_cost;
  } else if (hashCode == spot_avg_run_time_before_interruption_inst_HASH) {
    return Metric::spot_avg_run_time_before_interruption_inst;
  } else if (hashCode == spot_max_run_time_before_interruption_inst_HASH) {
    return Metric::spot_max_run_time_before_interruption_inst;
  } else if (hashCode == spot_min_run_time_before_interruption_inst_HASH) {
    return Metric::spot_min_run_time_before_interruption_inst;
  } else if (hashCode == spot_total_interruptions_inst_HASH) {
    return Metric::spot_total_interruptions_inst;
  } else if (hashCode == spot_total_interruptions_vcpu_HASH) {
    return Metric::spot_total_interruptions_vcpu;
  } else if (hashCode == spot_total_count_inst_HASH) {
    return Metric::spot_total_count_inst;
  } else if (hashCode == spot_total_count_vcpu_HASH) {
    return Metric::spot_total_count_vcpu;
  } else if (hashCode == spot_interruption_rate_inst_HASH) {
    return Metric::spot_interruption_rate_inst;
  } else if (hashCode == spot_interruption_rate_vcpu_HASH) {
    return Metric::spot_interruption_rate_vcpu;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Metric>(hashCode);
  }

  return Metric::NOT_SET;
}

Aws::String GetNameForMetric(Metric enumValue) {
  switch (enumValue) {
    case Metric::NOT_SET:
      return {};
    case Metric::reservation_total_capacity_hrs_vcpu:
      return "reservation-total-capacity-hrs-vcpu";
    case Metric::reservation_total_capacity_hrs_inst:
      return "reservation-total-capacity-hrs-inst";
    case Metric::reservation_max_size_vcpu:
      return "reservation-max-size-vcpu";
    case Metric::reservation_max_size_inst:
      return "reservation-max-size-inst";
    case Metric::reservation_min_size_vcpu:
      return "reservation-min-size-vcpu";
    case Metric::reservation_min_size_inst:
      return "reservation-min-size-inst";
    case Metric::reservation_unused_total_capacity_hrs_vcpu:
      return "reservation-unused-total-capacity-hrs-vcpu";
    case Metric::reservation_unused_total_capacity_hrs_inst:
      return "reservation-unused-total-capacity-hrs-inst";
    case Metric::reservation_unused_total_estimated_cost:
      return "reservation-unused-total-estimated-cost";
    case Metric::reservation_max_unused_size_vcpu:
      return "reservation-max-unused-size-vcpu";
    case Metric::reservation_max_unused_size_inst:
      return "reservation-max-unused-size-inst";
    case Metric::reservation_min_unused_size_vcpu:
      return "reservation-min-unused-size-vcpu";
    case Metric::reservation_min_unused_size_inst:
      return "reservation-min-unused-size-inst";
    case Metric::reservation_max_utilization:
      return "reservation-max-utilization";
    case Metric::reservation_min_utilization:
      return "reservation-min-utilization";
    case Metric::reservation_avg_utilization_vcpu:
      return "reservation-avg-utilization-vcpu";
    case Metric::reservation_avg_utilization_inst:
      return "reservation-avg-utilization-inst";
    case Metric::reservation_total_count:
      return "reservation-total-count";
    case Metric::reservation_total_estimated_cost:
      return "reservation-total-estimated-cost";
    case Metric::reservation_avg_future_size_vcpu:
      return "reservation-avg-future-size-vcpu";
    case Metric::reservation_avg_future_size_inst:
      return "reservation-avg-future-size-inst";
    case Metric::reservation_min_future_size_vcpu:
      return "reservation-min-future-size-vcpu";
    case Metric::reservation_min_future_size_inst:
      return "reservation-min-future-size-inst";
    case Metric::reservation_max_future_size_vcpu:
      return "reservation-max-future-size-vcpu";
    case Metric::reservation_max_future_size_inst:
      return "reservation-max-future-size-inst";
    case Metric::reservation_avg_committed_size_vcpu:
      return "reservation-avg-committed-size-vcpu";
    case Metric::reservation_avg_committed_size_inst:
      return "reservation-avg-committed-size-inst";
    case Metric::reservation_max_committed_size_vcpu:
      return "reservation-max-committed-size-vcpu";
    case Metric::reservation_max_committed_size_inst:
      return "reservation-max-committed-size-inst";
    case Metric::reservation_min_committed_size_vcpu:
      return "reservation-min-committed-size-vcpu";
    case Metric::reservation_min_committed_size_inst:
      return "reservation-min-committed-size-inst";
    case Metric::reserved_total_usage_hrs_vcpu:
      return "reserved-total-usage-hrs-vcpu";
    case Metric::reserved_total_usage_hrs_inst:
      return "reserved-total-usage-hrs-inst";
    case Metric::reserved_total_estimated_cost:
      return "reserved-total-estimated-cost";
    case Metric::unreserved_total_usage_hrs_vcpu:
      return "unreserved-total-usage-hrs-vcpu";
    case Metric::unreserved_total_usage_hrs_inst:
      return "unreserved-total-usage-hrs-inst";
    case Metric::unreserved_total_estimated_cost:
      return "unreserved-total-estimated-cost";
    case Metric::spot_total_usage_hrs_vcpu:
      return "spot-total-usage-hrs-vcpu";
    case Metric::spot_total_usage_hrs_inst:
      return "spot-total-usage-hrs-inst";
    case Metric::spot_total_estimated_cost:
      return "spot-total-estimated-cost";
    case Metric::spot_avg_run_time_before_interruption_inst:
      return "spot-avg-run-time-before-interruption-inst";
    case Metric::spot_max_run_time_before_interruption_inst:
      return "spot-max-run-time-before-interruption-inst";
    case Metric::spot_min_run_time_before_interruption_inst:
      return "spot-min-run-time-before-interruption-inst";
    case Metric::spot_total_interruptions_inst:
      return "spot-total-interruptions-inst";
    case Metric::spot_total_interruptions_vcpu:
      return "spot-total-interruptions-vcpu";
    case Metric::spot_total_count_inst:
      return "spot-total-count-inst";
    case Metric::spot_total_count_vcpu:
      return "spot-total-count-vcpu";
    case Metric::spot_interruption_rate_inst:
      return "spot-interruption-rate-inst";
    case Metric::spot_interruption_rate_vcpu:
      return "spot-interruption-rate-vcpu";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
