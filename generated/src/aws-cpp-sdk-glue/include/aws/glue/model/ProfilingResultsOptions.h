/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CatalogTableConfigOptions.h>
#include <aws/glue/model/DistributionResultsOptions.h>

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
 * <p>The configuration for writing profiling results.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ProfilingResultsOptions">AWS
 * API Reference</a></p>
 */
class ProfilingResultsOptions {
 public:
  AWS_GLUE_API ProfilingResultsOptions() = default;
  AWS_GLUE_API ProfilingResultsOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ProfilingResultsOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Set to true to write profiling results.</p>
   */
  inline bool GetWriteProfilingResultsEnabled() const { return m_writeProfilingResultsEnabled; }
  inline bool WriteProfilingResultsEnabledHasBeenSet() const { return m_writeProfilingResultsEnabledHasBeenSet; }
  inline void SetWriteProfilingResultsEnabled(bool value) {
    m_writeProfilingResultsEnabledHasBeenSet = true;
    m_writeProfilingResultsEnabled = value;
  }
  inline ProfilingResultsOptions& WithWriteProfilingResultsEnabled(bool value) {
    SetWriteProfilingResultsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue Data Catalog table configuration for storing the profiling
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
  ProfilingResultsOptions& WithCatalogTableConfig(CatalogTableConfigT&& value) {
    SetCatalogTableConfig(std::forward<CatalogTableConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for writing distribution results.</p>
   */
  inline const DistributionResultsOptions& GetDistributionResults() const { return m_distributionResults; }
  inline bool DistributionResultsHasBeenSet() const { return m_distributionResultsHasBeenSet; }
  template <typename DistributionResultsT = DistributionResultsOptions>
  void SetDistributionResults(DistributionResultsT&& value) {
    m_distributionResultsHasBeenSet = true;
    m_distributionResults = std::forward<DistributionResultsT>(value);
  }
  template <typename DistributionResultsT = DistributionResultsOptions>
  ProfilingResultsOptions& WithDistributionResults(DistributionResultsT&& value) {
    SetDistributionResults(std::forward<DistributionResultsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_writeProfilingResultsEnabled{false};

  CatalogTableConfigOptions m_catalogTableConfig;

  DistributionResultsOptions m_distributionResults;
  bool m_writeProfilingResultsEnabledHasBeenSet = false;
  bool m_catalogTableConfigHasBeenSet = false;
  bool m_distributionResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
