/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelInvocationJobSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListModelInvocationJobsResult
  {
  public:
    AWS_BEDROCK_API ListModelInvocationJobsResult();
    AWS_BEDROCK_API ListModelInvocationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListModelInvocationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more results than can fit in the response, a
     * <code>nextToken</code> is returned. Use the <code>nextToken</code> in a request
     * to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListModelInvocationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListModelInvocationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListModelInvocationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items, each of which contains a summary about a batch inference
     * job.</p>
     */
    inline const Aws::Vector<ModelInvocationJobSummary>& GetInvocationJobSummaries() const{ return m_invocationJobSummaries; }
    inline void SetInvocationJobSummaries(const Aws::Vector<ModelInvocationJobSummary>& value) { m_invocationJobSummaries = value; }
    inline void SetInvocationJobSummaries(Aws::Vector<ModelInvocationJobSummary>&& value) { m_invocationJobSummaries = std::move(value); }
    inline ListModelInvocationJobsResult& WithInvocationJobSummaries(const Aws::Vector<ModelInvocationJobSummary>& value) { SetInvocationJobSummaries(value); return *this;}
    inline ListModelInvocationJobsResult& WithInvocationJobSummaries(Aws::Vector<ModelInvocationJobSummary>&& value) { SetInvocationJobSummaries(std::move(value)); return *this;}
    inline ListModelInvocationJobsResult& AddInvocationJobSummaries(const ModelInvocationJobSummary& value) { m_invocationJobSummaries.push_back(value); return *this; }
    inline ListModelInvocationJobsResult& AddInvocationJobSummaries(ModelInvocationJobSummary&& value) { m_invocationJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListModelInvocationJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListModelInvocationJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListModelInvocationJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ModelInvocationJobSummary> m_invocationJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
