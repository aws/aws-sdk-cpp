/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/RdsUngraceful.h>
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
 * <p>Configuration for switching over an Amazon RDS read replica to become the new
 * primary database instance during a Region switch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/RdsSwitchoverReadReplicaConfiguration">AWS
 * API Reference</a></p>
 */
class RdsSwitchoverReadReplicaConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API RdsSwitchoverReadReplicaConfiguration() = default;
  AWS_ARCREGIONSWITCH_API RdsSwitchoverReadReplicaConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API RdsSwitchoverReadReplicaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline RdsSwitchoverReadReplicaConfiguration& WithTimeoutMinutes(int value) {
    SetTimeoutMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cross-account role for the configuration.</p>
   */
  inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
  inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
  template <typename CrossAccountRoleT = Aws::String>
  void SetCrossAccountRole(CrossAccountRoleT&& value) {
    m_crossAccountRoleHasBeenSet = true;
    m_crossAccountRole = std::forward<CrossAccountRoleT>(value);
  }
  template <typename CrossAccountRoleT = Aws::String>
  RdsSwitchoverReadReplicaConfiguration& WithCrossAccountRole(CrossAccountRoleT&& value) {
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
  RdsSwitchoverReadReplicaConfiguration& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of database instance ARNs for each Region in the plan.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDbInstanceArnMap() const { return m_dbInstanceArnMap; }
  inline bool DbInstanceArnMapHasBeenSet() const { return m_dbInstanceArnMapHasBeenSet; }
  template <typename DbInstanceArnMapT = Aws::Map<Aws::String, Aws::String>>
  void SetDbInstanceArnMap(DbInstanceArnMapT&& value) {
    m_dbInstanceArnMapHasBeenSet = true;
    m_dbInstanceArnMap = std::forward<DbInstanceArnMapT>(value);
  }
  template <typename DbInstanceArnMapT = Aws::Map<Aws::String, Aws::String>>
  RdsSwitchoverReadReplicaConfiguration& WithDbInstanceArnMap(DbInstanceArnMapT&& value) {
    SetDbInstanceArnMap(std::forward<DbInstanceArnMapT>(value));
    return *this;
  }
  template <typename DbInstanceArnMapKeyT = Aws::String, typename DbInstanceArnMapValueT = Aws::String>
  RdsSwitchoverReadReplicaConfiguration& AddDbInstanceArnMap(DbInstanceArnMapKeyT&& key, DbInstanceArnMapValueT&& value) {
    m_dbInstanceArnMapHasBeenSet = true;
    m_dbInstanceArnMap.emplace(std::forward<DbInstanceArnMapKeyT>(key), std::forward<DbInstanceArnMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ungraceful execution settings for the configuration.</p>
   */
  inline const RdsUngraceful& GetUngraceful() const { return m_ungraceful; }
  inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
  template <typename UngracefulT = RdsUngraceful>
  void SetUngraceful(UngracefulT&& value) {
    m_ungracefulHasBeenSet = true;
    m_ungraceful = std::forward<UngracefulT>(value);
  }
  template <typename UngracefulT = RdsUngraceful>
  RdsSwitchoverReadReplicaConfiguration& WithUngraceful(UngracefulT&& value) {
    SetUngraceful(std::forward<UngracefulT>(value));
    return *this;
  }
  ///@}
 private:
  int m_timeoutMinutes{0};

  Aws::String m_crossAccountRole;

  Aws::String m_externalId;

  Aws::Map<Aws::String, Aws::String> m_dbInstanceArnMap;

  RdsUngraceful m_ungraceful;
  bool m_timeoutMinutesHasBeenSet = false;
  bool m_crossAccountRoleHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
  bool m_dbInstanceArnMapHasBeenSet = false;
  bool m_ungracefulHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
