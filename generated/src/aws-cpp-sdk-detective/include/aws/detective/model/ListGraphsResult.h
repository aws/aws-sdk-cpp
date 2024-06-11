﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/Graph.h>
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
namespace Detective
{
namespace Model
{
  class ListGraphsResult
  {
  public:
    AWS_DETECTIVE_API ListGraphsResult();
    AWS_DETECTIVE_API ListGraphsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListGraphsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of behavior graphs that the account is an administrator account
     * for.</p>
     */
    inline const Aws::Vector<Graph>& GetGraphList() const{ return m_graphList; }
    inline void SetGraphList(const Aws::Vector<Graph>& value) { m_graphList = value; }
    inline void SetGraphList(Aws::Vector<Graph>&& value) { m_graphList = std::move(value); }
    inline ListGraphsResult& WithGraphList(const Aws::Vector<Graph>& value) { SetGraphList(value); return *this;}
    inline ListGraphsResult& WithGraphList(Aws::Vector<Graph>&& value) { SetGraphList(std::move(value)); return *this;}
    inline ListGraphsResult& AddGraphList(const Graph& value) { m_graphList.push_back(value); return *this; }
    inline ListGraphsResult& AddGraphList(Graph&& value) { m_graphList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more behavior graphs remaining in the results, then this is the
     * pagination token to use to request the next page of behavior graphs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGraphsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGraphsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGraphsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGraphsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGraphsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGraphsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Graph> m_graphList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
