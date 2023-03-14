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
    AWS_GUARDDUTY_API GetRemainingFreeTrialDaysResult();
    AWS_GUARDDUTY_API GetRemainingFreeTrialDaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetRemainingFreeTrialDaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The member accounts which were included in a request and were processed
     * successfully.</p>
     */
    inline const Aws::Vector<AccountFreeTrialInfo>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The member accounts which were included in a request and were processed
     * successfully.</p>
     */
    inline void SetAccounts(const Aws::Vector<AccountFreeTrialInfo>& value) { m_accounts = value; }

    /**
     * <p>The member accounts which were included in a request and were processed
     * successfully.</p>
     */
    inline void SetAccounts(Aws::Vector<AccountFreeTrialInfo>&& value) { m_accounts = std::move(value); }

    /**
     * <p>The member accounts which were included in a request and were processed
     * successfully.</p>
     */
    inline GetRemainingFreeTrialDaysResult& WithAccounts(const Aws::Vector<AccountFreeTrialInfo>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The member accounts which were included in a request and were processed
     * successfully.</p>
     */
    inline GetRemainingFreeTrialDaysResult& WithAccounts(Aws::Vector<AccountFreeTrialInfo>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The member accounts which were included in a request and were processed
     * successfully.</p>
     */
    inline GetRemainingFreeTrialDaysResult& AddAccounts(const AccountFreeTrialInfo& value) { m_accounts.push_back(value); return *this; }

    /**
     * <p>The member accounts which were included in a request and were processed
     * successfully.</p>
     */
    inline GetRemainingFreeTrialDaysResult& AddAccounts(AccountFreeTrialInfo&& value) { m_accounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The member account that was included in a request but for which the request
     * could not be processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>The member account that was included in a request but for which the request
     * could not be processed.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>The member account that was included in a request but for which the request
     * could not be processed.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>The member account that was included in a request but for which the request
     * could not be processed.</p>
     */
    inline GetRemainingFreeTrialDaysResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>The member account that was included in a request but for which the request
     * could not be processed.</p>
     */
    inline GetRemainingFreeTrialDaysResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>The member account that was included in a request but for which the request
     * could not be processed.</p>
     */
    inline GetRemainingFreeTrialDaysResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>The member account that was included in a request but for which the request
     * could not be processed.</p>
     */
    inline GetRemainingFreeTrialDaysResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRemainingFreeTrialDaysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRemainingFreeTrialDaysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRemainingFreeTrialDaysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AccountFreeTrialInfo> m_accounts;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
