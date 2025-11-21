/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace AutoScaling {
namespace Model {

/**
 * <p> Contains details about a collection of instances launched in the Auto
 * Scaling group. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceCollection">AWS
 * API Reference</a></p>
 */
class InstanceCollection {
 public:
  AWS_AUTOSCALING_API InstanceCollection() = default;
  AWS_AUTOSCALING_API InstanceCollection(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_AUTOSCALING_API InstanceCollection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The instance type of the launched instances. </p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  InstanceCollection& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The market type for the instances (On-Demand or Spot). </p>
   */
  inline const Aws::String& GetMarketType() const { return m_marketType; }
  inline bool MarketTypeHasBeenSet() const { return m_marketTypeHasBeenSet; }
  template <typename MarketTypeT = Aws::String>
  void SetMarketType(MarketTypeT&& value) {
    m_marketTypeHasBeenSet = true;
    m_marketType = std::forward<MarketTypeT>(value);
  }
  template <typename MarketTypeT = Aws::String>
  InstanceCollection& WithMarketType(MarketTypeT&& value) {
    SetMarketType(std::forward<MarketTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The ID of the subnet where the instances were launched. </p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  InstanceCollection& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Availability Zone where the instances were launched. </p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  InstanceCollection& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Availability Zone ID where the instances in this collection were
   * launched. </p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  InstanceCollection& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of instance IDs for the successfully launched instances. </p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
  inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  void SetInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds = std::forward<InstanceIdsT>(value);
  }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  InstanceCollection& WithInstanceIds(InstanceIdsT&& value) {
    SetInstanceIds(std::forward<InstanceIdsT>(value));
    return *this;
  }
  template <typename InstanceIdsT = Aws::String>
  InstanceCollection& AddInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceType;
  bool m_instanceTypeHasBeenSet = false;

  Aws::String m_marketType;
  bool m_marketTypeHasBeenSet = false;

  Aws::String m_subnetId;
  bool m_subnetIdHasBeenSet = false;

  Aws::String m_availabilityZone;
  bool m_availabilityZoneHasBeenSet = false;

  Aws::String m_availabilityZoneId;
  bool m_availabilityZoneIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_instanceIds;
  bool m_instanceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
