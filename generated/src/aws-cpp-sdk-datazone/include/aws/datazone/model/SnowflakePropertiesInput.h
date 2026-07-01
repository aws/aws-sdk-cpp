/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ConnectivityProperties.h>
#include <aws/datazone/model/IdentityMapping.h>
#include <aws/datazone/model/LineageSyncInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>Contains the Snowflake-specific settings required when creating or updating a
 * connection, including the Snowflake role, identity mapping, and lineage sync
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SnowflakePropertiesInput">AWS
 * API Reference</a></p>
 */
class SnowflakePropertiesInput {
 public:
  AWS_DATAZONE_API SnowflakePropertiesInput() = default;
  AWS_DATAZONE_API SnowflakePropertiesInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API SnowflakePropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connectivity properties of the Snowflake connection.</p>
   */
  inline const ConnectivityProperties& GetConnectivityProperties() const { return m_connectivityProperties; }
  inline bool ConnectivityPropertiesHasBeenSet() const { return m_connectivityPropertiesHasBeenSet; }
  template <typename ConnectivityPropertiesT = ConnectivityProperties>
  void SetConnectivityProperties(ConnectivityPropertiesT&& value) {
    m_connectivityPropertiesHasBeenSet = true;
    m_connectivityProperties = std::forward<ConnectivityPropertiesT>(value);
  }
  template <typename ConnectivityPropertiesT = ConnectivityProperties>
  SnowflakePropertiesInput& WithConnectivityProperties(ConnectivityPropertiesT&& value) {
    SetConnectivityProperties(std::forward<ConnectivityPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Snowflake role used to access Snowflake resources.</p>
   */
  inline const Aws::String& GetSnowflakeRole() const { return m_snowflakeRole; }
  inline bool SnowflakeRoleHasBeenSet() const { return m_snowflakeRoleHasBeenSet; }
  template <typename SnowflakeRoleT = Aws::String>
  void SetSnowflakeRole(SnowflakeRoleT&& value) {
    m_snowflakeRoleHasBeenSet = true;
    m_snowflakeRole = std::forward<SnowflakeRoleT>(value);
  }
  template <typename SnowflakeRoleT = Aws::String>
  SnowflakePropertiesInput& WithSnowflakeRole(SnowflakeRoleT&& value) {
    SetSnowflakeRole(std::forward<SnowflakeRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity mapping configuration for the Snowflake connection.</p>
   */
  inline const IdentityMapping& GetIdentityMapping() const { return m_identityMapping; }
  inline bool IdentityMappingHasBeenSet() const { return m_identityMappingHasBeenSet; }
  template <typename IdentityMappingT = IdentityMapping>
  void SetIdentityMapping(IdentityMappingT&& value) {
    m_identityMappingHasBeenSet = true;
    m_identityMapping = std::forward<IdentityMappingT>(value);
  }
  template <typename IdentityMappingT = IdentityMapping>
  SnowflakePropertiesInput& WithIdentityMapping(IdentityMappingT&& value) {
    SetIdentityMapping(std::forward<IdentityMappingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lineage sync configuration for the Snowflake connection.</p>
   */
  inline const LineageSyncInput& GetLineageSync() const { return m_lineageSync; }
  inline bool LineageSyncHasBeenSet() const { return m_lineageSyncHasBeenSet; }
  template <typename LineageSyncT = LineageSyncInput>
  void SetLineageSync(LineageSyncT&& value) {
    m_lineageSyncHasBeenSet = true;
    m_lineageSync = std::forward<LineageSyncT>(value);
  }
  template <typename LineageSyncT = LineageSyncInput>
  SnowflakePropertiesInput& WithLineageSync(LineageSyncT&& value) {
    SetLineageSync(std::forward<LineageSyncT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectivityProperties m_connectivityProperties;

  Aws::String m_snowflakeRole;

  IdentityMapping m_identityMapping;

  LineageSyncInput m_lineageSync;
  bool m_connectivityPropertiesHasBeenSet = false;
  bool m_snowflakeRoleHasBeenSet = false;
  bool m_identityMappingHasBeenSet = false;
  bool m_lineageSyncHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
