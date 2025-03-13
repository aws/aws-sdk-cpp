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
    AWS_CONNECT_API SearchContactFlowsResult() = default;
    AWS_CONNECT_API SearchContactFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchContactFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the flows.</p>
     */
    inline const Aws::Vector<ContactFlow>& GetContactFlows() const { return m_contactFlows; }
    template<typename ContactFlowsT = Aws::Vector<ContactFlow>>
    void SetContactFlows(ContactFlowsT&& value) { m_contactFlowsHasBeenSet = true; m_contactFlows = std::forward<ContactFlowsT>(value); }
    template<typename ContactFlowsT = Aws::Vector<ContactFlow>>
    SearchContactFlowsResult& WithContactFlows(ContactFlowsT&& value) { SetContactFlows(std::forward<ContactFlowsT>(value)); return *this;}
    template<typename ContactFlowsT = ContactFlow>
    SearchContactFlowsResult& AddContactFlows(ContactFlowsT&& value) { m_contactFlowsHasBeenSet = true; m_contactFlows.emplace_back(std::forward<ContactFlowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchContactFlowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of flows which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCountHasBeenSet = true; m_approximateTotalCount = value; }
    inline SearchContactFlowsResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchContactFlowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlow> m_contactFlows;
    bool m_contactFlowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    long long m_approximateTotalCount{0};
    bool m_approximateTotalCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
