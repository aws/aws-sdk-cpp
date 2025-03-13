/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/AccountLimit.h>
#include <aws/lambda/model/AccountUsage.h>
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
namespace Lambda
{
namespace Model
{
  class GetAccountSettingsResult
  {
  public:
    AWS_LAMBDA_API GetAccountSettingsResult() = default;
    AWS_LAMBDA_API GetAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API GetAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Limits that are related to concurrency and code storage.</p>
     */
    inline const AccountLimit& GetAccountLimit() const { return m_accountLimit; }
    template<typename AccountLimitT = AccountLimit>
    void SetAccountLimit(AccountLimitT&& value) { m_accountLimitHasBeenSet = true; m_accountLimit = std::forward<AccountLimitT>(value); }
    template<typename AccountLimitT = AccountLimit>
    GetAccountSettingsResult& WithAccountLimit(AccountLimitT&& value) { SetAccountLimit(std::forward<AccountLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of functions and amount of storage in use.</p>
     */
    inline const AccountUsage& GetAccountUsage() const { return m_accountUsage; }
    template<typename AccountUsageT = AccountUsage>
    void SetAccountUsage(AccountUsageT&& value) { m_accountUsageHasBeenSet = true; m_accountUsage = std::forward<AccountUsageT>(value); }
    template<typename AccountUsageT = AccountUsage>
    GetAccountSettingsResult& WithAccountUsage(AccountUsageT&& value) { SetAccountUsage(std::forward<AccountUsageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountLimit m_accountLimit;
    bool m_accountLimitHasBeenSet = false;

    AccountUsage m_accountUsage;
    bool m_accountUsageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
