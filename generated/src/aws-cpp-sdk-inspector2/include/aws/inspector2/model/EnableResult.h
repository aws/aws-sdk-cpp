/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Account.h>
#include <aws/inspector2/model/FailedAccount.h>
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
namespace Inspector2
{
namespace Model
{
  class EnableResult
  {
  public:
    AWS_INSPECTOR2_API EnableResult() = default;
    AWS_INSPECTOR2_API EnableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API EnableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information on the accounts that have had Amazon Inspector scans successfully
     * enabled. Details are provided for each account.</p>
     */
    inline const Aws::Vector<Account>& GetAccounts() const { return m_accounts; }
    template<typename AccountsT = Aws::Vector<Account>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Account>>
    EnableResult& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Account>
    EnableResult& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information on any accounts for which Amazon Inspector scans could not be
     * enabled. Details are provided for each account.</p>
     */
    inline const Aws::Vector<FailedAccount>& GetFailedAccounts() const { return m_failedAccounts; }
    template<typename FailedAccountsT = Aws::Vector<FailedAccount>>
    void SetFailedAccounts(FailedAccountsT&& value) { m_failedAccountsHasBeenSet = true; m_failedAccounts = std::forward<FailedAccountsT>(value); }
    template<typename FailedAccountsT = Aws::Vector<FailedAccount>>
    EnableResult& WithFailedAccounts(FailedAccountsT&& value) { SetFailedAccounts(std::forward<FailedAccountsT>(value)); return *this;}
    template<typename FailedAccountsT = FailedAccount>
    EnableResult& AddFailedAccounts(FailedAccountsT&& value) { m_failedAccountsHasBeenSet = true; m_failedAccounts.emplace_back(std::forward<FailedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EnableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Account> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::Vector<FailedAccount> m_failedAccounts;
    bool m_failedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
