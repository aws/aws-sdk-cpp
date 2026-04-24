/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/EcsClusterStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about the Amazon ECS cluster involved in a GuardDuty
 * finding, including cluster identification and status.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EcsCluster">AWS
 * API Reference</a></p>
 */
class EcsCluster {
 public:
  AWS_GUARDDUTY_API EcsCluster() = default;
  AWS_GUARDDUTY_API EcsCluster(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API EcsCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the Amazon ECS cluster.</p>
   */
  inline EcsClusterStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EcsClusterStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EcsCluster& WithStatus(EcsClusterStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of unique identifiers for the Amazon EC2 instances that serve as
   * container instances in the Amazon ECS cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEc2InstanceUids() const { return m_ec2InstanceUids; }
  inline bool Ec2InstanceUidsHasBeenSet() const { return m_ec2InstanceUidsHasBeenSet; }
  template <typename Ec2InstanceUidsT = Aws::Vector<Aws::String>>
  void SetEc2InstanceUids(Ec2InstanceUidsT&& value) {
    m_ec2InstanceUidsHasBeenSet = true;
    m_ec2InstanceUids = std::forward<Ec2InstanceUidsT>(value);
  }
  template <typename Ec2InstanceUidsT = Aws::Vector<Aws::String>>
  EcsCluster& WithEc2InstanceUids(Ec2InstanceUidsT&& value) {
    SetEc2InstanceUids(std::forward<Ec2InstanceUidsT>(value));
    return *this;
  }
  template <typename Ec2InstanceUidsT = Aws::String>
  EcsCluster& AddEc2InstanceUids(Ec2InstanceUidsT&& value) {
    m_ec2InstanceUidsHasBeenSet = true;
    m_ec2InstanceUids.emplace_back(std::forward<Ec2InstanceUidsT>(value));
    return *this;
  }
  ///@}
 private:
  EcsClusterStatus m_status{EcsClusterStatus::NOT_SET};

  Aws::Vector<Aws::String> m_ec2InstanceUids;
  bool m_statusHasBeenSet = false;
  bool m_ec2InstanceUidsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
