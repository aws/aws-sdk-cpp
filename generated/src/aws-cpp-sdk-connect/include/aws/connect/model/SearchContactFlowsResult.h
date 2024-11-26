/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlow.h>
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
  class SearchContactFlowsResult
  {
  public:
    AWS_CONNECT_API SearchContactFlowsResult();
    AWS_CONNECT_API SearchContactFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchContactFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the flows.</p>
     */
    inline const Aws::Vector<ContactFlow>& GetContactFlows() const{ return m_contactFlows; }
    inline void SetContactFlows(const Aws::Vector<ContactFlow>& value) { m_contactFlows = value; }
    inline void SetContactFlows(Aws::Vector<ContactFlow>&& value) { m_contactFlows = std::move(value); }
    inline SearchContactFlowsResult& WithContactFlows(const Aws::Vector<ContactFlow>& value) { SetContactFlows(value); return *this;}
    inline SearchContactFlowsResult& WithContactFlows(Aws::Vector<ContactFlow>&& value) { SetContactFlows(std::move(value)); return *this;}
    inline SearchContactFlowsResult& AddContactFlows(const ContactFlow& value) { m_contactFlows.push_back(value); return *this; }
    inline SearchContactFlowsResult& AddContactFlows(ContactFlow&& value) { m_contactFlows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchContactFlowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchContactFlowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchContactFlowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of flows which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }
    inline SearchContactFlowsResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchContactFlowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchContactFlowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchContactFlowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlow> m_contactFlows;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
