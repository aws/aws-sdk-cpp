/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>

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
   * <p> Range of area under curve (auc) expected from the model. A range greater
   * than 0.1 indicates higher model uncertainity. A range is the difference between
   * upper and lower bound of auc. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/UncertaintyRange">AWS
   * API Reference</a></p>
   */
  class UncertaintyRange
  {
  public:
    AWS_FRAUDDETECTOR_API UncertaintyRange();
    AWS_FRAUDDETECTOR_API UncertaintyRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API UncertaintyRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The lower bound value of the area under curve (auc). </p>
     */
    inline double GetLowerBoundValue() const{ return m_lowerBoundValue; }

    /**
     * <p> The lower bound value of the area under curve (auc). </p>
     */
    inline bool LowerBoundValueHasBeenSet() const { return m_lowerBoundValueHasBeenSet; }

    /**
     * <p> The lower bound value of the area under curve (auc). </p>
     */
    inline void SetLowerBoundValue(double value) { m_lowerBoundValueHasBeenSet = true; m_lowerBoundValue = value; }

    /**
     * <p> The lower bound value of the area under curve (auc). </p>
     */
    inline UncertaintyRange& WithLowerBoundValue(double value) { SetLowerBoundValue(value); return *this;}


    /**
     * <p> The upper bound value of the area under curve (auc). </p>
     */
    inline double GetUpperBoundValue() const{ return m_upperBoundValue; }

    /**
     * <p> The upper bound value of the area under curve (auc). </p>
     */
    inline bool UpperBoundValueHasBeenSet() const { return m_upperBoundValueHasBeenSet; }

    /**
     * <p> The upper bound value of the area under curve (auc). </p>
     */
    inline void SetUpperBoundValue(double value) { m_upperBoundValueHasBeenSet = true; m_upperBoundValue = value; }

    /**
     * <p> The upper bound value of the area under curve (auc). </p>
     */
    inline UncertaintyRange& WithUpperBoundValue(double value) { SetUpperBoundValue(value); return *this;}

  private:

    double m_lowerBoundValue;
    bool m_lowerBoundValueHasBeenSet = false;

    double m_upperBoundValue;
    bool m_upperBoundValueHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
