/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEvaluationConfigListGlueTables.h>

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
 * <p>The data source that a data quality evaluation configuration applies
 * to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityEvaluationConfigListDataSource">AWS
 * API Reference</a></p>
 */
class DataQualityEvaluationConfigListDataSource {
 public:
  AWS_GLUE_API DataQualityEvaluationConfigListDataSource() = default;
  AWS_GLUE_API DataQualityEvaluationConfigListDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityEvaluationConfigListDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Glue Data Catalog tables that the configuration applies to.</p>
   */
  inline const DataQualityEvaluationConfigListGlueTables& GetGlueTables() const { return m_glueTables; }
  inline bool GlueTablesHasBeenSet() const { return m_glueTablesHasBeenSet; }
  template <typename GlueTablesT = DataQualityEvaluationConfigListGlueTables>
  void SetGlueTables(GlueTablesT&& value) {
    m_glueTablesHasBeenSet = true;
    m_glueTables = std::forward<GlueTablesT>(value);
  }
  template <typename GlueTablesT = DataQualityEvaluationConfigListGlueTables>
  DataQualityEvaluationConfigListDataSource& WithGlueTables(GlueTablesT&& value) {
    SetGlueTables(std::forward<GlueTablesT>(value));
    return *this;
  }
  ///@}
 private:
  DataQualityEvaluationConfigListGlueTables m_glueTables;
  bool m_glueTablesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
