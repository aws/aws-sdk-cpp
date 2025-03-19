/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowSummary.h>
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
  class ListContactFlowsResult
  {
  public:
    AWS_CONNECT_API ListContactFlowsResult() = default;
    AWS_CONNECT_API ListContactFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListContactFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the flows.</p>
     */
    inline const Aws::Vector<ContactFlowSummary>& GetContactFlowSummaryList() const { return m_contactFlowSummaryList; }
    template<typename ContactFlowSummaryListT = Aws::Vector<ContactFlowSummary>>
    void SetContactFlowSummaryList(ContactFlowSummaryListT&& value) { m_contactFlowSummaryListHasBeenSet = true; m_contactFlowSummaryList = std::forward<ContactFlowSummaryListT>(value); }
    template<typename ContactFlowSummaryListT = Aws::Vector<ContactFlowSummary>>
    ListContactFlowsResult& WithContactFlowSummaryList(ContactFlowSummaryListT&& value) { SetContactFlowSummaryList(std::forward<ContactFlowSummaryListT>(value)); return *this;}
    template<typename ContactFlowSummaryListT = ContactFlowSummary>
    ListContactFlowsResult& AddContactFlowSummaryList(ContactFlowSummaryListT&& value) { m_contactFlowSummaryListHasBeenSet = true; m_contactFlowSummaryList.emplace_back(std::forward<ContactFlowSummaryListT>(value)); return *this; }
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
    ListContactFlowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContactFlowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowSummary> m_contactFlowSummaryList;
    bool m_contactFlowSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
