/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about the global resiliency configuration for the contact,
 * including traffic distribution details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GlobalResiliencyMetadata">AWS
 * API Reference</a></p>
 */
class GlobalResiliencyMetadata {
 public:
  AWS_CONNECT_API GlobalResiliencyMetadata() = default;
  AWS_CONNECT_API GlobalResiliencyMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API GlobalResiliencyMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current AWS region in which the contact is active. This indicates where
   * the contact is being processed in real-time.</p>
   */
  inline const Aws::String& GetActiveRegion() const { return m_activeRegion; }
  inline bool ActiveRegionHasBeenSet() const { return m_activeRegionHasBeenSet; }
  template <typename ActiveRegionT = Aws::String>
  void SetActiveRegion(ActiveRegionT&& value) {
    m_activeRegionHasBeenSet = true;
    m_activeRegion = std::forward<ActiveRegionT>(value);
  }
  template <typename ActiveRegionT = Aws::String>
  GlobalResiliencyMetadata& WithActiveRegion(ActiveRegionT&& value) {
    SetActiveRegion(std::forward<ActiveRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS region where the contact was originally created and initiated. This
   * may differ from the ActiveRegion if the contact has been transferred across
   * regions.</p>
   */
  inline const Aws::String& GetOriginRegion() const { return m_originRegion; }
  inline bool OriginRegionHasBeenSet() const { return m_originRegionHasBeenSet; }
  template <typename OriginRegionT = Aws::String>
  void SetOriginRegion(OriginRegionT&& value) {
    m_originRegionHasBeenSet = true;
    m_originRegion = std::forward<OriginRegionT>(value);
  }
  template <typename OriginRegionT = Aws::String>
  GlobalResiliencyMetadata& WithOriginRegion(OriginRegionT&& value) {
    SetOriginRegion(std::forward<OriginRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the traffic distribution group.</p>
   */
  inline const Aws::String& GetTrafficDistributionGroupId() const { return m_trafficDistributionGroupId; }
  inline bool TrafficDistributionGroupIdHasBeenSet() const { return m_trafficDistributionGroupIdHasBeenSet; }
  template <typename TrafficDistributionGroupIdT = Aws::String>
  void SetTrafficDistributionGroupId(TrafficDistributionGroupIdT&& value) {
    m_trafficDistributionGroupIdHasBeenSet = true;
    m_trafficDistributionGroupId = std::forward<TrafficDistributionGroupIdT>(value);
  }
  template <typename TrafficDistributionGroupIdT = Aws::String>
  GlobalResiliencyMetadata& WithTrafficDistributionGroupId(TrafficDistributionGroupIdT&& value) {
    SetTrafficDistributionGroupId(std::forward<TrafficDistributionGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_activeRegion;

  Aws::String m_originRegion;

  Aws::String m_trafficDistributionGroupId;
  bool m_activeRegionHasBeenSet = false;
  bool m_originRegionHasBeenSet = false;
  bool m_trafficDistributionGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
