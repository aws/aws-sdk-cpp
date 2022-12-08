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
    AWS_LOOKOUTMETRICS_API ListAlertsResult();
    AWS_LOOKOUTMETRICS_API ListAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about an alert.</p>
     */
    inline const Aws::Vector<AlertSummary>& GetAlertSummaryList() const{ return m_alertSummaryList; }

    /**
     * <p>Contains information about an alert.</p>
     */
    inline void SetAlertSummaryList(const Aws::Vector<AlertSummary>& value) { m_alertSummaryList = value; }

    /**
     * <p>Contains information about an alert.</p>
     */
    inline void SetAlertSummaryList(Aws::Vector<AlertSummary>&& value) { m_alertSummaryList = std::move(value); }

    /**
     * <p>Contains information about an alert.</p>
     */
    inline ListAlertsResult& WithAlertSummaryList(const Aws::Vector<AlertSummary>& value) { SetAlertSummaryList(value); return *this;}

    /**
     * <p>Contains information about an alert.</p>
     */
    inline ListAlertsResult& WithAlertSummaryList(Aws::Vector<AlertSummary>&& value) { SetAlertSummaryList(std::move(value)); return *this;}

    /**
     * <p>Contains information about an alert.</p>
     */
    inline ListAlertsResult& AddAlertSummaryList(const AlertSummary& value) { m_alertSummaryList.push_back(value); return *this; }

    /**
     * <p>Contains information about an alert.</p>
     */
    inline ListAlertsResult& AddAlertSummaryList(AlertSummary&& value) { m_alertSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use this token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use this token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use this token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use this token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use this token in the next request.</p>
     */
    inline ListAlertsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use this token in the next request.</p>
     */
    inline ListAlertsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, the service returns this token. To retrieve the
     * next set of results, use this token in the next request.</p>
     */
    inline ListAlertsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AlertSummary> m_alertSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
