/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/CategoricalParameterRange.h>
#include <aws/forecast/model/ContinuousParameterRange.h>
#include <aws/forecast/model/IntegerParameterRange.h>
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
   * <p>Specifies the categorical, continuous, and integer hyperparameters, and their
   * ranges of tunable values. The range of tunable values determines which values
   * that a hyperparameter tuning job can choose for the specified hyperparameter.
   * This object is part of the <a>HyperParameterTuningJobConfig</a>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ParameterRanges">AWS
   * API Reference</a></p>
   */
  class ParameterRanges
  {
  public:
    AWS_FORECASTSERVICE_API ParameterRanges() = default;
    AWS_FORECASTSERVICE_API ParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the tunable range for each categorical hyperparameter.</p>
     */
    inline const Aws::Vector<CategoricalParameterRange>& GetCategoricalParameterRanges() const { return m_categoricalParameterRanges; }
    inline bool CategoricalParameterRangesHasBeenSet() const { return m_categoricalParameterRangesHasBeenSet; }
    template<typename CategoricalParameterRangesT = Aws::Vector<CategoricalParameterRange>>
    void SetCategoricalParameterRanges(CategoricalParameterRangesT&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges = std::forward<CategoricalParameterRangesT>(value); }
    template<typename CategoricalParameterRangesT = Aws::Vector<CategoricalParameterRange>>
    ParameterRanges& WithCategoricalParameterRanges(CategoricalParameterRangesT&& value) { SetCategoricalParameterRanges(std::forward<CategoricalParameterRangesT>(value)); return *this;}
    template<typename CategoricalParameterRangesT = CategoricalParameterRange>
    ParameterRanges& AddCategoricalParameterRanges(CategoricalParameterRangesT&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges.emplace_back(std::forward<CategoricalParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the tunable range for each continuous hyperparameter.</p>
     */
    inline const Aws::Vector<ContinuousParameterRange>& GetContinuousParameterRanges() const { return m_continuousParameterRanges; }
    inline bool ContinuousParameterRangesHasBeenSet() const { return m_continuousParameterRangesHasBeenSet; }
    template<typename ContinuousParameterRangesT = Aws::Vector<ContinuousParameterRange>>
    void SetContinuousParameterRanges(ContinuousParameterRangesT&& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges = std::forward<ContinuousParameterRangesT>(value); }
    template<typename ContinuousParameterRangesT = Aws::Vector<ContinuousParameterRange>>
    ParameterRanges& WithContinuousParameterRanges(ContinuousParameterRangesT&& value) { SetContinuousParameterRanges(std::forward<ContinuousParameterRangesT>(value)); return *this;}
    template<typename ContinuousParameterRangesT = ContinuousParameterRange>
    ParameterRanges& AddContinuousParameterRanges(ContinuousParameterRangesT&& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges.emplace_back(std::forward<ContinuousParameterRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the tunable range for each integer hyperparameter.</p>
     */
    inline const Aws::Vector<IntegerParameterRange>& GetIntegerParameterRanges() const { return m_integerParameterRanges; }
    inline bool IntegerParameterRangesHasBeenSet() const { return m_integerParameterRangesHasBeenSet; }
    template<typename IntegerParameterRangesT = Aws::Vector<IntegerParameterRange>>
    void SetIntegerParameterRanges(IntegerParameterRangesT&& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges = std::forward<IntegerParameterRangesT>(value); }
    template<typename IntegerParameterRangesT = Aws::Vector<IntegerParameterRange>>
    ParameterRanges& WithIntegerParameterRanges(IntegerParameterRangesT&& value) { SetIntegerParameterRanges(std::forward<IntegerParameterRangesT>(value)); return *this;}
    template<typename IntegerParameterRangesT = IntegerParameterRange>
    ParameterRanges& AddIntegerParameterRanges(IntegerParameterRangesT&& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges.emplace_back(std::forward<IntegerParameterRangesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CategoricalParameterRange> m_categoricalParameterRanges;
    bool m_categoricalParameterRangesHasBeenSet = false;

    Aws::Vector<ContinuousParameterRange> m_continuousParameterRanges;
    bool m_continuousParameterRangesHasBeenSet = false;

    Aws::Vector<IntegerParameterRange> m_integerParameterRanges;
    bool m_integerParameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
