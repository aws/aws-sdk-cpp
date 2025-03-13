/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/AccountPolicy.h>
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
  class DescribeAccountPoliciesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeAccountPoliciesResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeAccountPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeAccountPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain information about the CloudWatch Logs
     * account policies that match the specified filters.</p>
     */
    inline const Aws::Vector<AccountPolicy>& GetAccountPolicies() const { return m_accountPolicies; }
    template<typename AccountPoliciesT = Aws::Vector<AccountPolicy>>
    void SetAccountPolicies(AccountPoliciesT&& value) { m_accountPoliciesHasBeenSet = true; m_accountPolicies = std::forward<AccountPoliciesT>(value); }
    template<typename AccountPoliciesT = Aws::Vector<AccountPolicy>>
    DescribeAccountPoliciesResult& WithAccountPolicies(AccountPoliciesT&& value) { SetAccountPolicies(std::forward<AccountPoliciesT>(value)); return *this;}
    template<typename AccountPoliciesT = AccountPolicy>
    DescribeAccountPoliciesResult& AddAccountPolicies(AccountPoliciesT&& value) { m_accountPoliciesHasBeenSet = true; m_accountPolicies.emplace_back(std::forward<AccountPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAccountPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountPolicy> m_accountPolicies;
    bool m_accountPoliciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
