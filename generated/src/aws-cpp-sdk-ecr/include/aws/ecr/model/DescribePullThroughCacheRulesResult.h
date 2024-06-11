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
    AWS_ECR_API DescribePullThroughCacheRulesResult();
    AWS_ECR_API DescribePullThroughCacheRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribePullThroughCacheRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the pull through cache rules.</p>
     */
    inline const Aws::Vector<PullThroughCacheRule>& GetPullThroughCacheRules() const{ return m_pullThroughCacheRules; }
    inline void SetPullThroughCacheRules(const Aws::Vector<PullThroughCacheRule>& value) { m_pullThroughCacheRules = value; }
    inline void SetPullThroughCacheRules(Aws::Vector<PullThroughCacheRule>&& value) { m_pullThroughCacheRules = std::move(value); }
    inline DescribePullThroughCacheRulesResult& WithPullThroughCacheRules(const Aws::Vector<PullThroughCacheRule>& value) { SetPullThroughCacheRules(value); return *this;}
    inline DescribePullThroughCacheRulesResult& WithPullThroughCacheRules(Aws::Vector<PullThroughCacheRule>&& value) { SetPullThroughCacheRules(std::move(value)); return *this;}
    inline DescribePullThroughCacheRulesResult& AddPullThroughCacheRules(const PullThroughCacheRule& value) { m_pullThroughCacheRules.push_back(value); return *this; }
    inline DescribePullThroughCacheRulesResult& AddPullThroughCacheRules(PullThroughCacheRule&& value) { m_pullThroughCacheRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribePullThroughCacheRulesRequest</code> request. When the results of a
     * <code>DescribePullThroughCacheRulesRequest</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribePullThroughCacheRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePullThroughCacheRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePullThroughCacheRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePullThroughCacheRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePullThroughCacheRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePullThroughCacheRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PullThroughCacheRule> m_pullThroughCacheRules;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
