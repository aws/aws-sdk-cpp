/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DisableResult
  {
  public:
    AWS_INSPECTOR2_API DisableResult();
    AWS_INSPECTOR2_API DisableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API DisableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the accounts that have had Amazon Inspector scans successfully
     * disabled. Details are provided for each account.</p>
     */
    inline const Aws::Vector<Account>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>Information on the accounts that have had Amazon Inspector scans successfully
     * disabled. Details are provided for each account.</p>
     */
    inline void SetAccounts(const Aws::Vector<Account>& value) { m_accounts = value; }

    /**
     * <p>Information on the accounts that have had Amazon Inspector scans successfully
     * disabled. Details are provided for each account.</p>
     */
    inline void SetAccounts(Aws::Vector<Account>&& value) { m_accounts = std::move(value); }

    /**
     * <p>Information on the accounts that have had Amazon Inspector scans successfully
     * disabled. Details are provided for each account.</p>
     */
    inline DisableResult& WithAccounts(const Aws::Vector<Account>& value) { SetAccounts(value); return *this;}

    /**
     * <p>Information on the accounts that have had Amazon Inspector scans successfully
     * disabled. Details are provided for each account.</p>
     */
    inline DisableResult& WithAccounts(Aws::Vector<Account>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>Information on the accounts that have had Amazon Inspector scans successfully
     * disabled. Details are provided for each account.</p>
     */
    inline DisableResult& AddAccounts(const Account& value) { m_accounts.push_back(value); return *this; }

    /**
     * <p>Information on the accounts that have had Amazon Inspector scans successfully
     * disabled. Details are provided for each account.</p>
     */
    inline DisableResult& AddAccounts(Account&& value) { m_accounts.push_back(std::move(value)); return *this; }


    /**
     * <p>Information on any accounts for which Amazon Inspector scans could not be
     * disabled. Details are provided for each account.</p>
     */
    inline const Aws::Vector<FailedAccount>& GetFailedAccounts() const{ return m_failedAccounts; }

    /**
     * <p>Information on any accounts for which Amazon Inspector scans could not be
     * disabled. Details are provided for each account.</p>
     */
    inline void SetFailedAccounts(const Aws::Vector<FailedAccount>& value) { m_failedAccounts = value; }

    /**
     * <p>Information on any accounts for which Amazon Inspector scans could not be
     * disabled. Details are provided for each account.</p>
     */
    inline void SetFailedAccounts(Aws::Vector<FailedAccount>&& value) { m_failedAccounts = std::move(value); }

    /**
     * <p>Information on any accounts for which Amazon Inspector scans could not be
     * disabled. Details are provided for each account.</p>
     */
    inline DisableResult& WithFailedAccounts(const Aws::Vector<FailedAccount>& value) { SetFailedAccounts(value); return *this;}

    /**
     * <p>Information on any accounts for which Amazon Inspector scans could not be
     * disabled. Details are provided for each account.</p>
     */
    inline DisableResult& WithFailedAccounts(Aws::Vector<FailedAccount>&& value) { SetFailedAccounts(std::move(value)); return *this;}

    /**
     * <p>Information on any accounts for which Amazon Inspector scans could not be
     * disabled. Details are provided for each account.</p>
     */
    inline DisableResult& AddFailedAccounts(const FailedAccount& value) { m_failedAccounts.push_back(value); return *this; }

    /**
     * <p>Information on any accounts for which Amazon Inspector scans could not be
     * disabled. Details are provided for each account.</p>
     */
    inline DisableResult& AddFailedAccounts(FailedAccount&& value) { m_failedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Account> m_accounts;

    Aws::Vector<FailedAccount> m_failedAccounts;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
