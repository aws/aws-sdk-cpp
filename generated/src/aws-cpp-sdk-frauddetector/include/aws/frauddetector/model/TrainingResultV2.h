/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/DataValidationMetrics.h>
#include <aws/frauddetector/model/TrainingMetricsV2.h>
#include <aws/frauddetector/model/VariableImportanceMetrics.h>
#include <aws/frauddetector/model/AggregatedVariablesImportanceMetrics.h>
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
   * <p> The training result details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TrainingResultV2">AWS
   * API Reference</a></p>
   */
  class TrainingResultV2
  {
  public:
    AWS_FRAUDDETECTOR_API TrainingResultV2() = default;
    AWS_FRAUDDETECTOR_API TrainingResultV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingResultV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DataValidationMetrics& GetDataValidationMetrics() const { return m_dataValidationMetrics; }
    inline bool DataValidationMetricsHasBeenSet() const { return m_dataValidationMetricsHasBeenSet; }
    template<typename DataValidationMetricsT = DataValidationMetrics>
    void SetDataValidationMetrics(DataValidationMetricsT&& value) { m_dataValidationMetricsHasBeenSet = true; m_dataValidationMetrics = std::forward<DataValidationMetricsT>(value); }
    template<typename DataValidationMetricsT = DataValidationMetrics>
    TrainingResultV2& WithDataValidationMetrics(DataValidationMetricsT&& value) { SetDataValidationMetrics(std::forward<DataValidationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The training metric details. </p>
     */
    inline const TrainingMetricsV2& GetTrainingMetricsV2() const { return m_trainingMetricsV2; }
    inline bool TrainingMetricsV2HasBeenSet() const { return m_trainingMetricsV2HasBeenSet; }
    template<typename TrainingMetricsV2T = TrainingMetricsV2>
    void SetTrainingMetricsV2(TrainingMetricsV2T&& value) { m_trainingMetricsV2HasBeenSet = true; m_trainingMetricsV2 = std::forward<TrainingMetricsV2T>(value); }
    template<typename TrainingMetricsV2T = TrainingMetricsV2>
    TrainingResultV2& WithTrainingMetricsV2(TrainingMetricsV2T&& value) { SetTrainingMetricsV2(std::forward<TrainingMetricsV2T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VariableImportanceMetrics& GetVariableImportanceMetrics() const { return m_variableImportanceMetrics; }
    inline bool VariableImportanceMetricsHasBeenSet() const { return m_variableImportanceMetricsHasBeenSet; }
    template<typename VariableImportanceMetricsT = VariableImportanceMetrics>
    void SetVariableImportanceMetrics(VariableImportanceMetricsT&& value) { m_variableImportanceMetricsHasBeenSet = true; m_variableImportanceMetrics = std::forward<VariableImportanceMetricsT>(value); }
    template<typename VariableImportanceMetricsT = VariableImportanceMetrics>
    TrainingResultV2& WithVariableImportanceMetrics(VariableImportanceMetricsT&& value) { SetVariableImportanceMetrics(std::forward<VariableImportanceMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The variable importance metrics of the aggregated variables. </p> <p>Account
     * Takeover Insights (ATI) model uses event variables from the login data you
     * provide to continuously calculate a set of variables (aggregated variables)
     * based on historical events. For example, your ATI model might calculate the
     * number of times an user has logged in using the same IP address. In this case,
     * event variables used to derive the aggregated variables are <code>IP
     * address</code> and <code>user</code>.</p>
     */
    inline const AggregatedVariablesImportanceMetrics& GetAggregatedVariablesImportanceMetrics() const { return m_aggregatedVariablesImportanceMetrics; }
    inline bool AggregatedVariablesImportanceMetricsHasBeenSet() const { return m_aggregatedVariablesImportanceMetricsHasBeenSet; }
    template<typename AggregatedVariablesImportanceMetricsT = AggregatedVariablesImportanceMetrics>
    void SetAggregatedVariablesImportanceMetrics(AggregatedVariablesImportanceMetricsT&& value) { m_aggregatedVariablesImportanceMetricsHasBeenSet = true; m_aggregatedVariablesImportanceMetrics = std::forward<AggregatedVariablesImportanceMetricsT>(value); }
    template<typename AggregatedVariablesImportanceMetricsT = AggregatedVariablesImportanceMetrics>
    TrainingResultV2& WithAggregatedVariablesImportanceMetrics(AggregatedVariablesImportanceMetricsT&& value) { SetAggregatedVariablesImportanceMetrics(std::forward<AggregatedVariablesImportanceMetricsT>(value)); return *this;}
    ///@}
  private:

    DataValidationMetrics m_dataValidationMetrics;
    bool m_dataValidationMetricsHasBeenSet = false;

    TrainingMetricsV2 m_trainingMetricsV2;
    bool m_trainingMetricsV2HasBeenSet = false;

    VariableImportanceMetrics m_variableImportanceMetrics;
    bool m_variableImportanceMetricsHasBeenSet = false;

    AggregatedVariablesImportanceMetrics m_aggregatedVariablesImportanceMetrics;
    bool m_aggregatedVariablesImportanceMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
