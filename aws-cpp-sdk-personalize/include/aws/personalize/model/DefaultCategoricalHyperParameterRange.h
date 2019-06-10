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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides the name and default range of a categorical hyperparameter and
   * whether the hyperparameter is tunable. A tunable hyperparameter can have its
   * value determined during hyperparameter optimization (HPO).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DefaultCategoricalHyperParameterRange">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API DefaultCategoricalHyperParameterRange
  {
  public:
    DefaultCategoricalHyperParameterRange();
    DefaultCategoricalHyperParameterRange(Aws::Utils::Json::JsonView jsonValue);
    DefaultCategoricalHyperParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline DefaultCategoricalHyperParameterRange& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline DefaultCategoricalHyperParameterRange& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline DefaultCategoricalHyperParameterRange& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline DefaultCategoricalHyperParameterRange& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline DefaultCategoricalHyperParameterRange& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline DefaultCategoricalHyperParameterRange& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline DefaultCategoricalHyperParameterRange& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the categories for the hyperparameter.</p>
     */
    inline DefaultCategoricalHyperParameterRange& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline bool GetIsTunable() const{ return m_isTunable; }

    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline bool IsTunableHasBeenSet() const { return m_isTunableHasBeenSet; }

    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline void SetIsTunable(bool value) { m_isTunableHasBeenSet = true; m_isTunable = value; }

    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline DefaultCategoricalHyperParameterRange& WithIsTunable(bool value) { SetIsTunable(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    bool m_isTunable;
    bool m_isTunableHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
