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
 * <p>The configuration for writing distribution results.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DistributionResultsOptions">AWS
 * API Reference</a></p>
 */
class DistributionResultsOptions {
 public:
  AWS_GLUE_API DistributionResultsOptions() = default;
  AWS_GLUE_API DistributionResultsOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DistributionResultsOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Set to true to write distribution results.</p>
   */
  inline bool GetWriteDistributionResultsEnabled() const { return m_writeDistributionResultsEnabled; }
  inline bool WriteDistributionResultsEnabledHasBeenSet() const { return m_writeDistributionResultsEnabledHasBeenSet; }
  inline void SetWriteDistributionResultsEnabled(bool value) {
    m_writeDistributionResultsEnabledHasBeenSet = true;
    m_writeDistributionResultsEnabled = value;
  }
  inline DistributionResultsOptions& WithWriteDistributionResultsEnabled(bool value) {
    SetWriteDistributionResultsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue Data Catalog table configuration for storing the distribution
   * results.</p>
   */
  inline const CatalogTableConfigOptions& GetCatalogTableConfig() const { return m_catalogTableConfig; }
  inline bool CatalogTableConfigHasBeenSet() const { return m_catalogTableConfigHasBeenSet; }
  template <typename CatalogTableConfigT = CatalogTableConfigOptions>
  void SetCatalogTableConfig(CatalogTableConfigT&& value) {
    m_catalogTableConfigHasBeenSet = true;
    m_catalogTableConfig = std::forward<CatalogTableConfigT>(value);
  }
  template <typename CatalogTableConfigT = CatalogTableConfigOptions>
  DistributionResultsOptions& WithCatalogTableConfig(CatalogTableConfigT&& value) {
    SetCatalogTableConfig(std::forward<CatalogTableConfigT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_writeDistributionResultsEnabled{false};

  CatalogTableConfigOptions m_catalogTableConfig;
  bool m_writeDistributionResultsEnabledHasBeenSet = false;
  bool m_catalogTableConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
