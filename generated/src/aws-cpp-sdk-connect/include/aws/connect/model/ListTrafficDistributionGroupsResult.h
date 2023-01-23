/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TrafficDistributionGroupSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListTrafficDistributionGroupsResult
  {
  public:
    AWS_CONNECT_API ListTrafficDistributionGroupsResult();
    AWS_CONNECT_API ListTrafficDistributionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListTrafficDistributionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListTrafficDistributionGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListTrafficDistributionGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListTrafficDistributionGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of traffic distribution groups.</p>
     */
    inline const Aws::Vector<TrafficDistributionGroupSummary>& GetTrafficDistributionGroupSummaryList() const{ return m_trafficDistributionGroupSummaryList; }

    /**
     * <p>A list of traffic distribution groups.</p>
     */
    inline void SetTrafficDistributionGroupSummaryList(const Aws::Vector<TrafficDistributionGroupSummary>& value) { m_trafficDistributionGroupSummaryList = value; }

    /**
     * <p>A list of traffic distribution groups.</p>
     */
    inline void SetTrafficDistributionGroupSummaryList(Aws::Vector<TrafficDistributionGroupSummary>&& value) { m_trafficDistributionGroupSummaryList = std::move(value); }

    /**
     * <p>A list of traffic distribution groups.</p>
     */
    inline ListTrafficDistributionGroupsResult& WithTrafficDistributionGroupSummaryList(const Aws::Vector<TrafficDistributionGroupSummary>& value) { SetTrafficDistributionGroupSummaryList(value); return *this;}

    /**
     * <p>A list of traffic distribution groups.</p>
     */
    inline ListTrafficDistributionGroupsResult& WithTrafficDistributionGroupSummaryList(Aws::Vector<TrafficDistributionGroupSummary>&& value) { SetTrafficDistributionGroupSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of traffic distribution groups.</p>
     */
    inline ListTrafficDistributionGroupsResult& AddTrafficDistributionGroupSummaryList(const TrafficDistributionGroupSummary& value) { m_trafficDistributionGroupSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of traffic distribution groups.</p>
     */
    inline ListTrafficDistributionGroupsResult& AddTrafficDistributionGroupSummaryList(TrafficDistributionGroupSummary&& value) { m_trafficDistributionGroupSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TrafficDistributionGroupSummary> m_trafficDistributionGroupSummaryList;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
