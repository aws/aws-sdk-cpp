/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/PullThroughCacheRule.h>
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
namespace ECR
{
namespace Model
{
  class DescribePullThroughCacheRulesResult
  {
  public:
    AWS_ECR_API DescribePullThroughCacheRulesResult() = default;
    AWS_ECR_API DescribePullThroughCacheRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribePullThroughCacheRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the pull through cache rules.</p>
     */
    inline const Aws::Vector<PullThroughCacheRule>& GetPullThroughCacheRules() const { return m_pullThroughCacheRules; }
    template<typename PullThroughCacheRulesT = Aws::Vector<PullThroughCacheRule>>
    void SetPullThroughCacheRules(PullThroughCacheRulesT&& value) { m_pullThroughCacheRulesHasBeenSet = true; m_pullThroughCacheRules = std::forward<PullThroughCacheRulesT>(value); }
    template<typename PullThroughCacheRulesT = Aws::Vector<PullThroughCacheRule>>
    DescribePullThroughCacheRulesResult& WithPullThroughCacheRules(PullThroughCacheRulesT&& value) { SetPullThroughCacheRules(std::forward<PullThroughCacheRulesT>(value)); return *this;}
    template<typename PullThroughCacheRulesT = PullThroughCacheRule>
    DescribePullThroughCacheRulesResult& AddPullThroughCacheRules(PullThroughCacheRulesT&& value) { m_pullThroughCacheRulesHasBeenSet = true; m_pullThroughCacheRules.emplace_back(std::forward<PullThroughCacheRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribePullThroughCacheRulesRequest</code> request. When the results of a
     * <code>DescribePullThroughCacheRulesRequest</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribePullThroughCacheRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePullThroughCacheRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PullThroughCacheRule> m_pullThroughCacheRules;
    bool m_pullThroughCacheRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
