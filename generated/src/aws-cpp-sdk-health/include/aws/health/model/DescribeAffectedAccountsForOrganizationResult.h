/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/model/EventScopeCode.h>
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
namespace Health
{
namespace Model
{
  class DescribeAffectedAccountsForOrganizationResult
  {
  public:
    AWS_HEALTH_API DescribeAffectedAccountsForOrganizationResult() = default;
    AWS_HEALTH_API DescribeAffectedAccountsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeAffectedAccountsForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAffectedAccounts() const { return m_affectedAccounts; }
    template<typename AffectedAccountsT = Aws::Vector<Aws::String>>
    void SetAffectedAccounts(AffectedAccountsT&& value) { m_affectedAccountsHasBeenSet = true; m_affectedAccounts = std::forward<AffectedAccountsT>(value); }
    template<typename AffectedAccountsT = Aws::Vector<Aws::String>>
    DescribeAffectedAccountsForOrganizationResult& WithAffectedAccounts(AffectedAccountsT&& value) { SetAffectedAccounts(std::forward<AffectedAccountsT>(value)); return *this;}
    template<typename AffectedAccountsT = Aws::String>
    DescribeAffectedAccountsForOrganizationResult& AddAffectedAccounts(AffectedAccountsT&& value) { m_affectedAccountsHasBeenSet = true; m_affectedAccounts.emplace_back(std::forward<AffectedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline EventScopeCode GetEventScopeCode() const { return m_eventScopeCode; }
    inline void SetEventScopeCode(EventScopeCode value) { m_eventScopeCodeHasBeenSet = true; m_eventScopeCode = value; }
    inline DescribeAffectedAccountsForOrganizationResult& WithEventScopeCode(EventScopeCode value) { SetEventScopeCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAffectedAccountsForOrganizationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAffectedAccountsForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_affectedAccounts;
    bool m_affectedAccountsHasBeenSet = false;

    EventScopeCode m_eventScopeCode{EventScopeCode::NOT_SET};
    bool m_eventScopeCodeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
