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
    AWS_CLOUDWATCHLOGS_API DescribeAccountPoliciesResult();
    AWS_CLOUDWATCHLOGS_API DescribeAccountPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeAccountPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain information about the CloudWatch Logs
     * account policies that match the specified filters.</p>
     */
    inline const Aws::Vector<AccountPolicy>& GetAccountPolicies() const{ return m_accountPolicies; }
    inline void SetAccountPolicies(const Aws::Vector<AccountPolicy>& value) { m_accountPolicies = value; }
    inline void SetAccountPolicies(Aws::Vector<AccountPolicy>&& value) { m_accountPolicies = std::move(value); }
    inline DescribeAccountPoliciesResult& WithAccountPolicies(const Aws::Vector<AccountPolicy>& value) { SetAccountPolicies(value); return *this;}
    inline DescribeAccountPoliciesResult& WithAccountPolicies(Aws::Vector<AccountPolicy>&& value) { SetAccountPolicies(std::move(value)); return *this;}
    inline DescribeAccountPoliciesResult& AddAccountPolicies(const AccountPolicy& value) { m_accountPolicies.push_back(value); return *this; }
    inline DescribeAccountPoliciesResult& AddAccountPolicies(AccountPolicy&& value) { m_accountPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. The token expires
     * after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeAccountPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAccountPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAccountPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccountPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccountPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccountPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountPolicy> m_accountPolicies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
