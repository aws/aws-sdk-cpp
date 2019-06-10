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
#include <aws/personalize/model/DefaultIntegerHyperParameterRange.h>
#include <aws/personalize/model/DefaultContinuousHyperParameterRange.h>
#include <aws/personalize/model/DefaultCategoricalHyperParameterRange.h>
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
   * <p>Specifies the hyperparameters and their default ranges. Hyperparameters can
   * be categorical, continuous, or integer-valued.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DefaultHyperParameterRanges">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API DefaultHyperParameterRanges
  {
  public:
    DefaultHyperParameterRanges();
    DefaultHyperParameterRanges(Aws::Utils::Json::JsonView jsonValue);
    DefaultHyperParameterRanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultIntegerHyperParameterRange>& GetIntegerHyperParameterRanges() const{ return m_integerHyperParameterRanges; }

    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline bool IntegerHyperParameterRangesHasBeenSet() const { return m_integerHyperParameterRangesHasBeenSet; }

    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline void SetIntegerHyperParameterRanges(const Aws::Vector<DefaultIntegerHyperParameterRange>& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = value; }

    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline void SetIntegerHyperParameterRanges(Aws::Vector<DefaultIntegerHyperParameterRange>&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges = std::move(value); }

    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& WithIntegerHyperParameterRanges(const Aws::Vector<DefaultIntegerHyperParameterRange>& value) { SetIntegerHyperParameterRanges(value); return *this;}

    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& WithIntegerHyperParameterRanges(Aws::Vector<DefaultIntegerHyperParameterRange>&& value) { SetIntegerHyperParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& AddIntegerHyperParameterRanges(const DefaultIntegerHyperParameterRange& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.push_back(value); return *this; }

    /**
     * <p>The integer-valued hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& AddIntegerHyperParameterRanges(DefaultIntegerHyperParameterRange&& value) { m_integerHyperParameterRangesHasBeenSet = true; m_integerHyperParameterRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultContinuousHyperParameterRange>& GetContinuousHyperParameterRanges() const{ return m_continuousHyperParameterRanges; }

    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline bool ContinuousHyperParameterRangesHasBeenSet() const { return m_continuousHyperParameterRangesHasBeenSet; }

    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline void SetContinuousHyperParameterRanges(const Aws::Vector<DefaultContinuousHyperParameterRange>& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = value; }

    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline void SetContinuousHyperParameterRanges(Aws::Vector<DefaultContinuousHyperParameterRange>&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges = std::move(value); }

    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& WithContinuousHyperParameterRanges(const Aws::Vector<DefaultContinuousHyperParameterRange>& value) { SetContinuousHyperParameterRanges(value); return *this;}

    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& WithContinuousHyperParameterRanges(Aws::Vector<DefaultContinuousHyperParameterRange>&& value) { SetContinuousHyperParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& AddContinuousHyperParameterRanges(const DefaultContinuousHyperParameterRange& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.push_back(value); return *this; }

    /**
     * <p>The continuous hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& AddContinuousHyperParameterRanges(DefaultContinuousHyperParameterRange&& value) { m_continuousHyperParameterRangesHasBeenSet = true; m_continuousHyperParameterRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline const Aws::Vector<DefaultCategoricalHyperParameterRange>& GetCategoricalHyperParameterRanges() const{ return m_categoricalHyperParameterRanges; }

    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline bool CategoricalHyperParameterRangesHasBeenSet() const { return m_categoricalHyperParameterRangesHasBeenSet; }

    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline void SetCategoricalHyperParameterRanges(const Aws::Vector<DefaultCategoricalHyperParameterRange>& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = value; }

    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline void SetCategoricalHyperParameterRanges(Aws::Vector<DefaultCategoricalHyperParameterRange>&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges = std::move(value); }

    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& WithCategoricalHyperParameterRanges(const Aws::Vector<DefaultCategoricalHyperParameterRange>& value) { SetCategoricalHyperParameterRanges(value); return *this;}

    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& WithCategoricalHyperParameterRanges(Aws::Vector<DefaultCategoricalHyperParameterRange>&& value) { SetCategoricalHyperParameterRanges(std::move(value)); return *this;}

    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& AddCategoricalHyperParameterRanges(const DefaultCategoricalHyperParameterRange& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.push_back(value); return *this; }

    /**
     * <p>The categorical hyperparameters and their default ranges.</p>
     */
    inline DefaultHyperParameterRanges& AddCategoricalHyperParameterRanges(DefaultCategoricalHyperParameterRange&& value) { m_categoricalHyperParameterRangesHasBeenSet = true; m_categoricalHyperParameterRanges.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DefaultIntegerHyperParameterRange> m_integerHyperParameterRanges;
    bool m_integerHyperParameterRangesHasBeenSet;

    Aws::Vector<DefaultContinuousHyperParameterRange> m_continuousHyperParameterRanges;
    bool m_continuousHyperParameterRangesHasBeenSet;

    Aws::Vector<DefaultCategoricalHyperParameterRange> m_categoricalHyperParameterRanges;
    bool m_categoricalHyperParameterRangesHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
