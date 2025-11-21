/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/RetryStrategy.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AutoScaling {
namespace Model {

/**
 */
class LaunchInstancesRequest : public AutoScalingRequest {
 public:
  AWS_AUTOSCALING_API LaunchInstancesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "LaunchInstances"; }

  AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

 protected:
  AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p> The name of the Auto Scaling group to launch instances into. </p>
   */
  inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
  inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
  template <typename AutoScalingGroupNameT = Aws::String>
  void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) {
    m_autoScalingGroupNameHasBeenSet = true;
    m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value);
  }
  template <typename AutoScalingGroupNameT = Aws::String>
  LaunchInstancesRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) {
    SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of instances to launch. Although this value can exceed 100 for
   * instance weights, the actual instance count is limited to 100 instances per
   * launch. </p>
   */
  inline int GetRequestedCapacity() const { return m_requestedCapacity; }
  inline bool RequestedCapacityHasBeenSet() const { return m_requestedCapacityHasBeenSet; }
  inline void SetRequestedCapacity(int value) {
    m_requestedCapacityHasBeenSet = true;
    m_requestedCapacity = value;
  }
  inline LaunchInstancesRequest& WithRequestedCapacity(int value) {
    SetRequestedCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A unique, case-sensitive identifier to ensure idempotency of the request.
   * </p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  LaunchInstancesRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Availability Zones for the instance launch. Must match or be included in
   * the Auto Scaling group's Availability Zone configuration. Either
   * <code>AvailabilityZones</code> or <code>SubnetIds</code> must be specified for
   * groups with multiple Availability Zone configurations. </p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  LaunchInstancesRequest& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  LaunchInstancesRequest& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of Availability Zone IDs where instances should be launched. Must
   * match or be included in the group's AZ configuration. You cannot specify both
   * AvailabilityZones and AvailabilityZoneIds. Required for multi-AZ groups,
   * optional for single-AZ groups. </p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
  inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }
  template <typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    m_availabilityZoneIdsHasBeenSet = true;
    m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value);
  }
  template <typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  LaunchInstancesRequest& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value));
    return *this;
  }
  template <typename AvailabilityZoneIdsT = Aws::String>
  LaunchInstancesRequest& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    m_availabilityZoneIdsHasBeenSet = true;
    m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The subnet IDs for the instance launch. Either
   * <code>AvailabilityZones</code> or <code>SubnetIds</code> must be specified. If
   * both are specified, the subnets must reside in the specified Availability Zones.
   * </p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  LaunchInstancesRequest& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  LaunchInstancesRequest& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Specifies whether to retry asynchronously if the synchronous launch fails.
   * Valid values are NONE (default, no async retry) and
   * RETRY_WITH_GROUP_CONFIGURATION (increase desired capacity and retry with group
   * configuration). </p>
   */
  inline RetryStrategy GetRetryStrategy() const { return m_retryStrategy; }
  inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
  inline void SetRetryStrategy(RetryStrategy value) {
    m_retryStrategyHasBeenSet = true;
    m_retryStrategy = value;
  }
  inline LaunchInstancesRequest& WithRetryStrategy(RetryStrategy value) {
    SetRetryStrategy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_autoScalingGroupName;
  bool m_autoScalingGroupNameHasBeenSet = false;

  int m_requestedCapacity{0};
  bool m_requestedCapacityHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::Vector<Aws::String> m_availabilityZones;
  bool m_availabilityZonesHasBeenSet = false;

  Aws::Vector<Aws::String> m_availabilityZoneIds;
  bool m_availabilityZoneIdsHasBeenSet = false;

  Aws::Vector<Aws::String> m_subnetIds;
  bool m_subnetIdsHasBeenSet = false;

  RetryStrategy m_retryStrategy{RetryStrategy::NOT_SET};
  bool m_retryStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
