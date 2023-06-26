/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Prompt.h>
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
namespace Connect
{
namespace Model
{
  class SearchPromptsResult
  {
  public:
    AWS_CONNECT_API SearchPromptsResult();
    AWS_CONNECT_API SearchPromptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchPromptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the prompts.</p>
     */
    inline const Aws::Vector<Prompt>& GetPrompts() const{ return m_prompts; }

    /**
     * <p>Information about the prompts.</p>
     */
    inline void SetPrompts(const Aws::Vector<Prompt>& value) { m_prompts = value; }

    /**
     * <p>Information about the prompts.</p>
     */
    inline void SetPrompts(Aws::Vector<Prompt>&& value) { m_prompts = std::move(value); }

    /**
     * <p>Information about the prompts.</p>
     */
    inline SearchPromptsResult& WithPrompts(const Aws::Vector<Prompt>& value) { SetPrompts(value); return *this;}

    /**
     * <p>Information about the prompts.</p>
     */
    inline SearchPromptsResult& WithPrompts(Aws::Vector<Prompt>&& value) { SetPrompts(std::move(value)); return *this;}

    /**
     * <p>Information about the prompts.</p>
     */
    inline SearchPromptsResult& AddPrompts(const Prompt& value) { m_prompts.push_back(value); return *this; }

    /**
     * <p>Information about the prompts.</p>
     */
    inline SearchPromptsResult& AddPrompts(Prompt&& value) { m_prompts.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchPromptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchPromptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchPromptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of quick connects which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }

    /**
     * <p>The total number of quick connects which matched your search query.</p>
     */
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }

    /**
     * <p>The total number of quick connects which matched your search query.</p>
     */
    inline SearchPromptsResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchPromptsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchPromptsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchPromptsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Prompt> m_prompts;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
