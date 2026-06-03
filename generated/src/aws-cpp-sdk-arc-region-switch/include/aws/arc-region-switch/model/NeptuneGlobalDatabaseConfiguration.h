/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/NeptuneDefaultBehavior.h>
#include <aws/arc-region-switch/model/NeptuneUngraceful.h>
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
 * <p>Configuration for Amazon Neptune global databases used in a Region switch
 * plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/NeptuneGlobalDatabaseConfiguration">AWS
 * API Reference</a></p>
 */
class NeptuneGlobalDatabaseConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API NeptuneGlobalDatabaseConfiguration() = default;
  AWS_ARCREGIONSWITCH_API NeptuneGlobalDatabaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API NeptuneGlobalDatabaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline NeptuneGlobalDatabaseConfiguration& WithTimeoutMinutes(int value) {
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
  NeptuneGlobalDatabaseConfiguration& WithCrossAccountRole(CrossAccountRoleT&& value) {
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
  NeptuneGlobalDatabaseConfiguration& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The behavior for a global database, that is, only allow switchover or also
   * allow failover.</p>
   */
  inline NeptuneDefaultBehavior GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  inline void SetBehavior(NeptuneDefaultBehavior value) {
    m_behaviorHasBeenSet = true;
    m_behavior = value;
  }
  inline NeptuneGlobalDatabaseConfiguration& WithBehavior(NeptuneDefaultBehavior value) {
    SetBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settings for ungraceful execution.</p>
   */
  inline const NeptuneUngraceful& GetUngraceful() const { return m_ungraceful; }
  inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
  template <typename UngracefulT = NeptuneUngraceful>
  void SetUngraceful(UngracefulT&& value) {
    m_ungracefulHasBeenSet = true;
    m_ungraceful = std::forward<UngracefulT>(value);
  }
  template <typename UngracefulT = NeptuneUngraceful>
  NeptuneGlobalDatabaseConfiguration& WithUngraceful(UngracefulT&& value) {
    SetUngraceful(std::forward<UngracefulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The global cluster identifier for a Neptune global database.</p>
   */
  inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
  inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
  template <typename GlobalClusterIdentifierT = Aws::String>
  void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    m_globalClusterIdentifierHasBeenSet = true;
    m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value);
  }
  template <typename GlobalClusterIdentifierT = Aws::String>
  NeptuneGlobalDatabaseConfiguration& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database cluster Amazon Resource Names (ARNs) for a Neptune global
   * database.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetRegionDatabaseClusterArns() const { return m_regionDatabaseClusterArns; }
  inline bool RegionDatabaseClusterArnsHasBeenSet() const { return m_regionDatabaseClusterArnsHasBeenSet; }
  template <typename RegionDatabaseClusterArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetRegionDatabaseClusterArns(RegionDatabaseClusterArnsT&& value) {
    m_regionDatabaseClusterArnsHasBeenSet = true;
    m_regionDatabaseClusterArns = std::forward<RegionDatabaseClusterArnsT>(value);
  }
  template <typename RegionDatabaseClusterArnsT = Aws::Map<Aws::String, Aws::String>>
  NeptuneGlobalDatabaseConfiguration& WithRegionDatabaseClusterArns(RegionDatabaseClusterArnsT&& value) {
    SetRegionDatabaseClusterArns(std::forward<RegionDatabaseClusterArnsT>(value));
    return *this;
  }
  template <typename RegionDatabaseClusterArnsKeyT = Aws::String, typename RegionDatabaseClusterArnsValueT = Aws::String>
  NeptuneGlobalDatabaseConfiguration& AddRegionDatabaseClusterArns(RegionDatabaseClusterArnsKeyT&& key,
                                                                   RegionDatabaseClusterArnsValueT&& value) {
    m_regionDatabaseClusterArnsHasBeenSet = true;
    m_regionDatabaseClusterArns.emplace(std::forward<RegionDatabaseClusterArnsKeyT>(key),
                                        std::forward<RegionDatabaseClusterArnsValueT>(value));
    return *this;
  }
  ///@}
 private:
  int m_timeoutMinutes{0};

  Aws::String m_crossAccountRole;

  Aws::String m_externalId;

  NeptuneDefaultBehavior m_behavior{NeptuneDefaultBehavior::NOT_SET};

  NeptuneUngraceful m_ungraceful;

  Aws::String m_globalClusterIdentifier;

  Aws::Map<Aws::String, Aws::String> m_regionDatabaseClusterArns;
  bool m_timeoutMinutesHasBeenSet = false;
  bool m_crossAccountRoleHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
  bool m_behaviorHasBeenSet = false;
  bool m_ungracefulHasBeenSet = false;
  bool m_globalClusterIdentifierHasBeenSet = false;
  bool m_regionDatabaseClusterArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
