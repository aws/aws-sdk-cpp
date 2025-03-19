/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/LogOddsMetric.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The variable importance metrics details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/VariableImportanceMetrics">AWS
   * API Reference</a></p>
   */
  class VariableImportanceMetrics
  {
  public:
    AWS_FRAUDDETECTOR_API VariableImportanceMetrics() = default;
    AWS_FRAUDDETECTOR_API VariableImportanceMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API VariableImportanceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of variable metrics.</p>
     */
    inline const Aws::Vector<LogOddsMetric>& GetLogOddsMetrics() const { return m_logOddsMetrics; }
    inline bool LogOddsMetricsHasBeenSet() const { return m_logOddsMetricsHasBeenSet; }
    template<typename LogOddsMetricsT = Aws::Vector<LogOddsMetric>>
    void SetLogOddsMetrics(LogOddsMetricsT&& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics = std::forward<LogOddsMetricsT>(value); }
    template<typename LogOddsMetricsT = Aws::Vector<LogOddsMetric>>
    VariableImportanceMetrics& WithLogOddsMetrics(LogOddsMetricsT&& value) { SetLogOddsMetrics(std::forward<LogOddsMetricsT>(value)); return *this;}
    template<typename LogOddsMetricsT = LogOddsMetric>
    VariableImportanceMetrics& AddLogOddsMetrics(LogOddsMetricsT&& value) { m_logOddsMetricsHasBeenSet = true; m_logOddsMetrics.emplace_back(std::forward<LogOddsMetricsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LogOddsMetric> m_logOddsMetrics;
    bool m_logOddsMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
