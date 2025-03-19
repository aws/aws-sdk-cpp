/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/DataValidationMetrics.h>
#include <aws/frauddetector/model/TrainingMetrics.h>
#include <aws/frauddetector/model/VariableImportanceMetrics.h>
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
   * <p>The training result details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TrainingResult">AWS
   * API Reference</a></p>
   */
  class TrainingResult
  {
  public:
    AWS_FRAUDDETECTOR_API TrainingResult() = default;
    AWS_FRAUDDETECTOR_API TrainingResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The validation metrics.</p>
     */
    inline const DataValidationMetrics& GetDataValidationMetrics() const { return m_dataValidationMetrics; }
    inline bool DataValidationMetricsHasBeenSet() const { return m_dataValidationMetricsHasBeenSet; }
    template<typename DataValidationMetricsT = DataValidationMetrics>
    void SetDataValidationMetrics(DataValidationMetricsT&& value) { m_dataValidationMetricsHasBeenSet = true; m_dataValidationMetrics = std::forward<DataValidationMetricsT>(value); }
    template<typename DataValidationMetricsT = DataValidationMetrics>
    TrainingResult& WithDataValidationMetrics(DataValidationMetricsT&& value) { SetDataValidationMetrics(std::forward<DataValidationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training metric details.</p>
     */
    inline const TrainingMetrics& GetTrainingMetrics() const { return m_trainingMetrics; }
    inline bool TrainingMetricsHasBeenSet() const { return m_trainingMetricsHasBeenSet; }
    template<typename TrainingMetricsT = TrainingMetrics>
    void SetTrainingMetrics(TrainingMetricsT&& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics = std::forward<TrainingMetricsT>(value); }
    template<typename TrainingMetricsT = TrainingMetrics>
    TrainingResult& WithTrainingMetrics(TrainingMetricsT&& value) { SetTrainingMetrics(std::forward<TrainingMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The variable importance metrics.</p>
     */
    inline const VariableImportanceMetrics& GetVariableImportanceMetrics() const { return m_variableImportanceMetrics; }
    inline bool VariableImportanceMetricsHasBeenSet() const { return m_variableImportanceMetricsHasBeenSet; }
    template<typename VariableImportanceMetricsT = VariableImportanceMetrics>
    void SetVariableImportanceMetrics(VariableImportanceMetricsT&& value) { m_variableImportanceMetricsHasBeenSet = true; m_variableImportanceMetrics = std::forward<VariableImportanceMetricsT>(value); }
    template<typename VariableImportanceMetricsT = VariableImportanceMetrics>
    TrainingResult& WithVariableImportanceMetrics(VariableImportanceMetricsT&& value) { SetVariableImportanceMetrics(std::forward<VariableImportanceMetricsT>(value)); return *this;}
    ///@}
  private:

    DataValidationMetrics m_dataValidationMetrics;
    bool m_dataValidationMetricsHasBeenSet = false;

    TrainingMetrics m_trainingMetrics;
    bool m_trainingMetricsHasBeenSet = false;

    VariableImportanceMetrics m_variableImportanceMetrics;
    bool m_variableImportanceMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
