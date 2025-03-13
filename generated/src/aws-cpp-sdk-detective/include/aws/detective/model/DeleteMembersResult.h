/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/UnprocessedAccount.h>
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
namespace Detective
{
namespace Model
{
  class DeleteMembersResult
  {
  public:
    AWS_DETECTIVE_API DeleteMembersResult() = default;
    AWS_DETECTIVE_API DeleteMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API DeleteMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    DeleteMembersResult& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    DeleteMembersResult& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of member accounts that Detective was not able to remove from the
     * behavior graph. For each member account, provides the reason that the deletion
     * could not be processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const { return m_unprocessedAccounts; }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    void SetUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts = std::forward<UnprocessedAccountsT>(value); }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    DeleteMembersResult& WithUnprocessedAccounts(UnprocessedAccountsT&& value) { SetUnprocessedAccounts(std::forward<UnprocessedAccountsT>(value)); return *this;}
    template<typename UnprocessedAccountsT = UnprocessedAccount>
    DeleteMembersResult& AddUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts.emplace_back(std::forward<UnprocessedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteMembersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
    bool m_unprocessedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
