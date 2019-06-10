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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/IntegerHyperParameterRange.h>
#include <aws/personalize/model/ContinuousHyperParameterRange.h>
#include <aws/personalize/model/CategoricalHyperParameterRange.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Specifies the hyperparameters and their ranges. Hyperparameters can be
   * categorical, continuous, or integer-valued.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/HyperParameterRanges">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API HyperParameterRanges
  {
  public:
    HyperParameterRanges();
    HyperParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<IntegerHyperParameterRange>& GetIntegerHyperParameterRanges() const{ return m_integerHyperParameterRanges; }

    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline bool IntegerHyperParameterRangesHasBeenSet() const { return m_integerHyperParameterRangesHasBeenSet; }

    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline void SetIntegerHyperParameterRanges(const Aws::Vector<IntegerHyperParameterRange>& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = value; }

    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline void SetIntegerHyperParameterRanges(Aws::Vector<IntegerHyperParameterRange>&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = std::move(value); }

    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& WithIntegerHyperParameterRanges(const Aws::Vector<IntegerHyperParameterRange>& value) { SetIntegerHyperParameterRanges(value); return *this;}

    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& WithIntegerHyperParameterRanges(Aws::Vector<IntegerHyperParameterRange>&& value) { SetIntegerHyperParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& AddIntegerHyperParameterRanges(const IntegerHyperParameterRange& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.push_back(value); return *this; }

    /**
     * <p>The integer-valued hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& AddIntegerHyperParameterRanges(IntegerHyperParameterRange&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<ContinuousHyperParameterRange>& GetContinuousHyperParameterRanges() const{ return m_continuousHyperParameterRanges; }

    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline bool ContinuousHyperParameterRangesHasBeenSet() const { return m_continuousHyperParameterRangesHasBeenSet; }

    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline void SetContinuousHyperParameterRanges(const Aws::Vector<ContinuousHyperParameterRange>& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = value; }

    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline void SetContinuousHyperParameterRanges(Aws::Vector<ContinuousHyperParameterRange>&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = std::move(value); }

    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& WithContinuousHyperParameterRanges(const Aws::Vector<ContinuousHyperParameterRange>& value) { SetContinuousHyperParameterRanges(value); return *this;}

    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& WithContinuousHyperParameterRanges(Aws::Vector<ContinuousHyperParameterRange>&& value) { SetContinuousHyperParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& AddContinuousHyperParameterRanges(const ContinuousHyperParameterRange& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.push_back(value); return *this; }

    /**
     * <p>The continuous hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& AddContinuousHyperParameterRanges(ContinuousHyperParameterRange&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline const Aws::Vector<CategoricalHyperParameterRange>& GetCategoricalHyperParameterRanges() const{ return m_categoricalHyperParameterRanges; }

    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline bool CategoricalHyperParameterRangesHasBeenSet() const { return m_categoricalHyperParameterRangesHasBeenSet; }

    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline void SetCategoricalHyperParameterRanges(const Aws::Vector<CategoricalHyperParameterRange>& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = value; }

    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline void SetCategoricalHyperParameterRanges(Aws::Vector<CategoricalHyperParameterRange>&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = std::move(value); }

    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& WithCategoricalHyperParameterRanges(const Aws::Vector<CategoricalHyperParameterRange>& value) { SetCategoricalHyperParameterRanges(value); return *this;}

    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& WithCategoricalHyperParameterRanges(Aws::Vector<CategoricalHyperParameterRange>&& value) { SetCategoricalHyperParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& AddCategoricalHyperParameterRanges(const CategoricalHyperParameterRange& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.push_back(value); return *this; }

    /**
     * <p>The categorical hyperparameters and their ranges.</p>
     */
    inline HyperParameterRanges& AddCategoricalHyperParameterRanges(CategoricalHyperParameterRange&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IntegerHyperParameterRange> m_integerHyperParameterRanges;
    bool m_integerHyperParameterRangesHasBeenSet;

    Aws::Vector<ContinuousHyperParameterRange> m_continuousHyperParameterRanges;
    bool m_continuousHyperParameterRangesHasBeenSet;

    Aws::Vector<CategoricalHyperParameterRange> m_categoricalHyperParameterRanges;
    bool m_categoricalHyperParameterRangesHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
