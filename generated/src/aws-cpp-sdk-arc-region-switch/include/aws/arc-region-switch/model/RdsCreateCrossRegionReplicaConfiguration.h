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
 * <p>Configuration for creating an Amazon RDS cross-Region read replica during
 * post-recovery in a Region switch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/RdsCreateCrossRegionReplicaConfiguration">AWS
 * API Reference</a></p>
 */
class RdsCreateCrossRegionReplicaConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API RdsCreateCrossRegionReplicaConfiguration() = default;
  AWS_ARCREGIONSWITCH_API RdsCreateCrossRegionReplicaConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API RdsCreateCrossRegionReplicaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline RdsCreateCrossRegionReplicaConfiguration& WithTimeoutMinutes(int value) {
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
  RdsCreateCrossRegionReplicaConfiguration& WithCrossAccountRole(CrossAccountRoleT&& value) {
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
  RdsCreateCrossRegionReplicaConfiguration& WithExternalId(ExternalIdT&& value) {
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
  RdsCreateCrossRegionReplicaConfiguration& WithDbInstanceArnMap(DbInstanceArnMapT&& value) {
    SetDbInstanceArnMap(std::forward<DbInstanceArnMapT>(value));
    return *this;
  }
  template <typename DbInstanceArnMapKeyT = Aws::String, typename DbInstanceArnMapValueT = Aws::String>
  RdsCreateCrossRegionReplicaConfiguration& AddDbInstanceArnMap(DbInstanceArnMapKeyT&& key, DbInstanceArnMapValueT&& value) {
    m_dbInstanceArnMapHasBeenSet = true;
    m_dbInstanceArnMap.emplace(std::forward<DbInstanceArnMapKeyT>(key), std::forward<DbInstanceArnMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  int m_timeoutMinutes{0};

  Aws::String m_crossAccountRole;

  Aws::String m_externalId;

  Aws::Map<Aws::String, Aws::String> m_dbInstanceArnMap;
  bool m_timeoutMinutesHasBeenSet = false;
  bool m_crossAccountRoleHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
  bool m_dbInstanceArnMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
