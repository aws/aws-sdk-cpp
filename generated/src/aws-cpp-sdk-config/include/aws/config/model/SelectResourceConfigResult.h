/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/QueryInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{
  class SelectResourceConfigResult
  {
  public:
    AWS_CONFIGSERVICE_API SelectResourceConfigResult();
    AWS_CONFIGSERVICE_API SelectResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API SelectResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the results for the SQL query.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<Aws::String>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<Aws::String>&& value) { m_results = std::move(value); }
    inline SelectResourceConfigResult& WithResults(const Aws::Vector<Aws::String>& value) { SetResults(value); return *this;}
    inline SelectResourceConfigResult& WithResults(Aws::Vector<Aws::String>&& value) { SetResults(std::move(value)); return *this;}
    inline SelectResourceConfigResult& AddResults(const Aws::String& value) { m_results.push_back(value); return *this; }
    inline SelectResourceConfigResult& AddResults(Aws::String&& value) { m_results.push_back(std::move(value)); return *this; }
    inline SelectResourceConfigResult& AddResults(const char* value) { m_results.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the <code>QueryInfo</code> object.</p>
     */
    inline const QueryInfo& GetQueryInfo() const{ return m_queryInfo; }
    inline void SetQueryInfo(const QueryInfo& value) { m_queryInfo = value; }
    inline void SetQueryInfo(QueryInfo&& value) { m_queryInfo = std::move(value); }
    inline SelectResourceConfigResult& WithQueryInfo(const QueryInfo& value) { SetQueryInfo(value); return *this;}
    inline SelectResourceConfigResult& WithQueryInfo(QueryInfo&& value) { SetQueryInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SelectResourceConfigResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SelectResourceConfigResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SelectResourceConfigResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SelectResourceConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SelectResourceConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SelectResourceConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_results;

    QueryInfo m_queryInfo;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
