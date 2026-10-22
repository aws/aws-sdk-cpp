/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DatabricksConnectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p> A reference to a table within Databricks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DatabricksTableReference">AWS
 * API Reference</a></p>
 */
class DatabricksTableReference {
 public:
  AWS_CLEANROOMS_API DatabricksTableReference() = default;
  AWS_CLEANROOMS_API DatabricksTableReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API DatabricksTableReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Name of the Schema within Databricks.</p>
   */
  inline const Aws::String& GetSchemaName() const { return m_schemaName; }
  inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
  template <typename SchemaNameT = Aws::String>
  void SetSchemaName(SchemaNameT&& value) {
    m_schemaNameHasBeenSet = true;
    m_schemaName = std::forward<SchemaNameT>(value);
  }
  template <typename SchemaNameT = Aws::String>
  DatabricksTableReference& WithSchemaName(SchemaNameT&& value) {
    SetSchemaName(std::forward<SchemaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the Table within Databricks.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  DatabricksTableReference& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URL for the Databricks Workspace.</p>
   */
  inline const Aws::String& GetWorkspaceUrl() const { return m_workspaceUrl; }
  inline bool WorkspaceUrlHasBeenSet() const { return m_workspaceUrlHasBeenSet; }
  template <typename WorkspaceUrlT = Aws::String>
  void SetWorkspaceUrl(WorkspaceUrlT&& value) {
    m_workspaceUrlHasBeenSet = true;
    m_workspaceUrl = std::forward<WorkspaceUrlT>(value);
  }
  template <typename WorkspaceUrlT = Aws::String>
  DatabricksTableReference& WithWorkspaceUrl(WorkspaceUrlT&& value) {
    SetWorkspaceUrl(std::forward<WorkspaceUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of the connector to be used for connecting to Databricks. Supported
   * connector: Delta Sharing</p>
   */
  inline const DatabricksConnectionType& GetConnectionType() const { return m_connectionType; }
  inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
  template <typename ConnectionTypeT = DatabricksConnectionType>
  void SetConnectionType(ConnectionTypeT&& value) {
    m_connectionTypeHasBeenSet = true;
    m_connectionType = std::forward<ConnectionTypeT>(value);
  }
  template <typename ConnectionTypeT = DatabricksConnectionType>
  DatabricksTableReference& WithConnectionType(ConnectionTypeT&& value) {
    SetConnectionType(std::forward<ConnectionTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_schemaName;

  Aws::String m_tableName;

  Aws::String m_workspaceUrl;

  DatabricksConnectionType m_connectionType;
  bool m_schemaNameHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_workspaceUrlHasBeenSet = false;
  bool m_connectionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
