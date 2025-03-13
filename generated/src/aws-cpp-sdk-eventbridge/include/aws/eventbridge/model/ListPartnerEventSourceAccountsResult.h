/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/PartnerEventSourceAccount.h>
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
namespace EventBridge
{
namespace Model
{
  class ListPartnerEventSourceAccountsResult
  {
  public:
    AWS_EVENTBRIDGE_API ListPartnerEventSourceAccountsResult() = default;
    AWS_EVENTBRIDGE_API ListPartnerEventSourceAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API ListPartnerEventSourceAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of partner event sources returned by the operation.</p>
     */
    inline const Aws::Vector<PartnerEventSourceAccount>& GetPartnerEventSourceAccounts() const { return m_partnerEventSourceAccounts; }
    template<typename PartnerEventSourceAccountsT = Aws::Vector<PartnerEventSourceAccount>>
    void SetPartnerEventSourceAccounts(PartnerEventSourceAccountsT&& value) { m_partnerEventSourceAccountsHasBeenSet = true; m_partnerEventSourceAccounts = std::forward<PartnerEventSourceAccountsT>(value); }
    template<typename PartnerEventSourceAccountsT = Aws::Vector<PartnerEventSourceAccount>>
    ListPartnerEventSourceAccountsResult& WithPartnerEventSourceAccounts(PartnerEventSourceAccountsT&& value) { SetPartnerEventSourceAccounts(std::forward<PartnerEventSourceAccountsT>(value)); return *this;}
    template<typename PartnerEventSourceAccountsT = PartnerEventSourceAccount>
    ListPartnerEventSourceAccountsResult& AddPartnerEventSourceAccounts(PartnerEventSourceAccountsT&& value) { m_partnerEventSourceAccountsHasBeenSet = true; m_partnerEventSourceAccounts.emplace_back(std::forward<PartnerEventSourceAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating there are more results available. If there are no more
     * results, no token is included in the response.</p> <p>The value of
     * <code>nextToken</code> is a unique pagination token for each page. To retrieve
     * the next page of results, make the call again using the returned token. Keep all
     * other arguments unchanged.</p> <p> Using an expired pagination token results in
     * an <code>HTTP 400 InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPartnerEventSourceAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPartnerEventSourceAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PartnerEventSourceAccount> m_partnerEventSourceAccounts;
    bool m_partnerEventSourceAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
