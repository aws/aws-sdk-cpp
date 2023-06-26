/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QuickConnect.h>
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
  class SearchQuickConnectsResult
  {
  public:
    AWS_CONNECT_API SearchQuickConnectsResult();
    AWS_CONNECT_API SearchQuickConnectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchQuickConnectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the quick connects.</p>
     */
    inline const Aws::Vector<QuickConnect>& GetQuickConnects() const{ return m_quickConnects; }

    /**
     * <p>Information about the quick connects.</p>
     */
    inline void SetQuickConnects(const Aws::Vector<QuickConnect>& value) { m_quickConnects = value; }

    /**
     * <p>Information about the quick connects.</p>
     */
    inline void SetQuickConnects(Aws::Vector<QuickConnect>&& value) { m_quickConnects = std::move(value); }

    /**
     * <p>Information about the quick connects.</p>
     */
    inline SearchQuickConnectsResult& WithQuickConnects(const Aws::Vector<QuickConnect>& value) { SetQuickConnects(value); return *this;}

    /**
     * <p>Information about the quick connects.</p>
     */
    inline SearchQuickConnectsResult& WithQuickConnects(Aws::Vector<QuickConnect>&& value) { SetQuickConnects(std::move(value)); return *this;}

    /**
     * <p>Information about the quick connects.</p>
     */
    inline SearchQuickConnectsResult& AddQuickConnects(const QuickConnect& value) { m_quickConnects.push_back(value); return *this; }

    /**
     * <p>Information about the quick connects.</p>
     */
    inline SearchQuickConnectsResult& AddQuickConnects(QuickConnect&& value) { m_quickConnects.push_back(std::move(value)); return *this; }


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
    inline SearchQuickConnectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchQuickConnectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchQuickConnectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline SearchQuickConnectsResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchQuickConnectsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchQuickConnectsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchQuickConnectsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<QuickConnect> m_quickConnects;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
