/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/InclusionAnnotationValue.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The statistic model result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StatisticModelResult">AWS
   * API Reference</a></p>
   */
  class StatisticModelResult
  {
  public:
    AWS_GLUE_API StatisticModelResult() = default;
    AWS_GLUE_API StatisticModelResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatisticModelResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lower bound.</p>
     */
    inline double GetLowerBound() const { return m_lowerBound; }
    inline bool LowerBoundHasBeenSet() const { return m_lowerBoundHasBeenSet; }
    inline void SetLowerBound(double value) { m_lowerBoundHasBeenSet = true; m_lowerBound = value; }
    inline StatisticModelResult& WithLowerBound(double value) { SetLowerBound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper bound.</p>
     */
    inline double GetUpperBound() const { return m_upperBound; }
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }
    inline void SetUpperBound(double value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }
    inline StatisticModelResult& WithUpperBound(double value) { SetUpperBound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The predicted value.</p>
     */
    inline double GetPredictedValue() const { return m_predictedValue; }
    inline bool PredictedValueHasBeenSet() const { return m_predictedValueHasBeenSet; }
    inline void SetPredictedValue(double value) { m_predictedValueHasBeenSet = true; m_predictedValue = value; }
    inline StatisticModelResult& WithPredictedValue(double value) { SetPredictedValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual value.</p>
     */
    inline double GetActualValue() const { return m_actualValue; }
    inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
    inline void SetActualValue(double value) { m_actualValueHasBeenSet = true; m_actualValue = value; }
    inline StatisticModelResult& WithActualValue(double value) { SetActualValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    StatisticModelResult& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusion annotation.</p>
     */
    inline InclusionAnnotationValue GetInclusionAnnotation() const { return m_inclusionAnnotation; }
    inline bool InclusionAnnotationHasBeenSet() const { return m_inclusionAnnotationHasBeenSet; }
    inline void SetInclusionAnnotation(InclusionAnnotationValue value) { m_inclusionAnnotationHasBeenSet = true; m_inclusionAnnotation = value; }
    inline StatisticModelResult& WithInclusionAnnotation(InclusionAnnotationValue value) { SetInclusionAnnotation(value); return *this;}
    ///@}
  private:

    double m_lowerBound{0.0};
    bool m_lowerBoundHasBeenSet = false;

    double m_upperBound{0.0};
    bool m_upperBoundHasBeenSet = false;

    double m_predictedValue{0.0};
    bool m_predictedValueHasBeenSet = false;

    double m_actualValue{0.0};
    bool m_actualValueHasBeenSet = false;

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

    InclusionAnnotationValue m_inclusionAnnotation{InclusionAnnotationValue::NOT_SET};
    bool m_inclusionAnnotationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
