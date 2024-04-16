/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/SummaryMetricQuery.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class GetMetricsRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API GetMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetrics"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline const Aws::Vector<SummaryMetricQuery>& GetSummaryMetricQueries() const{ return m_summaryMetricQueries; }

    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline bool SummaryMetricQueriesHasBeenSet() const { return m_summaryMetricQueriesHasBeenSet; }

    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline void SetSummaryMetricQueries(const Aws::Vector<SummaryMetricQuery>& value) { m_summaryMetricQueriesHasBeenSet = true; m_summaryMetricQueries = value; }

    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline void SetSummaryMetricQueries(Aws::Vector<SummaryMetricQuery>&& value) { m_summaryMetricQueriesHasBeenSet = true; m_summaryMetricQueries = std::move(value); }

    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline GetMetricsRequest& WithSummaryMetricQueries(const Aws::Vector<SummaryMetricQuery>& value) { SetSummaryMetricQueries(value); return *this;}

    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline GetMetricsRequest& WithSummaryMetricQueries(Aws::Vector<SummaryMetricQuery>&& value) { SetSummaryMetricQueries(std::move(value)); return *this;}

    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline GetMetricsRequest& AddSummaryMetricQueries(const SummaryMetricQuery& value) { m_summaryMetricQueriesHasBeenSet = true; m_summaryMetricQueries.push_back(value); return *this; }

    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline GetMetricsRequest& AddSummaryMetricQueries(SummaryMetricQuery&& value) { m_summaryMetricQueriesHasBeenSet = true; m_summaryMetricQueries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SummaryMetricQuery> m_summaryMetricQueries;
    bool m_summaryMetricQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
