/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CatalogTableConfigOptions.h>

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
 * <p>The configuration for writing data quality rule results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRuleResultsOptions">AWS
 * API Reference</a></p>
 */
class DataQualityRuleResultsOptions {
 public:
  AWS_GLUE_API DataQualityRuleResultsOptions() = default;
  AWS_GLUE_API DataQualityRuleResultsOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityRuleResultsOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Set to true to write data quality rule results.</p>
   */
  inline bool GetWriteDataQualityRuleResultsEnabled() const { return m_writeDataQualityRuleResultsEnabled; }
  inline bool WriteDataQualityRuleResultsEnabledHasBeenSet() const { return m_writeDataQualityRuleResultsEnabledHasBeenSet; }
  inline void SetWriteDataQualityRuleResultsEnabled(bool value) {
    m_writeDataQualityRuleResultsEnabledHasBeenSet = true;
    m_writeDataQualityRuleResultsEnabled = value;
  }
  inline DataQualityRuleResultsOptions& WithWriteDataQualityRuleResultsEnabled(bool value) {
    SetWriteDataQualityRuleResultsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue Data Catalog table configuration for storing the rule results.</p>
   */
  inline const CatalogTableConfigOptions& GetCatalogTableConfig() const { return m_catalogTableConfig; }
  inline bool CatalogTableConfigHasBeenSet() const { return m_catalogTableConfigHasBeenSet; }
  template <typename CatalogTableConfigT = CatalogTableConfigOptions>
  void SetCatalogTableConfig(CatalogTableConfigT&& value) {
    m_catalogTableConfigHasBeenSet = true;
    m_catalogTableConfig = std::forward<CatalogTableConfigT>(value);
  }
  template <typename CatalogTableConfigT = CatalogTableConfigOptions>
  DataQualityRuleResultsOptions& WithCatalogTableConfig(CatalogTableConfigT&& value) {
    SetCatalogTableConfig(std::forward<CatalogTableConfigT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_writeDataQualityRuleResultsEnabled{false};

  CatalogTableConfigOptions m_catalogTableConfig;
  bool m_writeDataQualityRuleResultsEnabledHasBeenSet = false;
  bool m_catalogTableConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
