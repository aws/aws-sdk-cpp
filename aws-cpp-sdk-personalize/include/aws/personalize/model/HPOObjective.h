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
   * <p>The metric to optimize during hyperparameter optimization
   * (HPO).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/HPOObjective">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API HPOObjective
  {
  public:
    HPOObjective();
    HPOObjective(Aws::Utils::Json::JsonView jsonValue);
    HPOObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data type of the metric.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The data type of the metric.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type of the metric.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type of the metric.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type of the metric.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The data type of the metric.</p>
     */
    inline HPOObjective& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The data type of the metric.</p>
     */
    inline HPOObjective& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The data type of the metric.</p>
     */
    inline HPOObjective& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline HPOObjective& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline HPOObjective& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline HPOObjective& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline const Aws::String& GetMetricRegex() const{ return m_metricRegex; }

    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline bool MetricRegexHasBeenSet() const { return m_metricRegexHasBeenSet; }

    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline void SetMetricRegex(const Aws::String& value) { m_metricRegexHasBeenSet = true; m_metricRegex = value; }

    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline void SetMetricRegex(Aws::String&& value) { m_metricRegexHasBeenSet = true; m_metricRegex = std::move(value); }

    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline void SetMetricRegex(const char* value) { m_metricRegexHasBeenSet = true; m_metricRegex.assign(value); }

    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline HPOObjective& WithMetricRegex(const Aws::String& value) { SetMetricRegex(value); return *this;}

    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline HPOObjective& WithMetricRegex(Aws::String&& value) { SetMetricRegex(std::move(value)); return *this;}

    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline HPOObjective& WithMetricRegex(const char* value) { SetMetricRegex(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_metricRegex;
    bool m_metricRegexHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
