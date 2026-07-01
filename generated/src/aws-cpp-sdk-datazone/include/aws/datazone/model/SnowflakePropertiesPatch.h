/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ConnectivityPropertiesPatch.h>
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
 * <p>Contains the Snowflake-specific settings to update on an existing connection.
 * Include only the fields you want to change.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SnowflakePropertiesPatch">AWS
 * API Reference</a></p>
 */
class SnowflakePropertiesPatch {
 public:
  AWS_DATAZONE_API SnowflakePropertiesPatch() = default;
  AWS_DATAZONE_API SnowflakePropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API SnowflakePropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connectivity properties patch of the Snowflake connection.</p>
   */
  inline const ConnectivityPropertiesPatch& GetConnectivityPropertiesPatch() const { return m_connectivityPropertiesPatch; }
  inline bool ConnectivityPropertiesPatchHasBeenSet() const { return m_connectivityPropertiesPatchHasBeenSet; }
  template <typename ConnectivityPropertiesPatchT = ConnectivityPropertiesPatch>
  void SetConnectivityPropertiesPatch(ConnectivityPropertiesPatchT&& value) {
    m_connectivityPropertiesPatchHasBeenSet = true;
    m_connectivityPropertiesPatch = std::forward<ConnectivityPropertiesPatchT>(value);
  }
  template <typename ConnectivityPropertiesPatchT = ConnectivityPropertiesPatch>
  SnowflakePropertiesPatch& WithConnectivityPropertiesPatch(ConnectivityPropertiesPatchT&& value) {
    SetConnectivityPropertiesPatch(std::forward<ConnectivityPropertiesPatchT>(value));
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
  SnowflakePropertiesPatch& WithSnowflakeRole(SnowflakeRoleT&& value) {
    SetSnowflakeRole(std::forward<SnowflakeRoleT>(value));
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
  SnowflakePropertiesPatch& WithLineageSync(LineageSyncT&& value) {
    SetLineageSync(std::forward<LineageSyncT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectivityPropertiesPatch m_connectivityPropertiesPatch;

  Aws::String m_snowflakeRole;

  LineageSyncInput m_lineageSync;
  bool m_connectivityPropertiesPatchHasBeenSet = false;
  bool m_snowflakeRoleHasBeenSet = false;
  bool m_lineageSyncHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
