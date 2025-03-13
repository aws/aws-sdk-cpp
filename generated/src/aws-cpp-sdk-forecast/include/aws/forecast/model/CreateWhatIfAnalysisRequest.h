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
    AWS_FORECASTSERVICE_API CreateWhatIfAnalysisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWhatIfAnalysis"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the what-if analysis. Each name must be unique.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisName() const { return m_whatIfAnalysisName; }
    inline bool WhatIfAnalysisNameHasBeenSet() const { return m_whatIfAnalysisNameHasBeenSet; }
    template<typename WhatIfAnalysisNameT = Aws::String>
    void SetWhatIfAnalysisName(WhatIfAnalysisNameT&& value) { m_whatIfAnalysisNameHasBeenSet = true; m_whatIfAnalysisName = std::forward<WhatIfAnalysisNameT>(value); }
    template<typename WhatIfAnalysisNameT = Aws::String>
    CreateWhatIfAnalysisRequest& WithWhatIfAnalysisName(WhatIfAnalysisNameT&& value) { SetWhatIfAnalysisName(std::forward<WhatIfAnalysisNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast.</p>
     */
    inline const Aws::String& GetForecastArn() const { return m_forecastArn; }
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }
    template<typename ForecastArnT = Aws::String>
    void SetForecastArn(ForecastArnT&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::forward<ForecastArnT>(value); }
    template<typename ForecastArnT = Aws::String>
    CreateWhatIfAnalysisRequest& WithForecastArn(ForecastArnT&& value) { SetForecastArn(std::forward<ForecastArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the set of time series that are used in the what-if analysis with a
     * <code>TimeSeriesIdentifiers</code> object. What-if analyses are performed only
     * for the time series in this object.</p> <p>The
     * <code>TimeSeriesIdentifiers</code> object needs the following information:</p>
     * <ul> <li> <p> <code>DataSource</code> </p> </li> <li> <p> <code>Format</code>
     * </p> </li> <li> <p> <code>Schema</code> </p> </li> </ul>
     */
    inline const TimeSeriesSelector& GetTimeSeriesSelector() const { return m_timeSeriesSelector; }
    inline bool TimeSeriesSelectorHasBeenSet() const { return m_timeSeriesSelectorHasBeenSet; }
    template<typename TimeSeriesSelectorT = TimeSeriesSelector>
    void SetTimeSeriesSelector(TimeSeriesSelectorT&& value) { m_timeSeriesSelectorHasBeenSet = true; m_timeSeriesSelector = std::forward<TimeSeriesSelectorT>(value); }
    template<typename TimeSeriesSelectorT = TimeSeriesSelector>
    CreateWhatIfAnalysisRequest& WithTimeSeriesSelector(TimeSeriesSelectorT&& value) { SetTimeSeriesSelector(std::forward<TimeSeriesSelectorT>(value)); return *this;}
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
    CreateWhatIfAnalysisRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWhatIfAnalysisRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
