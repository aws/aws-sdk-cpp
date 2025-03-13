/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowModuleSummary.h>
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
  class ListContactFlowModulesResult
  {
  public:
    AWS_CONNECT_API ListContactFlowModulesResult() = default;
    AWS_CONNECT_API ListContactFlowModulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListContactFlowModulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the flow module.</p>
     */
    inline const Aws::Vector<ContactFlowModuleSummary>& GetContactFlowModulesSummaryList() const { return m_contactFlowModulesSummaryList; }
    template<typename ContactFlowModulesSummaryListT = Aws::Vector<ContactFlowModuleSummary>>
    void SetContactFlowModulesSummaryList(ContactFlowModulesSummaryListT&& value) { m_contactFlowModulesSummaryListHasBeenSet = true; m_contactFlowModulesSummaryList = std::forward<ContactFlowModulesSummaryListT>(value); }
    template<typename ContactFlowModulesSummaryListT = Aws::Vector<ContactFlowModuleSummary>>
    ListContactFlowModulesResult& WithContactFlowModulesSummaryList(ContactFlowModulesSummaryListT&& value) { SetContactFlowModulesSummaryList(std::forward<ContactFlowModulesSummaryListT>(value)); return *this;}
    template<typename ContactFlowModulesSummaryListT = ContactFlowModuleSummary>
    ListContactFlowModulesResult& AddContactFlowModulesSummaryList(ContactFlowModulesSummaryListT&& value) { m_contactFlowModulesSummaryListHasBeenSet = true; m_contactFlowModulesSummaryList.emplace_back(std::forward<ContactFlowModulesSummaryListT>(value)); return *this; }
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
    ListContactFlowModulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContactFlowModulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowModuleSummary> m_contactFlowModulesSummaryList;
    bool m_contactFlowModulesSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
