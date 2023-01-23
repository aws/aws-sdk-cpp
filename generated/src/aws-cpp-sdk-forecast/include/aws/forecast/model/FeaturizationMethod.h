/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/FeaturizationMethodName.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides information about the method that featurizes (transforms) a dataset
   * field. The method is part of the <code>FeaturizationPipeline</code> of the
   * <a>Featurization</a> object. </p> <p>The following is an example of how you
   * specify a <code>FeaturizationMethod</code> object.</p> <p> <code>{</code> </p>
   * <p> <code>"FeaturizationMethodName": "filling",</code> </p> <p>
   * <code>"FeaturizationMethodParameters": {"aggregation": "sum", "middlefill":
   * "zero", "backfill": "zero"}</code> </p> <p> <code>}</code> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/FeaturizationMethod">AWS
   * API Reference</a></p>
   */
  class FeaturizationMethod
  {
  public:
    AWS_FORECASTSERVICE_API FeaturizationMethod();
    AWS_FORECASTSERVICE_API FeaturizationMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API FeaturizationMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the method. The "filling" method is the only supported
     * method.</p>
     */
    inline const FeaturizationMethodName& GetFeaturizationMethodName() const{ return m_featurizationMethodName; }

    /**
     * <p>The name of the method. The "filling" method is the only supported
     * method.</p>
     */
    inline bool FeaturizationMethodNameHasBeenSet() const { return m_featurizationMethodNameHasBeenSet; }

    /**
     * <p>The name of the method. The "filling" method is the only supported
     * method.</p>
     */
    inline void SetFeaturizationMethodName(const FeaturizationMethodName& value) { m_featurizationMethodNameHasBeenSet = true; m_featurizationMethodName = value; }

    /**
     * <p>The name of the method. The "filling" method is the only supported
     * method.</p>
     */
    inline void SetFeaturizationMethodName(FeaturizationMethodName&& value) { m_featurizationMethodNameHasBeenSet = true; m_featurizationMethodName = std::move(value); }

    /**
     * <p>The name of the method. The "filling" method is the only supported
     * method.</p>
     */
    inline FeaturizationMethod& WithFeaturizationMethodName(const FeaturizationMethodName& value) { SetFeaturizationMethodName(value); return *this;}

    /**
     * <p>The name of the method. The "filling" method is the only supported
     * method.</p>
     */
    inline FeaturizationMethod& WithFeaturizationMethodName(FeaturizationMethodName&& value) { SetFeaturizationMethodName(std::move(value)); return *this;}


    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFeaturizationMethodParameters() const{ return m_featurizationMethodParameters; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline bool FeaturizationMethodParametersHasBeenSet() const { return m_featurizationMethodParametersHasBeenSet; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline void SetFeaturizationMethodParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters = value; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline void SetFeaturizationMethodParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters = std::move(value); }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& WithFeaturizationMethodParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetFeaturizationMethodParameters(value); return *this;}

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& WithFeaturizationMethodParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetFeaturizationMethodParameters(std::move(value)); return *this;}

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& AddFeaturizationMethodParameters(const Aws::String& key, const Aws::String& value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters.emplace(key, value); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& AddFeaturizationMethodParameters(Aws::String&& key, const Aws::String& value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& AddFeaturizationMethodParameters(const Aws::String& key, Aws::String&& value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& AddFeaturizationMethodParameters(Aws::String&& key, Aws::String&& value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& AddFeaturizationMethodParameters(const char* key, Aws::String&& value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& AddFeaturizationMethodParameters(Aws::String&& key, const char* value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Bold signifies the
     * default value.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
     * <code>avg</code>, <code>first</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>frontfill</code>: <b>none</b> </p> </li> <li> <p>
     * <code>middlefill</code>: <b>zero</b>, <code>nan</code> (not a number),
     * <code>value</code>, <code>median</code>, <code>mean</code>, <code>min</code>,
     * <code>max</code> </p> </li> <li> <p> <code>backfill</code>: <b>zero</b>,
     * <code>nan</code>, <code>value</code>, <code>median</code>, <code>mean</code>,
     * <code>min</code>, <code>max</code> </p> </li> </ul> <p>The following list shows
     * the parameters and their valid values for a <b>Related Time Series</b>
     * featurization method (there are no defaults):</p> <ul> <li> <p>
     * <code>middlefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>backfill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> <li> <p> <code>futurefill</code>: <code>zero</code>, <code>value</code>,
     * <code>median</code>, <code>mean</code>, <code>min</code>, <code>max</code> </p>
     * </li> </ul> <p>To set a filling method to a specific value, set the fill
     * parameter to <code>value</code> and define the value in a corresponding
     * <code>_value</code> parameter. For example, to set backfilling to a value of 2,
     * include the following: <code>"backfill": "value"</code> and
     * <code>"backfill_value":"2"</code>. </p>
     */
    inline FeaturizationMethod& AddFeaturizationMethodParameters(const char* key, const char* value) { m_featurizationMethodParametersHasBeenSet = true; m_featurizationMethodParameters.emplace(key, value); return *this; }

  private:

    FeaturizationMethodName m_featurizationMethodName;
    bool m_featurizationMethodNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_featurizationMethodParameters;
    bool m_featurizationMethodParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
