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
    AWS_CLOUDWATCHLOGS_API DescribeIndexPoliciesResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeIndexPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeIndexPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the field index policies.</p>
     */
    inline const Aws::Vector<IndexPolicy>& GetIndexPolicies() const { return m_indexPolicies; }
    template<typename IndexPoliciesT = Aws::Vector<IndexPolicy>>
    void SetIndexPolicies(IndexPoliciesT&& value) { m_indexPoliciesHasBeenSet = true; m_indexPolicies = std::forward<IndexPoliciesT>(value); }
    template<typename IndexPoliciesT = Aws::Vector<IndexPolicy>>
    DescribeIndexPoliciesResult& WithIndexPolicies(IndexPoliciesT&& value) { SetIndexPolicies(std::forward<IndexPoliciesT>(value)); return *this;}
    template<typename IndexPoliciesT = IndexPolicy>
    DescribeIndexPoliciesResult& AddIndexPolicies(IndexPoliciesT&& value) { m_indexPoliciesHasBeenSet = true; m_indexPolicies.emplace_back(std::forward<IndexPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeIndexPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIndexPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IndexPolicy> m_indexPolicies;
    bool m_indexPoliciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
