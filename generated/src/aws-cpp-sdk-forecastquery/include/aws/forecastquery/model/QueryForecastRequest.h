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
  class QueryForecastRequest : public ForecastQueryServiceRequest
  {
  public:
    AWS_FORECASTQUERYSERVICE_API QueryForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryForecast"; }

    AWS_FORECASTQUERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTQUERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the forecast to query.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }
    inline void SetForecastArn(const Aws::String& value) { m_forecastArnHasBeenSet = true; m_forecastArn = value; }
    inline void SetForecastArn(Aws::String&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::move(value); }
    inline void SetForecastArn(const char* value) { m_forecastArnHasBeenSet = true; m_forecastArn.assign(value); }
    inline QueryForecastRequest& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}
    inline QueryForecastRequest& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}
    inline QueryForecastRequest& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the forecast. Specify the date using this format:
     * yyyy-MM-dd'T'HH:mm:ss (ISO 8601 format). For example, 2015-01-01T08:00:00.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }
    inline QueryForecastRequest& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}
    inline QueryForecastRequest& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}
    inline QueryForecastRequest& WithStartDate(const char* value) { SetStartDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for the forecast. Specify the date using this format:
     * yyyy-MM-dd'T'HH:mm:ss (ISO 8601 format). For example, 2015-01-01T20:00:00. </p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }
    inline QueryForecastRequest& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}
    inline QueryForecastRequest& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}
    inline QueryForecastRequest& WithEndDate(const char* value) { SetEndDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filtering criteria to apply when retrieving the forecast. For example, to
     * get the forecast for <code>client_21</code> in the electricity usage dataset,
     * specify the following:</p> <p> <code>{"item_id" : "client_21"}</code> </p> <p>To
     * get the full forecast, use the <a
     * href="https://docs.aws.amazon.com/en_us/forecast/latest/dg/API_CreateForecastExportJob.html">CreateForecastExportJob</a>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Map<Aws::String, Aws::String>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Map<Aws::String, Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline QueryForecastRequest& WithFilters(const Aws::Map<Aws::String, Aws::String>& value) { SetFilters(value); return *this;}
    inline QueryForecastRequest& WithFilters(Aws::Map<Aws::String, Aws::String>&& value) { SetFilters(std::move(value)); return *this;}
    inline QueryForecastRequest& AddFilters(const Aws::String& key, const Aws::String& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }
    inline QueryForecastRequest& AddFilters(Aws::String&& key, const Aws::String& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }
    inline QueryForecastRequest& AddFilters(const Aws::String& key, Aws::String&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }
    inline QueryForecastRequest& AddFilters(Aws::String&& key, Aws::String&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryForecastRequest& AddFilters(const char* key, Aws::String&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }
    inline QueryForecastRequest& AddFilters(Aws::String&& key, const char* value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }
    inline QueryForecastRequest& AddFilters(const char* key, const char* value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous request was truncated, the response includes a
     * <code>NextToken</code>. To retrieve the next set of results, use the token in
     * the next request. Tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline QueryForecastRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline QueryForecastRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline QueryForecastRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;

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
