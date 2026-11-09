/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityUnit.h>
#include <aws/ec2/model/InstanceRequirementsWithMetadataRequest.h>
#include <aws/ec2/model/SupportabilityMarketType.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class GetCapacityManagerSupportabilityScoresRequest : public EC2Request {
 public:
  AWS_EC2_API GetCapacityManagerSupportabilityScoresRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCapacityManagerSupportabilityScores"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p> The capacity market to score. </p>
   */
  inline SupportabilityMarketType GetMarketType() const { return m_marketType; }
  inline bool MarketTypeHasBeenSet() const { return m_marketTypeHasBeenSet; }
  inline void SetMarketType(SupportabilityMarketType value) {
    m_marketTypeHasBeenSet = true;
    m_marketType = value;
  }
  inline GetCapacityManagerSupportabilityScoresRequest& WithMarketType(SupportabilityMarketType value) {
    SetMarketType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The amount of capacity that you need, in the unit that you specify for
   * <code>CapacityUnit</code>. Each score is relative to this amount. </p>
   */
  inline int GetCapacityAmount() const { return m_capacityAmount; }
  inline bool CapacityAmountHasBeenSet() const { return m_capacityAmountHasBeenSet; }
  inline void SetCapacityAmount(int value) {
    m_capacityAmountHasBeenSet = true;
    m_capacityAmount = value;
  }
  inline GetCapacityManagerSupportabilityScoresRequest& WithCapacityAmount(int value) {
    SetCapacityAmount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unit for <code>CapacityAmount</code>. </p>
   */
  inline CapacityUnit GetCapacityUnit() const { return m_capacityUnit; }
  inline bool CapacityUnitHasBeenSet() const { return m_capacityUnitHasBeenSet; }
  inline void SetCapacityUnit(CapacityUnit value) {
    m_capacityUnitHasBeenSet = true;
    m_capacityUnit = value;
  }
  inline GetCapacityManagerSupportabilityScoresRequest& WithCapacityUnit(CapacityUnit value) {
    SetCapacityUnit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The IDs of the Availability Zones to score, such as <code>use1-az1</code>.
   * You can specify Availability Zones in different Regions. You can specify up to
   * 10 Availability Zones. </p>
   */
  inline const Aws::Vector<Aws::String>& GetCapacityAvailabilityZoneIds() const { return m_capacityAvailabilityZoneIds; }
  inline bool CapacityAvailabilityZoneIdsHasBeenSet() const { return m_capacityAvailabilityZoneIdsHasBeenSet; }
  template <typename CapacityAvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  void SetCapacityAvailabilityZoneIds(CapacityAvailabilityZoneIdsT&& value) {
    m_capacityAvailabilityZoneIdsHasBeenSet = true;
    m_capacityAvailabilityZoneIds = std::forward<CapacityAvailabilityZoneIdsT>(value);
  }
  template <typename CapacityAvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  GetCapacityManagerSupportabilityScoresRequest& WithCapacityAvailabilityZoneIds(CapacityAvailabilityZoneIdsT&& value) {
    SetCapacityAvailabilityZoneIds(std::forward<CapacityAvailabilityZoneIdsT>(value));
    return *this;
  }
  template <typename CapacityAvailabilityZoneIdsT = Aws::String>
  GetCapacityManagerSupportabilityScoresRequest& AddCapacityAvailabilityZoneIds(CapacityAvailabilityZoneIdsT&& value) {
    m_capacityAvailabilityZoneIdsHasBeenSet = true;
    m_capacityAvailabilityZoneIds.emplace_back(std::forward<CapacityAvailabilityZoneIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The instance types to score. You can specify up to 50 instance types. </p>
   * <p> Specify either <code>InstanceTypes</code> or
   * <code>InstanceRequirementsWithMetadata</code>, but not both. </p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
  inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
  template <typename InstanceTypesT = Aws::Vector<Aws::String>>
  void SetInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes = std::forward<InstanceTypesT>(value);
  }
  template <typename InstanceTypesT = Aws::Vector<Aws::String>>
  GetCapacityManagerSupportabilityScoresRequest& WithInstanceTypes(InstanceTypesT&& value) {
    SetInstanceTypes(std::forward<InstanceTypesT>(value));
    return *this;
  }
  template <typename InstanceTypesT = Aws::String>
  GetCapacityManagerSupportabilityScoresRequest& AddInstanceTypes(InstanceTypesT&& value) {
    m_instanceTypesHasBeenSet = true;
    m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The attributes that the instance types must have, such as vCPU and memory
   * ranges. Capacity Manager resolves the attributes into matching instance types
   * and scores each one. </p> <p> Specify either <code>InstanceTypes</code> or
   * <code>InstanceRequirementsWithMetadata</code>, but not both. </p>
   */
  inline const InstanceRequirementsWithMetadataRequest& GetInstanceRequirementsWithMetadata() const {
    return m_instanceRequirementsWithMetadata;
  }
  inline bool InstanceRequirementsWithMetadataHasBeenSet() const { return m_instanceRequirementsWithMetadataHasBeenSet; }
  template <typename InstanceRequirementsWithMetadataT = InstanceRequirementsWithMetadataRequest>
  void SetInstanceRequirementsWithMetadata(InstanceRequirementsWithMetadataT&& value) {
    m_instanceRequirementsWithMetadataHasBeenSet = true;
    m_instanceRequirementsWithMetadata = std::forward<InstanceRequirementsWithMetadataT>(value);
  }
  template <typename InstanceRequirementsWithMetadataT = InstanceRequirementsWithMetadataRequest>
  GetCapacityManagerSupportabilityScoresRequest& WithInstanceRequirementsWithMetadata(InstanceRequirementsWithMetadataT&& value) {
    SetInstanceRequirementsWithMetadata(std::forward<InstanceRequirementsWithMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>. </p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline GetCapacityManagerSupportabilityScoresRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  SupportabilityMarketType m_marketType{SupportabilityMarketType::NOT_SET};

  int m_capacityAmount{0};

  CapacityUnit m_capacityUnit{CapacityUnit::NOT_SET};

  Aws::Vector<Aws::String> m_capacityAvailabilityZoneIds;

  Aws::Vector<Aws::String> m_instanceTypes;

  InstanceRequirementsWithMetadataRequest m_instanceRequirementsWithMetadata;

  bool m_dryRun{false};
  bool m_marketTypeHasBeenSet = false;
  bool m_capacityAmountHasBeenSet = false;
  bool m_capacityUnitHasBeenSet = false;
  bool m_capacityAvailabilityZoneIdsHasBeenSet = false;
  bool m_instanceTypesHasBeenSet = false;
  bool m_instanceRequirementsWithMetadataHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
