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
    AWS_FRAUDDETECTOR_API TrainingResult();
    AWS_FRAUDDETECTOR_API TrainingResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API TrainingResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The validation metrics.</p>
     */
    inline const DataValidationMetrics& GetDataValidationMetrics() const{ return m_dataValidationMetrics; }

    /**
     * <p>The validation metrics.</p>
     */
    inline bool DataValidationMetricsHasBeenSet() const { return m_dataValidationMetricsHasBeenSet; }

    /**
     * <p>The validation metrics.</p>
     */
    inline void SetDataValidationMetrics(const DataValidationMetrics& value) { m_dataValidationMetricsHasBeenSet = true; m_dataValidationMetrics = value; }

    /**
     * <p>The validation metrics.</p>
     */
    inline void SetDataValidationMetrics(DataValidationMetrics&& value) { m_dataValidationMetricsHasBeenSet = true; m_dataValidationMetrics = std::move(value); }

    /**
     * <p>The validation metrics.</p>
     */
    inline TrainingResult& WithDataValidationMetrics(const DataValidationMetrics& value) { SetDataValidationMetrics(value); return *this;}

    /**
     * <p>The validation metrics.</p>
     */
    inline TrainingResult& WithDataValidationMetrics(DataValidationMetrics&& value) { SetDataValidationMetrics(std::move(value)); return *this;}


    /**
     * <p>The training metric details.</p>
     */
    inline const TrainingMetrics& GetTrainingMetrics() const{ return m_trainingMetrics; }

    /**
     * <p>The training metric details.</p>
     */
    inline bool TrainingMetricsHasBeenSet() const { return m_trainingMetricsHasBeenSet; }

    /**
     * <p>The training metric details.</p>
     */
    inline void SetTrainingMetrics(const TrainingMetrics& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics = value; }

    /**
     * <p>The training metric details.</p>
     */
    inline void SetTrainingMetrics(TrainingMetrics&& value) { m_trainingMetricsHasBeenSet = true; m_trainingMetrics = std::move(value); }

    /**
     * <p>The training metric details.</p>
     */
    inline TrainingResult& WithTrainingMetrics(const TrainingMetrics& value) { SetTrainingMetrics(value); return *this;}

    /**
     * <p>The training metric details.</p>
     */
    inline TrainingResult& WithTrainingMetrics(TrainingMetrics&& value) { SetTrainingMetrics(std::move(value)); return *this;}


    /**
     * <p>The variable importance metrics.</p>
     */
    inline const VariableImportanceMetrics& GetVariableImportanceMetrics() const{ return m_variableImportanceMetrics; }

    /**
     * <p>The variable importance metrics.</p>
     */
    inline bool VariableImportanceMetricsHasBeenSet() const { return m_variableImportanceMetricsHasBeenSet; }

    /**
     * <p>The variable importance metrics.</p>
     */
    inline void SetVariableImportanceMetrics(const VariableImportanceMetrics& value) { m_variableImportanceMetricsHasBeenSet = true; m_variableImportanceMetrics = value; }

    /**
     * <p>The variable importance metrics.</p>
     */
    inline void SetVariableImportanceMetrics(VariableImportanceMetrics&& value) { m_variableImportanceMetricsHasBeenSet = true; m_variableImportanceMetrics = std::move(value); }

    /**
     * <p>The variable importance metrics.</p>
     */
    inline TrainingResult& WithVariableImportanceMetrics(const VariableImportanceMetrics& value) { SetVariableImportanceMetrics(value); return *this;}

    /**
     * <p>The variable importance metrics.</p>
     */
    inline TrainingResult& WithVariableImportanceMetrics(VariableImportanceMetrics&& value) { SetVariableImportanceMetrics(std::move(value)); return *this;}

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
