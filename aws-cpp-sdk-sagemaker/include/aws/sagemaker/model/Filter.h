/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A conditional statement for a search expression that includes a resource
   * property, a Boolean operator, and a value. Resources that match the statement
   * are returned in the results from the <a>Search</a> API.</p> <p>If you specify a
   * <code>Value</code>, but not an <code>Operator</code>, Amazon SageMaker uses the
   * equals operator.</p> <p>In search, there are several property types:</p> <dl>
   * <dt>Metrics</dt> <dd> <p>To define a metric filter, enter a value using the form
   * <code>"Metrics.&lt;name&gt;"</code>, where <code>&lt;name&gt;</code> is a metric
   * name. For example, the following filter searches for training jobs with an
   * <code>"accuracy"</code> metric greater than <code>"0.9"</code>:</p> <p>
   * <code>{</code> </p> <p> <code>"Name": "Metrics.accuracy",</code> </p> <p>
   * <code>"Operator": "GreaterThan",</code> </p> <p> <code>"Value": "0.9"</code>
   * </p> <p> <code>}</code> </p> </dd> <dt>HyperParameters</dt> <dd> <p>To define a
   * hyperparameter filter, enter a value with the form
   * <code>"HyperParameters.&lt;name&gt;"</code>. Decimal hyperparameter values are
   * treated as a decimal in a comparison if the specified <code>Value</code> is also
   * a decimal value. If the specified <code>Value</code> is an integer, the decimal
   * hyperparameter values are treated as integers. For example, the following filter
   * is satisfied by training jobs with a <code>"learning_rate"</code> hyperparameter
   * that is less than <code>"0.5"</code>:</p> <p> <code> {</code> </p> <p> <code>
   * "Name": "HyperParameters.learning_rate",</code> </p> <p> <code> "Operator":
   * "LessThan",</code> </p> <p> <code> "Value": "0.5"</code> </p> <p> <code>
   * }</code> </p> </dd> <dt>Tags</dt> <dd> <p>To define a tag filter, enter a value
   * with the form <code>Tags.&lt;key&gt;</code>.</p> </dd> </dl><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_SAGEMAKER_API Filter();
    AWS_SAGEMAKER_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A resource property name. For example, <code>TrainingJobName</code>. For
     * valid property names, see <a>SearchRecord</a>. You must specify a valid property
     * for the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A resource property name. For example, <code>TrainingJobName</code>. For
     * valid property names, see <a>SearchRecord</a>. You must specify a valid property
     * for the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A resource property name. For example, <code>TrainingJobName</code>. For
     * valid property names, see <a>SearchRecord</a>. You must specify a valid property
     * for the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A resource property name. For example, <code>TrainingJobName</code>. For
     * valid property names, see <a>SearchRecord</a>. You must specify a valid property
     * for the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A resource property name. For example, <code>TrainingJobName</code>. For
     * valid property names, see <a>SearchRecord</a>. You must specify a valid property
     * for the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A resource property name. For example, <code>TrainingJobName</code>. For
     * valid property names, see <a>SearchRecord</a>. You must specify a valid property
     * for the resource.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A resource property name. For example, <code>TrainingJobName</code>. For
     * valid property names, see <a>SearchRecord</a>. You must specify a valid property
     * for the resource.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A resource property name. For example, <code>TrainingJobName</code>. For
     * valid property names, see <a>SearchRecord</a>. You must specify a valid property
     * for the resource.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * value of <code>Name</code> equals <code>Value</code>.</p> </dd>
     * <dt>NotEquals</dt> <dd> <p>The value of <code>Name</code> doesn't equal
     * <code>Value</code>.</p> </dd> <dt>Exists</dt> <dd> <p>The <code>Name</code>
     * property exists.</p> </dd> <dt>NotExists</dt> <dd> <p>The <code>Name</code>
     * property does not exist.</p> </dd> <dt>GreaterThan</dt> <dd> <p>The value of
     * <code>Name</code> is greater than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is greater than or equal to <code>Value</code>. Not supported
     * for text properties.</p> </dd> <dt>LessThan</dt> <dd> <p>The value of
     * <code>Name</code> is less than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is less than or equal to <code>Value</code>. Not supported for
     * text properties.</p> </dd> <dt>In</dt> <dd> <p>The value of <code>Name</code> is
     * one of the comma delimited strings in <code>Value</code>. Only supported for
     * text properties.</p> </dd> <dt>Contains</dt> <dd> <p>The value of
     * <code>Name</code> contains the string <code>Value</code>. Only supported for
     * text properties.</p> <p>A <code>SearchExpression</code> can include the
     * <code>Contains</code> operator multiple times when the value of
     * <code>Name</code> is one of the following:</p> <ul> <li> <p>
     * <code>Experiment.DisplayName</code> </p> </li> <li> <p>
     * <code>Experiment.ExperimentName</code> </p> </li> <li> <p>
     * <code>Experiment.Tags</code> </p> </li> <li> <p> <code>Trial.DisplayName</code>
     * </p> </li> <li> <p> <code>Trial.TrialName</code> </p> </li> <li> <p>
     * <code>Trial.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.DisplayName</code> </p> </li> <li> <p>
     * <code>TrialComponent.TrialComponentName</code> </p> </li> <li> <p>
     * <code>TrialComponent.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.InputArtifacts</code> </p> </li> <li> <p>
     * <code>TrialComponent.OutputArtifacts</code> </p> </li> </ul> <p>A
     * <code>SearchExpression</code> can include only one <code>Contains</code>
     * operator for all other values of <code>Name</code>. In these cases, if you
     * include multiple <code>Contains</code> operators in the
     * <code>SearchExpression</code>, the result is the following error message:
     * "<code>'CONTAINS' operator usage limit of 1 exceeded.</code>"</p> </dd> </dl>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * value of <code>Name</code> equals <code>Value</code>.</p> </dd>
     * <dt>NotEquals</dt> <dd> <p>The value of <code>Name</code> doesn't equal
     * <code>Value</code>.</p> </dd> <dt>Exists</dt> <dd> <p>The <code>Name</code>
     * property exists.</p> </dd> <dt>NotExists</dt> <dd> <p>The <code>Name</code>
     * property does not exist.</p> </dd> <dt>GreaterThan</dt> <dd> <p>The value of
     * <code>Name</code> is greater than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is greater than or equal to <code>Value</code>. Not supported
     * for text properties.</p> </dd> <dt>LessThan</dt> <dd> <p>The value of
     * <code>Name</code> is less than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is less than or equal to <code>Value</code>. Not supported for
     * text properties.</p> </dd> <dt>In</dt> <dd> <p>The value of <code>Name</code> is
     * one of the comma delimited strings in <code>Value</code>. Only supported for
     * text properties.</p> </dd> <dt>Contains</dt> <dd> <p>The value of
     * <code>Name</code> contains the string <code>Value</code>. Only supported for
     * text properties.</p> <p>A <code>SearchExpression</code> can include the
     * <code>Contains</code> operator multiple times when the value of
     * <code>Name</code> is one of the following:</p> <ul> <li> <p>
     * <code>Experiment.DisplayName</code> </p> </li> <li> <p>
     * <code>Experiment.ExperimentName</code> </p> </li> <li> <p>
     * <code>Experiment.Tags</code> </p> </li> <li> <p> <code>Trial.DisplayName</code>
     * </p> </li> <li> <p> <code>Trial.TrialName</code> </p> </li> <li> <p>
     * <code>Trial.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.DisplayName</code> </p> </li> <li> <p>
     * <code>TrialComponent.TrialComponentName</code> </p> </li> <li> <p>
     * <code>TrialComponent.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.InputArtifacts</code> </p> </li> <li> <p>
     * <code>TrialComponent.OutputArtifacts</code> </p> </li> </ul> <p>A
     * <code>SearchExpression</code> can include only one <code>Contains</code>
     * operator for all other values of <code>Name</code>. In these cases, if you
     * include multiple <code>Contains</code> operators in the
     * <code>SearchExpression</code>, the result is the following error message:
     * "<code>'CONTAINS' operator usage limit of 1 exceeded.</code>"</p> </dd> </dl>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * value of <code>Name</code> equals <code>Value</code>.</p> </dd>
     * <dt>NotEquals</dt> <dd> <p>The value of <code>Name</code> doesn't equal
     * <code>Value</code>.</p> </dd> <dt>Exists</dt> <dd> <p>The <code>Name</code>
     * property exists.</p> </dd> <dt>NotExists</dt> <dd> <p>The <code>Name</code>
     * property does not exist.</p> </dd> <dt>GreaterThan</dt> <dd> <p>The value of
     * <code>Name</code> is greater than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is greater than or equal to <code>Value</code>. Not supported
     * for text properties.</p> </dd> <dt>LessThan</dt> <dd> <p>The value of
     * <code>Name</code> is less than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is less than or equal to <code>Value</code>. Not supported for
     * text properties.</p> </dd> <dt>In</dt> <dd> <p>The value of <code>Name</code> is
     * one of the comma delimited strings in <code>Value</code>. Only supported for
     * text properties.</p> </dd> <dt>Contains</dt> <dd> <p>The value of
     * <code>Name</code> contains the string <code>Value</code>. Only supported for
     * text properties.</p> <p>A <code>SearchExpression</code> can include the
     * <code>Contains</code> operator multiple times when the value of
     * <code>Name</code> is one of the following:</p> <ul> <li> <p>
     * <code>Experiment.DisplayName</code> </p> </li> <li> <p>
     * <code>Experiment.ExperimentName</code> </p> </li> <li> <p>
     * <code>Experiment.Tags</code> </p> </li> <li> <p> <code>Trial.DisplayName</code>
     * </p> </li> <li> <p> <code>Trial.TrialName</code> </p> </li> <li> <p>
     * <code>Trial.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.DisplayName</code> </p> </li> <li> <p>
     * <code>TrialComponent.TrialComponentName</code> </p> </li> <li> <p>
     * <code>TrialComponent.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.InputArtifacts</code> </p> </li> <li> <p>
     * <code>TrialComponent.OutputArtifacts</code> </p> </li> </ul> <p>A
     * <code>SearchExpression</code> can include only one <code>Contains</code>
     * operator for all other values of <code>Name</code>. In these cases, if you
     * include multiple <code>Contains</code> operators in the
     * <code>SearchExpression</code>, the result is the following error message:
     * "<code>'CONTAINS' operator usage limit of 1 exceeded.</code>"</p> </dd> </dl>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * value of <code>Name</code> equals <code>Value</code>.</p> </dd>
     * <dt>NotEquals</dt> <dd> <p>The value of <code>Name</code> doesn't equal
     * <code>Value</code>.</p> </dd> <dt>Exists</dt> <dd> <p>The <code>Name</code>
     * property exists.</p> </dd> <dt>NotExists</dt> <dd> <p>The <code>Name</code>
     * property does not exist.</p> </dd> <dt>GreaterThan</dt> <dd> <p>The value of
     * <code>Name</code> is greater than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is greater than or equal to <code>Value</code>. Not supported
     * for text properties.</p> </dd> <dt>LessThan</dt> <dd> <p>The value of
     * <code>Name</code> is less than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is less than or equal to <code>Value</code>. Not supported for
     * text properties.</p> </dd> <dt>In</dt> <dd> <p>The value of <code>Name</code> is
     * one of the comma delimited strings in <code>Value</code>. Only supported for
     * text properties.</p> </dd> <dt>Contains</dt> <dd> <p>The value of
     * <code>Name</code> contains the string <code>Value</code>. Only supported for
     * text properties.</p> <p>A <code>SearchExpression</code> can include the
     * <code>Contains</code> operator multiple times when the value of
     * <code>Name</code> is one of the following:</p> <ul> <li> <p>
     * <code>Experiment.DisplayName</code> </p> </li> <li> <p>
     * <code>Experiment.ExperimentName</code> </p> </li> <li> <p>
     * <code>Experiment.Tags</code> </p> </li> <li> <p> <code>Trial.DisplayName</code>
     * </p> </li> <li> <p> <code>Trial.TrialName</code> </p> </li> <li> <p>
     * <code>Trial.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.DisplayName</code> </p> </li> <li> <p>
     * <code>TrialComponent.TrialComponentName</code> </p> </li> <li> <p>
     * <code>TrialComponent.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.InputArtifacts</code> </p> </li> <li> <p>
     * <code>TrialComponent.OutputArtifacts</code> </p> </li> </ul> <p>A
     * <code>SearchExpression</code> can include only one <code>Contains</code>
     * operator for all other values of <code>Name</code>. In these cases, if you
     * include multiple <code>Contains</code> operators in the
     * <code>SearchExpression</code>, the result is the following error message:
     * "<code>'CONTAINS' operator usage limit of 1 exceeded.</code>"</p> </dd> </dl>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * value of <code>Name</code> equals <code>Value</code>.</p> </dd>
     * <dt>NotEquals</dt> <dd> <p>The value of <code>Name</code> doesn't equal
     * <code>Value</code>.</p> </dd> <dt>Exists</dt> <dd> <p>The <code>Name</code>
     * property exists.</p> </dd> <dt>NotExists</dt> <dd> <p>The <code>Name</code>
     * property does not exist.</p> </dd> <dt>GreaterThan</dt> <dd> <p>The value of
     * <code>Name</code> is greater than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is greater than or equal to <code>Value</code>. Not supported
     * for text properties.</p> </dd> <dt>LessThan</dt> <dd> <p>The value of
     * <code>Name</code> is less than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is less than or equal to <code>Value</code>. Not supported for
     * text properties.</p> </dd> <dt>In</dt> <dd> <p>The value of <code>Name</code> is
     * one of the comma delimited strings in <code>Value</code>. Only supported for
     * text properties.</p> </dd> <dt>Contains</dt> <dd> <p>The value of
     * <code>Name</code> contains the string <code>Value</code>. Only supported for
     * text properties.</p> <p>A <code>SearchExpression</code> can include the
     * <code>Contains</code> operator multiple times when the value of
     * <code>Name</code> is one of the following:</p> <ul> <li> <p>
     * <code>Experiment.DisplayName</code> </p> </li> <li> <p>
     * <code>Experiment.ExperimentName</code> </p> </li> <li> <p>
     * <code>Experiment.Tags</code> </p> </li> <li> <p> <code>Trial.DisplayName</code>
     * </p> </li> <li> <p> <code>Trial.TrialName</code> </p> </li> <li> <p>
     * <code>Trial.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.DisplayName</code> </p> </li> <li> <p>
     * <code>TrialComponent.TrialComponentName</code> </p> </li> <li> <p>
     * <code>TrialComponent.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.InputArtifacts</code> </p> </li> <li> <p>
     * <code>TrialComponent.OutputArtifacts</code> </p> </li> </ul> <p>A
     * <code>SearchExpression</code> can include only one <code>Contains</code>
     * operator for all other values of <code>Name</code>. In these cases, if you
     * include multiple <code>Contains</code> operators in the
     * <code>SearchExpression</code>, the result is the following error message:
     * "<code>'CONTAINS' operator usage limit of 1 exceeded.</code>"</p> </dd> </dl>
     */
    inline Filter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>A Boolean binary operator that is used to evaluate the filter. The operator
     * field contains one of the following values:</p> <dl> <dt>Equals</dt> <dd> <p>The
     * value of <code>Name</code> equals <code>Value</code>.</p> </dd>
     * <dt>NotEquals</dt> <dd> <p>The value of <code>Name</code> doesn't equal
     * <code>Value</code>.</p> </dd> <dt>Exists</dt> <dd> <p>The <code>Name</code>
     * property exists.</p> </dd> <dt>NotExists</dt> <dd> <p>The <code>Name</code>
     * property does not exist.</p> </dd> <dt>GreaterThan</dt> <dd> <p>The value of
     * <code>Name</code> is greater than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>GreaterThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is greater than or equal to <code>Value</code>. Not supported
     * for text properties.</p> </dd> <dt>LessThan</dt> <dd> <p>The value of
     * <code>Name</code> is less than <code>Value</code>. Not supported for text
     * properties.</p> </dd> <dt>LessThanOrEqualTo</dt> <dd> <p>The value of
     * <code>Name</code> is less than or equal to <code>Value</code>. Not supported for
     * text properties.</p> </dd> <dt>In</dt> <dd> <p>The value of <code>Name</code> is
     * one of the comma delimited strings in <code>Value</code>. Only supported for
     * text properties.</p> </dd> <dt>Contains</dt> <dd> <p>The value of
     * <code>Name</code> contains the string <code>Value</code>. Only supported for
     * text properties.</p> <p>A <code>SearchExpression</code> can include the
     * <code>Contains</code> operator multiple times when the value of
     * <code>Name</code> is one of the following:</p> <ul> <li> <p>
     * <code>Experiment.DisplayName</code> </p> </li> <li> <p>
     * <code>Experiment.ExperimentName</code> </p> </li> <li> <p>
     * <code>Experiment.Tags</code> </p> </li> <li> <p> <code>Trial.DisplayName</code>
     * </p> </li> <li> <p> <code>Trial.TrialName</code> </p> </li> <li> <p>
     * <code>Trial.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.DisplayName</code> </p> </li> <li> <p>
     * <code>TrialComponent.TrialComponentName</code> </p> </li> <li> <p>
     * <code>TrialComponent.Tags</code> </p> </li> <li> <p>
     * <code>TrialComponent.InputArtifacts</code> </p> </li> <li> <p>
     * <code>TrialComponent.OutputArtifacts</code> </p> </li> </ul> <p>A
     * <code>SearchExpression</code> can include only one <code>Contains</code>
     * operator for all other values of <code>Name</code>. In these cases, if you
     * include multiple <code>Contains</code> operators in the
     * <code>SearchExpression</code>, the result is the following error message:
     * "<code>'CONTAINS' operator usage limit of 1 exceeded.</code>"</p> </dd> </dl>
     */
    inline Filter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>A value used with <code>Name</code> and <code>Operator</code> to determine
     * which resources satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value used with <code>Name</code> and <code>Operator</code> to determine
     * which resources satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A value used with <code>Name</code> and <code>Operator</code> to determine
     * which resources satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value used with <code>Name</code> and <code>Operator</code> to determine
     * which resources satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A value used with <code>Name</code> and <code>Operator</code> to determine
     * which resources satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value used with <code>Name</code> and <code>Operator</code> to determine
     * which resources satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline Filter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value used with <code>Name</code> and <code>Operator</code> to determine
     * which resources satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline Filter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A value used with <code>Name</code> and <code>Operator</code> to determine
     * which resources satisfy the filter's condition. For numerical properties,
     * <code>Value</code> must be an integer or floating-point decimal. For timestamp
     * properties, <code>Value</code> must be an ISO 8601 date-time string of the
     * following format: <code>YYYY-mm-dd'T'HH:MM:SS</code>.</p>
     */
    inline Filter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
