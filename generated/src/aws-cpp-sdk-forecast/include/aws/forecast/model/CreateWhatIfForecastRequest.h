/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/TimeSeriesReplacementsDataSource.h>
#include <aws/forecast/model/TimeSeriesTransformation.h>
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
  class CreateWhatIfForecastRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateWhatIfForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWhatIfForecast"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline const Aws::String& GetWhatIfForecastName() const{ return m_whatIfForecastName; }
    inline bool WhatIfForecastNameHasBeenSet() const { return m_whatIfForecastNameHasBeenSet; }
    inline void SetWhatIfForecastName(const Aws::String& value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName = value; }
    inline void SetWhatIfForecastName(Aws::String&& value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName = std::move(value); }
    inline void SetWhatIfForecastName(const char* value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName.assign(value); }
    inline CreateWhatIfForecastRequest& WithWhatIfForecastName(const Aws::String& value) { SetWhatIfForecastName(value); return *this;}
    inline CreateWhatIfForecastRequest& WithWhatIfForecastName(Aws::String&& value) { SetWhatIfForecastName(std::move(value)); return *this;}
    inline CreateWhatIfForecastRequest& WithWhatIfForecastName(const char* value) { SetWhatIfForecastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const{ return m_whatIfAnalysisArn; }
    inline bool WhatIfAnalysisArnHasBeenSet() const { return m_whatIfAnalysisArnHasBeenSet; }
    inline void SetWhatIfAnalysisArn(const Aws::String& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = value; }
    inline void SetWhatIfAnalysisArn(Aws::String&& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = std::move(value); }
    inline void SetWhatIfAnalysisArn(const char* value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn.assign(value); }
    inline CreateWhatIfForecastRequest& WithWhatIfAnalysisArn(const Aws::String& value) { SetWhatIfAnalysisArn(value); return *this;}
    inline CreateWhatIfForecastRequest& WithWhatIfAnalysisArn(Aws::String&& value) { SetWhatIfAnalysisArn(std::move(value)); return *this;}
    inline CreateWhatIfForecastRequest& WithWhatIfAnalysisArn(const char* value) { SetWhatIfAnalysisArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline const Aws::Vector<TimeSeriesTransformation>& GetTimeSeriesTransformations() const{ return m_timeSeriesTransformations; }
    inline bool TimeSeriesTransformationsHasBeenSet() const { return m_timeSeriesTransformationsHasBeenSet; }
    inline void SetTimeSeriesTransformations(const Aws::Vector<TimeSeriesTransformation>& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations = value; }
    inline void SetTimeSeriesTransformations(Aws::Vector<TimeSeriesTransformation>&& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations = std::move(value); }
    inline CreateWhatIfForecastRequest& WithTimeSeriesTransformations(const Aws::Vector<TimeSeriesTransformation>& value) { SetTimeSeriesTransformations(value); return *this;}
    inline CreateWhatIfForecastRequest& WithTimeSeriesTransformations(Aws::Vector<TimeSeriesTransformation>&& value) { SetTimeSeriesTransformations(std::move(value)); return *this;}
    inline CreateWhatIfForecastRequest& AddTimeSeriesTransformations(const TimeSeriesTransformation& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations.push_back(value); return *this; }
    inline CreateWhatIfForecastRequest& AddTimeSeriesTransformations(TimeSeriesTransformation&& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replacement time series dataset, which contains the rows that you want to
     * change in the related time series dataset. A replacement time series does not
     * need to contain all rows that are in the baseline related time series. Include
     * only the rows (measure-dimension combinations) that you want to include in the
     * what-if forecast.</p> <p>This dataset is merged with the original time series to
     * create a transformed dataset that is used for the what-if analysis.</p> <p>This
     * dataset should contain the items to modify (such as item_id or workforce_type),
     * any relevant dimensions, the timestamp column, and at least one of the related
     * time series columns. This file should not contain duplicate timestamps for the
     * same time series.</p> <p>Timestamps and item_ids not included in this dataset
     * are not included in the what-if analysis. </p>
     */
    inline const TimeSeriesReplacementsDataSource& GetTimeSeriesReplacementsDataSource() const{ return m_timeSeriesReplacementsDataSource; }
    inline bool TimeSeriesReplacementsDataSourceHasBeenSet() const { return m_timeSeriesReplacementsDataSourceHasBeenSet; }
    inline void SetTimeSeriesReplacementsDataSource(const TimeSeriesReplacementsDataSource& value) { m_timeSeriesReplacementsDataSourceHasBeenSet = true; m_timeSeriesReplacementsDataSource = value; }
    inline void SetTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSource&& value) { m_timeSeriesReplacementsDataSourceHasBeenSet = true; m_timeSeriesReplacementsDataSource = std::move(value); }
    inline CreateWhatIfForecastRequest& WithTimeSeriesReplacementsDataSource(const TimeSeriesReplacementsDataSource& value) { SetTimeSeriesReplacementsDataSource(value); return *this;}
    inline CreateWhatIfForecastRequest& WithTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSource&& value) { SetTimeSeriesReplacementsDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWhatIfForecastRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateWhatIfForecastRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWhatIfForecastRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateWhatIfForecastRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_whatIfForecastName;
    bool m_whatIfForecastNameHasBeenSet = false;

    Aws::String m_whatIfAnalysisArn;
    bool m_whatIfAnalysisArnHasBeenSet = false;

    Aws::Vector<TimeSeriesTransformation> m_timeSeriesTransformations;
    bool m_timeSeriesTransformationsHasBeenSet = false;

    TimeSeriesReplacementsDataSource m_timeSeriesReplacementsDataSource;
    bool m_timeSeriesReplacementsDataSourceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
