/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SupportabilityScore.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p> The supportability score for a single instance type and Availability Zone
 * combination. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityManagerSupportabilityScore">AWS
 * API Reference</a></p>
 */
class CapacityManagerSupportabilityScore {
 public:
  AWS_EC2_API CapacityManagerSupportabilityScore() = default;
  AWS_EC2_API CapacityManagerSupportabilityScore(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityManagerSupportabilityScore& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The instance type. </p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  CapacityManagerSupportabilityScore& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The ID of the Availability Zone. </p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  CapacityManagerSupportabilityScore& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> How well the combination can support the requested capacity right now.
   * <code>high</code> means that the combination holds several times the requested
   * amount. <code>medium</code> means that it can cover the request with little to
   * spare. <code>low</code> means that it holds less than the requested amount. </p>
   */
  inline SupportabilityScore GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(SupportabilityScore value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline CapacityManagerSupportabilityScore& WithScore(SupportabilityScore value) {
    SetScore(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceType;

  Aws::String m_availabilityZoneId;

  SupportabilityScore m_score{SupportabilityScore::NOT_SET};
  bool m_instanceTypeHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
