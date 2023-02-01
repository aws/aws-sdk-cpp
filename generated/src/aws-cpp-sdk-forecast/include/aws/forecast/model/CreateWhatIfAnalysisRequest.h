/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/TimeSeriesSelector.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateWhatIfAnalysisRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateWhatIfAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWhatIfAnalysis"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisName() const{ return m_whatIfAnalysisName; }

    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline bool WhatIfAnalysisNameHasBeenSet() const { return m_whatIfAnalysisNameHasBeenSet; }

    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline void SetWhatIfAnalysisName(const Aws::String& value) { m_whatIfAnalysisNameHasBeenSet = true; m_whatIfAnalysisName = value; }

    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline void SetWhatIfAnalysisName(Aws::String&& value) { m_whatIfAnalysisNameHasBeenSet = true; m_whatIfAnalysisName = std::move(value); }

    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline void SetWhatIfAnalysisName(const char* value) { m_whatIfAnalysisNameHasBeenSet = true; m_whatIfAnalysisName.assign(value); }

    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline CreateWhatIfAnalysisRequest& WithWhatIfAnalysisName(const Aws::String& value) { SetWhatIfAnalysisName(value); return *this;}

    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline CreateWhatIfAnalysisRequest& WithWhatIfAnalysisName(Aws::String&& value) { SetWhatIfAnalysisName(std::move(value)); return *this;}

    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline CreateWhatIfAnalysisRequest& WithWhatIfAnalysisName(const char* value) { SetWhatIfAnalysisName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline void SetForecastArn(const Aws::String& value) { m_forecastArnHasBeenSet = true; m_forecastArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline void SetForecastArn(Aws::String&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline void SetForecastArn(const char* value) { m_forecastArnHasBeenSet = true; m_forecastArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline CreateWhatIfAnalysisRequest& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline CreateWhatIfAnalysisRequest& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline CreateWhatIfAnalysisRequest& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}


    /**
     * <p>Defines the set of time series that are used in the what-if analysis with a
     * <code>TimeSeriesIdentifiers</code> object. What-if analyses are performed only
     * for the time series in this object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline const TimeSeriesSelector& GetTimeSeriesSelector() const{ return m_timeSeriesSelector; }

    /**
     * <p>Defines the set of time series that are used in the what-if analysis with a
     * <code>TimeSeriesIdentifiers</code> object. What-if analyses are performed only
     * for the time series in this object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline bool TimeSeriesSelectorHasBeenSet() const { return m_timeSeriesSelectorHasBeenSet; }

    /**
     * <p>Defines the set of time series that are used in the what-if analysis with a
     * <code>TimeSeriesIdentifiers</code> object. What-if analyses are performed only
     * for the time series in this object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline void SetTimeSeriesSelector(const TimeSeriesSelector& value) { m_timeSeriesSelectorHasBeenSet = true; m_timeSeriesSelector = value; }

    /**
     * <p>Defines the set of time series that are used in the what-if analysis with a
     * <code>TimeSeriesIdentifiers</code> object. What-if analyses are performed only
     * for the time series in this object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline void SetTimeSeriesSelector(TimeSeriesSelector&& value) { m_timeSeriesSelectorHasBeenSet = true; m_timeSeriesSelector = std::move(value); }

    /**
     * <p>Defines the set of time series that are used in the what-if analysis with a
     * <code>TimeSeriesIdentifiers</code> object. What-if analyses are performed only
     * for the time series in this object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline CreateWhatIfAnalysisRequest& WithTimeSeriesSelector(const TimeSeriesSelector& value) { SetTimeSeriesSelector(value); return *this;}

    /**
     * <p>Defines the set of time series that are used in the what-if analysis with a
     * <code>TimeSeriesIdentifiers</code> object. What-if analyses are performed only
     * for the time series in this object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline CreateWhatIfAnalysisRequest& WithTimeSeriesSelector(TimeSeriesSelector&& value) { SetTimeSeriesSelector(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfAnalysisRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfAnalysisRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfAnalysisRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfAnalysisRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_whatIfAnalysisName;
    bool m_whatIfAnalysisNameHasBeenSet = false;

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;

    TimeSeriesSelector m_timeSeriesSelector;
    bool m_timeSeriesSelectorHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
