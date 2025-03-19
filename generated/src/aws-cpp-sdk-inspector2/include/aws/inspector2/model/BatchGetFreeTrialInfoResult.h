/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FreeTrialAccountInfo.h>
#include <aws/inspector2/model/FreeTrialInfoError.h>
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
  class BatchGetFreeTrialInfoResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult() = default;
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline const Aws::Vector<FreeTrialAccountInfo>& GetAccounts() const { return m_accounts; }
    template<typename AccountsT = Aws::Vector<FreeTrialAccountInfo>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<FreeTrialAccountInfo>>
    BatchGetFreeTrialInfoResult& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = FreeTrialAccountInfo>
    BatchGetFreeTrialInfoResult& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline const Aws::Vector<FreeTrialInfoError>& GetFailedAccounts() const { return m_failedAccounts; }
    template<typename FailedAccountsT = Aws::Vector<FreeTrialInfoError>>
    void SetFailedAccounts(FailedAccountsT&& value) { m_failedAccountsHasBeenSet = true; m_failedAccounts = std::forward<FailedAccountsT>(value); }
    template<typename FailedAccountsT = Aws::Vector<FreeTrialInfoError>>
    BatchGetFreeTrialInfoResult& WithFailedAccounts(FailedAccountsT&& value) { SetFailedAccounts(std::forward<FailedAccountsT>(value)); return *this;}
    template<typename FailedAccountsT = FreeTrialInfoError>
    BatchGetFreeTrialInfoResult& AddFailedAccounts(FailedAccountsT&& value) { m_failedAccountsHasBeenSet = true; m_failedAccounts.emplace_back(std::forward<FailedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetFreeTrialInfoResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FreeTrialAccountInfo> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::Vector<FreeTrialInfoError> m_failedAccounts;
    bool m_failedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
