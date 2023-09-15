/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ViewSummary.h>
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
  class ListViewsResult
  {
  public:
    AWS_CONNECT_API ListViewsResult();
    AWS_CONNECT_API ListViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of view summaries.</p>
     */
    inline const Aws::Vector<ViewSummary>& GetViewsSummaryList() const{ return m_viewsSummaryList; }

    /**
     * <p>A list of view summaries.</p>
     */
    inline void SetViewsSummaryList(const Aws::Vector<ViewSummary>& value) { m_viewsSummaryList = value; }

    /**
     * <p>A list of view summaries.</p>
     */
    inline void SetViewsSummaryList(Aws::Vector<ViewSummary>&& value) { m_viewsSummaryList = std::move(value); }

    /**
     * <p>A list of view summaries.</p>
     */
    inline ListViewsResult& WithViewsSummaryList(const Aws::Vector<ViewSummary>& value) { SetViewsSummaryList(value); return *this;}

    /**
     * <p>A list of view summaries.</p>
     */
    inline ListViewsResult& WithViewsSummaryList(Aws::Vector<ViewSummary>&& value) { SetViewsSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of view summaries.</p>
     */
    inline ListViewsResult& AddViewsSummaryList(const ViewSummary& value) { m_viewsSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of view summaries.</p>
     */
    inline ListViewsResult& AddViewsSummaryList(ViewSummary&& value) { m_viewsSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListViewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListViewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListViewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListViewsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListViewsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListViewsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ViewSummary> m_viewsSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
