/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class UnmonitorInstancesRequest : public EC2Request {
 public:
  AWS_EC2_API UnmonitorInstancesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UnmonitorInstances"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the instances.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
  inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  void SetInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds = std::forward<InstanceIdsT>(value);
  }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  UnmonitorInstancesRequest& WithInstanceIds(InstanceIdsT&& value) {
    SetInstanceIds(std::forward<InstanceIdsT>(value));
    return *this;
  }
  template <typename InstanceIdsT = Aws::String>
  UnmonitorInstancesRequest& AddInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the metric categories to remove from the instances. If you specify
   * metric categories, only those metric categories are removed and detailed
   * monitoring remains enabled. If you don't specify metric categories, detailed
   * monitoring and all metric categories are turned off.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetricCategoryIds() const { return m_metricCategoryIds; }
  inline bool MetricCategoryIdsHasBeenSet() const { return m_metricCategoryIdsHasBeenSet; }
  template <typename MetricCategoryIdsT = Aws::Vector<Aws::String>>
  void SetMetricCategoryIds(MetricCategoryIdsT&& value) {
    m_metricCategoryIdsHasBeenSet = true;
    m_metricCategoryIds = std::forward<MetricCategoryIdsT>(value);
  }
  template <typename MetricCategoryIdsT = Aws::Vector<Aws::String>>
  UnmonitorInstancesRequest& WithMetricCategoryIds(MetricCategoryIdsT&& value) {
    SetMetricCategoryIds(std::forward<MetricCategoryIdsT>(value));
    return *this;
  }
  template <typename MetricCategoryIdsT = Aws::String>
  UnmonitorInstancesRequest& AddMetricCategoryIds(MetricCategoryIdsT&& value) {
    m_metricCategoryIdsHasBeenSet = true;
    m_metricCategoryIds.emplace_back(std::forward<MetricCategoryIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline UnmonitorInstancesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_instanceIds;

  Aws::Vector<Aws::String> m_metricCategoryIds;

  bool m_dryRun{false};
  bool m_instanceIdsHasBeenSet = false;
  bool m_metricCategoryIdsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
