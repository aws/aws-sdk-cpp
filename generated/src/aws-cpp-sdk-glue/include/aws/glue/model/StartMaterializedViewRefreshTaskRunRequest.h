/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class StartMaterializedViewRefreshTaskRunRequest : public GlueRequest {
 public:
  AWS_GLUE_API StartMaterializedViewRefreshTaskRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartMaterializedViewRefreshTaskRun"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Data Catalog where the table reside. If none is supplied, the
   * account ID is used by default.</p>
   */
  inline const Aws::String& GetCatalogId() const { return m_catalogId; }
  inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
  template <typename CatalogIdT = Aws::String>
  void SetCatalogId(CatalogIdT&& value) {
    m_catalogIdHasBeenSet = true;
    m_catalogId = std::forward<CatalogIdT>(value);
  }
  template <typename CatalogIdT = Aws::String>
  StartMaterializedViewRefreshTaskRunRequest& WithCatalogId(CatalogIdT&& value) {
    SetCatalogId(std::forward<CatalogIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database where the table resides.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  StartMaterializedViewRefreshTaskRunRequest& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the table to generate run the materialized view refresh task.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  StartMaterializedViewRefreshTaskRunRequest& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this is a full refresh of the task run.</p>
   */
  inline bool GetFullRefresh() const { return m_fullRefresh; }
  inline bool FullRefreshHasBeenSet() const { return m_fullRefreshHasBeenSet; }
  inline void SetFullRefresh(bool value) {
    m_fullRefreshHasBeenSet = true;
    m_fullRefresh = value;
  }
  inline StartMaterializedViewRefreshTaskRunRequest& WithFullRefresh(bool value) {
    SetFullRefresh(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogId;

  Aws::String m_databaseName;

  Aws::String m_tableName;

  bool m_fullRefresh{false};
  bool m_catalogIdHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_fullRefreshHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
