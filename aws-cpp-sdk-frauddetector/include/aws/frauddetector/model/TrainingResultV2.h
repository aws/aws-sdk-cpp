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
    AWS_FRAUDDETECTOR_API TrainingResultV2();
    AWS_FRAUDDETECTOR_API TrainingResultV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingResultV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DataValidationMetrics& GetDataValidationMetrics() const{ return m_dataValidationMetrics; }

    
    inline bool DataValidationMetricsHasBeenSet() const { return m_dataValidationMetricsHasBeenSet; }

    
    inline void SetDataValidationMetrics(const DataValidationMetrics& value) { m_dataValidationMetricsHasBeenSet = true; m_dataValidationMetrics = value; }

    
    inline void SetDataValidationMetrics(DataValidationMetrics&& value) { m_dataValidationMetricsHasBeenSet = true; m_dataValidationMetrics = std::move(value); }

    
    inline TrainingResultV2& WithDataValidationMetrics(const DataValidationMetrics& value) { SetDataValidationMetrics(value); return *this;}

    
    inline TrainingResultV2& WithDataValidationMetrics(DataValidationMetrics&& value) { SetDataValidationMetrics(std::move(value)); return *this;}


    /**
     * <p> The training metric details. </p>
     */
    inline const TrainingMetricsV2& GetTrainingMetricsV2() const{ return m_trainingMetricsV2; }

    /**
     * <p> The training metric details. </p>
     */
    inline bool TrainingMetricsV2HasBeenSet() const { return m_trainingMetricsV2HasBeenSet; }

    /**
     * <p> The training metric details. </p>
     */
    inline void SetTrainingMetricsV2(const TrainingMetricsV2& value) { m_trainingMetricsV2HasBeenSet = true; m_trainingMetricsV2 = value; }

    /**
     * <p> The training metric details. </p>
     */
    inline void SetTrainingMetricsV2(TrainingMetricsV2&& value) { m_trainingMetricsV2HasBeenSet = true; m_trainingMetricsV2 = std::move(value); }

    /**
     * <p> The training metric details. </p>
     */
    inline TrainingResultV2& WithTrainingMetricsV2(const TrainingMetricsV2& value) { SetTrainingMetricsV2(value); return *this;}

    /**
     * <p> The training metric details. </p>
     */
    inline TrainingResultV2& WithTrainingMetricsV2(TrainingMetricsV2&& value) { SetTrainingMetricsV2(std::move(value)); return *this;}


    
    inline const VariableImportanceMetrics& GetVariableImportanceMetrics() const{ return m_variableImportanceMetrics; }

    
    inline bool VariableImportanceMetricsHasBeenSet() const { return m_variableImportanceMetricsHasBeenSet; }

    
    inline void SetVariableImportanceMetrics(const VariableImportanceMetrics& value) { m_variableImportanceMetricsHasBeenSet = true; m_variableImportanceMetrics = value; }

    
    inline void SetVariableImportanceMetrics(VariableImportanceMetrics&& value) { m_variableImportanceMetricsHasBeenSet = true; m_variableImportanceMetrics = std::move(value); }

    
    inline TrainingResultV2& WithVariableImportanceMetrics(const VariableImportanceMetrics& value) { SetVariableImportanceMetrics(value); return *this;}

    
    inline TrainingResultV2& WithVariableImportanceMetrics(VariableImportanceMetrics&& value) { SetVariableImportanceMetrics(std::move(value)); return *this;}


    /**
     * <p> The variable importance metrics of the aggregated variables. </p> <p>Account
     * Takeover Insights (ATI) model uses event variables from the login data you
     * provide to continuously calculate a set of variables (aggregated variables)
     * based on historical events. For example, your ATI model might calculate the
     * number of times an user has logged in using the same IP address. In this case,
     * event variables used to derive the aggregated variables are <code>IP
     * address</code> and <code>user</code>.</p>
     */
    inline const AggregatedVariablesImportanceMetrics& GetAggregatedVariablesImportanceMetrics() const{ return m_aggregatedVariablesImportanceMetrics; }

    /**
     * <p> The variable importance metrics of the aggregated variables. </p> <p>Account
     * Takeover Insights (ATI) model uses event variables from the login data you
     * provide to continuously calculate a set of variables (aggregated variables)
     * based on historical events. For example, your ATI model might calculate the
     * number of times an user has logged in using the same IP address. In this case,
     * event variables used to derive the aggregated variables are <code>IP
     * address</code> and <code>user</code>.</p>
     */
    inline bool AggregatedVariablesImportanceMetricsHasBeenSet() const { return m_aggregatedVariablesImportanceMetricsHasBeenSet; }

    /**
     * <p> The variable importance metrics of the aggregated variables. </p> <p>Account
     * Takeover Insights (ATI) model uses event variables from the login data you
     * provide to continuously calculate a set of variables (aggregated variables)
     * based on historical events. For example, your ATI model might calculate the
     * number of times an user has logged in using the same IP address. In this case,
     * event variables used to derive the aggregated variables are <code>IP
     * address</code> and <code>user</code>.</p>
     */
    inline void SetAggregatedVariablesImportanceMetrics(const AggregatedVariablesImportanceMetrics& value) { m_aggregatedVariablesImportanceMetricsHasBeenSet = true; m_aggregatedVariablesImportanceMetrics = value; }

    /**
     * <p> The variable importance metrics of the aggregated variables. </p> <p>Account
     * Takeover Insights (ATI) model uses event variables from the login data you
     * provide to continuously calculate a set of variables (aggregated variables)
     * based on historical events. For example, your ATI model might calculate the
     * number of times an user has logged in using the same IP address. In this case,
     * event variables used to derive the aggregated variables are <code>IP
     * address</code> and <code>user</code>.</p>
     */
    inline void SetAggregatedVariablesImportanceMetrics(AggregatedVariablesImportanceMetrics&& value) { m_aggregatedVariablesImportanceMetricsHasBeenSet = true; m_aggregatedVariablesImportanceMetrics = std::move(value); }

    /**
     * <p> The variable importance metrics of the aggregated variables. </p> <p>Account
     * Takeover Insights (ATI) model uses event variables from the login data you
     * provide to continuously calculate a set of variables (aggregated variables)
     * based on historical events. For example, your ATI model might calculate the
     * number of times an user has logged in using the same IP address. In this case,
     * event variables used to derive the aggregated variables are <code>IP
     * address</code> and <code>user</code>.</p>
     */
    inline TrainingResultV2& WithAggregatedVariablesImportanceMetrics(const AggregatedVariablesImportanceMetrics& value) { SetAggregatedVariablesImportanceMetrics(value); return *this;}

    /**
     * <p> The variable importance metrics of the aggregated variables. </p> <p>Account
     * Takeover Insights (ATI) model uses event variables from the login data you
     * provide to continuously calculate a set of variables (aggregated variables)
     * based on historical events. For example, your ATI model might calculate the
     * number of times an user has logged in using the same IP address. In this case,
     * event variables used to derive the aggregated variables are <code>IP
     * address</code> and <code>user</code>.</p>
     */
    inline TrainingResultV2& WithAggregatedVariablesImportanceMetrics(AggregatedVariablesImportanceMetrics&& value) { SetAggregatedVariablesImportanceMetrics(std::move(value)); return *this;}

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
