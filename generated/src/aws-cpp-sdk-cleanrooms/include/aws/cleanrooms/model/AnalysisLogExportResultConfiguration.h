/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisLogExportOutputConfiguration.h>

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
 * <p>Contains configurations for analysis log export results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisLogExportResultConfiguration">AWS
 * API Reference</a></p>
 */
class AnalysisLogExportResultConfiguration {
 public:
  AWS_CLEANROOMS_API AnalysisLogExportResultConfiguration() = default;
  AWS_CLEANROOMS_API AnalysisLogExportResultConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AnalysisLogExportResultConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for analysis log export results.</p>
   */
  inline const AnalysisLogExportOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = AnalysisLogExportOutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = AnalysisLogExportOutputConfiguration>
  AnalysisLogExportResultConfiguration& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AnalysisLogExportOutputConfiguration m_outputConfiguration;
  bool m_outputConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
