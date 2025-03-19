/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/AdminAccountSummary.h>
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
namespace FMS
{
namespace Model
{
  class ListAdminAccountsForOrganizationResult
  {
  public:
    AWS_FMS_API ListAdminAccountsForOrganizationResult() = default;
    AWS_FMS_API ListAdminAccountsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListAdminAccountsForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Firewall Manager administrator accounts within the organization
     * that were onboarded as administrators by <a>AssociateAdminAccount</a> or
     * <a>PutAdminAccount</a>.</p>
     */
    inline const Aws::Vector<AdminAccountSummary>& GetAdminAccounts() const { return m_adminAccounts; }
    template<typename AdminAccountsT = Aws::Vector<AdminAccountSummary>>
    void SetAdminAccounts(AdminAccountsT&& value) { m_adminAccountsHasBeenSet = true; m_adminAccounts = std::forward<AdminAccountsT>(value); }
    template<typename AdminAccountsT = Aws::Vector<AdminAccountSummary>>
    ListAdminAccountsForOrganizationResult& WithAdminAccounts(AdminAccountsT&& value) { SetAdminAccounts(std::forward<AdminAccountsT>(value)); return *this;}
    template<typename AdminAccountsT = AdminAccountSummary>
    ListAdminAccountsForOrganizationResult& AddAdminAccounts(AdminAccountsT&& value) { m_adminAccountsHasBeenSet = true; m_adminAccounts.emplace_back(std::forward<AdminAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAdminAccountsForOrganizationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAdminAccountsForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdminAccountSummary> m_adminAccounts;
    bool m_adminAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
