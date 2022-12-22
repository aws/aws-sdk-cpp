/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/IntegerParameterRange.h>
#include <aws/sagemaker/model/ContinuousParameterRange.h>
#include <aws/sagemaker/model/CategoricalParameterRange.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies ranges of integer, continuous, and categorical hyperparameters that
   * a hyperparameter tuning job searches. The hyperparameter tuning job launches
   * training jobs with hyperparameter values within these ranges to find the
   * combination of values that result in the training job with the best performance
   * as measured by the objective metric of the hyperparameter tuning job.</p> 
   * <p>The maximum number of items specified for <code>Array Members</code> refers
   * to the maximum number of hyperparameters for each range and also the maximum for
   * the hyperparameter tuning job itself. That is, the sum of the number of
   * hyperparameters for all the ranges can't exceed the maximum number
   * specified.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ParameterRanges">AWS
   * API Reference</a></p>
   */
  class ParameterRanges
  {
  public:
    AWS_SAGEMAKER_API ParameterRanges();
    AWS_SAGEMAKER_API ParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array of <a>IntegerParameterRange</a> objects that specify ranges of
     * integer hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline const Aws::Vector<IntegerParameterRange>& GetIntegerParameterRanges() const{ return m_integerParameterRanges; }

    /**
     * <p>The array of <a>IntegerParameterRange</a> objects that specify ranges of
     * integer hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline bool IntegerParameterRangesHasBeenSet() const { return m_integerParameterRangesHasBeenSet; }

    /**
     * <p>The array of <a>IntegerParameterRange</a> objects that specify ranges of
     * integer hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline void SetIntegerParameterRanges(const Aws::Vector<IntegerParameterRange>& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges = value; }

    /**
     * <p>The array of <a>IntegerParameterRange</a> objects that specify ranges of
     * integer hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline void SetIntegerParameterRanges(Aws::Vector<IntegerParameterRange>&& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges = std::move(value); }

    /**
     * <p>The array of <a>IntegerParameterRange</a> objects that specify ranges of
     * integer hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& WithIntegerParameterRanges(const Aws::Vector<IntegerParameterRange>& value) { SetIntegerParameterRanges(value); return *this;}

    /**
     * <p>The array of <a>IntegerParameterRange</a> objects that specify ranges of
     * integer hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& WithIntegerParameterRanges(Aws::Vector<IntegerParameterRange>&& value) { SetIntegerParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The array of <a>IntegerParameterRange</a> objects that specify ranges of
     * integer hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& AddIntegerParameterRanges(const IntegerParameterRange& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges.push_back(value); return *this; }

    /**
     * <p>The array of <a>IntegerParameterRange</a> objects that specify ranges of
     * integer hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& AddIntegerParameterRanges(IntegerParameterRange&& value) { m_integerParameterRangesHasBeenSet = true; m_integerParameterRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>ContinuousParameterRange</a> objects that specify ranges of
     * continuous hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline const Aws::Vector<ContinuousParameterRange>& GetContinuousParameterRanges() const{ return m_continuousParameterRanges; }

    /**
     * <p>The array of <a>ContinuousParameterRange</a> objects that specify ranges of
     * continuous hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline bool ContinuousParameterRangesHasBeenSet() const { return m_continuousParameterRangesHasBeenSet; }

    /**
     * <p>The array of <a>ContinuousParameterRange</a> objects that specify ranges of
     * continuous hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline void SetContinuousParameterRanges(const Aws::Vector<ContinuousParameterRange>& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges = value; }

    /**
     * <p>The array of <a>ContinuousParameterRange</a> objects that specify ranges of
     * continuous hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline void SetContinuousParameterRanges(Aws::Vector<ContinuousParameterRange>&& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges = std::move(value); }

    /**
     * <p>The array of <a>ContinuousParameterRange</a> objects that specify ranges of
     * continuous hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& WithContinuousParameterRanges(const Aws::Vector<ContinuousParameterRange>& value) { SetContinuousParameterRanges(value); return *this;}

    /**
     * <p>The array of <a>ContinuousParameterRange</a> objects that specify ranges of
     * continuous hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& WithContinuousParameterRanges(Aws::Vector<ContinuousParameterRange>&& value) { SetContinuousParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The array of <a>ContinuousParameterRange</a> objects that specify ranges of
     * continuous hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& AddContinuousParameterRanges(const ContinuousParameterRange& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges.push_back(value); return *this; }

    /**
     * <p>The array of <a>ContinuousParameterRange</a> objects that specify ranges of
     * continuous hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& AddContinuousParameterRanges(ContinuousParameterRange&& value) { m_continuousParameterRangesHasBeenSet = true; m_continuousParameterRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>CategoricalParameterRange</a> objects that specify ranges of
     * categorical hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline const Aws::Vector<CategoricalParameterRange>& GetCategoricalParameterRanges() const{ return m_categoricalParameterRanges; }

    /**
     * <p>The array of <a>CategoricalParameterRange</a> objects that specify ranges of
     * categorical hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline bool CategoricalParameterRangesHasBeenSet() const { return m_categoricalParameterRangesHasBeenSet; }

    /**
     * <p>The array of <a>CategoricalParameterRange</a> objects that specify ranges of
     * categorical hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline void SetCategoricalParameterRanges(const Aws::Vector<CategoricalParameterRange>& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges = value; }

    /**
     * <p>The array of <a>CategoricalParameterRange</a> objects that specify ranges of
     * categorical hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline void SetCategoricalParameterRanges(Aws::Vector<CategoricalParameterRange>&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges = std::move(value); }

    /**
     * <p>The array of <a>CategoricalParameterRange</a> objects that specify ranges of
     * categorical hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& WithCategoricalParameterRanges(const Aws::Vector<CategoricalParameterRange>& value) { SetCategoricalParameterRanges(value); return *this;}

    /**
     * <p>The array of <a>CategoricalParameterRange</a> objects that specify ranges of
     * categorical hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& WithCategoricalParameterRanges(Aws::Vector<CategoricalParameterRange>&& value) { SetCategoricalParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The array of <a>CategoricalParameterRange</a> objects that specify ranges of
     * categorical hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& AddCategoricalParameterRanges(const CategoricalParameterRange& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges.push_back(value); return *this; }

    /**
     * <p>The array of <a>CategoricalParameterRange</a> objects that specify ranges of
     * categorical hyperparameters that a hyperparameter tuning job searches.</p>
     */
    inline ParameterRanges& AddCategoricalParameterRanges(CategoricalParameterRange&& value) { m_categoricalParameterRangesHasBeenSet = true; m_categoricalParameterRanges.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IntegerParameterRange> m_integerParameterRanges;
    bool m_integerParameterRangesHasBeenSet = false;

    Aws::Vector<ContinuousParameterRange> m_continuousParameterRanges;
    bool m_continuousParameterRangesHasBeenSet = false;

    Aws::Vector<CategoricalParameterRange> m_categoricalParameterRanges;
    bool m_categoricalParameterRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
