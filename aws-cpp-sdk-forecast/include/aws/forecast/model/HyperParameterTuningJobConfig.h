/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Configuration information for a hyperparameter tuning job. This object is
   * specified in the <a>CreatePredictor</a> request.</p> <p>A hyperparameter is a
   * parameter that governs the model training process and is set before training
   * starts. This is as opposed to a model parameter that is determined during
   * training. The values of the hyperparameters have an effect on the chosen model
   * parameters.</p> <p>A hyperparameter tuning job is the process of choosing the
   * optimum set of hyperparameter values that optimize a specified metric. This is
   * accomplished by running many training jobs over a range of hyperparameter
   * values. The optimum set of values is dependent on the algorithm, the training
   * data, and the given metric objective.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/HyperParameterTuningJobConfig">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API HyperParameterTuningJobConfig
  {
  public:
    HyperParameterTuningJobConfig();
    HyperParameterTuningJobConfig(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterTuningJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_parameterRangesHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
