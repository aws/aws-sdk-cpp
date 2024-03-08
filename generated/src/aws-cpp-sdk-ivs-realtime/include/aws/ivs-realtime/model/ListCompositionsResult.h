/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/CompositionSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListCompositionsResult
  {
  public:
    AWS_IVSREALTIME_API ListCompositionsResult();
    AWS_IVSREALTIME_API ListCompositionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListCompositionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of the matching Compositions (summary information only).</p>
     */
    inline const Aws::Vector<CompositionSummary>& GetCompositions() const{ return m_compositions; }

    /**
     * <p>List of the matching Compositions (summary information only).</p>
     */
    inline void SetCompositions(const Aws::Vector<CompositionSummary>& value) { m_compositions = value; }

    /**
     * <p>List of the matching Compositions (summary information only).</p>
     */
    inline void SetCompositions(Aws::Vector<CompositionSummary>&& value) { m_compositions = std::move(value); }

    /**
     * <p>List of the matching Compositions (summary information only).</p>
     */
    inline ListCompositionsResult& WithCompositions(const Aws::Vector<CompositionSummary>& value) { SetCompositions(value); return *this;}

    /**
     * <p>List of the matching Compositions (summary information only).</p>
     */
    inline ListCompositionsResult& WithCompositions(Aws::Vector<CompositionSummary>&& value) { SetCompositions(std::move(value)); return *this;}

    /**
     * <p>List of the matching Compositions (summary information only).</p>
     */
    inline ListCompositionsResult& AddCompositions(const CompositionSummary& value) { m_compositions.push_back(value); return *this; }

    /**
     * <p>List of the matching Compositions (summary information only).</p>
     */
    inline ListCompositionsResult& AddCompositions(CompositionSummary&& value) { m_compositions.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more compositions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more compositions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more compositions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more compositions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more compositions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListCompositionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more compositions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListCompositionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more compositions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListCompositionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCompositionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCompositionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCompositionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CompositionSummary> m_compositions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
