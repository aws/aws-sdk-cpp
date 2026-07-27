/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CatalogTableConfigOptions.h>
#include <aws/glue/model/ResultTypeEnum.h>

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
 * <p>The configuration for writing row-level evaluation results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RowLevelResultsOptions">AWS
 * API Reference</a></p>
 */
class RowLevelResultsOptions {
 public:
  AWS_GLUE_API RowLevelResultsOptions() = default;
  AWS_GLUE_API RowLevelResultsOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API RowLevelResultsOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of rows to write in the results.</p>
   */
  inline int GetMaxRowsToWrite() const { return m_maxRowsToWrite; }
  inline bool MaxRowsToWriteHasBeenSet() const { return m_maxRowsToWriteHasBeenSet; }
  inline void SetMaxRowsToWrite(int value) {
    m_maxRowsToWriteHasBeenSet = true;
    m_maxRowsToWrite = value;
  }
  inline RowLevelResultsOptions& WithMaxRowsToWrite(int value) {
    SetMaxRowsToWrite(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result type to include in the row-level results output.</p>
   */
  inline ResultTypeEnum GetResultType() const { return m_resultType; }
  inline bool ResultTypeHasBeenSet() const { return m_resultTypeHasBeenSet; }
  inline void SetResultType(ResultTypeEnum value) {
    m_resultTypeHasBeenSet = true;
    m_resultType = value;
  }
  inline RowLevelResultsOptions& WithResultType(ResultTypeEnum value) {
    SetResultType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue Data Catalog table configuration for storing the results.</p>
   */
  inline const CatalogTableConfigOptions& GetCatalogTableConfig() const { return m_catalogTableConfig; }
  inline bool CatalogTableConfigHasBeenSet() const { return m_catalogTableConfigHasBeenSet; }
  template <typename CatalogTableConfigT = CatalogTableConfigOptions>
  void SetCatalogTableConfig(CatalogTableConfigT&& value) {
    m_catalogTableConfigHasBeenSet = true;
    m_catalogTableConfig = std::forward<CatalogTableConfigT>(value);
  }
  template <typename CatalogTableConfigT = CatalogTableConfigOptions>
  RowLevelResultsOptions& WithCatalogTableConfig(CatalogTableConfigT&& value) {
    SetCatalogTableConfig(std::forward<CatalogTableConfigT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxRowsToWrite{0};

  ResultTypeEnum m_resultType{ResultTypeEnum::NOT_SET};

  CatalogTableConfigOptions m_catalogTableConfig;
  bool m_maxRowsToWriteHasBeenSet = false;
  bool m_resultTypeHasBeenSet = false;
  bool m_catalogTableConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
