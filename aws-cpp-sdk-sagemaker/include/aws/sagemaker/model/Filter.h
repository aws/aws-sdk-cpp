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
#include <aws/sagemaker/model/Operator.h>
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
   * <p>A conditional statement for a search expression that includes a Boolean
   * operator, a resource property, and a value.</p> <p>If you don't specify an
   * <code>Operator</code> and a <code>Value</code>, the filter searches for only the
   * specified property. For example, defining a <code>Filter</code> for the
   * <code>FailureReason</code> for the <code>TrainingJob</code>
   * <code>Resource</code> searches for training job objects that have a value in the
   * <code>FailureReason</code> field.</p> <p>If you specify a <code>Value</code>,
   * but not an <code>Operator</code>, Amazon SageMaker uses the equals operator as
   * the default.</p> <p>In search, there are several property types:</p> <dl>
   * <dt>Metrics</dt> <dd> <p>To define a metric filter, enter a value using the form
   * <code>"Metrics.&lt;name&gt;"</code>, where <code>&lt;name&gt;</code> is a metric
   * name. For example, the following filter searches for training jobs with an
   * <code>"accuracy"</code> metric greater than <code>"0.9"</code>:</p> <p>
   * <code>{</code> </p> <p> <code>"Name": "Metrics.accuracy",</code> </p> <p>
   * <code>"Operator": "GREATER_THAN",</code> </p> <p> <code>"Value": "0.9"</code>
   * </p> <p> <code>}</code> </p> </dd> <dt>HyperParameters</dt> <dd> <p>To define a
   * hyperparameter filter, enter a value with the form
   * <code>"HyperParameters.&lt;name&gt;"</code>. Decimal hyperparameter values are
   * treated as a decimal in a comparison if the specified <code>Value</code> is also
   * a decimal value. If the specified <code>Value</code> is an integer, the decimal
   * hyperparameter values are treated as integers. For example, the following filter
   * is satisfied by training jobs with a <code>"learning_rate"</code> hyperparameter
   * that is less than <code>"0.5"</code>:</p> <p> <code> {</code> </p> <p> <code>
   * "Name": "HyperParameters.learning_rate",</code> </p> <p> <code> "Operator":
   * "LESS_THAN",</code> </p> <p> <code> "Value": "0.5"</code> </p> <p> <code>
   * }</code> </p> </dd> <dt>Tags</dt> <dd> <p>To define a tag filter, enter a value
   * with the form <code>"Tags.&lt;key&gt;"</code>.</p> </dd> </dl><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Filter">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API Filter
  {
  public:
    Filter();
    Filter(Aws::Utils::Json::JsonView jsonValue);
    Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A property name. For example, <code>TrainingJobName</code>. For the list of
     * valid property names returned in a search result for each supported resource,
     * see <a>TrainingJob</a> properties. You must specify a valid property name for
     * the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A property name. For example, <code>TrainingJobName</code>. For the list of
     * valid property names returned in a search result for each supported resource,
     * see <a>TrainingJob</a> properties. You must specify a valid property name for
     * the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A property name. For example, <code>TrainingJobName</code>. For the list of
     * valid property names returned in a search result for each supported resource,
     * see <a>TrainingJob</a> properties. You must specify a valid property name for
     * the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A property name. For example, <code>TrainingJobName</code>. For the list of
     * valid property names returned in a search result for each supported resource,
     * see <a>TrainingJob</a> properties. You must specify a valid property name for
     * the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A property name. For example, <code>TrainingJobName</code>. For the list of
     * valid property names returned in a search result for each supported resource,
     * see <a>TrainingJob</a> properties. You must specify a valid property name for
     * the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A property name. For example, <code>TrainingJobName</code>. For the list of
     * valid property names returned in a search result for each supported resource,
     * see <a>TrainingJob</a> properties. You must specify a valid property name for
     * the resource.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A property name. For example, <code>TrainingJobName</code>. For the list of
     * valid property names returned in a search result for each supported resource,
     * see <a>TrainingJob</a> properties. You must specify a valid property name for
     * the resource.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A property name. For example, <code>TrainingJobName</code>. For the list of
     * valid property names returned in a search result for each supported resource,
     * see <a>TrainingJob</a> properties. You must specify a valid property name for
     * the resource.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * specified resource in <code>Name</code> equals the specified
     * <code>Value</code>.</p> </dd> <dt>NotEquals</dt> <dd> <p>The specified resource
     * in <code>Name</code> does not equal the specified <code>Value</code>.</p> </dd>
     * <dt>GreaterThan</dt> <dd> <p>The specified resource in <code>Name</code> is
     * greater than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The specified
     * resource in <code>Name</code> is greater than or equal to the specified
     * <code>Value</code>. Not supported for text-based properties.</p> </dd>
     * <dt>LessThan</dt> <dd> <p>The specified resource in <code>Name</code> is less
     * than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The specified resource
     * in <code>Name</code> is less than or equal to the specified <code>Value</code>.
     * Not supported for text-based properties.</p> </dd> <dt>Contains</dt> <dd>
     * <p>Only supported for text-based properties. The word-list of the property
     * contains the specified <code>Value</code>.</p> </dd> </dl> <p>If you have
     * specified a filter <code>Value</code>, the default is <code>Equals</code>.</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * specified resource in <code>Name</code> equals the specified
     * <code>Value</code>.</p> </dd> <dt>NotEquals</dt> <dd> <p>The specified resource
     * in <code>Name</code> does not equal the specified <code>Value</code>.</p> </dd>
     * <dt>GreaterThan</dt> <dd> <p>The specified resource in <code>Name</code> is
     * greater than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The specified
     * resource in <code>Name</code> is greater than or equal to the specified
     * <code>Value</code>. Not supported for text-based properties.</p> </dd>
     * <dt>LessThan</dt> <dd> <p>The specified resource in <code>Name</code> is less
     * than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The specified resource
     * in <code>Name</code> is less than or equal to the specified <code>Value</code>.
     * Not supported for text-based properties.</p> </dd> <dt>Contains</dt> <dd>
     * <p>Only supported for text-based properties. The word-list of the property
     * contains the specified <code>Value</code>.</p> </dd> </dl> <p>If you have
     * specified a filter <code>Value</code>, the default is <code>Equals</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * specified resource in <code>Name</code> equals the specified
     * <code>Value</code>.</p> </dd> <dt>NotEquals</dt> <dd> <p>The specified resource
     * in <code>Name</code> does not equal the specified <code>Value</code>.</p> </dd>
     * <dt>GreaterThan</dt> <dd> <p>The specified resource in <code>Name</code> is
     * greater than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The specified
     * resource in <code>Name</code> is greater than or equal to the specified
     * <code>Value</code>. Not supported for text-based properties.</p> </dd>
     * <dt>LessThan</dt> <dd> <p>The specified resource in <code>Name</code> is less
     * than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The specified resource
     * in <code>Name</code> is less than or equal to the specified <code>Value</code>.
     * Not supported for text-based properties.</p> </dd> <dt>Contains</dt> <dd>
     * <p>Only supported for text-based properties. The word-list of the property
     * contains the specified <code>Value</code>.</p> </dd> </dl> <p>If you have
     * specified a filter <code>Value</code>, the default is <code>Equals</code>.</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * specified resource in <code>Name</code> equals the specified
     * <code>Value</code>.</p> </dd> <dt>NotEquals</dt> <dd> <p>The specified resource
     * in <code>Name</code> does not equal the specified <code>Value</code>.</p> </dd>
     * <dt>GreaterThan</dt> <dd> <p>The specified resource in <code>Name</code> is
     * greater than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The specified
     * resource in <code>Name</code> is greater than or equal to the specified
     * <code>Value</code>. Not supported for text-based properties.</p> </dd>
     * <dt>LessThan</dt> <dd> <p>The specified resource in <code>Name</code> is less
     * than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The specified resource
     * in <code>Name</code> is less than or equal to the specified <code>Value</code>.
     * Not supported for text-based properties.</p> </dd> <dt>Contains</dt> <dd>
     * <p>Only supported for text-based properties. The word-list of the property
     * contains the specified <code>Value</code>.</p> </dd> </dl> <p>If you have
     * specified a filter <code>Value</code>, the default is <code>Equals</code>.</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * specified resource in <code>Name</code> equals the specified
     * <code>Value</code>.</p> </dd> <dt>NotEquals</dt> <dd> <p>The specified resource
     * in <code>Name</code> does not equal the specified <code>Value</code>.</p> </dd>
     * <dt>GreaterThan</dt> <dd> <p>The specified resource in <code>Name</code> is
     * greater than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The specified
     * resource in <code>Name</code> is greater than or equal to the specified
     * <code>Value</code>. Not supported for text-based properties.</p> </dd>
     * <dt>LessThan</dt> <dd> <p>The specified resource in <code>Name</code> is less
     * than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The specified resource
     * in <code>Name</code> is less than or equal to the specified <code>Value</code>.
     * Not supported for text-based properties.</p> </dd> <dt>Contains</dt> <dd>
     * <p>Only supported for text-based properties. The word-list of the property
     * contains the specified <code>Value</code>.</p> </dd> </dl> <p>If you have
     * specified a filter <code>Value</code>, the default is <code>Equals</code>.</p>
     */
    inline Filter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * specified resource in <code>Name</code> equals the specified
     * <code>Value</code>.</p> </dd> <dt>NotEquals</dt> <dd> <p>The specified resource
     * in <code>Name</code> does not equal the specified <code>Value</code>.</p> </dd>
     * <dt>GreaterThan</dt> <dd> <p>The specified resource in <code>Name</code> is
     * greater than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The specified
     * resource in <code>Name</code> is greater than or equal to the specified
     * <code>Value</code>. Not supported for text-based properties.</p> </dd>
     * <dt>LessThan</dt> <dd> <p>The specified resource in <code>Name</code> is less
     * than the specified <code>Value</code>. Not supported for text-based
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The specified resource
     * in <code>Name</code> is less than or equal to the specified <code>Value</code>.
     * Not supported for text-based properties.</p> </dd> <dt>Contains</dt> <dd>
     * <p>Only supported for text-based properties. The word-list of the property
     * contains the specified <code>Value</code>.</p> </dd> </dl> <p>If you have
     * specified a filter <code>Value</code>, the default is <code>Equals</code>.</p>
     */
    inline Filter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>A value used with <code>Resource</code> and <code>Operator</code> to
     * determine if objects satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value used with <code>Resource</code> and <code>Operator</code> to
     * determine if objects satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A value used with <code>Resource</code> and <code>Operator</code> to
     * determine if objects satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value used with <code>Resource</code> and <code>Operator</code> to
     * determine if objects satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A value used with <code>Resource</code> and <code>Operator</code> to
     * determine if objects satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value used with <code>Resource</code> and <code>Operator</code> to
     * determine if objects satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline Filter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value used with <code>Resource</code> and <code>Operator</code> to
     * determine if objects satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline Filter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A value used with <code>Resource</code> and <code>Operator</code> to
     * determine if objects satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline Filter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Operator m_operator;
    bool m_operatorHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
