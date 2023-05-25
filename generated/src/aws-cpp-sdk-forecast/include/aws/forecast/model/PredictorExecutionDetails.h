/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/PredictorExecution.h>
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
   * <p>Contains details on the backtests performed to evaluate the accuracy of the
   * predictor. The tests are returned in descending order of accuracy, with the most
   * accurate backtest appearing first. You specify the number of backtests to
   * perform when you call the operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/PredictorExecutionDetails">AWS
   * API Reference</a></p>
   */
  class PredictorExecutionDetails
  {
  public:
    AWS_FORECASTSERVICE_API PredictorExecutionDetails();
    AWS_FORECASTSERVICE_API PredictorExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline const Aws::Vector<PredictorExecution>& GetPredictorExecutions() const{ return m_predictorExecutions; }

    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline bool PredictorExecutionsHasBeenSet() const { return m_predictorExecutionsHasBeenSet; }

    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline void SetPredictorExecutions(const Aws::Vector<PredictorExecution>& value) { m_predictorExecutionsHasBeenSet = true; m_predictorExecutions = value; }

    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline void SetPredictorExecutions(Aws::Vector<PredictorExecution>&& value) { m_predictorExecutionsHasBeenSet = true; m_predictorExecutions = std::move(value); }

    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline PredictorExecutionDetails& WithPredictorExecutions(const Aws::Vector<PredictorExecution>& value) { SetPredictorExecutions(value); return *this;}

    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline PredictorExecutionDetails& WithPredictorExecutions(Aws::Vector<PredictorExecution>&& value) { SetPredictorExecutions(std::move(value)); return *this;}

    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline PredictorExecutionDetails& AddPredictorExecutions(const PredictorExecution& value) { m_predictorExecutionsHasBeenSet = true; m_predictorExecutions.push_back(value); return *this; }

    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline PredictorExecutionDetails& AddPredictorExecutions(PredictorExecution&& value) { m_predictorExecutionsHasBeenSet = true; m_predictorExecutions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PredictorExecution> m_predictorExecutions;
    bool m_predictorExecutionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
