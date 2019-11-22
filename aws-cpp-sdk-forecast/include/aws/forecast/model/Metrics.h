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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/WeightedQuantileLoss.h>
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
   * <p>Provides metrics that are used to evaluate the performance of a predictor.
   * This object is part of the <a>WindowSummary</a> object.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Metrics">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API Metrics
  {
  public:
    Metrics();
    Metrics(Aws::Utils::Json::JsonView jsonValue);
    Metrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The root mean square error (RMSE).</p>
     */
    inline double GetRMSE() const{ return m_rMSE; }

    /**
     * <p>The root mean square error (RMSE).</p>
     */
    inline bool RMSEHasBeenSet() const { return m_rMSEHasBeenSet; }

    /**
     * <p>The root mean square error (RMSE).</p>
     */
    inline void SetRMSE(double value) { m_rMSEHasBeenSet = true; m_rMSE = value; }

    /**
     * <p>The root mean square error (RMSE).</p>
     */
    inline Metrics& WithRMSE(double value) { SetRMSE(value); return *this;}


    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline const Aws::Vector<WeightedQuantileLoss>& GetWeightedQuantileLosses() const{ return m_weightedQuantileLosses; }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline bool WeightedQuantileLossesHasBeenSet() const { return m_weightedQuantileLossesHasBeenSet; }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline void SetWeightedQuantileLosses(const Aws::Vector<WeightedQuantileLoss>& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses = value; }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline void SetWeightedQuantileLosses(Aws::Vector<WeightedQuantileLoss>&& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses = std::move(value); }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline Metrics& WithWeightedQuantileLosses(const Aws::Vector<WeightedQuantileLoss>& value) { SetWeightedQuantileLosses(value); return *this;}

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline Metrics& WithWeightedQuantileLosses(Aws::Vector<WeightedQuantileLoss>&& value) { SetWeightedQuantileLosses(std::move(value)); return *this;}

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline Metrics& AddWeightedQuantileLosses(const WeightedQuantileLoss& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses.push_back(value); return *this; }

    /**
     * <p>An array of weighted quantile losses. Quantiles divide a probability
     * distribution into regions of equal probability. The distribution in this case is
     * the loss function.</p>
     */
    inline Metrics& AddWeightedQuantileLosses(WeightedQuantileLoss&& value) { m_weightedQuantileLossesHasBeenSet = true; m_weightedQuantileLosses.push_back(std::move(value)); return *this; }

  private:

    double m_rMSE;
    bool m_rMSEHasBeenSet;

    Aws::Vector<WeightedQuantileLoss> m_weightedQuantileLosses;
    bool m_weightedQuantileLossesHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
