/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ConnectionStatus.h>
#include <aws/datazone/model/IdentityMapping.h>
#include <aws/datazone/model/LineageSyncOutput.h>

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
 * <p>Contains the Snowflake-specific settings returned for an existing connection,
 * including the current role, identity mapping, lineage sync state, and connection
 * status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SnowflakePropertiesOutput">AWS
 * API Reference</a></p>
 */
class SnowflakePropertiesOutput {
 public:
  AWS_DATAZONE_API SnowflakePropertiesOutput() = default;
  AWS_DATAZONE_API SnowflakePropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API SnowflakePropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  SnowflakePropertiesOutput& WithSnowflakeRole(SnowflakeRoleT&& value) {
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
  SnowflakePropertiesOutput& WithIdentityMapping(IdentityMappingT&& value) {
    SetIdentityMapping(std::forward<IdentityMappingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lineage sync configuration for the Snowflake connection.</p>
   */
  inline const LineageSyncOutput& GetLineageSync() const { return m_lineageSync; }
  inline bool LineageSyncHasBeenSet() const { return m_lineageSyncHasBeenSet; }
  template <typename LineageSyncT = LineageSyncOutput>
  void SetLineageSync(LineageSyncT&& value) {
    m_lineageSyncHasBeenSet = true;
    m_lineageSync = std::forward<LineageSyncT>(value);
  }
  template <typename LineageSyncT = LineageSyncOutput>
  SnowflakePropertiesOutput& WithLineageSync(LineageSyncT&& value) {
    SetLineageSync(std::forward<LineageSyncT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Snowflake connection.</p>
   */
  inline ConnectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SnowflakePropertiesOutput& WithStatus(ConnectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An error message returned if the Snowflake connection failed to establish or
   * validate.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  SnowflakePropertiesOutput& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snowflakeRole;

  IdentityMapping m_identityMapping;

  LineageSyncOutput m_lineageSync;

  ConnectionStatus m_status{ConnectionStatus::NOT_SET};

  Aws::String m_errorMessage;
  bool m_snowflakeRoleHasBeenSet = false;
  bool m_identityMappingHasBeenSet = false;
  bool m_lineageSyncHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
