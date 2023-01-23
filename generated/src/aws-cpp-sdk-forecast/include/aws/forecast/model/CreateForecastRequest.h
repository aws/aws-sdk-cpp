/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/TimeSeriesSelector.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class CreateForecastRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateForecast"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the forecast.</p>
     */
    inline const Aws::String& GetForecastName() const{ return m_forecastName; }

    /**
     * <p>A name for the forecast.</p>
     */
    inline bool ForecastNameHasBeenSet() const { return m_forecastNameHasBeenSet; }

    /**
     * <p>A name for the forecast.</p>
     */
    inline void SetForecastName(const Aws::String& value) { m_forecastNameHasBeenSet = true; m_forecastName = value; }

    /**
     * <p>A name for the forecast.</p>
     */
    inline void SetForecastName(Aws::String&& value) { m_forecastNameHasBeenSet = true; m_forecastName = std::move(value); }

    /**
     * <p>A name for the forecast.</p>
     */
    inline void SetForecastName(const char* value) { m_forecastNameHasBeenSet = true; m_forecastName.assign(value); }

    /**
     * <p>A name for the forecast.</p>
     */
    inline CreateForecastRequest& WithForecastName(const Aws::String& value) { SetForecastName(value); return *this;}

    /**
     * <p>A name for the forecast.</p>
     */
    inline CreateForecastRequest& WithForecastName(Aws::String&& value) { SetForecastName(std::move(value)); return *this;}

    /**
     * <p>A name for the forecast.</p>
     */
    inline CreateForecastRequest& WithForecastName(const char* value) { SetForecastName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArnHasBeenSet = true; m_predictorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArnHasBeenSet = true; m_predictorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline CreateForecastRequest& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline CreateForecastRequest& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor to use to generate the
     * forecast.</p>
     */
    inline CreateForecastRequest& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}


    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const{ return m_forecastTypes; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline bool ForecastTypesHasBeenSet() const { return m_forecastTypesHasBeenSet; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline void SetForecastTypes(const Aws::Vector<Aws::String>& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = value; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline void SetForecastTypes(Aws::Vector<Aws::String>&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = std::move(value); }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline CreateForecastRequest& WithForecastTypes(const Aws::Vector<Aws::String>& value) { SetForecastTypes(value); return *this;}

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline CreateForecastRequest& WithForecastTypes(Aws::Vector<Aws::String>&& value) { SetForecastTypes(std::move(value)); return *this;}

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline CreateForecastRequest& AddForecastTypes(const Aws::String& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(value); return *this; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline CreateForecastRequest& AddForecastTypes(Aws::String&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. <b>You can
     * currently specify up to 5 quantiles per forecast</b>. Accepted values include
     * <code>0.01 to 0.99</code> (increments of .01 only) and <code>mean</code>. The
     * mean forecast is different from the median (0.50) when the distribution is not
     * symmetric (for example, Beta and Negative Binomial). </p> <p>The default
     * quantiles are the quantiles you specified during predictor creation. If you
     * didn't specify quantiles, the default values are <code>["0.1", "0.5",
     * "0.9"]</code>. </p>
     */
    inline CreateForecastRequest& AddForecastTypes(const char* value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.push_back(value); return *this; }


    /**
     * <p>The optional metadata that you apply to the forecast to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The optional metadata that you apply to the forecast to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The optional metadata that you apply to the forecast to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The optional metadata that you apply to the forecast to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The optional metadata that you apply to the forecast to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateForecastRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The optional metadata that you apply to the forecast to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateForecastRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The optional metadata that you apply to the forecast to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateForecastRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The optional metadata that you apply to the forecast to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateForecastRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Defines the set of time series that are used to create the forecasts in a
     * <code>TimeSeriesIdentifiers</code> object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline const TimeSeriesSelector& GetTimeSeriesSelector() const{ return m_timeSeriesSelector; }

    /**
     * <p>Defines the set of time series that are used to create the forecasts in a
     * <code>TimeSeriesIdentifiers</code> object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline bool TimeSeriesSelectorHasBeenSet() const { return m_timeSeriesSelectorHasBeenSet; }

    /**
     * <p>Defines the set of time series that are used to create the forecasts in a
     * <code>TimeSeriesIdentifiers</code> object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline void SetTimeSeriesSelector(const TimeSeriesSelector& value) { m_timeSeriesSelectorHasBeenSet = true; m_timeSeriesSelector = value; }

    /**
     * <p>Defines the set of time series that are used to create the forecasts in a
     * <code>TimeSeriesIdentifiers</code> object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline void SetTimeSeriesSelector(TimeSeriesSelector&& value) { m_timeSeriesSelectorHasBeenSet = true; m_timeSeriesSelector = std::move(value); }

    /**
     * <p>Defines the set of time series that are used to create the forecasts in a
     * <code>TimeSeriesIdentifiers</code> object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline CreateForecastRequest& WithTimeSeriesSelector(const TimeSeriesSelector& value) { SetTimeSeriesSelector(value); return *this;}

    /**
     * <p>Defines the set of time series that are used to create the forecasts in a
     * <code>TimeSeriesIdentifiers</code> object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline CreateForecastRequest& WithTimeSeriesSelector(TimeSeriesSelector&& value) { SetTimeSeriesSelector(std::move(value)); return *this;}

  private:

    Aws::String m_forecastName;
    bool m_forecastNameHasBeenSet = false;

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastTypes;
    bool m_forecastTypesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    TimeSeriesSelector m_timeSeriesSelector;
    bool m_timeSeriesSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
