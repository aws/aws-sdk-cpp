/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/IntegerParameterRangeSpecification.h>
#include <aws/sagemaker/model/ContinuousParameterRangeSpecification.h>
#include <aws/sagemaker/model/CategoricalParameterRangeSpecification.h>
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
   * <p>Defines the possible values for categorical, continuous, and integer
   * hyperparameters to be used by an algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ParameterRange">AWS
   * API Reference</a></p>
   */
  class ParameterRange
  {
  public:
    AWS_SAGEMAKER_API ParameterRange();
    AWS_SAGEMAKER_API ParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>IntegerParameterRangeSpecification</code> object that defines the
     * possible values for an integer hyperparameter.</p>
     */
    inline const IntegerParameterRangeSpecification& GetIntegerParameterRangeSpecification() const{ return m_integerParameterRangeSpecification; }

    /**
     * <p>A <code>IntegerParameterRangeSpecification</code> object that defines the
     * possible values for an integer hyperparameter.</p>
     */
    inline bool IntegerParameterRangeSpecificationHasBeenSet() const { return m_integerParameterRangeSpecificationHasBeenSet; }

    /**
     * <p>A <code>IntegerParameterRangeSpecification</code> object that defines the
     * possible values for an integer hyperparameter.</p>
     */
    inline void SetIntegerParameterRangeSpecification(const IntegerParameterRangeSpecification& value) { m_integerParameterRangeSpecificationHasBeenSet = true; m_integerParameterRangeSpecification = value; }

    /**
     * <p>A <code>IntegerParameterRangeSpecification</code> object that defines the
     * possible values for an integer hyperparameter.</p>
     */
    inline void SetIntegerParameterRangeSpecification(IntegerParameterRangeSpecification&& value) { m_integerParameterRangeSpecificationHasBeenSet = true; m_integerParameterRangeSpecification = std::move(value); }

    /**
     * <p>A <code>IntegerParameterRangeSpecification</code> object that defines the
     * possible values for an integer hyperparameter.</p>
     */
    inline ParameterRange& WithIntegerParameterRangeSpecification(const IntegerParameterRangeSpecification& value) { SetIntegerParameterRangeSpecification(value); return *this;}

    /**
     * <p>A <code>IntegerParameterRangeSpecification</code> object that defines the
     * possible values for an integer hyperparameter.</p>
     */
    inline ParameterRange& WithIntegerParameterRangeSpecification(IntegerParameterRangeSpecification&& value) { SetIntegerParameterRangeSpecification(std::move(value)); return *this;}


    /**
     * <p>A <code>ContinuousParameterRangeSpecification</code> object that defines the
     * possible values for a continuous hyperparameter.</p>
     */
    inline const ContinuousParameterRangeSpecification& GetContinuousParameterRangeSpecification() const{ return m_continuousParameterRangeSpecification; }

    /**
     * <p>A <code>ContinuousParameterRangeSpecification</code> object that defines the
     * possible values for a continuous hyperparameter.</p>
     */
    inline bool ContinuousParameterRangeSpecificationHasBeenSet() const { return m_continuousParameterRangeSpecificationHasBeenSet; }

    /**
     * <p>A <code>ContinuousParameterRangeSpecification</code> object that defines the
     * possible values for a continuous hyperparameter.</p>
     */
    inline void SetContinuousParameterRangeSpecification(const ContinuousParameterRangeSpecification& value) { m_continuousParameterRangeSpecificationHasBeenSet = true; m_continuousParameterRangeSpecification = value; }

    /**
     * <p>A <code>ContinuousParameterRangeSpecification</code> object that defines the
     * possible values for a continuous hyperparameter.</p>
     */
    inline void SetContinuousParameterRangeSpecification(ContinuousParameterRangeSpecification&& value) { m_continuousParameterRangeSpecificationHasBeenSet = true; m_continuousParameterRangeSpecification = std::move(value); }

    /**
     * <p>A <code>ContinuousParameterRangeSpecification</code> object that defines the
     * possible values for a continuous hyperparameter.</p>
     */
    inline ParameterRange& WithContinuousParameterRangeSpecification(const ContinuousParameterRangeSpecification& value) { SetContinuousParameterRangeSpecification(value); return *this;}

    /**
     * <p>A <code>ContinuousParameterRangeSpecification</code> object that defines the
     * possible values for a continuous hyperparameter.</p>
     */
    inline ParameterRange& WithContinuousParameterRangeSpecification(ContinuousParameterRangeSpecification&& value) { SetContinuousParameterRangeSpecification(std::move(value)); return *this;}


    /**
     * <p>A <code>CategoricalParameterRangeSpecification</code> object that defines the
     * possible values for a categorical hyperparameter.</p>
     */
    inline const CategoricalParameterRangeSpecification& GetCategoricalParameterRangeSpecification() const{ return m_categoricalParameterRangeSpecification; }

    /**
     * <p>A <code>CategoricalParameterRangeSpecification</code> object that defines the
     * possible values for a categorical hyperparameter.</p>
     */
    inline bool CategoricalParameterRangeSpecificationHasBeenSet() const { return m_categoricalParameterRangeSpecificationHasBeenSet; }

    /**
     * <p>A <code>CategoricalParameterRangeSpecification</code> object that defines the
     * possible values for a categorical hyperparameter.</p>
     */
    inline void SetCategoricalParameterRangeSpecification(const CategoricalParameterRangeSpecification& value) { m_categoricalParameterRangeSpecificationHasBeenSet = true; m_categoricalParameterRangeSpecification = value; }

    /**
     * <p>A <code>CategoricalParameterRangeSpecification</code> object that defines the
     * possible values for a categorical hyperparameter.</p>
     */
    inline void SetCategoricalParameterRangeSpecification(CategoricalParameterRangeSpecification&& value) { m_categoricalParameterRangeSpecificationHasBeenSet = true; m_categoricalParameterRangeSpecification = std::move(value); }

    /**
     * <p>A <code>CategoricalParameterRangeSpecification</code> object that defines the
     * possible values for a categorical hyperparameter.</p>
     */
    inline ParameterRange& WithCategoricalParameterRangeSpecification(const CategoricalParameterRangeSpecification& value) { SetCategoricalParameterRangeSpecification(value); return *this;}

    /**
     * <p>A <code>CategoricalParameterRangeSpecification</code> object that defines the
     * possible values for a categorical hyperparameter.</p>
     */
    inline ParameterRange& WithCategoricalParameterRangeSpecification(CategoricalParameterRangeSpecification&& value) { SetCategoricalParameterRangeSpecification(std::move(value)); return *this;}

  private:

    IntegerParameterRangeSpecification m_integerParameterRangeSpecification;
    bool m_integerParameterRangeSpecificationHasBeenSet = false;

    ContinuousParameterRangeSpecification m_continuousParameterRangeSpecification;
    bool m_continuousParameterRangeSpecificationHasBeenSet = false;

    CategoricalParameterRangeSpecification m_categoricalParameterRangeSpecification;
    bool m_categoricalParameterRangeSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
