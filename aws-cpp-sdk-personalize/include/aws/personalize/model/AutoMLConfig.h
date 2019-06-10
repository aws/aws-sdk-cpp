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
   * <p>When the solution performs AutoML (<code>performAutoML</code> is true in
   * <a>CreateSolution</a>), Amazon Personalize determines which recipe, from the
   * specified list, optimizes the given metric. Amazon Personalize then uses that
   * recipe for the solution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/AutoMLConfig">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API AutoMLConfig
  {
  public:
    AutoMLConfig();
    AutoMLConfig(Aws::Utils::Json::JsonView jsonValue);
    AutoMLConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric to optimize.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The metric to optimize.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The metric to optimize.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The metric to optimize.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The metric to optimize.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The metric to optimize.</p>
     */
    inline AutoMLConfig& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The metric to optimize.</p>
     */
    inline AutoMLConfig& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The metric to optimize.</p>
     */
    inline AutoMLConfig& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The list of candidate recipes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecipeList() const{ return m_recipeList; }

    /**
     * <p>The list of candidate recipes.</p>
     */
    inline bool RecipeListHasBeenSet() const { return m_recipeListHasBeenSet; }

    /**
     * <p>The list of candidate recipes.</p>
     */
    inline void SetRecipeList(const Aws::Vector<Aws::String>& value) { m_recipeListHasBeenSet = true; m_recipeList = value; }

    /**
     * <p>The list of candidate recipes.</p>
     */
    inline void SetRecipeList(Aws::Vector<Aws::String>&& value) { m_recipeListHasBeenSet = true; m_recipeList = std::move(value); }

    /**
     * <p>The list of candidate recipes.</p>
     */
    inline AutoMLConfig& WithRecipeList(const Aws::Vector<Aws::String>& value) { SetRecipeList(value); return *this;}

    /**
     * <p>The list of candidate recipes.</p>
     */
    inline AutoMLConfig& WithRecipeList(Aws::Vector<Aws::String>&& value) { SetRecipeList(std::move(value)); return *this;}

    /**
     * <p>The list of candidate recipes.</p>
     */
    inline AutoMLConfig& AddRecipeList(const Aws::String& value) { m_recipeListHasBeenSet = true; m_recipeList.push_back(value); return *this; }

    /**
     * <p>The list of candidate recipes.</p>
     */
    inline AutoMLConfig& AddRecipeList(Aws::String&& value) { m_recipeListHasBeenSet = true; m_recipeList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of candidate recipes.</p>
     */
    inline AutoMLConfig& AddRecipeList(const char* value) { m_recipeListHasBeenSet = true; m_recipeList.push_back(value); return *this; }

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::Vector<Aws::String> m_recipeList;
    bool m_recipeListHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
