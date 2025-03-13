/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AdminAccount.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListOrganizationAdminAccountsResult
  {
  public:
    AWS_GUARDDUTY_API ListOrganizationAdminAccountsResult() = default;
    AWS_GUARDDUTY_API ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListOrganizationAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of accounts configured as GuardDuty delegated administrators.</p>
     */
    inline const Aws::Vector<AdminAccount>& GetAdminAccounts() const { return m_adminAccounts; }
    template<typename AdminAccountsT = Aws::Vector<AdminAccount>>
    void SetAdminAccounts(AdminAccountsT&& value) { m_adminAccountsHasBeenSet = true; m_adminAccounts = std::forward<AdminAccountsT>(value); }
    template<typename AdminAccountsT = Aws::Vector<AdminAccount>>
    ListOrganizationAdminAccountsResult& WithAdminAccounts(AdminAccountsT&& value) { SetAdminAccounts(std::forward<AdminAccountsT>(value)); return *this;}
    template<typename AdminAccountsT = AdminAccount>
    ListOrganizationAdminAccountsResult& AddAdminAccounts(AdminAccountsT&& value) { m_adminAccountsHasBeenSet = true; m_adminAccounts.emplace_back(std::forward<AdminAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationAdminAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationAdminAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdminAccount> m_adminAccounts;
    bool m_adminAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
