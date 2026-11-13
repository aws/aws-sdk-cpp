/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Identifies the Glue Data Catalog tables that a data quality evaluation
 * configuration applies to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityEvaluationConfigListGlueTables">AWS
 * API Reference</a></p>
 */
class DataQualityEvaluationConfigListGlueTables {
 public:
  AWS_GLUE_API DataQualityEvaluationConfigListGlueTables() = default;
  AWS_GLUE_API DataQualityEvaluationConfigListGlueTables(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityEvaluationConfigListGlueTables& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for the Glue Data Catalog.</p>
   */
  inline const Aws::String& GetCatalogId() const { return m_catalogId; }
  inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
  template <typename CatalogIdT = Aws::String>
  void SetCatalogId(CatalogIdT&& value) {
    m_catalogIdHasBeenSet = true;
    m_catalogId = std::forward<CatalogIdT>(value);
  }
  template <typename CatalogIdT = Aws::String>
  DataQualityEvaluationConfigListGlueTables& WithCatalogId(CatalogIdT&& value) {
    SetCatalogId(std::forward<CatalogIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A database name in the Glue Data Catalog.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  DataQualityEvaluationConfigListGlueTables& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For the <code>CATALOG</code> and <code>DATABASE</code> levels, a glob
   * pattern, such as <code>orders_*</code>, that selects tables. If you don't
   * specify a pattern, every table at the level is in scope. For the
   * <code>TABLE</code> level, the name of the table.</p>
   */
  inline const Aws::String& GetTableNamePattern() const { return m_tableNamePattern; }
  inline bool TableNamePatternHasBeenSet() const { return m_tableNamePatternHasBeenSet; }
  template <typename TableNamePatternT = Aws::String>
  void SetTableNamePattern(TableNamePatternT&& value) {
    m_tableNamePatternHasBeenSet = true;
    m_tableNamePattern = std::forward<TableNamePatternT>(value);
  }
  template <typename TableNamePatternT = Aws::String>
  DataQualityEvaluationConfigListGlueTables& WithTableNamePattern(TableNamePatternT&& value) {
    SetTableNamePattern(std::forward<TableNamePatternT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogId;

  Aws::String m_databaseName;

  Aws::String m_tableNamePattern;
  bool m_catalogIdHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_tableNamePatternHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
