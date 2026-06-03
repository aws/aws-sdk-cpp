/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>Configuration for Amazon Aurora Serverless scaling used in a Region switch
 * plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/AuroraServerlessScalingConfiguration">AWS
 * API Reference</a></p>
 */
class AuroraServerlessScalingConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API AuroraServerlessScalingConfiguration() = default;
  AWS_ARCREGIONSWITCH_API AuroraServerlessScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API AuroraServerlessScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timeout value specified for the configuration.</p>
   */
  inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
  inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
  inline void SetTimeoutMinutes(int value) {
    m_timeoutMinutesHasBeenSet = true;
    m_timeoutMinutes = value;
  }
  inline AuroraServerlessScalingConfiguration& WithTimeoutMinutes(int value) {
    SetTimeoutMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cross account role for the configuration.</p>
   */
  inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
  inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
  template <typename CrossAccountRoleT = Aws::String>
  void SetCrossAccountRole(CrossAccountRoleT&& value) {
    m_crossAccountRoleHasBeenSet = true;
    m_crossAccountRole = std::forward<CrossAccountRoleT>(value);
  }
  template <typename CrossAccountRoleT = Aws::String>
  AuroraServerlessScalingConfiguration& WithCrossAccountRole(CrossAccountRoleT&& value) {
    SetCrossAccountRole(std::forward<CrossAccountRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external ID (secret key) for the configuration.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  AuroraServerlessScalingConfiguration& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The global cluster identifier for a global database.</p>
   */
  inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
  inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
  template <typename GlobalClusterIdentifierT = Aws::String>
  void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    m_globalClusterIdentifierHasBeenSet = true;
    m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value);
  }
  template <typename GlobalClusterIdentifierT = Aws::String>
  AuroraServerlessScalingConfiguration& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-Region configuration that maps each Region to the Aurora database cluster
   * ARN for scaling.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetRegionDatabaseClusterArns() const { return m_regionDatabaseClusterArns; }
  inline bool RegionDatabaseClusterArnsHasBeenSet() const { return m_regionDatabaseClusterArnsHasBeenSet; }
  template <typename RegionDatabaseClusterArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetRegionDatabaseClusterArns(RegionDatabaseClusterArnsT&& value) {
    m_regionDatabaseClusterArnsHasBeenSet = true;
    m_regionDatabaseClusterArns = std::forward<RegionDatabaseClusterArnsT>(value);
  }
  template <typename RegionDatabaseClusterArnsT = Aws::Map<Aws::String, Aws::String>>
  AuroraServerlessScalingConfiguration& WithRegionDatabaseClusterArns(RegionDatabaseClusterArnsT&& value) {
    SetRegionDatabaseClusterArns(std::forward<RegionDatabaseClusterArnsT>(value));
    return *this;
  }
  template <typename RegionDatabaseClusterArnsKeyT = Aws::String, typename RegionDatabaseClusterArnsValueT = Aws::String>
  AuroraServerlessScalingConfiguration& AddRegionDatabaseClusterArns(RegionDatabaseClusterArnsKeyT&& key,
                                                                     RegionDatabaseClusterArnsValueT&& value) {
    m_regionDatabaseClusterArnsHasBeenSet = true;
    m_regionDatabaseClusterArns.emplace(std::forward<RegionDatabaseClusterArnsKeyT>(key),
                                        std::forward<RegionDatabaseClusterArnsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target capacity percentage for Aurora Serverless scaling.</p>
   */
  inline int GetTargetPercent() const { return m_targetPercent; }
  inline bool TargetPercentHasBeenSet() const { return m_targetPercentHasBeenSet; }
  inline void SetTargetPercent(int value) {
    m_targetPercentHasBeenSet = true;
    m_targetPercent = value;
  }
  inline AuroraServerlessScalingConfiguration& WithTargetPercent(int value) {
    SetTargetPercent(value);
    return *this;
  }
  ///@}
 private:
  int m_timeoutMinutes{0};

  Aws::String m_crossAccountRole;

  Aws::String m_externalId;

  Aws::String m_globalClusterIdentifier;

  Aws::Map<Aws::String, Aws::String> m_regionDatabaseClusterArns;

  int m_targetPercent{0};
  bool m_timeoutMinutesHasBeenSet = false;
  bool m_crossAccountRoleHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
  bool m_globalClusterIdentifierHasBeenSet = false;
  bool m_regionDatabaseClusterArnsHasBeenSet = false;
  bool m_targetPercentHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
