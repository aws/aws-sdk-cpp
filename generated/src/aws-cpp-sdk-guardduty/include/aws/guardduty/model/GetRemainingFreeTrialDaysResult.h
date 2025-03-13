/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AccountFreeTrialInfo.h>
#include <aws/guardduty/model/UnprocessedAccount.h>
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
  class GetRemainingFreeTrialDaysResult
  {
  public:
    AWS_GUARDDUTY_API GetRemainingFreeTrialDaysResult() = default;
    AWS_GUARDDUTY_API GetRemainingFreeTrialDaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetRemainingFreeTrialDaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The member accounts which were included in a request and were processed
     * successfully.</p>
     */
    inline const Aws::Vector<AccountFreeTrialInfo>& GetAccounts() const { return m_accounts; }
    template<typename AccountsT = Aws::Vector<AccountFreeTrialInfo>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<AccountFreeTrialInfo>>
    GetRemainingFreeTrialDaysResult& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = AccountFreeTrialInfo>
    GetRemainingFreeTrialDaysResult& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The member account that was included in a request but for which the request
     * could not be processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const { return m_unprocessedAccounts; }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    void SetUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts = std::forward<UnprocessedAccountsT>(value); }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    GetRemainingFreeTrialDaysResult& WithUnprocessedAccounts(UnprocessedAccountsT&& value) { SetUnprocessedAccounts(std::forward<UnprocessedAccountsT>(value)); return *this;}
    template<typename UnprocessedAccountsT = UnprocessedAccount>
    GetRemainingFreeTrialDaysResult& AddUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts.emplace_back(std::forward<UnprocessedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRemainingFreeTrialDaysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountFreeTrialInfo> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
    bool m_unprocessedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
