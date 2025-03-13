/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AssociatedContactSummary.h>
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
  class ListAssociatedContactsResult
  {
  public:
    AWS_CONNECT_API ListAssociatedContactsResult() = default;
    AWS_CONNECT_API ListAssociatedContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListAssociatedContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the contact summary for all the contacts in contact tree associated
     * with unique identifier.</p>
     */
    inline const Aws::Vector<AssociatedContactSummary>& GetContactSummaryList() const { return m_contactSummaryList; }
    template<typename ContactSummaryListT = Aws::Vector<AssociatedContactSummary>>
    void SetContactSummaryList(ContactSummaryListT&& value) { m_contactSummaryListHasBeenSet = true; m_contactSummaryList = std::forward<ContactSummaryListT>(value); }
    template<typename ContactSummaryListT = Aws::Vector<AssociatedContactSummary>>
    ListAssociatedContactsResult& WithContactSummaryList(ContactSummaryListT&& value) { SetContactSummaryList(std::forward<ContactSummaryListT>(value)); return *this;}
    template<typename ContactSummaryListT = AssociatedContactSummary>
    ListAssociatedContactsResult& AddContactSummaryList(ContactSummaryListT&& value) { m_contactSummaryListHasBeenSet = true; m_contactSummaryList.emplace_back(std::forward<ContactSummaryListT>(value)); return *this; }
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
    ListAssociatedContactsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssociatedContactsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedContactSummary> m_contactSummaryList;
    bool m_contactSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
