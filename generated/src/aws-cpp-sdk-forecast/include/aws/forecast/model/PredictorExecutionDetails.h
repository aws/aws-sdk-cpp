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
    AWS_FORECASTSERVICE_API PredictorExecutionDetails() = default;
    AWS_FORECASTSERVICE_API PredictorExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of the backtests performed to evaluate the accuracy of the predictor
     * against a particular algorithm. The <code>NumberOfBacktestWindows</code> from
     * the object determines the number of windows in the array.</p>
     */
    inline const Aws::Vector<PredictorExecution>& GetPredictorExecutions() const { return m_predictorExecutions; }
    inline bool PredictorExecutionsHasBeenSet() const { return m_predictorExecutionsHasBeenSet; }
    template<typename PredictorExecutionsT = Aws::Vector<PredictorExecution>>
    void SetPredictorExecutions(PredictorExecutionsT&& value) { m_predictorExecutionsHasBeenSet = true; m_predictorExecutions = std::forward<PredictorExecutionsT>(value); }
    template<typename PredictorExecutionsT = Aws::Vector<PredictorExecution>>
    PredictorExecutionDetails& WithPredictorExecutions(PredictorExecutionsT&& value) { SetPredictorExecutions(std::forward<PredictorExecutionsT>(value)); return *this;}
    template<typename PredictorExecutionsT = PredictorExecution>
    PredictorExecutionDetails& AddPredictorExecutions(PredictorExecutionsT&& value) { m_predictorExecutionsHasBeenSet = true; m_predictorExecutions.emplace_back(std::forward<PredictorExecutionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PredictorExecution> m_predictorExecutions;
    bool m_predictorExecutionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
