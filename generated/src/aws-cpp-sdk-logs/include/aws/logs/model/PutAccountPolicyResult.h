/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/AccountPolicy.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class PutAccountPolicyResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult() = default;
    AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account policy that you created.</p>
     */
    inline const AccountPolicy& GetAccountPolicy() const { return m_accountPolicy; }
    template<typename AccountPolicyT = AccountPolicy>
    void SetAccountPolicy(AccountPolicyT&& value) { m_accountPolicyHasBeenSet = true; m_accountPolicy = std::forward<AccountPolicyT>(value); }
    template<typename AccountPolicyT = AccountPolicy>
    PutAccountPolicyResult& WithAccountPolicy(AccountPolicyT&& value) { SetAccountPolicy(std::forward<AccountPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutAccountPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountPolicy m_accountPolicy;
    bool m_accountPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
