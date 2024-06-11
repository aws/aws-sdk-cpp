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
    AWS_FORECASTSERVICE_API ParameterRanges();
    AWS_FORECASTSERVICE_API ParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the tunable range for each categorical hyperparameter.</p>
     */
    inline const Aws::Vector<CategoricalParameterRange>& GetCategoricalParameterRanges() const{ return m_categoricalParameterRanges; }
    inline bool CategoricalParameterRangesHasBeenSet() const { return m_categoricalParameterRangesHasBeenSet; }
    inline void SetCategoricalParameterRanges(const Aws::Vector<CategoricalParameterRange>& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges = value; }
    inline void SetCategoricalParameterRanges(Aws::Vector<CategoricalParameterRange>&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges = std::move(value); }
    inline ParameterRanges& WithCategoricalParameterRanges(const Aws::Vector<CategoricalParameterRange>& value) { SetCategoricalParameterRanges(value); return *this;}
    inline ParameterRanges& WithCategoricalParameterRanges(Aws::Vector<CategoricalParameterRange>&& value) { SetCategoricalParameterRanges(std::move(value)); return *this;}
    inline ParameterRanges& AddCategoricalParameterRanges(const CategoricalParameterRange& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges.push_back(value); return *this; }
    inline ParameterRanges& AddCategoricalParameterRanges(CategoricalParameterRange&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the tunable range for each continuous hyperparameter.</p>
     */
    inline const Aws::Vector<ContinuousParameterRange>& GetContinuousParameterRanges() const{ return m_continuousParameterRanges; }
    inline bool ContinuousParameterRangesHasBeenSet() const { return m_continuousParameterRangesHasBeenSet; }
    inline void SetContinuousParameterRanges(const Aws::Vector<ContinuousParameterRange>& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges = value; }
    inline void SetContinuousParameterRanges(Aws::Vector<ContinuousParameterRange>&& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges = std::move(value); }
    inline ParameterRanges& WithContinuousParameterRanges(const Aws::Vector<ContinuousParameterRange>& value) { SetContinuousParameterRanges(value); return *this;}
    inline ParameterRanges& WithContinuousParameterRanges(Aws::Vector<ContinuousParameterRange>&& value) { SetContinuousParameterRanges(std::move(value)); return *this;}
    inline ParameterRanges& AddContinuousParameterRanges(const ContinuousParameterRange& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges.push_back(value); return *this; }
    inline ParameterRanges& AddContinuousParameterRanges(ContinuousParameterRange&& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the tunable range for each integer hyperparameter.</p>
     */
    inline const Aws::Vector<IntegerParameterRange>& GetIntegerParameterRanges() const{ return m_integerParameterRanges; }
    inline bool IntegerParameterRangesHasBeenSet() const { return m_integerParameterRangesHasBeenSet; }
    inline void SetIntegerParameterRanges(const Aws::Vector<IntegerParameterRange>& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges = value; }
    inline void SetIntegerParameterRanges(Aws::Vector<IntegerParameterRange>&& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges = std::move(value); }
    inline ParameterRanges& WithIntegerParameterRanges(const Aws::Vector<IntegerParameterRange>& value) { SetIntegerParameterRanges(value); return *this;}
    inline ParameterRanges& WithIntegerParameterRanges(Aws::Vector<IntegerParameterRange>&& value) { SetIntegerParameterRanges(std::move(value)); return *this;}
    inline ParameterRanges& AddIntegerParameterRanges(const IntegerParameterRange& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges.push_back(value); return *this; }
    inline ParameterRanges& AddIntegerParameterRanges(IntegerParameterRange&& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges.push_back(std::move(value)); return *this; }
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
