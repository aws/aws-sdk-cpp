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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies a metric that the training algorithm writes to <code>stderr</code>
   * or <code>stdout</code>. Amazon SageMakerhyperparameter tuning captures all
   * defined metrics. You specify one metric that a hyperparameter tuning job uses as
   * its objective metric to choose the best training job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MetricDefinition
  {
  public:
    MetricDefinition();
    MetricDefinition(Aws::Utils::Json::JsonView jsonValue);
    MetricDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics.html">Defining
     * Objective Metrics</a>.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }

    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics.html">Defining
     * Objective Metrics</a>.</p>
     */
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }

    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics.html">Defining
     * Objective Metrics</a>.</p>
     */
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }

    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics.html">Defining
     * Objective Metrics</a>.</p>
     */
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }

    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics.html">Defining
     * Objective Metrics</a>.</p>
     */
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }

    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics.html">Defining
     * Objective Metrics</a>.</p>
     */
    inline MetricDefinition& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}

    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics.html">Defining
     * Objective Metrics</a>.</p>
     */
    inline MetricDefinition& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}

    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics.html">Defining
     * Objective Metrics</a>.</p>
     */
    inline MetricDefinition& WithRegex(const char* value) { SetRegex(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_regex;
    bool m_regexHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
