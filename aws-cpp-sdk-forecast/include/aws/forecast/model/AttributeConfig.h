/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Provides information about the method used to transform attributes.</p>
   * <p>The following is an example using the RETAIL domain:</p> <p> <code>{</code>
   * </p> <p> <code>"AttributeName": "demand",</code> </p> <p>
   * <code>"Transformations": {"aggregation": "sum", "middlefill": "zero",
   * "backfill": "zero"}</code> </p> <p> <code>}</code> </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/AttributeConfig">AWS
   * API Reference</a></p>
   */
  class AttributeConfig
  {
  public:
    AWS_FORECASTSERVICE_API AttributeConfig();
    AWS_FORECASTSERVICE_API AttributeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API AttributeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute as specified in the schema. Amazon Forecast
     * supports the target field of the target time series and the related time series
     * datasets. For example, for the RETAIL domain, the target is
     * <code>demand</code>.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute as specified in the schema. Amazon Forecast
     * supports the target field of the target time series and the related time series
     * datasets. For example, for the RETAIL domain, the target is
     * <code>demand</code>.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the attribute as specified in the schema. Amazon Forecast
     * supports the target field of the target time series and the related time series
     * datasets. For example, for the RETAIL domain, the target is
     * <code>demand</code>.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute as specified in the schema. Amazon Forecast
     * supports the target field of the target time series and the related time series
     * datasets. For example, for the RETAIL domain, the target is
     * <code>demand</code>.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the attribute as specified in the schema. Amazon Forecast
     * supports the target field of the target time series and the related time series
     * datasets. For example, for the RETAIL domain, the target is
     * <code>demand</code>.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute as specified in the schema. Amazon Forecast
     * supports the target field of the target time series and the related time series
     * datasets. For example, for the RETAIL domain, the target is
     * <code>demand</code>.</p>
     */
    inline AttributeConfig& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute as specified in the schema. Amazon Forecast
     * supports the target field of the target time series and the related time series
     * datasets. For example, for the RETAIL domain, the target is
     * <code>demand</code>.</p>
     */
    inline AttributeConfig& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute as specified in the schema. Amazon Forecast
     * supports the target field of the target time series and the related time series
     * datasets. For example, for the RETAIL domain, the target is
     * <code>demand</code>.</p>
     */
    inline AttributeConfig& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTransformations() const{ return m_transformations; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline bool TransformationsHasBeenSet() const { return m_transformationsHasBeenSet; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline void SetTransformations(const Aws::Map<Aws::String, Aws::String>& value) { m_transformationsHasBeenSet = true; m_transformations = value; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline void SetTransformations(Aws::Map<Aws::String, Aws::String>&& value) { m_transformationsHasBeenSet = true; m_transformations = std::move(value); }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& WithTransformations(const Aws::Map<Aws::String, Aws::String>& value) { SetTransformations(value); return *this;}

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& WithTransformations(Aws::Map<Aws::String, Aws::String>&& value) { SetTransformations(std::move(value)); return *this;}

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& AddTransformations(const Aws::String& key, const Aws::String& value) { m_transformationsHasBeenSet = true; m_transformations.emplace(key, value); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& AddTransformations(Aws::String&& key, const Aws::String& value) { m_transformationsHasBeenSet = true; m_transformations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& AddTransformations(const Aws::String& key, Aws::String&& value) { m_transformationsHasBeenSet = true; m_transformations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& AddTransformations(Aws::String&& key, Aws::String&& value) { m_transformationsHasBeenSet = true; m_transformations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& AddTransformations(const char* key, Aws::String&& value) { m_transformationsHasBeenSet = true; m_transformations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& AddTransformations(Aws::String&& key, const char* value) { m_transformationsHasBeenSet = true; m_transformations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The method parameters (key-value pairs), which are a map of override
     * parameters. Specify these parameters to override the default values. Related
     * Time Series attributes do not accept aggregation parameters.</p> <p>The
     * following list shows the parameters and their valid values for the "filling"
     * featurization method for a <b>Target Time Series</b> dataset. Default values are
     * bolded.</p> <ul> <li> <p> <code>aggregation</code>: <b>sum</b>,
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
    inline AttributeConfig& AddTransformations(const char* key, const char* value) { m_transformationsHasBeenSet = true; m_transformations.emplace(key, value); return *this; }

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_transformations;
    bool m_transformationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
