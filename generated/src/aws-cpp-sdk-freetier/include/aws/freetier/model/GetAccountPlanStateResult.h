/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/freetier/model/AccountPlanType.h>
#include <aws/freetier/model/AccountPlanStatus.h>
#include <aws/freetier/model/MonetaryAmount.h>
#include <aws/core/utils/DateTime.h>
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
namespace FreeTier
{
namespace Model
{
  class GetAccountPlanStateResult
  {
  public:
    AWS_FREETIER_API GetAccountPlanStateResult() = default;
    AWS_FREETIER_API GetAccountPlanStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FREETIER_API GetAccountPlanStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A unique identifier that identifies the account. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetAccountPlanStateResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The plan type for the account. </p>
     */
    inline AccountPlanType GetAccountPlanType() const { return m_accountPlanType; }
    inline void SetAccountPlanType(AccountPlanType value) { m_accountPlanTypeHasBeenSet = true; m_accountPlanType = value; }
    inline GetAccountPlanStateResult& WithAccountPlanType(AccountPlanType value) { SetAccountPlanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status for the account plan. </p>
     */
    inline AccountPlanStatus GetAccountPlanStatus() const { return m_accountPlanStatus; }
    inline void SetAccountPlanStatus(AccountPlanStatus value) { m_accountPlanStatusHasBeenSet = true; m_accountPlanStatus = value; }
    inline GetAccountPlanStateResult& WithAccountPlanStatus(AccountPlanStatus value) { SetAccountPlanStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of credits remaining for the account. </p>
     */
    inline const MonetaryAmount& GetAccountPlanRemainingCredits() const { return m_accountPlanRemainingCredits; }
    template<typename AccountPlanRemainingCreditsT = MonetaryAmount>
    void SetAccountPlanRemainingCredits(AccountPlanRemainingCreditsT&& value) { m_accountPlanRemainingCreditsHasBeenSet = true; m_accountPlanRemainingCredits = std::forward<AccountPlanRemainingCreditsT>(value); }
    template<typename AccountPlanRemainingCreditsT = MonetaryAmount>
    GetAccountPlanStateResult& WithAccountPlanRemainingCredits(AccountPlanRemainingCreditsT&& value) { SetAccountPlanRemainingCredits(std::forward<AccountPlanRemainingCreditsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp for when the current account plan expires. </p>
     */
    inline const Aws::Utils::DateTime& GetAccountPlanExpirationDate() const { return m_accountPlanExpirationDate; }
    template<typename AccountPlanExpirationDateT = Aws::Utils::DateTime>
    void SetAccountPlanExpirationDate(AccountPlanExpirationDateT&& value) { m_accountPlanExpirationDateHasBeenSet = true; m_accountPlanExpirationDate = std::forward<AccountPlanExpirationDateT>(value); }
    template<typename AccountPlanExpirationDateT = Aws::Utils::DateTime>
    GetAccountPlanStateResult& WithAccountPlanExpirationDate(AccountPlanExpirationDateT&& value) { SetAccountPlanExpirationDate(std::forward<AccountPlanExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountPlanStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AccountPlanType m_accountPlanType{AccountPlanType::NOT_SET};
    bool m_accountPlanTypeHasBeenSet = false;

    AccountPlanStatus m_accountPlanStatus{AccountPlanStatus::NOT_SET};
    bool m_accountPlanStatusHasBeenSet = false;

    MonetaryAmount m_accountPlanRemainingCredits;
    bool m_accountPlanRemainingCreditsHasBeenSet = false;

    Aws::Utils::DateTime m_accountPlanExpirationDate{};
    bool m_accountPlanExpirationDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
