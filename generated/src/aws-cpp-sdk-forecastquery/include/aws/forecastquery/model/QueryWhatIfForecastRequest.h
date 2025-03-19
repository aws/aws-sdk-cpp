/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/forecastquery/ForecastQueryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ForecastQueryService
{
namespace Model
{

  /**
   */
  class QueryWhatIfForecastRequest : public ForecastQueryServiceRequest
  {
  public:
    AWS_FORECASTQUERYSERVICE_API QueryWhatIfForecastRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryWhatIfForecast"; }

    AWS_FORECASTQUERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTQUERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast to query.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const { return m_whatIfForecastArn; }
    inline bool WhatIfForecastArnHasBeenSet() const { return m_whatIfForecastArnHasBeenSet; }
    template<typename WhatIfForecastArnT = Aws::String>
    void SetWhatIfForecastArn(WhatIfForecastArnT&& value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn = std::forward<WhatIfForecastArnT>(value); }
    template<typename WhatIfForecastArnT = Aws::String>
    QueryWhatIfForecastRequest& WithWhatIfForecastArn(WhatIfForecastArnT&& value) { SetWhatIfForecastArn(std::forward<WhatIfForecastArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the what-if forecast. Specify the date using this format:
     * yyyy-MM-dd'T'HH:mm:ss (ISO 8601 format). For example, 2015-01-01T08:00:00.</p>
     */
    inline const Aws::String& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::String>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::String>
    QueryWhatIfForecastRequest& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for the what-if forecast. Specify the date using this format:
     * yyyy-MM-dd'T'HH:mm:ss (ISO 8601 format). For example, 2015-01-01T20:00:00. </p>
     */
    inline const Aws::String& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::String>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::String>
    QueryWhatIfForecastRequest& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filtering criteria to apply when retrieving the forecast. For example, to
     * get the forecast for <code>client_21</code> in the electricity usage dataset,
     * specify the following:</p> <p> <code>{"item_id" : "client_21"}</code> </p> <p>To
     * get the full what-if forecast, use the <a
     * href="https://docs.aws.amazon.com/en_us/forecast/latest/dg/API_CreateWhatIfForecastExport.html">CreateForecastExportJob</a>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Map<Aws::String, Aws::String>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Map<Aws::String, Aws::String>>
    QueryWhatIfForecastRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersKeyT = Aws::String, typename FiltersValueT = Aws::String>
    QueryWhatIfForecastRequest& AddFilters(FiltersKeyT&& key, FiltersValueT&& value) {
      m_filtersHasBeenSet = true; m_filters.emplace(std::forward<FiltersKeyT>(key), std::forward<FiltersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    QueryWhatIfForecastRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastArn;
    bool m_whatIfForecastArnHasBeenSet = false;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastQueryService
} // namespace Aws
