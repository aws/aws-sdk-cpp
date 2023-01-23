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


    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline const Aws::String& GetWhatIfForecastName() const{ return m_whatIfForecastName; }

    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline bool WhatIfForecastNameHasBeenSet() const { return m_whatIfForecastNameHasBeenSet; }

    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline void SetWhatIfForecastName(const Aws::String& value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName = value; }

    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline void SetWhatIfForecastName(Aws::String&& value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName = std::move(value); }

    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline void SetWhatIfForecastName(const char* value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName.assign(value); }

    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline CreateWhatIfForecastRequest& WithWhatIfForecastName(const Aws::String& value) { SetWhatIfForecastName(value); return *this;}

    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline CreateWhatIfForecastRequest& WithWhatIfForecastName(Aws::String&& value) { SetWhatIfForecastName(std::move(value)); return *this;}

    /**
     * <p>The name of the what-if forecast. Names must be unique within each what-if
     * analysis.</p>
     */
    inline CreateWhatIfForecastRequest& WithWhatIfForecastName(const char* value) { SetWhatIfForecastName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const{ return m_whatIfAnalysisArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline bool WhatIfAnalysisArnHasBeenSet() const { return m_whatIfAnalysisArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline void SetWhatIfAnalysisArn(const Aws::String& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline void SetWhatIfAnalysisArn(Aws::String&& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline void SetWhatIfAnalysisArn(const char* value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline CreateWhatIfForecastRequest& WithWhatIfAnalysisArn(const Aws::String& value) { SetWhatIfAnalysisArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline CreateWhatIfForecastRequest& WithWhatIfAnalysisArn(Aws::String&& value) { SetWhatIfAnalysisArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline CreateWhatIfForecastRequest& WithWhatIfAnalysisArn(const char* value) { SetWhatIfAnalysisArn(value); return *this;}


    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline const Aws::Vector<TimeSeriesTransformation>& GetTimeSeriesTransformations() const{ return m_timeSeriesTransformations; }

    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline bool TimeSeriesTransformationsHasBeenSet() const { return m_timeSeriesTransformationsHasBeenSet; }

    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline void SetTimeSeriesTransformations(const Aws::Vector<TimeSeriesTransformation>& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations = value; }

    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline void SetTimeSeriesTransformations(Aws::Vector<TimeSeriesTransformation>&& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations = std::move(value); }

    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline CreateWhatIfForecastRequest& WithTimeSeriesTransformations(const Aws::Vector<TimeSeriesTransformation>& value) { SetTimeSeriesTransformations(value); return *this;}

    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline CreateWhatIfForecastRequest& WithTimeSeriesTransformations(Aws::Vector<TimeSeriesTransformation>&& value) { SetTimeSeriesTransformations(std::move(value)); return *this;}

    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline CreateWhatIfForecastRequest& AddTimeSeriesTransformations(const TimeSeriesTransformation& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations.push_back(value); return *this; }

    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline CreateWhatIfForecastRequest& AddTimeSeriesTransformations(TimeSeriesTransformation&& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations.push_back(std::move(value)); return *this; }


    /**
     * <p>The replacement time series dataset, which contains the rows that you want to
     * change in the related time series dataset. A replacement time series does not
     * need to contain all rows that are in the baseline related time series. Include
     * only the rows (measure-dimension combinations) that you want to include in the
     * what-if forecast. This dataset is merged with the original time series to create
     * a transformed dataset that is used for the what-if analysis.</p> <p>This dataset
     * should contain the items to modify (such as item_id or workforce_type), any
     * relevant dimensions, the timestamp column, and at least one of the related time
     * series columns. This file should not contain duplicate timestamps for the same
     * time series.</p> <p>Timestamps and item_ids not included in this dataset are not
     * included in the what-if analysis. </p>
     */
    inline const TimeSeriesReplacementsDataSource& GetTimeSeriesReplacementsDataSource() const{ return m_timeSeriesReplacementsDataSource; }

    /**
     * <p>The replacement time series dataset, which contains the rows that you want to
     * change in the related time series dataset. A replacement time series does not
     * need to contain all rows that are in the baseline related time series. Include
     * only the rows (measure-dimension combinations) that you want to include in the
     * what-if forecast. This dataset is merged with the original time series to create
     * a transformed dataset that is used for the what-if analysis.</p> <p>This dataset
     * should contain the items to modify (such as item_id or workforce_type), any
     * relevant dimensions, the timestamp column, and at least one of the related time
     * series columns. This file should not contain duplicate timestamps for the same
     * time series.</p> <p>Timestamps and item_ids not included in this dataset are not
     * included in the what-if analysis. </p>
     */
    inline bool TimeSeriesReplacementsDataSourceHasBeenSet() const { return m_timeSeriesReplacementsDataSourceHasBeenSet; }

    /**
     * <p>The replacement time series dataset, which contains the rows that you want to
     * change in the related time series dataset. A replacement time series does not
     * need to contain all rows that are in the baseline related time series. Include
     * only the rows (measure-dimension combinations) that you want to include in the
     * what-if forecast. This dataset is merged with the original time series to create
     * a transformed dataset that is used for the what-if analysis.</p> <p>This dataset
     * should contain the items to modify (such as item_id or workforce_type), any
     * relevant dimensions, the timestamp column, and at least one of the related time
     * series columns. This file should not contain duplicate timestamps for the same
     * time series.</p> <p>Timestamps and item_ids not included in this dataset are not
     * included in the what-if analysis. </p>
     */
    inline void SetTimeSeriesReplacementsDataSource(const TimeSeriesReplacementsDataSource& value) { m_timeSeriesReplacementsDataSourceHasBeenSet = true; m_timeSeriesReplacementsDataSource = value; }

    /**
     * <p>The replacement time series dataset, which contains the rows that you want to
     * change in the related time series dataset. A replacement time series does not
     * need to contain all rows that are in the baseline related time series. Include
     * only the rows (measure-dimension combinations) that you want to include in the
     * what-if forecast. This dataset is merged with the original time series to create
     * a transformed dataset that is used for the what-if analysis.</p> <p>This dataset
     * should contain the items to modify (such as item_id or workforce_type), any
     * relevant dimensions, the timestamp column, and at least one of the related time
     * series columns. This file should not contain duplicate timestamps for the same
     * time series.</p> <p>Timestamps and item_ids not included in this dataset are not
     * included in the what-if analysis. </p>
     */
    inline void SetTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSource&& value) { m_timeSeriesReplacementsDataSourceHasBeenSet = true; m_timeSeriesReplacementsDataSource = std::move(value); }

    /**
     * <p>The replacement time series dataset, which contains the rows that you want to
     * change in the related time series dataset. A replacement time series does not
     * need to contain all rows that are in the baseline related time series. Include
     * only the rows (measure-dimension combinations) that you want to include in the
     * what-if forecast. This dataset is merged with the original time series to create
     * a transformed dataset that is used for the what-if analysis.</p> <p>This dataset
     * should contain the items to modify (such as item_id or workforce_type), any
     * relevant dimensions, the timestamp column, and at least one of the related time
     * series columns. This file should not contain duplicate timestamps for the same
     * time series.</p> <p>Timestamps and item_ids not included in this dataset are not
     * included in the what-if analysis. </p>
     */
    inline CreateWhatIfForecastRequest& WithTimeSeriesReplacementsDataSource(const TimeSeriesReplacementsDataSource& value) { SetTimeSeriesReplacementsDataSource(value); return *this;}

    /**
     * <p>The replacement time series dataset, which contains the rows that you want to
     * change in the related time series dataset. A replacement time series does not
     * need to contain all rows that are in the baseline related time series. Include
     * only the rows (measure-dimension combinations) that you want to include in the
     * what-if forecast. This dataset is merged with the original time series to create
     * a transformed dataset that is used for the what-if analysis.</p> <p>This dataset
     * should contain the items to modify (such as item_id or workforce_type), any
     * relevant dimensions, the timestamp column, and at least one of the related time
     * series columns. This file should not contain duplicate timestamps for the same
     * time series.</p> <p>Timestamps and item_ids not included in this dataset are not
     * included in the what-if analysis. </p>
     */
    inline CreateWhatIfForecastRequest& WithTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSource&& value) { SetTimeSeriesReplacementsDataSource(std::move(value)); return *this;}


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
    inline CreateWhatIfForecastRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfForecastRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfForecastRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfForecastRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
