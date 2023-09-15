/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TrafficDistributionGroupUserSummary.h>
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
  class ListTrafficDistributionGroupUsersResult
  {
  public:
    AWS_CONNECT_API ListTrafficDistributionGroupUsersResult();
    AWS_CONNECT_API ListTrafficDistributionGroupUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListTrafficDistributionGroupUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListTrafficDistributionGroupUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListTrafficDistributionGroupUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListTrafficDistributionGroupUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of traffic distribution group users.</p>
     */
    inline const Aws::Vector<TrafficDistributionGroupUserSummary>& GetTrafficDistributionGroupUserSummaryList() const{ return m_trafficDistributionGroupUserSummaryList; }

    /**
     * <p>A list of traffic distribution group users.</p>
     */
    inline void SetTrafficDistributionGroupUserSummaryList(const Aws::Vector<TrafficDistributionGroupUserSummary>& value) { m_trafficDistributionGroupUserSummaryList = value; }

    /**
     * <p>A list of traffic distribution group users.</p>
     */
    inline void SetTrafficDistributionGroupUserSummaryList(Aws::Vector<TrafficDistributionGroupUserSummary>&& value) { m_trafficDistributionGroupUserSummaryList = std::move(value); }

    /**
     * <p>A list of traffic distribution group users.</p>
     */
    inline ListTrafficDistributionGroupUsersResult& WithTrafficDistributionGroupUserSummaryList(const Aws::Vector<TrafficDistributionGroupUserSummary>& value) { SetTrafficDistributionGroupUserSummaryList(value); return *this;}

    /**
     * <p>A list of traffic distribution group users.</p>
     */
    inline ListTrafficDistributionGroupUsersResult& WithTrafficDistributionGroupUserSummaryList(Aws::Vector<TrafficDistributionGroupUserSummary>&& value) { SetTrafficDistributionGroupUserSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of traffic distribution group users.</p>
     */
    inline ListTrafficDistributionGroupUsersResult& AddTrafficDistributionGroupUserSummaryList(const TrafficDistributionGroupUserSummary& value) { m_trafficDistributionGroupUserSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of traffic distribution group users.</p>
     */
    inline ListTrafficDistributionGroupUsersResult& AddTrafficDistributionGroupUserSummaryList(TrafficDistributionGroupUserSummary&& value) { m_trafficDistributionGroupUserSummaryList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTrafficDistributionGroupUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTrafficDistributionGroupUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTrafficDistributionGroupUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<TrafficDistributionGroupUserSummary> m_trafficDistributionGroupUserSummaryList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
