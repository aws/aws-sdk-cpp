/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains information about the Amazon EC2 VPC involved in a GuardDuty
 * finding, including unique identifiers of the Amazon EC2 instances.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Ec2Vpc">AWS
 * API Reference</a></p>
 */
class Ec2Vpc {
 public:
  AWS_GUARDDUTY_API Ec2Vpc() = default;
  AWS_GUARDDUTY_API Ec2Vpc(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Ec2Vpc& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of unique identifiers for the compromised Amazon EC2 instances that
   * were launched within the same Virtual Private Cloud (VPC).</p>
   */
  inline const Aws::Vector<Aws::String>& GetEc2InstanceUids() const { return m_ec2InstanceUids; }
  inline bool Ec2InstanceUidsHasBeenSet() const { return m_ec2InstanceUidsHasBeenSet; }
  template <typename Ec2InstanceUidsT = Aws::Vector<Aws::String>>
  void SetEc2InstanceUids(Ec2InstanceUidsT&& value) {
    m_ec2InstanceUidsHasBeenSet = true;
    m_ec2InstanceUids = std::forward<Ec2InstanceUidsT>(value);
  }
  template <typename Ec2InstanceUidsT = Aws::Vector<Aws::String>>
  Ec2Vpc& WithEc2InstanceUids(Ec2InstanceUidsT&& value) {
    SetEc2InstanceUids(std::forward<Ec2InstanceUidsT>(value));
    return *this;
  }
  template <typename Ec2InstanceUidsT = Aws::String>
  Ec2Vpc& AddEc2InstanceUids(Ec2InstanceUidsT&& value) {
    m_ec2InstanceUidsHasBeenSet = true;
    m_ec2InstanceUids.emplace_back(std::forward<Ec2InstanceUidsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_ec2InstanceUids;
  bool m_ec2InstanceUidsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
