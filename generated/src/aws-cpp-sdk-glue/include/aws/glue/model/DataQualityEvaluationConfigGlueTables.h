/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityEvaluationConfigGlueTables">AWS
 * API Reference</a></p>
 */
class DataQualityEvaluationConfigGlueTables {
 public:
  AWS_GLUE_API DataQualityEvaluationConfigGlueTables() = default;
  AWS_GLUE_API DataQualityEvaluationConfigGlueTables(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityEvaluationConfigGlueTables& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  DataQualityEvaluationConfigGlueTables& WithCatalogId(CatalogIdT&& value) {
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
  DataQualityEvaluationConfigGlueTables& WithDatabaseName(DatabaseNameT&& value) {
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
  DataQualityEvaluationConfigGlueTables& WithTableNamePattern(TableNamePatternT&& value) {
    SetTableNamePattern(std::forward<TableNamePatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SQL Query of SparkSQL format that can be used to pre-process the data for the
   * table in Glue Data Catalog, before running the Data Quality Operation.</p>
   * <p>For the <code>CATALOG</code> and <code>DATABASE</code> levels, use the
   * <code>{{DATABASE_NAME}}</code> and <code>{{TABLE_NAME}}</code> placeholders,
   * which are filled in for each table.</p>
   */
  inline const Aws::String& GetPreProcessingQuery() const { return m_preProcessingQuery; }
  inline bool PreProcessingQueryHasBeenSet() const { return m_preProcessingQueryHasBeenSet; }
  template <typename PreProcessingQueryT = Aws::String>
  void SetPreProcessingQuery(PreProcessingQueryT&& value) {
    m_preProcessingQueryHasBeenSet = true;
    m_preProcessingQuery = std::forward<PreProcessingQueryT>(value);
  }
  template <typename PreProcessingQueryT = Aws::String>
  DataQualityEvaluationConfigGlueTables& WithPreProcessingQuery(PreProcessingQueryT&& value) {
    SetPreProcessingQuery(std::forward<PreProcessingQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connection to the Glue Data Catalog.</p>
   */
  inline const Aws::String& GetConnectionName() const { return m_connectionName; }
  inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
  template <typename ConnectionNameT = Aws::String>
  void SetConnectionName(ConnectionNameT&& value) {
    m_connectionNameHasBeenSet = true;
    m_connectionName = std::forward<ConnectionNameT>(value);
  }
  template <typename ConnectionNameT = Aws::String>
  DataQualityEvaluationConfigGlueTables& WithConnectionName(ConnectionNameT&& value) {
    SetConnectionName(std::forward<ConnectionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for reading the table. The following keys are supported:</p> <ul>
   * <li> <p> <code>pushDownPredicate</code>: to filter on partitions without having
   * to list and read all the files in your dataset.</p> </li> <li> <p>
   * <code>catalogPartitionPredicate</code>: to use server-side partition pruning
   * using partition indexes in the Glue Data Catalog.</p> </li> </ul>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const { return m_additionalOptions; }
  inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
  template <typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
  void SetAdditionalOptions(AdditionalOptionsT&& value) {
    m_additionalOptionsHasBeenSet = true;
    m_additionalOptions = std::forward<AdditionalOptionsT>(value);
  }
  template <typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
  DataQualityEvaluationConfigGlueTables& WithAdditionalOptions(AdditionalOptionsT&& value) {
    SetAdditionalOptions(std::forward<AdditionalOptionsT>(value));
    return *this;
  }
  template <typename AdditionalOptionsKeyT = Aws::String, typename AdditionalOptionsValueT = Aws::String>
  DataQualityEvaluationConfigGlueTables& AddAdditionalOptions(AdditionalOptionsKeyT&& key, AdditionalOptionsValueT&& value) {
    m_additionalOptionsHasBeenSet = true;
    m_additionalOptions.emplace(std::forward<AdditionalOptionsKeyT>(key), std::forward<AdditionalOptionsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogId;

  Aws::String m_databaseName;

  Aws::String m_tableNamePattern;

  Aws::String m_preProcessingQuery;

  Aws::String m_connectionName;

  Aws::Map<Aws::String, Aws::String> m_additionalOptions;
  bool m_catalogIdHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_tableNamePatternHasBeenSet = false;
  bool m_preProcessingQueryHasBeenSet = false;
  bool m_connectionNameHasBeenSet = false;
  bool m_additionalOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
