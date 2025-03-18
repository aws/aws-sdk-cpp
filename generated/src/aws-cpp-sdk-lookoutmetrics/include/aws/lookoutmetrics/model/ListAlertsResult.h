/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AlertSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LookoutMetrics
{
namespace Model
{
  class ListAlertsResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAlertsResult() = default;
    AWS_LOOKOUTMETRICS_API ListAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about an alert.</p>
     */
    inline const Aws::Vector<AlertSummary>& GetAlertSummaryList() const { return m_alertSummaryList; }
    template<typename AlertSummaryListT = Aws::Vector<AlertSummary>>
    void SetAlertSummaryList(AlertSummaryListT&& value) { m_alertSummaryListHasBeenSet = true; m_alertSummaryList = std::forward<AlertSummaryListT>(value); }
    template<typename AlertSummaryListT = Aws::Vector<AlertSummary>>
    ListAlertsResult& WithAlertSummaryList(AlertSummaryListT&& value) { SetAlertSummaryList(std::forward<AlertSummaryListT>(value)); return *this;}
    template<typename AlertSummaryListT = AlertSummary>
    ListAlertsResult& AddAlertSummaryList(AlertSummaryListT&& value) { m_alertSummaryListHasBeenSet = true; m_alertSummaryList.emplace_back(std::forward<AlertSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use this token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAlertsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAlertsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlertSummary> m_alertSummaryList;
    bool m_alertSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
