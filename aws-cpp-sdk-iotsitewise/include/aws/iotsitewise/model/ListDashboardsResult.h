/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/DashboardSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListDashboardsResult
  {
  public:
    AWS_IOTSITEWISE_API ListDashboardsResult();
    AWS_IOTSITEWISE_API ListDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each dashboard in the project.</p>
     */
    inline const Aws::Vector<DashboardSummary>& GetDashboardSummaries() const{ return m_dashboardSummaries; }

    /**
     * <p>A list that summarizes each dashboard in the project.</p>
     */
    inline void SetDashboardSummaries(const Aws::Vector<DashboardSummary>& value) { m_dashboardSummaries = value; }

    /**
     * <p>A list that summarizes each dashboard in the project.</p>
     */
    inline void SetDashboardSummaries(Aws::Vector<DashboardSummary>&& value) { m_dashboardSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each dashboard in the project.</p>
     */
    inline ListDashboardsResult& WithDashboardSummaries(const Aws::Vector<DashboardSummary>& value) { SetDashboardSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each dashboard in the project.</p>
     */
    inline ListDashboardsResult& WithDashboardSummaries(Aws::Vector<DashboardSummary>&& value) { SetDashboardSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each dashboard in the project.</p>
     */
    inline ListDashboardsResult& AddDashboardSummaries(const DashboardSummary& value) { m_dashboardSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each dashboard in the project.</p>
     */
    inline ListDashboardsResult& AddDashboardSummaries(DashboardSummary&& value) { m_dashboardSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListDashboardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListDashboardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListDashboardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DashboardSummary> m_dashboardSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
