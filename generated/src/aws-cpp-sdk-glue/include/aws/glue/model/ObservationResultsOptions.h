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
 * <p>The configuration for writing observation results.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ObservationResultsOptions">AWS
 * API Reference</a></p>
 */
class ObservationResultsOptions {
 public:
  AWS_GLUE_API ObservationResultsOptions() = default;
  AWS_GLUE_API ObservationResultsOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ObservationResultsOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Set to true to write observation results.</p>
   */
  inline bool GetWriteObservationResultsEnabled() const { return m_writeObservationResultsEnabled; }
  inline bool WriteObservationResultsEnabledHasBeenSet() const { return m_writeObservationResultsEnabledHasBeenSet; }
  inline void SetWriteObservationResultsEnabled(bool value) {
    m_writeObservationResultsEnabledHasBeenSet = true;
    m_writeObservationResultsEnabled = value;
  }
  inline ObservationResultsOptions& WithWriteObservationResultsEnabled(bool value) {
    SetWriteObservationResultsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue Data Catalog table configuration for storing the observation
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
  ObservationResultsOptions& WithCatalogTableConfig(CatalogTableConfigT&& value) {
    SetCatalogTableConfig(std::forward<CatalogTableConfigT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_writeObservationResultsEnabled{false};

  CatalogTableConfigOptions m_catalogTableConfig;
  bool m_writeObservationResultsEnabledHasBeenSet = false;
  bool m_catalogTableConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
