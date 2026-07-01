/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/PopulationAnalysisSqlParameters.h>

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
 * <p>Contains the configuration that defines the analysis used to populate an
 * intermediate table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PopulationAnalysisConfiguration">AWS
 * API Reference</a></p>
 */
class PopulationAnalysisConfiguration {
 public:
  AWS_CLEANROOMS_API PopulationAnalysisConfiguration() = default;
  AWS_CLEANROOMS_API PopulationAnalysisConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API PopulationAnalysisConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SQL parameters for the population analysis, including the query string or
   * analysis template ARN.</p>
   */
  inline const PopulationAnalysisSqlParameters& GetSqlParameters() const { return m_sqlParameters; }
  inline bool SqlParametersHasBeenSet() const { return m_sqlParametersHasBeenSet; }
  template <typename SqlParametersT = PopulationAnalysisSqlParameters>
  void SetSqlParameters(SqlParametersT&& value) {
    m_sqlParametersHasBeenSet = true;
    m_sqlParameters = std::forward<SqlParametersT>(value);
  }
  template <typename SqlParametersT = PopulationAnalysisSqlParameters>
  PopulationAnalysisConfiguration& WithSqlParameters(SqlParametersT&& value) {
    SetSqlParameters(std::forward<SqlParametersT>(value));
    return *this;
  }
  ///@}
 private:
  PopulationAnalysisSqlParameters m_sqlParameters;
  bool m_sqlParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
