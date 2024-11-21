/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/IndexPolicy.h>
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
  class DescribeIndexPoliciesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeIndexPoliciesResult();
    AWS_CLOUDWATCHLOGS_API DescribeIndexPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeIndexPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the field index policies.</p>
     */
    inline const Aws::Vector<IndexPolicy>& GetIndexPolicies() const{ return m_indexPolicies; }
    inline void SetIndexPolicies(const Aws::Vector<IndexPolicy>& value) { m_indexPolicies = value; }
    inline void SetIndexPolicies(Aws::Vector<IndexPolicy>&& value) { m_indexPolicies = std::move(value); }
    inline DescribeIndexPoliciesResult& WithIndexPolicies(const Aws::Vector<IndexPolicy>& value) { SetIndexPolicies(value); return *this;}
    inline DescribeIndexPoliciesResult& WithIndexPolicies(Aws::Vector<IndexPolicy>&& value) { SetIndexPolicies(std::move(value)); return *this;}
    inline DescribeIndexPoliciesResult& AddIndexPolicies(const IndexPolicy& value) { m_indexPolicies.push_back(value); return *this; }
    inline DescribeIndexPoliciesResult& AddIndexPolicies(IndexPolicy&& value) { m_indexPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeIndexPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeIndexPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeIndexPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeIndexPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeIndexPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeIndexPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IndexPolicy> m_indexPolicies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
