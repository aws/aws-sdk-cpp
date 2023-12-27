/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ViewVersionSummary.h>
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
  class ListViewVersionsResult
  {
  public:
    AWS_CONNECT_API ListViewVersionsResult();
    AWS_CONNECT_API ListViewVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListViewVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of view version summaries.</p>
     */
    inline const Aws::Vector<ViewVersionSummary>& GetViewVersionSummaryList() const{ return m_viewVersionSummaryList; }

    /**
     * <p>A list of view version summaries.</p>
     */
    inline void SetViewVersionSummaryList(const Aws::Vector<ViewVersionSummary>& value) { m_viewVersionSummaryList = value; }

    /**
     * <p>A list of view version summaries.</p>
     */
    inline void SetViewVersionSummaryList(Aws::Vector<ViewVersionSummary>&& value) { m_viewVersionSummaryList = std::move(value); }

    /**
     * <p>A list of view version summaries.</p>
     */
    inline ListViewVersionsResult& WithViewVersionSummaryList(const Aws::Vector<ViewVersionSummary>& value) { SetViewVersionSummaryList(value); return *this;}

    /**
     * <p>A list of view version summaries.</p>
     */
    inline ListViewVersionsResult& WithViewVersionSummaryList(Aws::Vector<ViewVersionSummary>&& value) { SetViewVersionSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of view version summaries.</p>
     */
    inline ListViewVersionsResult& AddViewVersionSummaryList(const ViewVersionSummary& value) { m_viewVersionSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of view version summaries.</p>
     */
    inline ListViewVersionsResult& AddViewVersionSummaryList(ViewVersionSummary&& value) { m_viewVersionSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListViewVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListViewVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline ListViewVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListViewVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListViewVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListViewVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ViewVersionSummary> m_viewVersionSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
