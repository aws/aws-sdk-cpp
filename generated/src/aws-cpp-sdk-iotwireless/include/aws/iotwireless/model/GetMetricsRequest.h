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
    AWS_IOTWIRELESS_API GetMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetrics"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of queries to retrieve the summary metrics.</p>
     */
    inline const Aws::Vector<SummaryMetricQuery>& GetSummaryMetricQueries() const { return m_summaryMetricQueries; }
    inline bool SummaryMetricQueriesHasBeenSet() const { return m_summaryMetricQueriesHasBeenSet; }
    template<typename SummaryMetricQueriesT = Aws::Vector<SummaryMetricQuery>>
    void SetSummaryMetricQueries(SummaryMetricQueriesT&& value) { m_summaryMetricQueriesHasBeenSet = true; m_summaryMetricQueries = std::forward<SummaryMetricQueriesT>(value); }
    template<typename SummaryMetricQueriesT = Aws::Vector<SummaryMetricQuery>>
    GetMetricsRequest& WithSummaryMetricQueries(SummaryMetricQueriesT&& value) { SetSummaryMetricQueries(std::forward<SummaryMetricQueriesT>(value)); return *this;}
    template<typename SummaryMetricQueriesT = SummaryMetricQuery>
    GetMetricsRequest& AddSummaryMetricQueries(SummaryMetricQueriesT&& value) { m_summaryMetricQueriesHasBeenSet = true; m_summaryMetricQueries.emplace_back(std::forward<SummaryMetricQueriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SummaryMetricQuery> m_summaryMetricQueries;
    bool m_summaryMetricQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
