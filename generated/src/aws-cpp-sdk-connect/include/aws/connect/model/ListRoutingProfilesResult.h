/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RoutingProfileSummary.h>
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
  class ListRoutingProfilesResult
  {
  public:
    AWS_CONNECT_API ListRoutingProfilesResult();
    AWS_CONNECT_API ListRoutingProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListRoutingProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the routing profiles.</p>
     */
    inline const Aws::Vector<RoutingProfileSummary>& GetRoutingProfileSummaryList() const{ return m_routingProfileSummaryList; }

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline void SetRoutingProfileSummaryList(const Aws::Vector<RoutingProfileSummary>& value) { m_routingProfileSummaryList = value; }

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline void SetRoutingProfileSummaryList(Aws::Vector<RoutingProfileSummary>&& value) { m_routingProfileSummaryList = std::move(value); }

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline ListRoutingProfilesResult& WithRoutingProfileSummaryList(const Aws::Vector<RoutingProfileSummary>& value) { SetRoutingProfileSummaryList(value); return *this;}

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline ListRoutingProfilesResult& WithRoutingProfileSummaryList(Aws::Vector<RoutingProfileSummary>&& value) { SetRoutingProfileSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline ListRoutingProfilesResult& AddRoutingProfileSummaryList(const RoutingProfileSummary& value) { m_routingProfileSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the routing profiles.</p>
     */
    inline ListRoutingProfilesResult& AddRoutingProfileSummaryList(RoutingProfileSummary&& value) { m_routingProfileSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListRoutingProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListRoutingProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListRoutingProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RoutingProfileSummary> m_routingProfileSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
