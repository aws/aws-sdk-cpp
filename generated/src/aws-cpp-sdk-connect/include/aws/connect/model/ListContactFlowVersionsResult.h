/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowVersionSummary.h>
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
  class ListContactFlowVersionsResult
  {
  public:
    AWS_CONNECT_API ListContactFlowVersionsResult() = default;
    AWS_CONNECT_API ListContactFlowVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListContactFlowVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of flow version summaries.</p>
     */
    inline const Aws::Vector<ContactFlowVersionSummary>& GetContactFlowVersionSummaryList() const { return m_contactFlowVersionSummaryList; }
    template<typename ContactFlowVersionSummaryListT = Aws::Vector<ContactFlowVersionSummary>>
    void SetContactFlowVersionSummaryList(ContactFlowVersionSummaryListT&& value) { m_contactFlowVersionSummaryListHasBeenSet = true; m_contactFlowVersionSummaryList = std::forward<ContactFlowVersionSummaryListT>(value); }
    template<typename ContactFlowVersionSummaryListT = Aws::Vector<ContactFlowVersionSummary>>
    ListContactFlowVersionsResult& WithContactFlowVersionSummaryList(ContactFlowVersionSummaryListT&& value) { SetContactFlowVersionSummaryList(std::forward<ContactFlowVersionSummaryListT>(value)); return *this;}
    template<typename ContactFlowVersionSummaryListT = ContactFlowVersionSummary>
    ListContactFlowVersionsResult& AddContactFlowVersionSummaryList(ContactFlowVersionSummaryListT&& value) { m_contactFlowVersionSummaryListHasBeenSet = true; m_contactFlowVersionSummaryList.emplace_back(std::forward<ContactFlowVersionSummaryListT>(value)); return *this; }
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
    ListContactFlowVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContactFlowVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowVersionSummary> m_contactFlowVersionSummaryList;
    bool m_contactFlowVersionSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
