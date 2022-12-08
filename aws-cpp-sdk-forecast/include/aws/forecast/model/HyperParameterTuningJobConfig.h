/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/ParameterRanges.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Configuration information for a hyperparameter tuning job. You specify this
   * object in the <a>CreatePredictor</a> request.</p> <p>A <i>hyperparameter</i> is
   * a parameter that governs the model training process. You set hyperparameters
   * before training starts, unlike model parameters, which are determined during
   * training. The values of the hyperparameters effect which values are chosen for
   * the model parameters.</p> <p>In a <i>hyperparameter tuning job</i>, Amazon
   * Forecast chooses the set of hyperparameter values that optimize a specified
   * metric. Forecast accomplishes this by running many training jobs over a range of
   * hyperparameter values. The optimum set of values depends on the algorithm, the
   * training data, and the specified metric objective.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/HyperParameterTuningJobConfig">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobConfig
  {
  public:
    AWS_FORECASTSERVICE_API HyperParameterTuningJobConfig();
    AWS_FORECASTSERVICE_API HyperParameterTuningJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API HyperParameterTuningJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the ranges of valid values for the hyperparameters.</p>
     */
    inline const ParameterRanges& GetParameterRanges() const{ return m_parameterRanges; }

    /**
     * <p>Specifies the ranges of valid values for the hyperparameters.</p>
     */
    inline bool ParameterRangesHasBeenSet() const { return m_parameterRangesHasBeenSet; }

    /**
     * <p>Specifies the ranges of valid values for the hyperparameters.</p>
     */
    inline void SetParameterRanges(const ParameterRanges& value) { m_parameterRangesHasBeenSet = true; m_parameterRanges = value; }

    /**
     * <p>Specifies the ranges of valid values for the hyperparameters.</p>
     */
    inline void SetParameterRanges(ParameterRanges&& value) { m_parameterRangesHasBeenSet = true; m_parameterRanges = std::move(value); }

    /**
     * <p>Specifies the ranges of valid values for the hyperparameters.</p>
     */
    inline HyperParameterTuningJobConfig& WithParameterRanges(const ParameterRanges& value) { SetParameterRanges(value); return *this;}

    /**
     * <p>Specifies the ranges of valid values for the hyperparameters.</p>
     */
    inline HyperParameterTuningJobConfig& WithParameterRanges(ParameterRanges&& value) { SetParameterRanges(std::move(value)); return *this;}

  private:

    ParameterRanges m_parameterRanges;
    bool m_parameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
