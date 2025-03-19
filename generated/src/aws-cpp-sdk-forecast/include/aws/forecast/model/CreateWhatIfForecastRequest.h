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
    AWS_FORECASTSERVICE_API CreateWhatIfForecastRequest() = default;

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
    inline const Aws::String& GetWhatIfForecastName() const { return m_whatIfForecastName; }
    inline bool WhatIfForecastNameHasBeenSet() const { return m_whatIfForecastNameHasBeenSet; }
    template<typename WhatIfForecastNameT = Aws::String>
    void SetWhatIfForecastName(WhatIfForecastNameT&& value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName = std::forward<WhatIfForecastNameT>(value); }
    template<typename WhatIfForecastNameT = Aws::String>
    CreateWhatIfForecastRequest& WithWhatIfForecastName(WhatIfForecastNameT&& value) { SetWhatIfForecastName(std::forward<WhatIfForecastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const { return m_whatIfAnalysisArn; }
    inline bool WhatIfAnalysisArnHasBeenSet() const { return m_whatIfAnalysisArnHasBeenSet; }
    template<typename WhatIfAnalysisArnT = Aws::String>
    void SetWhatIfAnalysisArn(WhatIfAnalysisArnT&& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = std::forward<WhatIfAnalysisArnT>(value); }
    template<typename WhatIfAnalysisArnT = Aws::String>
    CreateWhatIfForecastRequest& WithWhatIfAnalysisArn(WhatIfAnalysisArnT&& value) { SetWhatIfAnalysisArn(std::forward<WhatIfAnalysisArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transformations that are applied to the baseline time series. Each
     * transformation contains an action and a set of conditions. An action is applied
     * only when all conditions are met. If no conditions are provided, the action is
     * applied to all items.</p>
     */
    inline const Aws::Vector<TimeSeriesTransformation>& GetTimeSeriesTransformations() const { return m_timeSeriesTransformations; }
    inline bool TimeSeriesTransformationsHasBeenSet() const { return m_timeSeriesTransformationsHasBeenSet; }
    template<typename TimeSeriesTransformationsT = Aws::Vector<TimeSeriesTransformation>>
    void SetTimeSeriesTransformations(TimeSeriesTransformationsT&& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations = std::forward<TimeSeriesTransformationsT>(value); }
    template<typename TimeSeriesTransformationsT = Aws::Vector<TimeSeriesTransformation>>
    CreateWhatIfForecastRequest& WithTimeSeriesTransformations(TimeSeriesTransformationsT&& value) { SetTimeSeriesTransformations(std::forward<TimeSeriesTransformationsT>(value)); return *this;}
    template<typename TimeSeriesTransformationsT = TimeSeriesTransformation>
    CreateWhatIfForecastRequest& AddTimeSeriesTransformations(TimeSeriesTransformationsT&& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations.emplace_back(std::forward<TimeSeriesTransformationsT>(value)); return *this; }
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
    inline const TimeSeriesReplacementsDataSource& GetTimeSeriesReplacementsDataSource() const { return m_timeSeriesReplacementsDataSource; }
    inline bool TimeSeriesReplacementsDataSourceHasBeenSet() const { return m_timeSeriesReplacementsDataSourceHasBeenSet; }
    template<typename TimeSeriesReplacementsDataSourceT = TimeSeriesReplacementsDataSource>
    void SetTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSourceT&& value) { m_timeSeriesReplacementsDataSourceHasBeenSet = true; m_timeSeriesReplacementsDataSource = std::forward<TimeSeriesReplacementsDataSourceT>(value); }
    template<typename TimeSeriesReplacementsDataSourceT = TimeSeriesReplacementsDataSource>
    CreateWhatIfForecastRequest& WithTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSourceT&& value) { SetTimeSeriesReplacementsDataSource(std::forward<TimeSeriesReplacementsDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateWhatIfForecastRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWhatIfForecastRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
